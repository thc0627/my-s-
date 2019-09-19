/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_pre;
    QPushButton *pushButton_next;
    QPushButton *pushButton_mute;
    QSlider *time;
    QLabel *label_fulltime;
    QLabel *label_currenttime;
    QSlider *volume;
    QLabel *label_volume;
    QPushButton *pushButton_back;
    QPushButton *pushButton_front;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLabel *label_percent;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1033, 719);
        MainWindow->setSizeIncrement(QSize(800, 600));
        MainWindow->setBaseSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(239, 41, 41, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 50, 256, 581));
        listWidget->setSizeIncrement(QSize(200, 600));
        listWidget->setBaseSize(QSize(200, 800));
        QPalette palette1;
        QBrush brush2(QColor(252, 233, 79, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        listWidget->setPalette(palette1);
        listWidget->setFrameShape(QFrame::NoFrame);
        pushButton_pause = new QPushButton(centralWidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(490, 510, 50, 50));
        pushButton_pre = new QPushButton(centralWidget);
        pushButton_pre->setObjectName(QStringLiteral("pushButton_pre"));
        pushButton_pre->setGeometry(QRect(430, 510, 50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Mplayer\347\205\247\347\211\207/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pre->setIcon(icon);
        pushButton_pre->setIconSize(QSize(50, 50));
        pushButton_next = new QPushButton(centralWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(550, 510, 50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Mplayer\347\205\247\347\211\207/front.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_next->setIcon(icon1);
        pushButton_next->setIconSize(QSize(50, 50));
        pushButton_mute = new QPushButton(centralWidget);
        pushButton_mute->setObjectName(QStringLiteral("pushButton_mute"));
        pushButton_mute->setGeometry(QRect(730, 520, 30, 30));
        time = new QSlider(centralWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(360, 470, 331, 20));
        time->setCursor(QCursor(Qt::OpenHandCursor));
        time->setOrientation(Qt::Horizontal);
        label_fulltime = new QLabel(centralWidget);
        label_fulltime->setObjectName(QStringLiteral("label_fulltime"));
        label_fulltime->setGeometry(QRect(740, 470, 67, 17));
        QPalette palette2;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush4(QColor(255, 147, 147, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(247, 94, 94, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(119, 20, 20, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(159, 27, 27, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(247, 148, 148, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        label_fulltime->setPalette(palette2);
        label_currenttime = new QLabel(centralWidget);
        label_currenttime->setObjectName(QStringLiteral("label_currenttime"));
        label_currenttime->setGeometry(QRect(310, 470, 67, 17));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush11(QColor(204, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        QBrush brush12(QColor(255, 51, 51, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush13(QColor(229, 25, 25, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(102, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(136, 0, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush16(QColor(229, 127, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        label_currenttime->setPalette(palette3);
        volume = new QSlider(centralWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setGeometry(QRect(770, 530, 160, 16));
        volume->setCursor(QCursor(Qt::ClosedHandCursor));
        volume->setOrientation(Qt::Horizontal);
        label_volume = new QLabel(centralWidget);
        label_volume->setObjectName(QStringLiteral("label_volume"));
        label_volume->setGeometry(QRect(940, 530, 67, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_volume->setPalette(palette4);
        pushButton_back = new QPushButton(centralWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(370, 510, 50, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Mplayer\347\205\247\347\211\207/backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_back->setIcon(icon2);
        pushButton_back->setIconSize(QSize(50, 50));
        pushButton_front = new QPushButton(centralWidget);
        pushButton_front->setObjectName(QStringLiteral("pushButton_front"));
        pushButton_front->setGeometry(QRect(610, 510, 50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Mplayer\347\205\247\347\211\207/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_front->setIcon(icon3);
        pushButton_front->setIconSize(QSize(50, 50));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 80, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette5);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 510, 50, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Mplayer\347\205\247\347\211\207/exchange.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(50, 50));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 510, 50, 50));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Mplayer\347\205\247\347\211\207/3c.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(60, 60));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 70, 700, 50));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 140, 700, 50));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette6);
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setMouseTracking(true);
        label_3->setFocusPolicy(Qt::NoFocus);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setTextFormat(Qt::AutoText);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 220, 700, 50));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setTextFormat(Qt::AutoText);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 300, 700, 50));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setTextFormat(Qt::AutoText);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(960, 20, 30, 30));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("Mplayer\347\205\247\347\211\207/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(30, 30));
        label_percent = new QLabel(centralWidget);
        label_percent->setObjectName(QStringLiteral("label_percent"));
        label_percent->setGeometry(QRect(700, 470, 67, 17));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label_percent->setPalette(palette7);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1033, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_pause->setText(QString());
        pushButton_pre->setText(QString());
        pushButton_next->setText(QString());
        pushButton_mute->setText(QString());
        label_fulltime->setText(QString());
        label_currenttime->setText(QString());
        label_volume->setText(QString());
        pushButton_back->setText(QString());
        pushButton_front->setText(QString());
        label->setText(QApplication::translate("MainWindow", "  \346\255\214\346\233\262\345\210\227\350\241\250", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_3->setText(QString());
        label_percent->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
