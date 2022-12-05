/********************************************************************************
** Form generated from reading UI file 'spravka.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRAVKA_H
#define UI_SPRAVKA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spravka
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *picture_label;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Spravka)
    {
        if (Spravka->objectName().isEmpty())
            Spravka->setObjectName(QString::fromUtf8("Spravka"));
        Spravka->resize(650, 450);
        actionquit = new QAction(Spravka);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        centralwidget = new QWidget(Spravka);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 70, 581, 301));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 299));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 581, 301));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 30, 171, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        picture_label = new QLabel(centralwidget);
        picture_label->setObjectName(QString::fromUtf8("picture_label"));
        picture_label->setGeometry(QRect(0, 0, 641, 391));
        Spravka->setCentralWidget(centralwidget);
        picture_label->raise();
        scrollArea->raise();
        label->raise();
        menubar = new QMenuBar(Spravka);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Spravka->setMenuBar(menubar);
        statusbar = new QStatusBar(Spravka);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Spravka->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionquit);

        retranslateUi(Spravka);

        QMetaObject::connectSlotsByName(Spravka);
    } // setupUi

    void retranslateUi(QMainWindow *Spravka)
    {
        Spravka->setWindowTitle(QCoreApplication::translate("Spravka", "MainWindow", nullptr));
        actionquit->setText(QCoreApplication::translate("Spravka", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Spravka", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Times New Roman','serif'; font-size:14pt; color:#232222;\">\320\222\320\275\320\260\321\207\320\260\320\273\320\265 \320\270\320\263\321\200\320\276\320\272 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\321\202 \320\264\320\262\320\265 \320\272\320\260\321\200\321\202\321\213 \302\253\320\262\302\240\320\276\321\202\320\272\321\200\321\213\321\202\321\203\321\216\302\273, \321\201\321\203\320\274\320\274\320\260 \320\276\321\207\320"
                        "\272\320\276\320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\277\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202 \321\200\320\265\321\210\320\270\321\202\321\214, \320\275\321\203\320\266\320\275\321\213 \320\265\320\274\321\203 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\272\320\260\321\200\321\202\321\213 \320\270\320\273\320\270\302\240\320\275\320\265\321\202. \320\246\320\265\320\273\321\214 \320\270\320\263\321\200\321\213\302\240\342\200\224 \320\275\320\260\320\261\321\200\320\260\321\202\321\214 21 \320\276\321\207\320\272\320\276 \320\270\320\273\320\270 \320\261\320\273\320\270\320\267\320\272\321\203\321\216 \320\272\302\240\321\215\321\202\320\276\320\274\321\203 \321\201\321\203\320\274\320\274\321\203. \320\225\321\201\320\273\320\270 \320\270\320\263\321\200\320\276\320\272 \320\275\320\260\320\261\320\270\321\200\320\260\320\265\321\202 \321\201\321\203\320\274\320\274\321\203 \320\276"
                        "\321\207\320\272\320\276\320\262, \320\277\321\200\320\265\320\262\321\213\321\210\320\260\321\216\321\211\321\203\321\216 21, \321\202\320\276\302\240\320\265\320\263\320\276 \321\201\321\202\320\260\320\262\320\272\320\260 \320\277\321\200\320\276\320\270\320\263\321\200\321\213\320\262\320\260\320\265\321\202. \320\225\321\201\320\273\320\270 \321\201\321\203\320\274\320\274\320\260 \320\276\321\207\320\272\320\276\320\262 \320\275\320\260\302\240\320\272\320\260\321\200\321\202\320\260\321\205 \320\264\320\270\320\273\320\265\321\200\320\260 \320\261\320\276\320\273\321\214\321\210\320\265, \321\207\320\265\320\274 21, \321\202\320\276\302\240\320\262\321\201\320\265 \321\201\321\202\320\260\320\262\320\272\320\270, \320\276\321\201\321\202\320\260\320\262\321\210\320\270\320\265\321\201\321\217 \320\262\302\240\320\270\320\263\321\200\320\265, \320\262\321\213\320\270\320\263\321\200\321\213\320\262\320\260\321\216\321\202.</span><span style=\" font-size:14pt;\"> </span></p>\n"
"<p style=\" margin-top:12p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:14pt; color:#232222;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:14pt; color:#232222;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman','serif'; font-size:14pt; color:#232222;\">\320\230\320\263\321\200\320\276\320\272\320\270, \320\275\320\260\320\261\321\200\320\260\320\262\321\210\320\270\320\265 \321\201\321\203\320\274\320\274\321\203 \320\276\321\207\320\272\320\276\320\262 \320\261\320\276\320\273\321\214\321\210\321\203\321\216, \321\207\320\265\320\274 \320\264\320\270\320\273\320\265\321\200, \320\262\321\213\320\270\320\263\321\200\321\213\320\262\320\260\321\216\321\202, \320\270\321\205\302\240\321\201\321\202\320\260\320\262\320\272\320\270 \320\276\320\277\320\273\320\260\321\207\320\270\320\262\320\260\321\216\321\202\321\201\321\217 1:1.</"
                        "span><span style=\" font-size:14pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:14pt; color:#232222;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:14pt; color:#232222;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman','serif'; font-size:14pt; color:#232222;\">\320\230\320\263\321\200\320\276\320\272\320\270, \320\275\320\260\320\261\321\200\320\260\320\262\321\210\320\270\320\265 \321\201\321\203\320\274\320\274\321\203 \320\276\321\207\320\272\320\276\320\262 \320\274\320\265\320\275\321\214\321\210\321\203\321\216, \321\207\320\265\320\274 \320\264\320\270\320\273\320\265\321\200, \320\277\321\200\320\276\320\270\320\263\321\200\321\213\320\262\320\260\321\216\321\202.</span><span style=\" font-size:14pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Times New Roman','serif'; font-size:14pt; color:#232222;\">\320\225\321\201\320\273\320\270 \321\201\321\203\320\274\320\274\320\260 \320\276\321\207\320\272\320\276\320\262 \320\270\320\263\321\200\320\276\320\272\320\260 \321\200\320\260\320\262\320\275\320\260 \321\201\321\203\320\274\320\274\320\265 \320\276\321\207\320\272\320\276\320\262 \320\264\320\270\320\273\320\265\321\200\320\260, \321\202\320\276\302\240\320\276\320\261\321\212\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \302\253\320\275\320\270\321\207\321\214\321\217\302\273 \320\270\320\273\320\270 Stay: \321\201\321\202\320\260\320\262\320\272\320\260 \320\270\320\263\321\200\320\276\320\272\320\260 \320\275\320\265\302\240\320\262\321\213\320\270\320\263\321\200\321\213\320\262\320\260\320\265\321\202 \320\270\302\240\320\275\320\265\302\240\320\277\321\200\320\276\320\270\320\263"
                        "\321\200\321\213\320\262\320\260\320\265\321\202.</span><span style=\" font-size:14pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Times New Roman','serif'; font-size:14pt; color:#232222;\">\320\224\320\270\320\273\320\265\321\200 \320\275\320\260\320\261\320\270\321\200\320\260\320\265\321\202 \320\272\320\260\321\200\321\202\321\213 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\274, \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 \320\276\320\275\302\240\320\276\320\261\321\217\320\267\320\260\320\275 \320\261\321\200\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203, \320\265\321\201\320\273\320\270 \321\203\302\240\320\275\320\265\320\263\320\276 16 \320\276\321\207\320\272\320\276\320\262 \320\270\320\273\320\270 \320\274\320\265\320\275\321\214\321\210\320\265, \320\270\302\240\320\276\321\201\321\202\320\260"
                        "\320\275\320\276\320\262\320\270\321\202\321\214\321\201\321\217, \320\265\321\201\320\273\320\270 \321\201\321\203\320\274\320\274\320\260 \320\276\321\207\320\272\320\276\320\262 17 \320\270\320\273\320\270 \320\261\320\276\320\273\321\214\321\210\320\265. \320\242\321\203\320\267\321\213 \321\201\321\207\320\270\321\202\320\260\321\216\321\202\321\201\321\217 \320\272\320\260\320\272 1 \320\270\320\273\320\270 \320\272\320\260\320\272 11, \302\253\320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\270\302\273 (\320\262\320\260\320\273\320\265\321\202\321\213, \320\264\320\260\320\274\321\213 \320\270\302\240\320\272\320\276\321\200\320\276\320\273\320\270)\302\240\342\200\224 \320\262\321\201\320\265 \320\277\320\276\302\24010 \320\276\321\207\320\272\320\276\320\262, \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \320\272\320\260\321\200\321\202\321\213 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\202 \321\201\320\262"
                        "\320\276\320\265\320\274\321\203 \320\275\320\276\320\274\320\270\320\275\320\260\320\273\321\203.</span><span style=\" font-size:14pt;\"> </span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Spravka", "BlackJack", nullptr));
        picture_label->setText(QString());
        menu->setTitle(QCoreApplication::translate("Spravka", "\320\236 \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Spravka: public Ui_Spravka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAVKA_H
