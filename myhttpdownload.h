#ifndef MYHTTPDOWNLOAD_H
#define MYHTTPDOWNLOAD_H

#include <QtWidgets/QWidget>
#include "ui_myhttpdownload.h"
#include <QTime>

class DownLoadManager;
class MyHttpDownload : public QWidget
{
	Q_OBJECT

public:
	MyHttpDownload(QWidget *parent = 0);
	~MyHttpDownload();

private:
	void initWindow();
	QString transformUnit(qint64 bytes , bool isSpeed = false);
	QString transformTime(qint64 seconds);

private slots:
	void onStartDownload();
	void onStopDownload();
	void onCloseDownload();

	void onDownloadProcess(qint64 bytesReceived, qint64 bytesTotal);
	void onReplyFinished(int);

    void on_btnOpen_clicked();

private:
	Ui::MyHttpDownloadClass ui;

	QString m_url;
	DownLoadManager* m_downloadManager;
	uint m_timeInterval;
	qint64 m_currentDownload;
	qint64 m_intervalDownload;
	QTime m_timeRecord;
};

#endif // MYHTTPDOWNLOAD_H
