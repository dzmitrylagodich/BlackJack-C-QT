/********************************************************************************
** Form generated from reading UI file 'playwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYWINDOW_H
#define UI_PLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayWindow
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QLabel *background;
    QPushButton *hit;
    QPushButton *stand;
    QPushButton *deal;
    QPushButton *doubleX2;
    QPushButton *split;
    QLabel *Score;
    QLabel *Score2;
    QLabel *bet;
    QLabel *betValue;
    QLabel *endBg;
    QLabel *dScore;
    QLabel *dCard1;
    QLabel *dCard2;
    QLabel *dCard3;
    QLabel *dCard5;
    QLabel *dCard4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *coin5;
    QPushButton *coin20;
    QPushButton *coin50;
    QPushButton *coin100;
    QPushButton *coin500;
    QLabel *link;
    QLabel *money;
    QLabel *pCard1;
    QLabel *pCard2;
    QLabel *pCard3;
    QLabel *pCard4;
    QLabel *pCard5;
    QLabel *pScore;
    QLabel *balance;
    QLabel *bet_bet;
    QLabel *name_label;
    QLabel *link2;
    QLabel *oblfordeck;
    QMenuBar *menubar;
    QMenu *menuabout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PlayWindow)
    {
        if (PlayWindow->objectName().isEmpty())
            PlayWindow->setObjectName(QString::fromUtf8("PlayWindow"));
        PlayWindow->resize(1200, 800);
        actionquit = new QAction(PlayWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        centralwidget = new QWidget(PlayWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1200, 800));
        hit = new QPushButton(centralwidget);
        hit->setObjectName(QString::fromUtf8("hit"));
        hit->setGeometry(QRect(830, 680, 121, 61));
        stand = new QPushButton(centralwidget);
        stand->setObjectName(QString::fromUtf8("stand"));
        stand->setGeometry(QRect(960, 680, 121, 61));
        deal = new QPushButton(centralwidget);
        deal->setObjectName(QString::fromUtf8("deal"));
        deal->setGeometry(QRect(700, 680, 121, 61));
        doubleX2 = new QPushButton(centralwidget);
        doubleX2->setObjectName(QString::fromUtf8("doubleX2"));
        doubleX2->setGeometry(QRect(1000, 600, 191, 61));
        split = new QPushButton(centralwidget);
        split->setObjectName(QString::fromUtf8("split"));
        split->setGeometry(QRect(1000, 520, 191, 61));
        Score = new QLabel(centralwidget);
        Score->setObjectName(QString::fromUtf8("Score"));
        Score->setGeometry(QRect(95, 550, 120, 120));
        Score->setStyleSheet(QString::fromUtf8("font: 24pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        Score2 = new QLabel(centralwidget);
        Score2->setObjectName(QString::fromUtf8("Score2"));
        Score2->setGeometry(QRect(95, 80, 120, 120));
        Score2->setStyleSheet(QString::fromUtf8("font: 24pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        bet = new QLabel(centralwidget);
        bet->setObjectName(QString::fromUtf8("bet"));
        bet->setGeometry(QRect(200, 490, 100, 100));
        betValue = new QLabel(centralwidget);
        betValue->setObjectName(QString::fromUtf8("betValue"));
        betValue->setGeometry(QRect(310, 500, 250, 81));
        betValue->setStyleSheet(QString::fromUtf8("font: 36pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        endBg = new QLabel(centralwidget);
        endBg->setObjectName(QString::fromUtf8("endBg"));
        endBg->setGeometry(QRect(0, 280, 1200, 171));
        endBg->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        dScore = new QLabel(centralwidget);
        dScore->setObjectName(QString::fromUtf8("dScore"));
        dScore->setGeometry(QRect(140, 80, 120, 120));
        dScore->setStyleSheet(QString::fromUtf8("font: 24pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        dCard1 = new QLabel(centralwidget);
        dCard1->setObjectName(QString::fromUtf8("dCard1"));
        dCard1->setGeometry(QRect(500, 150, 80, 113));
        dCard2 = new QLabel(centralwidget);
        dCard2->setObjectName(QString::fromUtf8("dCard2"));
        dCard2->setGeometry(QRect(540, 150, 80, 113));
        dCard3 = new QLabel(centralwidget);
        dCard3->setObjectName(QString::fromUtf8("dCard3"));
        dCard3->setGeometry(QRect(580, 150, 80, 113));
        dCard5 = new QLabel(centralwidget);
        dCard5->setObjectName(QString::fromUtf8("dCard5"));
        dCard5->setGeometry(QRect(660, 150, 80, 113));
        dCard4 = new QLabel(centralwidget);
        dCard4->setObjectName(QString::fromUtf8("dCard4"));
        dCard4->setGeometry(QRect(620, 150, 80, 113));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 630, 651, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        coin5 = new QPushButton(horizontalLayoutWidget);
        coin5->setObjectName(QString::fromUtf8("coin5"));
        coin5->setStyleSheet(QString::fromUtf8("border-radius: 6px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/pictures/coins/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        coin5->setIcon(icon);
        coin5->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(coin5);

        coin20 = new QPushButton(horizontalLayoutWidget);
        coin20->setObjectName(QString::fromUtf8("coin20"));
        coin20->setStyleSheet(QString::fromUtf8("border-radius: 6px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/pictures/coins/20.png"), QSize(), QIcon::Normal, QIcon::Off);
        coin20->setIcon(icon1);
        coin20->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(coin20);

        coin50 = new QPushButton(horizontalLayoutWidget);
        coin50->setObjectName(QString::fromUtf8("coin50"));
        coin50->setStyleSheet(QString::fromUtf8("border-radius: 6px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/pictures/coins/50.png"), QSize(), QIcon::Normal, QIcon::Off);
        coin50->setIcon(icon2);
        coin50->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(coin50);

        coin100 = new QPushButton(horizontalLayoutWidget);
        coin100->setObjectName(QString::fromUtf8("coin100"));
        coin100->setStyleSheet(QString::fromUtf8("border-radius: 6px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/pictures/coins/100.png"), QSize(), QIcon::Normal, QIcon::Off);
        coin100->setIcon(icon3);
        coin100->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(coin100);

        coin500 = new QPushButton(horizontalLayoutWidget);
        coin500->setObjectName(QString::fromUtf8("coin500"));
        coin500->setStyleSheet(QString::fromUtf8("border-radius: 6px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/pictures/coins/500.png"), QSize(), QIcon::Normal, QIcon::Off);
        coin500->setIcon(icon4);
        coin500->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(coin500);

        link = new QLabel(centralwidget);
        link->setObjectName(QString::fromUtf8("link"));
        link->setGeometry(QRect(500, 310, 271, 98));
        link->setStyleSheet(QString::fromUtf8("font: 36pt \"Times New Roman\";\n"
"color: rgb(170, 0, 0);"));
        money = new QLabel(centralwidget);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(1020, 60, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(36);
        money->setFont(font);
        money->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        pCard1 = new QLabel(centralwidget);
        pCard1->setObjectName(QString::fromUtf8("pCard1"));
        pCard1->setGeometry(QRect(500, 500, 80, 113));
        pCard2 = new QLabel(centralwidget);
        pCard2->setObjectName(QString::fromUtf8("pCard2"));
        pCard2->setGeometry(QRect(540, 500, 80, 113));
        pCard3 = new QLabel(centralwidget);
        pCard3->setObjectName(QString::fromUtf8("pCard3"));
        pCard3->setGeometry(QRect(580, 500, 80, 113));
        pCard4 = new QLabel(centralwidget);
        pCard4->setObjectName(QString::fromUtf8("pCard4"));
        pCard4->setGeometry(QRect(620, 500, 80, 113));
        pCard5 = new QLabel(centralwidget);
        pCard5->setObjectName(QString::fromUtf8("pCard5"));
        pCard5->setGeometry(QRect(660, 500, 80, 113));
        pScore = new QLabel(centralwidget);
        pScore->setObjectName(QString::fromUtf8("pScore"));
        pScore->setGeometry(QRect(140, 550, 120, 120));
        pScore->setStyleSheet(QString::fromUtf8("font: 24pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        balance = new QLabel(centralwidget);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(970, 10, 231, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(28);
        balance->setFont(font1);
        balance->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        bet_bet = new QLabel(centralwidget);
        bet_bet->setObjectName(QString::fromUtf8("bet_bet"));
        bet_bet->setGeometry(QRect(920, 140, 100, 100));
        bet_bet->setFont(font1);
        bet_bet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name_label = new QLabel(centralwidget);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(40, 40, 191, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        name_label->setFont(font2);
        name_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        link2 = new QLabel(centralwidget);
        link2->setObjectName(QString::fromUtf8("link2"));
        link2->setGeometry(QRect(490, 160, 251, 111));
        oblfordeck = new QLabel(centralwidget);
        oblfordeck->setObjectName(QString::fromUtf8("oblfordeck"));
        oblfordeck->setGeometry(QRect(10, 160, 80, 113));
        PlayWindow->setCentralWidget(centralwidget);
        background->raise();
        pCard1->raise();
        hit->raise();
        stand->raise();
        deal->raise();
        doubleX2->raise();
        split->raise();
        Score->raise();
        Score2->raise();
        bet->raise();
        betValue->raise();
        dScore->raise();
        dCard1->raise();
        horizontalLayoutWidget->raise();
        money->raise();
        pScore->raise();
        pCard2->raise();
        pCard3->raise();
        pCard4->raise();
        pCard5->raise();
        dCard2->raise();
        dCard3->raise();
        dCard4->raise();
        dCard5->raise();
        endBg->raise();
        link->raise();
        balance->raise();
        bet_bet->raise();
        name_label->raise();
        link2->raise();
        oblfordeck->raise();
        menubar = new QMenuBar(PlayWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        menuabout = new QMenu(menubar);
        menuabout->setObjectName(QString::fromUtf8("menuabout"));
        PlayWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PlayWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PlayWindow->setStatusBar(statusbar);

        menubar->addAction(menuabout->menuAction());
        menuabout->addAction(actionquit);

        retranslateUi(PlayWindow);

        QMetaObject::connectSlotsByName(PlayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlayWindow)
    {
        PlayWindow->setWindowTitle(QCoreApplication::translate("PlayWindow", "MainWindow", nullptr));
        actionquit->setText(QCoreApplication::translate("PlayWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        background->setText(QString());
        hit->setText(QCoreApplication::translate("PlayWindow", "Hit", nullptr));
        stand->setText(QCoreApplication::translate("PlayWindow", "Stand", nullptr));
        deal->setText(QCoreApplication::translate("PlayWindow", "DEAL", nullptr));
        doubleX2->setText(QCoreApplication::translate("PlayWindow", "DoubleX2", nullptr));
        split->setText(QCoreApplication::translate("PlayWindow", "Split", nullptr));
        Score->setText(QString());
        Score2->setText(QString());
        bet->setText(QString());
        betValue->setText(QString());
        endBg->setText(QString());
        dScore->setText(QString());
        dCard1->setText(QString());
        dCard2->setText(QString());
        dCard3->setText(QString());
        dCard5->setText(QString());
        dCard4->setText(QString());
        coin5->setText(QString());
        coin20->setText(QString());
        coin50->setText(QString());
        coin100->setText(QString());
        coin500->setText(QString());
        link->setText(QString());
        money->setText(QCoreApplication::translate("PlayWindow", "1000$", nullptr));
        pCard1->setText(QString());
        pCard2->setText(QString());
        pCard3->setText(QString());
        pCard4->setText(QString());
        pCard5->setText(QString());
        pScore->setText(QString());
        balance->setText(QCoreApplication::translate("PlayWindow", "BALANCE", nullptr));
        bet_bet->setText(QCoreApplication::translate("PlayWindow", "BET", nullptr));
        name_label->setText(QString());
        link2->setText(QString());
        oblfordeck->setText(QString());
        menuabout->setTitle(QCoreApplication::translate("PlayWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayWindow: public Ui_PlayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYWINDOW_H
