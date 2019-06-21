/********************************************************************************
** Form generated from reading UI file 'myhttpdownload.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYHTTPDOWNLOAD_H
#define UI_MYHTTPDOWNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyHttpDownloadClass
{
public:
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pButtonStart;
    QPushButton *pButtonClose;
    QPushButton *pButtonStop;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *downloadUrl;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelSpeed;
    QLabel *label_2;
    QLabel *labelRemainTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *labelCurrentDownload;
    QLabel *label_4;
    QLabel *labelFileSize;
    QLabel *lbPic;
    QPlainTextEdit *plainTextEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnOpen;
    QLineEdit *editFile;

    void setupUi(QWidget *MyHttpDownloadClass)
    {
        if (MyHttpDownloadClass->objectName().isEmpty())
            MyHttpDownloadClass->setObjectName(QStringLiteral("MyHttpDownloadClass"));
        MyHttpDownloadClass->resize(684, 359);
        verticalLayoutWidget = new QWidget(MyHttpDownloadClass);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 20, 251, 27));
        horizontalLayout_5 = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pButtonStart = new QPushButton(verticalLayoutWidget);
        pButtonStart->setObjectName(QStringLiteral("pButtonStart"));
        pButtonStart->setMinimumSize(QSize(75, 25));

        horizontalLayout_5->addWidget(pButtonStart);

        pButtonClose = new QPushButton(verticalLayoutWidget);
        pButtonClose->setObjectName(QStringLiteral("pButtonClose"));
        pButtonClose->setMinimumSize(QSize(75, 25));

        horizontalLayout_5->addWidget(pButtonClose);

        pButtonStop = new QPushButton(verticalLayoutWidget);
        pButtonStop->setObjectName(QStringLiteral("pButtonStop"));
        pButtonStop->setMinimumSize(QSize(75, 25));

        horizontalLayout_5->addWidget(pButtonStop);

        layoutWidget = new QWidget(MyHttpDownloadClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 341, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        downloadUrl = new QLineEdit(layoutWidget);
        downloadUrl->setObjectName(QStringLiteral("downloadUrl"));

        horizontalLayout_4->addWidget(downloadUrl);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_8);

        labelStatus = new QLabel(layoutWidget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayout_3->addWidget(labelStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 10));
        progressBar->setStyleSheet(QStringLiteral("color: rgb(255, 58, 117);"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelSpeed = new QLabel(layoutWidget);
        labelSpeed->setObjectName(QStringLiteral("labelSpeed"));

        horizontalLayout->addWidget(labelSpeed);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        labelRemainTime = new QLabel(layoutWidget);
        labelRemainTime->setObjectName(QStringLiteral("labelRemainTime"));

        horizontalLayout->addWidget(labelRemainTime);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        labelCurrentDownload = new QLabel(layoutWidget);
        labelCurrentDownload->setObjectName(QStringLiteral("labelCurrentDownload"));

        horizontalLayout_2->addWidget(labelCurrentDownload);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelFileSize = new QLabel(layoutWidget);
        labelFileSize->setObjectName(QStringLiteral("labelFileSize"));

        horizontalLayout_2->addWidget(labelFileSize);


        verticalLayout_2->addLayout(horizontalLayout_2);

        lbPic = new QLabel(MyHttpDownloadClass);
        lbPic->setObjectName(QStringLiteral("lbPic"));
        lbPic->setGeometry(QRect(20, 10, 70, 50));
        lbPic->setStyleSheet(QStringLiteral("background-image: url(:/Resources/cxk.png);"));
        plainTextEdit = new QPlainTextEdit(MyHttpDownloadClass);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(370, 70, 291, 271));
        horizontalLayoutWidget = new QWidget(MyHttpDownloadClass);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(370, 20, 291, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnOpen = new QPushButton(horizontalLayoutWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_6->addWidget(btnOpen);

        editFile = new QLineEdit(horizontalLayoutWidget);
        editFile->setObjectName(QStringLiteral("editFile"));

        horizontalLayout_6->addWidget(editFile);

        layoutWidget->raise();
        verticalLayoutWidget->raise();
        lbPic->raise();
        plainTextEdit->raise();
        horizontalLayoutWidget->raise();

        retranslateUi(MyHttpDownloadClass);

        QMetaObject::connectSlotsByName(MyHttpDownloadClass);
    } // setupUi

    void retranslateUi(QWidget *MyHttpDownloadClass)
    {
        MyHttpDownloadClass->setWindowTitle(QApplication::translate("MyHttpDownloadClass", "LDSDownload", 0));
        pButtonStart->setText(QApplication::translate("MyHttpDownloadClass", "\345\274\200\345\247\213\344\270\213\350\275\275", 0));
        pButtonClose->setText(QApplication::translate("MyHttpDownloadClass", "\345\205\263\351\227\255\344\270\213\350\275\275", 0));
        pButtonStop->setText(QApplication::translate("MyHttpDownloadClass", "\345\201\234\346\255\242\344\270\213\350\275\275", 0));
        label_9->setText(QApplication::translate("MyHttpDownloadClass", " U R L\357\274\232 ", 0));
        downloadUrl->setText(QApplication::translate("MyHttpDownloadClass", "http://202.115.1.131:8081/IXC056cca2cf4626cd05e7bf15e34a51a63_113.54.153.19/issue/netdisk/yunguanjia/BaiduNetdisk_6.7.3.exe", 0));
        label_8->setText(QApplication::translate("MyHttpDownloadClass", "\344\270\213\350\275\275\347\212\266\346\200\201\357\274\232", 0));
        labelStatus->setText(QApplication::translate("MyHttpDownloadClass", "\346\227\240\344\270\213\350\275\275\344\273\273\345\212\241", 0));
        label->setText(QApplication::translate("MyHttpDownloadClass", "\344\270\213\350\275\275\351\200\237\345\272\246\357\274\232", 0));
        labelSpeed->setText(QApplication::translate("MyHttpDownloadClass", "0 B/S", 0));
        label_2->setText(QApplication::translate("MyHttpDownloadClass", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", 0));
        labelRemainTime->setText(QApplication::translate("MyHttpDownloadClass", "0 S", 0));
        label_5->setText(QApplication::translate("MyHttpDownloadClass", "\345\275\223\345\211\215\344\270\213\350\275\275\345\244\247\345\260\217\357\274\232", 0));
        labelCurrentDownload->setText(QApplication::translate("MyHttpDownloadClass", "0 B", 0));
        label_4->setText(QApplication::translate("MyHttpDownloadClass", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", 0));
        labelFileSize->setText(QApplication::translate("MyHttpDownloadClass", "0 B", 0));
        lbPic->setText(QString());
        btnOpen->setText(QApplication::translate("MyHttpDownloadClass", "\346\211\223\345\274\200\347\233\256\345\275\225", 0));
        editFile->setText(QApplication::translate("MyHttpDownloadClass", "E:/download", 0));
    } // retranslateUi

};

namespace Ui {
    class MyHttpDownloadClass: public Ui_MyHttpDownloadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYHTTPDOWNLOAD_H
