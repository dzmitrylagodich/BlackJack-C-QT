#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "playwindow.h"
#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
     PlayWindow *playwindow;

private slots:


    void on_vhod_Button_2_clicked();

private:
    Ui::Login *ui;

signals:
   //void signal(QString a);

};

#endif // LOGIN_H

