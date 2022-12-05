/********************************************************************************
** Form generated from reading UI file 'oblohka.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBLOHKA_H
#define UI_OBLOHKA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Oblohka
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *obl1;
    QLabel *obl2;
    QLabel *obl3;
    QPushButton *pushforobl1;
    QPushButton *pushforobl2;
    QPushButton *pushfoobl3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Oblohka)
    {
        if (Oblohka->objectName().isEmpty())
            Oblohka->setObjectName(QString::fromUtf8("Oblohka"));
        Oblohka->resize(700, 500);
        action = new QAction(Oblohka);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(Oblohka);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        obl1 = new QLabel(centralwidget);
        obl1->setObjectName(QString::fromUtf8("obl1"));
        obl1->setGeometry(QRect(20, 100, 143, 200));
        obl2 = new QLabel(centralwidget);
        obl2->setObjectName(QString::fromUtf8("obl2"));
        obl2->setGeometry(QRect(270, 100, 143, 200));
        obl3 = new QLabel(centralwidget);
        obl3->setObjectName(QString::fromUtf8("obl3"));
        obl3->setGeometry(QRect(530, 100, 143, 200));
        pushforobl1 = new QPushButton(centralwidget);
        pushforobl1->setObjectName(QString::fromUtf8("pushforobl1"));
        pushforobl1->setGeometry(QRect(30, 340, 83, 29));
        pushforobl2 = new QPushButton(centralwidget);
        pushforobl2->setObjectName(QString::fromUtf8("pushforobl2"));
        pushforobl2->setGeometry(QRect(300, 340, 83, 29));
        pushfoobl3 = new QPushButton(centralwidget);
        pushfoobl3->setObjectName(QString::fromUtf8("pushfoobl3"));
        pushfoobl3->setGeometry(QRect(580, 340, 83, 29));
        Oblohka->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Oblohka);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Oblohka->setMenuBar(menubar);
        statusbar = new QStatusBar(Oblohka);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Oblohka->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Oblohka);

        QMetaObject::connectSlotsByName(Oblohka);
    } // setupUi

    void retranslateUi(QMainWindow *Oblohka)
    {
        Oblohka->setWindowTitle(QCoreApplication::translate("Oblohka", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("Oblohka", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        obl1->setText(QString());
        obl2->setText(QString());
        obl3->setText(QString());
        pushforobl1->setText(QCoreApplication::translate("Oblohka", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260 1", nullptr));
        pushforobl2->setText(QCoreApplication::translate("Oblohka", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260 2", nullptr));
        pushfoobl3->setText(QCoreApplication::translate("Oblohka", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260 3", nullptr));
        menu->setTitle(QCoreApplication::translate("Oblohka", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oblohka: public Ui_Oblohka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBLOHKA_H
