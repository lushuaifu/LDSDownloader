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
    QVBoxLayout *verticalLayout;
    QPushButton *pButtonStart;
    QPushButton *pButtonStop;
    QPushButton *pButtonClose;
    QWidget *widget;
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

    void setupUi(QWidget *MyHttpDownloadClass)
    {
        if (MyHttpDownloadClass->objectName().isEmpty())
            MyHttpDownloadClass->setObjectName(QStringLiteral("MyHttpDownloadClass"));
        MyHttpDownloadClass->resize(475, 281);
        verticalLayoutWidget = new QWidget(MyHttpDownloadClass);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(330, 90, 101, 97));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pButtonStart = new QPushButton(verticalLayoutWidget);
        pButtonStart->setObjectName(QStringLiteral("pButtonStart"));
        pButtonStart->setMinimumSize(QSize(75, 25));

        verticalLayout->addWidget(pButtonStart);

        pButtonStop = new QPushButton(verticalLayoutWidget);
        pButtonStop->setObjectName(QStringLiteral("pButtonStop"));
        pButtonStop->setMinimumSize(QSize(75, 25));

        verticalLayout->addWidget(pButtonStop);

        pButtonClose = new QPushButton(verticalLayoutWidget);
        pButtonClose->setObjectName(QStringLiteral("pButtonClose"));
        pButtonClose->setMinimumSize(QSize(75, 25));

        verticalLayout->addWidget(pButtonClose);

        widget = new QWidget(MyHttpDownloadClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 274, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        downloadUrl = new QLineEdit(widget);
        downloadUrl->setObjectName(QStringLiteral("downloadUrl"));

        horizontalLayout_4->addWidget(downloadUrl);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_8);

        labelStatus = new QLabel(widget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayout_3->addWidget(labelStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 10));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelSpeed = new QLabel(widget);
        labelSpeed->setObjectName(QStringLiteral("labelSpeed"));

        horizontalLayout->addWidget(labelSpeed);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        labelRemainTime = new QLabel(widget);
        labelRemainTime->setObjectName(QStringLiteral("labelRemainTime"));

        horizontalLayout->addWidget(labelRemainTime);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        labelCurrentDownload = new QLabel(widget);
        labelCurrentDownload->setObjectName(QStringLiteral("labelCurrentDownload"));

        horizontalLayout_2->addWidget(labelCurrentDownload);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelFileSize = new QLabel(widget);
        labelFileSize->setObjectName(QStringLiteral("labelFileSize"));

        horizontalLayout_2->addWidget(labelFileSize);


        verticalLayout_2->addLayout(horizontalLayout_2);

        progressBar->raise();
        verticalLayoutWidget->raise();
        pButtonStart->raise();

        retranslateUi(MyHttpDownloadClass);

        QMetaObject::connectSlotsByName(MyHttpDownloadClass);
    } // setupUi

    void retranslateUi(QWidget *MyHttpDownloadClass)
    {
        MyHttpDownloadClass->setWindowTitle(QApplication::translate("MyHttpDownloadClass", "MyHttpDownload", 0));
        pButtonStart->setText(QApplication::translate("MyHttpDownloadClass", "start", 0));
        pButtonStop->setText(QApplication::translate("MyHttpDownloadClass", "stop", 0));
        pButtonClose->setText(QApplication::translate("MyHttpDownloadClass", "close", 0));
        label_9->setText(QApplication::translate("MyHttpDownloadClass", "\344\270\213\350\275\275\351\223\276\346\216\245\357\274\232", 0));
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
    } // retranslateUi

};

namespace Ui {
    class MyHttpDownloadClass: public Ui_MyHttpDownloadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYHTTPDOWNLOAD_H
