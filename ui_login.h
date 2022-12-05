/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QLabel *picture_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *name_edit;
    QLabel *label_5;
    QPushButton *vhod_Button_2;
    QMenuBar *menubar;
    QMenu *menuabout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(908, 560);
        actionquit = new QAction(Login);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        picture_label = new QLabel(centralwidget);
        picture_label->setObjectName(QString::fromUtf8("picture_label"));
        picture_label->setGeometry(QRect(0, 0, 480, 360));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(270, 120, 261, 200));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_6);

        name_edit = new QLineEdit(verticalLayoutWidget);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        verticalLayout->addWidget(name_edit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 60, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        vhod_Button_2 = new QPushButton(centralwidget);
        vhod_Button_2->setObjectName(QString::fromUtf8("vhod_Button_2"));
        vhod_Button_2->setGeometry(QRect(350, 340, 83, 29));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 908, 25));
        menuabout = new QMenu(menubar);
        menuabout->setObjectName(QString::fromUtf8("menuabout"));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        menubar->addAction(menuabout->menuAction());
        menuabout->addAction(actionquit);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "MainWindow", nullptr));
        actionquit->setText(QCoreApplication::translate("Login", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        picture_label->setText(QString());
        label_6->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "login", nullptr));
        vhod_Button_2->setText(QCoreApplication::translate("Login", "Login", nullptr));
        menuabout->setTitle(QCoreApplication::translate("Login", "\320\236 \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
