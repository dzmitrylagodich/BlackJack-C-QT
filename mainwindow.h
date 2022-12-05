#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
#include <QMainWindow>
#include <playwindow.h>
#include <spravka.h>
#include <oblohka.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QPixmap oblozhkaPix;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //Login *login;
    PlayWindow *playwindow;
    Spravka *spravka;
    Oblohka *oblohka;

private slots:
    void on_pushButton_2_clicked();

    void on_spravka_clicked();

    void on_obl_button_clicked();

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

