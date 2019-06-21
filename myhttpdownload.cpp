#include "myhttpdownload.h"
#include "downloadmanager.h"
#include <QDebug>
#include <QDir>
#include <QFileInfoList>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

#define UNIT_KB	1024			//KB
#define UNIT_MB 1024*1024		//MB
#define UNIT_GB 1024*1024*1024	//GB

#define TIME_INTERVAL 300		//0.3s

MyHttpDownload::MyHttpDownload(QWidget *parent)
	: QWidget(parent)
	, m_downloadManager(NULL)
	, m_url("")
	, m_timeInterval(0)
	, m_currentDownload(0)
	, m_intervalDownload(0)
{
	ui.setupUi(this);
	initWindow();
    QPixmap img("://Resources/cxk.png");
    img.scaled(ui.lbPic->size(),Qt::KeepAspectRatio);
    ui.lbPic->setPixmap(img);
}

MyHttpDownload::~MyHttpDownload(){}

void MyHttpDownload::initWindow(){
	ui.progressBar->setValue(0);
	connect(ui.pButtonStart, SIGNAL(clicked()), this, SLOT(onStartDownload()));
	connect(ui.pButtonStop, SIGNAL(clicked()), this, SLOT(onStopDownload()));
	connect(ui.pButtonClose, SIGNAL(clicked()), this, SLOT(onCloseDownload()));
	ui.progressBar->setStyleSheet("\
				QProgressBar\
				{\
					border-width: 0 10 0 10;\
					border-left: 1px, gray;\
					border-right: 1px, gray;\
					border-image:url(:/Resources/progressbar_back.png);\
				}\
				QProgressBar::chunk\
				{\
					border-width: 0 10 0 10;\
					border-image:url(:/Resources/progressbar.png);\
				}");
}

void MyHttpDownload::onStartDownload(){
    //获取需要下载文件的文件名
    m_url = ui.downloadUrl->text();
    QFileInfo fi=QFileInfo(m_url);
    QString file_name=fi.fileName();
    qDebug()<<"m_url"<<m_url;
    qDebug()<<"file_name"<<file_name;

    QString FolderName = ui.editFile->text();
    QDir dir(FolderName);
    QFileInfoList fList = dir.entryInfoList();
    for(int i=0;i<fList.count();i++){
         QString File_Info = fList.at(i).fileName();
        qDebug()<<i<<File_Info;
         if(File_Info.compare(file_name) == 0){
             QMessageBox box;
             box.setText("文件已存在");
         }
    }

	if (m_downloadManager == NULL)
	{
		m_downloadManager = new DownLoadManager(this);
		connect(m_downloadManager , SIGNAL(signalDownloadProcess(qint64, qint64)), this, SLOT(onDownloadProcess(qint64, qint64)));
		connect(m_downloadManager, SIGNAL(signalReplyFinished(int)), this, SLOT(onReplyFinished(int)));
	}

	QString url = m_downloadManager->getDownloadUrl();
	if (url != m_url)
	{
		m_downloadManager->reset();
	}

    QString saveFileName=FolderName + "/" + file_name;
	m_downloadManager->setDownInto(true);
    if(!FolderName.count()){
        QMessageBox box;
        box.setText("please select a save folder!");
          box.exec();
    }else{
        m_downloadManager->downloadFile(m_url, saveFileName);
    }
	m_timeRecord.start();
	m_timeInterval = 0;
    ui.labelStatus->setText(QStringLiteral("Downloading..."));
}

void MyHttpDownload::onStopDownload()
{
    ui.labelStatus->setText(QStringLiteral("Pause Download!!!"));
	if (m_downloadManager != NULL)
	{
		m_downloadManager->stopDownload();
	}
	ui.labelSpeed->setText("0 KB/S");
	ui.labelRemainTime->setText("0s");
}

// 关闭下载;
void MyHttpDownload::onCloseDownload()
{
	m_downloadManager->closeDownload();
	ui.progressBar->setValue(0);
	ui.labelSpeed->setText("0 KB/S");
	ui.labelRemainTime->setText("0s");
	ui.labelStatus->setText(QStringLiteral("关闭下载"));
	ui.labelCurrentDownload->setText("0 B");
	ui.labelFileSize->setText("0 B");
}

// 更新下载进度;
void MyHttpDownload::onDownloadProcess(qint64 bytesReceived, qint64 bytesTotal)
{
    QString pre = QString("%1").arg(bytesReceived * 100 / bytesTotal)+"%";
    ui.plainTextEdit->appendPlainText("progress:  " + pre);
    //qDebug() << pre;
	// 更新进度条;
	ui.progressBar->setMaximum(bytesTotal);
	ui.progressBar->setValue(bytesReceived);

	m_intervalDownload += bytesReceived - m_currentDownload;
	m_currentDownload = bytesReceived;

	uint timeNow = m_timeRecord.elapsed();
	
	// 超过0.3s更新一次速度;
	if (timeNow - m_timeInterval > TIME_INTERVAL)
	{
		qint64 ispeed = m_intervalDownload * 1000 / (timeNow - m_timeInterval);
		QString strSpeed = transformUnit(ispeed, true);
		ui.labelSpeed->setText(strSpeed);
		// 剩余时间;
		qint64 timeRemain = (bytesTotal - bytesReceived) / ispeed;
		ui.labelRemainTime->setText(transformTime(timeRemain));
		ui.labelCurrentDownload->setText(transformUnit(m_currentDownload));
		ui.labelFileSize->setText(transformUnit(bytesTotal));

		m_intervalDownload = 0;
		m_timeInterval = timeNow;
	}
}

void MyHttpDownload::onReplyFinished(int statusCode)
{
    if (statusCode >= 200 && statusCode < 400)
	{
        ui.plainTextEdit->appendPlainText("Download Failed");
	}
	else
	{
        ui.plainTextEdit->appendPlainText("Download Success");
    }
}

// 转换单位;
QString MyHttpDownload::transformUnit(qint64 bytes , bool isSpeed)
{
	QString strUnit = " B";
	if (bytes <= 0)
	{
		bytes = 0;
	}
	else if (bytes < UNIT_KB)
	{
	}
	else if (bytes < UNIT_MB)
	{
		bytes /= UNIT_KB;
		strUnit = " KB";
	}
	else if (bytes < UNIT_GB)
	{
		bytes /= UNIT_MB;
		strUnit = " MB";
	}
	else if (bytes > UNIT_GB)
	{
		bytes /= UNIT_GB;
		strUnit = " GB";
	}

	if (isSpeed)
	{
		strUnit += "/S";
	}
	return QString("%1%2").arg(bytes).arg(strUnit);
}

QString MyHttpDownload::transformTime(qint64 seconds)
{
	QString strValue;
	QString strSpacing(" ");
	if (seconds <= 0)
	{
		strValue = QString("%1s").arg(0);
	}
	else if (seconds < 60)
	{
		strValue = QString("%1s").arg(seconds);
	}
	else if (seconds < 60 * 60)
	{
		int nMinute = seconds / 60;
		int nSecond = seconds - nMinute * 60;

		strValue = QString("%1m").arg(nMinute);

		if (nSecond > 0)
			strValue += strSpacing + QString("%1s").arg(nSecond);
	}
	else if (seconds < 60 * 60 * 24)
	{
		int nHour = seconds / (60 * 60);
		int nMinute = (seconds - nHour * 60 * 60) / 60;
		int nSecond = seconds - nHour * 60 * 60 - nMinute * 60;

		strValue = QString("%1h").arg(nHour);

		if (nMinute > 0)
			strValue += strSpacing + QString("%1m").arg(nMinute);

		if (nSecond > 0)
			strValue += strSpacing + QString("%1s").arg(nSecond);
	}
	else
	{
		int nDay = seconds / (60 * 60 * 24);
		int nHour = (seconds - nDay * 60 * 60 * 24) / (60 * 60);
		int nMinute = (seconds - nDay * 60 * 60 * 24 - nHour * 60 * 60) / 60;
		int nSecond = seconds - nDay * 60 * 60 * 24 - nHour * 60 * 60 - nMinute * 60;

		strValue = QString("%1d").arg(nDay);

		if (nHour > 0)
			strValue += strSpacing + QString("%1h").arg(nHour);

		if (nMinute > 0)
			strValue += strSpacing + QString("%1m").arg(nMinute);

		if (nSecond > 0)
			strValue += strSpacing + QString("%1s").arg(nSecond);
	}
	return strValue;
}

void MyHttpDownload::on_btnOpen_clicked()
{
    QString curDir=QDir::currentPath();
    QString aDir=QFileDialog::getExistingDirectory(this,"选择一个目录",curDir,QFileDialog::ShowDirsOnly);
    ui.editFile->setText(aDir);
}
