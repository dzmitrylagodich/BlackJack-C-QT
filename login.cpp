#include "login.h"
#include "ui_login.h"
#include "playwindow.h"

//QString name;

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
       QPixmap pix(":/images/images/bg2.jpg");
       ui->picture_label->setPixmap(pix);
       //ui->picture_label->setFixedSize(800,500);
       ui->picture_label->setFixedSize(600,400);
       ui->picture_label->lower();
       QObject::connect(ui->actionquit, &QAction::triggered, this, [=]() {this->close(); });//закрытие черещ about
       this->setFixedSize(600,400);
       this->statusBar()->setSizeGripEnabled(false);
    //  connect(this, &Login::signal, playwindow, &PlayWindow::slot);
}
Login::~Login()
{
    delete ui;
}

void Login::on_vhod_Button_2_clicked()
{
    //emit signal(ui->name_edit->text());
    //playwindow = new PlayWindow(this);
    playwindow->show();
    this->hide();


 //   name = this->ui->name_edit->text();
    //name=this->ui->name_edit->text();
   // this->ui->name_edit->text();
}



