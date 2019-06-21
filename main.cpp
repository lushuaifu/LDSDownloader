#include "myhttpdownload.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QDebug>
#include <QTime>

int main(int argc, char *argv[]){
	QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(codec);

	MyHttpDownload w;
	w.show();
	return a.exec();
}
