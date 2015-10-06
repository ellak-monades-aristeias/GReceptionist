/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *nk_label_1;
    QLabel *nk_label_2;
    QDateEdit *nk_apo;
    QLabel *nk_label_3;
    QDateEdit *nk_ews;
    QLabel *nk_label_4;
    QLineEdit *nk_atoma;
    QPushButton *nk_eisagwgi_kratisis;
    QLineEdit *nk_onoma;
    QLineEdit *nk_epitheto;
    QLabel *nk_label_9;
    QLabel *nk_label_8;
    QLineEdit *nk_tilefwno;
    QLabel *nk_label_10;
    QTextBrowser *nk_textBrowser;
    QPushButton *nk_euresi_dwmatiou;
    QLabel *nk_label_6;
    QLabel *nk_label_5;
    QLineEdit *nk_arithmos;
    QLabel *nk_label_7;
    QFrame *frame_2;
    QLabel *ed_label_1;
    QLabel *ed_label_2;
    QDateEdit *ed_imerominia;
    QLabel *ed_label_3;
    QLabel *ed_label_5;
    QLabel *ed_label_4;
    QTextBrowser *ed_textBrowser_1;
    QTextBrowser *ed_textBrowser_2;
    QTextBrowser *ed_textBrowser_3;
    QPushButton *ed_anazitisi;
    QFrame *frame_3;
    QLabel *ea_label_1;
    QDateEdit *ea_imeromina;
    QLabel *ea_label_2;
    QLabel *ea_label_3;
    QPushButton *ea_akurwsi_kratisis;
    QTextBrowser *ea_textBrowser;
    QPushButton *ea_anazitisi_kratisis;
    QLineEdit *ea_arithmos_1;
    QLabel *ea_label_4;
    QPushButton *ea_epivevaiwsi_kratisis_1;
    QFrame *frame_4;
    QLabel *ea_label_6;
    QDateEdit *ea_ews;
    QLineEdit *ea_onoma;
    QLabel *ea_label_11;
    QLabel *ea_label_10;
    QLabel *ea_label_12;
    QLabel *ea_label_8;
    QDateEdit *ea_apo;
    QLineEdit *ea_tautotita_2;
    QLineEdit *ea_epitheto;
    QLabel *ea_label_7;
    QPushButton *ea_epivevaiwsi_kratisis_2;
    QLineEdit *ea_arithmos_2;
    QLabel *ea_label_9;
    QLineEdit *ea_tautotita_1;
    QLabel *ea_label_5;
    QFrame *frame_5;
    QLabel *dx_label_1;
    QLineEdit *dx_arithmos;
    QLineEdit *dx_atoma;
    QLabel *dx_label_2;
    QLabel *dx_label_3;
    QPushButton *dx_diagrafi_dwmatiou;
    QPushButton *dx_anazitisi;
    QTextBrowser *dx_textBrowser;
    QPushButton *dx_eisagwgi_dwmatiou;
    QLabel *dx_label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(837, 654);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 351));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        nk_label_1 = new QLabel(frame);
        nk_label_1->setObjectName(QStringLiteral("nk_label_1"));
        nk_label_1->setGeometry(QRect(110, 10, 181, 25));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        nk_label_1->setFont(font);
        nk_label_2 = new QLabel(frame);
        nk_label_2->setObjectName(QStringLiteral("nk_label_2"));
        nk_label_2->setGeometry(QRect(10, 50, 51, 16));
        QFont font1;
        font1.setPointSize(10);
        nk_label_2->setFont(font1);
        nk_apo = new QDateEdit(frame);
        nk_apo->setObjectName(QStringLiteral("nk_apo"));
        nk_apo->setGeometry(QRect(70, 50, 91, 22));
        nk_apo->setCalendarPopup(true);
        nk_apo->setDate(QDate(2015, 1, 1));
        nk_label_3 = new QLabel(frame);
        nk_label_3->setObjectName(QStringLiteral("nk_label_3"));
        nk_label_3->setGeometry(QRect(10, 80, 60, 21));
        nk_label_3->setFont(font1);
        nk_label_3->setFrameShape(QFrame::NoFrame);
        nk_ews = new QDateEdit(frame);
        nk_ews->setObjectName(QStringLiteral("nk_ews"));
        nk_ews->setGeometry(QRect(70, 80, 91, 22));
        nk_ews->setCalendarPopup(true);
        nk_ews->setDate(QDate(2015, 1, 1));
        nk_label_4 = new QLabel(frame);
        nk_label_4->setObjectName(QStringLiteral("nk_label_4"));
        nk_label_4->setGeometry(QRect(10, 110, 141, 21));
        nk_label_4->setFont(font1);
        nk_atoma = new QLineEdit(frame);
        nk_atoma->setObjectName(QStringLiteral("nk_atoma"));
        nk_atoma->setGeometry(QRect(130, 110, 31, 20));
        nk_eisagwgi_kratisis = new QPushButton(frame);
        nk_eisagwgi_kratisis->setObjectName(QStringLiteral("nk_eisagwgi_kratisis"));
        nk_eisagwgi_kratisis->setGeometry(QRect(240, 260, 131, 23));
        nk_onoma = new QLineEdit(frame);
        nk_onoma->setObjectName(QStringLiteral("nk_onoma"));
        nk_onoma->setGeometry(QRect(110, 240, 121, 20));
        nk_epitheto = new QLineEdit(frame);
        nk_epitheto->setObjectName(QStringLiteral("nk_epitheto"));
        nk_epitheto->setGeometry(QRect(110, 270, 121, 20));
        nk_label_9 = new QLabel(frame);
        nk_label_9->setObjectName(QStringLiteral("nk_label_9"));
        nk_label_9->setGeometry(QRect(20, 270, 81, 21));
        nk_label_9->setFont(font1);
        nk_label_8 = new QLabel(frame);
        nk_label_8->setObjectName(QStringLiteral("nk_label_8"));
        nk_label_8->setGeometry(QRect(20, 240, 71, 21));
        nk_label_8->setFont(font1);
        nk_tilefwno = new QLineEdit(frame);
        nk_tilefwno->setObjectName(QStringLiteral("nk_tilefwno"));
        nk_tilefwno->setGeometry(QRect(110, 300, 121, 20));
        nk_label_10 = new QLabel(frame);
        nk_label_10->setObjectName(QStringLiteral("nk_label_10"));
        nk_label_10->setGeometry(QRect(20, 300, 81, 21));
        nk_label_10->setFont(font1);
        nk_textBrowser = new QTextBrowser(frame);
        nk_textBrowser->setObjectName(QStringLiteral("nk_textBrowser"));
        nk_textBrowser->setGeometry(QRect(180, 60, 191, 111));
        nk_euresi_dwmatiou = new QPushButton(frame);
        nk_euresi_dwmatiou->setObjectName(QStringLiteral("nk_euresi_dwmatiou"));
        nk_euresi_dwmatiou->setGeometry(QRect(40, 140, 111, 23));
        nk_label_6 = new QLabel(frame);
        nk_label_6->setObjectName(QStringLiteral("nk_label_6"));
        nk_label_6->setGeometry(QRect(70, 180, 151, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setUnderline(true);
        nk_label_6->setFont(font2);
        nk_label_5 = new QLabel(frame);
        nk_label_5->setObjectName(QStringLiteral("nk_label_5"));
        nk_label_5->setGeometry(QRect(190, 40, 131, 21));
        nk_label_5->setFont(font1);
        nk_arithmos = new QLineEdit(frame);
        nk_arithmos->setObjectName(QStringLiteral("nk_arithmos"));
        nk_arithmos->setGeometry(QRect(180, 210, 51, 20));
        nk_label_7 = new QLabel(frame);
        nk_label_7->setObjectName(QStringLiteral("nk_label_7"));
        nk_label_7->setGeometry(QRect(20, 210, 141, 21));
        nk_label_7->setFont(font1);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 360, 571, 241));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(2);
        ed_label_1 = new QLabel(frame_2);
        ed_label_1->setObjectName(QStringLiteral("ed_label_1"));
        ed_label_1->setGeometry(QRect(10, 10, 201, 25));
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        ed_label_1->setFont(font3);
        ed_label_2 = new QLabel(frame_2);
        ed_label_2->setObjectName(QStringLiteral("ed_label_2"));
        ed_label_2->setGeometry(QRect(240, 10, 101, 20));
        ed_label_2->setFont(font1);
        ed_imerominia = new QDateEdit(frame_2);
        ed_imerominia->setObjectName(QStringLiteral("ed_imerominia"));
        ed_imerominia->setGeometry(QRect(350, 10, 71, 22));
        ed_imerominia->setCalendarPopup(true);
        ed_imerominia->setDate(QDate(2015, 1, 1));
        ed_label_3 = new QLabel(frame_2);
        ed_label_3->setObjectName(QStringLiteral("ed_label_3"));
        ed_label_3->setGeometry(QRect(50, 40, 101, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        ed_label_3->setFont(font4);
        ed_label_5 = new QLabel(frame_2);
        ed_label_5->setObjectName(QStringLiteral("ed_label_5"));
        ed_label_5->setGeometry(QRect(430, 40, 81, 21));
        ed_label_5->setFont(font4);
        ed_label_4 = new QLabel(frame_2);
        ed_label_4->setObjectName(QStringLiteral("ed_label_4"));
        ed_label_4->setGeometry(QRect(250, 40, 81, 21));
        ed_label_4->setFont(font4);
        ed_textBrowser_1 = new QTextBrowser(frame_2);
        ed_textBrowser_1->setObjectName(QStringLiteral("ed_textBrowser_1"));
        ed_textBrowser_1->setGeometry(QRect(10, 60, 181, 171));
        ed_textBrowser_2 = new QTextBrowser(frame_2);
        ed_textBrowser_2->setObjectName(QStringLiteral("ed_textBrowser_2"));
        ed_textBrowser_2->setGeometry(QRect(200, 60, 181, 171));
        ed_textBrowser_3 = new QTextBrowser(frame_2);
        ed_textBrowser_3->setObjectName(QStringLiteral("ed_textBrowser_3"));
        ed_textBrowser_3->setGeometry(QRect(390, 60, 171, 171));
        ed_anazitisi = new QPushButton(frame_2);
        ed_anazitisi->setObjectName(QStringLiteral("ed_anazitisi"));
        ed_anazitisi->setGeometry(QRect(460, 10, 91, 23));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(390, 10, 441, 351));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(1);
        ea_label_1 = new QLabel(frame_3);
        ea_label_1->setObjectName(QStringLiteral("ea_label_1"));
        ea_label_1->setGeometry(QRect(40, 10, 341, 25));
        QFont font5;
        font5.setPointSize(14);
        font5.setUnderline(true);
        ea_label_1->setFont(font5);
        ea_imeromina = new QDateEdit(frame_3);
        ea_imeromina->setObjectName(QStringLiteral("ea_imeromina"));
        ea_imeromina->setGeometry(QRect(160, 40, 101, 22));
        ea_imeromina->setCalendarPopup(true);
        ea_imeromina->setDate(QDate(2015, 1, 1));
        ea_label_2 = new QLabel(frame_3);
        ea_label_2->setObjectName(QStringLiteral("ea_label_2"));
        ea_label_2->setGeometry(QRect(40, 40, 101, 20));
        ea_label_2->setFont(font1);
        ea_label_3 = new QLabel(frame_3);
        ea_label_3->setObjectName(QStringLiteral("ea_label_3"));
        ea_label_3->setGeometry(QRect(20, 60, 71, 21));
        ea_label_3->setFont(font1);
        ea_akurwsi_kratisis = new QPushButton(frame_3);
        ea_akurwsi_kratisis->setObjectName(QStringLiteral("ea_akurwsi_kratisis"));
        ea_akurwsi_kratisis->setGeometry(QRect(250, 190, 151, 23));
        ea_textBrowser = new QTextBrowser(frame_3);
        ea_textBrowser->setObjectName(QStringLiteral("ea_textBrowser"));
        ea_textBrowser->setGeometry(QRect(10, 80, 411, 71));
        ea_anazitisi_kratisis = new QPushButton(frame_3);
        ea_anazitisi_kratisis->setObjectName(QStringLiteral("ea_anazitisi_kratisis"));
        ea_anazitisi_kratisis->setGeometry(QRect(300, 40, 91, 23));
        ea_arithmos_1 = new QLineEdit(frame_3);
        ea_arithmos_1->setObjectName(QStringLiteral("ea_arithmos_1"));
        ea_arithmos_1->setGeometry(QRect(160, 160, 61, 20));
        ea_label_4 = new QLabel(frame_3);
        ea_label_4->setObjectName(QStringLiteral("ea_label_4"));
        ea_label_4->setGeometry(QRect(20, 160, 141, 21));
        ea_label_4->setFont(font1);
        ea_epivevaiwsi_kratisis_1 = new QPushButton(frame_3);
        ea_epivevaiwsi_kratisis_1->setObjectName(QStringLiteral("ea_epivevaiwsi_kratisis_1"));
        ea_epivevaiwsi_kratisis_1->setGeometry(QRect(250, 160, 151, 23));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 220, 441, 131));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Raised);
        ea_label_6 = new QLabel(frame_4);
        ea_label_6->setObjectName(QStringLiteral("ea_label_6"));
        ea_label_6->setGeometry(QRect(10, 0, 241, 31));
        ea_label_6->setFont(font3);
        ea_ews = new QDateEdit(frame_4);
        ea_ews->setObjectName(QStringLiteral("ea_ews"));
        ea_ews->setGeometry(QRect(310, 70, 111, 22));
        ea_ews->setCalendarPopup(true);
        ea_ews->setDate(QDate(2015, 1, 1));
        ea_onoma = new QLineEdit(frame_4);
        ea_onoma->setObjectName(QStringLiteral("ea_onoma"));
        ea_onoma->setGeometry(QRect(90, 40, 131, 20));
        ea_label_11 = new QLabel(frame_4);
        ea_label_11->setObjectName(QStringLiteral("ea_label_11"));
        ea_label_11->setGeometry(QRect(250, 40, 51, 16));
        ea_label_11->setFont(font1);
        ea_label_10 = new QLabel(frame_4);
        ea_label_10->setObjectName(QStringLiteral("ea_label_10"));
        ea_label_10->setGeometry(QRect(250, 10, 81, 21));
        ea_label_10->setFont(font1);
        ea_label_12 = new QLabel(frame_4);
        ea_label_12->setObjectName(QStringLiteral("ea_label_12"));
        ea_label_12->setGeometry(QRect(250, 70, 60, 21));
        ea_label_12->setFont(font1);
        ea_label_12->setFrameShape(QFrame::NoFrame);
        ea_label_8 = new QLabel(frame_4);
        ea_label_8->setObjectName(QStringLiteral("ea_label_8"));
        ea_label_8->setGeometry(QRect(10, 70, 81, 21));
        ea_label_8->setFont(font1);
        ea_apo = new QDateEdit(frame_4);
        ea_apo->setObjectName(QStringLiteral("ea_apo"));
        ea_apo->setGeometry(QRect(310, 40, 111, 22));
        ea_apo->setCalendarPopup(true);
        ea_apo->setDate(QDate(2015, 1, 1));
        ea_tautotita_2 = new QLineEdit(frame_4);
        ea_tautotita_2->setObjectName(QStringLiteral("ea_tautotita_2"));
        ea_tautotita_2->setGeometry(QRect(310, 10, 111, 20));
        ea_epitheto = new QLineEdit(frame_4);
        ea_epitheto->setObjectName(QStringLiteral("ea_epitheto"));
        ea_epitheto->setGeometry(QRect(90, 70, 131, 20));
        ea_label_7 = new QLabel(frame_4);
        ea_label_7->setObjectName(QStringLiteral("ea_label_7"));
        ea_label_7->setGeometry(QRect(10, 40, 71, 21));
        ea_label_7->setFont(font1);
        ea_epivevaiwsi_kratisis_2 = new QPushButton(frame_4);
        ea_epivevaiwsi_kratisis_2->setObjectName(QStringLiteral("ea_epivevaiwsi_kratisis_2"));
        ea_epivevaiwsi_kratisis_2->setGeometry(QRect(310, 100, 101, 23));
        ea_arithmos_2 = new QLineEdit(frame_4);
        ea_arithmos_2->setObjectName(QStringLiteral("ea_arithmos_2"));
        ea_arithmos_2->setGeometry(QRect(150, 100, 71, 20));
        ea_label_9 = new QLabel(frame_4);
        ea_label_9->setObjectName(QStringLiteral("ea_label_9"));
        ea_label_9->setGeometry(QRect(10, 100, 141, 21));
        ea_label_9->setFont(font1);
        ea_tautotita_1 = new QLineEdit(frame_3);
        ea_tautotita_1->setObjectName(QStringLiteral("ea_tautotita_1"));
        ea_tautotita_1->setGeometry(QRect(100, 190, 121, 20));
        ea_label_5 = new QLabel(frame_3);
        ea_label_5->setObjectName(QStringLiteral("ea_label_5"));
        ea_label_5->setGeometry(QRect(20, 190, 81, 21));
        ea_label_5->setFont(font1);
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(580, 360, 251, 241));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        dx_label_1 = new QLabel(frame_5);
        dx_label_1->setObjectName(QStringLiteral("dx_label_1"));
        dx_label_1->setGeometry(QRect(20, 0, 201, 25));
        dx_label_1->setFont(font3);
        dx_arithmos = new QLineEdit(frame_5);
        dx_arithmos->setObjectName(QStringLiteral("dx_arithmos"));
        dx_arithmos->setGeometry(QRect(170, 140, 51, 20));
        dx_atoma = new QLineEdit(frame_5);
        dx_atoma->setObjectName(QStringLiteral("dx_atoma"));
        dx_atoma->setGeometry(QRect(170, 170, 51, 20));
        dx_label_2 = new QLabel(frame_5);
        dx_label_2->setObjectName(QStringLiteral("dx_label_2"));
        dx_label_2->setGeometry(QRect(20, 140, 141, 21));
        dx_label_2->setFont(font1);
        dx_label_3 = new QLabel(frame_5);
        dx_label_3->setObjectName(QStringLiteral("dx_label_3"));
        dx_label_3->setGeometry(QRect(20, 170, 141, 21));
        dx_label_3->setFont(font1);
        dx_diagrafi_dwmatiou = new QPushButton(frame_5);
        dx_diagrafi_dwmatiou->setObjectName(QStringLiteral("dx_diagrafi_dwmatiou"));
        dx_diagrafi_dwmatiou->setGeometry(QRect(150, 200, 81, 23));
        dx_anazitisi = new QPushButton(frame_5);
        dx_anazitisi->setObjectName(QStringLiteral("dx_anazitisi"));
        dx_anazitisi->setGeometry(QRect(10, 70, 71, 23));
        dx_textBrowser = new QTextBrowser(frame_5);
        dx_textBrowser->setObjectName(QStringLiteral("dx_textBrowser"));
        dx_textBrowser->setGeometry(QRect(90, 30, 141, 101));
        dx_eisagwgi_dwmatiou = new QPushButton(frame_5);
        dx_eisagwgi_dwmatiou->setObjectName(QStringLiteral("dx_eisagwgi_dwmatiou"));
        dx_eisagwgi_dwmatiou->setGeometry(QRect(10, 200, 91, 23));
        dx_label_4 = new QLabel(frame_5);
        dx_label_4->setObjectName(QStringLiteral("dx_label_4"));
        dx_label_4->setGeometry(QRect(120, 200, 31, 21));
        QFont font6;
        font6.setPointSize(12);
        dx_label_4->setFont(font6);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        nk_label_1->setText(QApplication::translate("MainWindow", "   \316\235\316\225\316\221 \316\232\316\241\316\221\316\244\316\227\316\243\316\227   ", 0));
        nk_label_2->setText(QApplication::translate("MainWindow", "\316\221\316\240\316\237  :  ", 0));
        nk_label_3->setText(QApplication::translate("MainWindow", "\316\225\316\251\316\243   :  ", 0));
        nk_label_4->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\221\316\244\316\237\316\234\316\251\316\235  :", 0));
        nk_eisagwgi_kratisis->setText(QApplication::translate("MainWindow", "\316\225\316\231\316\243\316\221\316\223\316\251\316\223\316\227 \316\232\316\241\316\221\316\244\316\227\316\243\316\227\316\243", 0));
        nk_label_9->setText(QApplication::translate("MainWindow", "\316\225\316\240\316\251\316\235\316\245\316\234\316\237  :", 0));
        nk_label_8->setText(QApplication::translate("MainWindow", "\316\237\316\235\316\237\316\234\316\221  :", 0));
        nk_label_10->setText(QApplication::translate("MainWindow", "\316\244\316\227\316\233\316\225\316\246\316\251\316\235\316\237  :", 0));
        nk_euresi_dwmatiou->setText(QApplication::translate("MainWindow", "\316\225\316\245\316\241\316\225\316\243\316\227 \316\224\316\251\316\234\316\221\316\244\316\231\316\237\316\245", 0));
        nk_label_6->setText(QApplication::translate("MainWindow", "\316\243\316\244\316\237\316\231\316\247\316\225\316\231\316\221 \316\232\316\241\316\221\316\244\316\227\316\243\316\227\316\243", 0));
        nk_label_5->setText(QApplication::translate("MainWindow", "\316\224\316\231\316\221\316\230\316\225\316\243\316\231\316\234\316\221 \316\224\316\251\316\234\316\221\316\244\316\231\316\221:", 0));
        nk_label_7->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\224\316\251\316\234\316\221\316\244\316\231\316\237\316\245  :", 0));
        ed_label_1->setText(QApplication::translate("MainWindow", "   \316\225\316\240\316\237\316\240\316\244\316\225\316\231\316\221 \316\224\316\251\316\234\316\221\316\244\316\231\316\251\316\235  ", 0));
        ed_label_2->setText(QApplication::translate("MainWindow", "\316\227\316\234\316\225\316\241\316\237\316\234\316\227\316\235\316\231\316\221   :", 0));
        ed_label_3->setText(QApplication::translate("MainWindow", "\316\232\316\221\316\244\316\225\316\233\316\225\316\231\316\234\316\225\316\235\316\221", 0));
        ed_label_5->setText(QApplication::translate("MainWindow", "\316\224\316\231\316\221\316\230\316\225\316\243\316\231\316\234\316\221", 0));
        ed_label_4->setText(QApplication::translate("MainWindow", "\316\232\316\241\316\221\316\244\316\227\316\234\316\225\316\235\316\221", 0));
        ed_anazitisi->setText(QApplication::translate("MainWindow", "\316\221\316\235\316\221\316\226\316\221\316\244\316\227\316\243\316\227", 0));
        ea_label_1->setText(QApplication::translate("MainWindow", "   \316\225\316\240\316\231\316\222\316\225\316\222\316\221\316\231\316\251\316\243\316\227-\316\221\316\232\316\245\316\241\316\251\316\243\316\227 \316\232\316\241\316\221\316\244\316\227\316\243\316\227\316\243   ", 0));
        ea_label_2->setText(QApplication::translate("MainWindow", "\316\227\316\234\316\225\316\241\316\237\316\234\316\227\316\235\316\231\316\221   :", 0));
        ea_label_3->setText(QApplication::translate("MainWindow", "\316\232\316\241\316\221\316\244\316\227\316\243\316\225\316\231\316\243:", 0));
        ea_akurwsi_kratisis->setText(QApplication::translate("MainWindow", "\316\221\316\232\316\245\316\241\316\251\316\243\316\227 \316\232\316\241\316\221\316\244\316\227\316\243\316\227\316\243", 0));
        ea_anazitisi_kratisis->setText(QApplication::translate("MainWindow", "\316\221\316\235\316\221\316\226\316\221\316\244\316\227\316\243\316\227", 0));
        ea_label_4->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\224\316\251\316\234\316\221\316\244\316\231\316\237\316\245  :", 0));
        ea_epivevaiwsi_kratisis_1->setText(QApplication::translate("MainWindow", "CHECK-IN", 0));
        ea_label_6->setText(QApplication::translate("MainWindow", "   CHECK-IN \316\247\316\251\316\241\316\231\316\243 \316\232\316\241\316\221\316\244\316\227\316\243\316\227   ", 0));
        ea_label_11->setText(QApplication::translate("MainWindow", "\316\221\316\240\316\237  :  ", 0));
        ea_label_10->setText(QApplication::translate("MainWindow", "\316\221.\316\224.\316\244.  :", 0));
        ea_label_12->setText(QApplication::translate("MainWindow", "\316\225\316\251\316\243   :  ", 0));
        ea_label_8->setText(QApplication::translate("MainWindow", "\316\225\316\240\316\251\316\235\316\245\316\234\316\237  :", 0));
        ea_label_7->setText(QApplication::translate("MainWindow", "\316\237\316\235\316\237\316\234\316\221  :", 0));
        ea_epivevaiwsi_kratisis_2->setText(QApplication::translate("MainWindow", "CHECK-IN", 0));
        ea_label_9->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\224\316\251\316\234\316\221\316\244\316\231\316\237\316\245  :", 0));
        ea_label_5->setText(QApplication::translate("MainWindow", "\316\221.\316\224.\316\244.  :", 0));
        dx_label_1->setText(QApplication::translate("MainWindow", "   \316\224\316\231\316\221\316\247\316\225\316\231\316\241\316\231\316\243\316\227 \316\224\316\251\316\234\316\221\316\244\316\231\316\251\316\235  ", 0));
        dx_label_2->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\224\316\251\316\234\316\221\316\244\316\231\316\237\316\245  :", 0));
        dx_label_3->setText(QApplication::translate("MainWindow", "\316\221\316\241\316\231\316\230\316\234\316\237\316\243 \316\221\316\244\316\237\316\234\316\251\316\235  :", 0));
        dx_diagrafi_dwmatiou->setText(QApplication::translate("MainWindow", "\316\224\316\231\316\221\316\223\316\241\316\221\316\246\316\227", 0));
        dx_anazitisi->setText(QApplication::translate("MainWindow", "\316\221\316\235\316\221\316\226\316\221\316\244\316\227\316\243\316\227", 0));
        dx_eisagwgi_dwmatiou->setText(QApplication::translate("MainWindow", "\316\225\316\231\316\243\316\221\316\223\316\251\316\223\316\227 \316\235\316\225\316\237\316\245", 0));
        dx_label_4->setText(QApplication::translate("MainWindow", "\316\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
