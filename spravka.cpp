#include "spravka.h"
#include "ui_spravka.h"

Spravka::Spravka(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Spravka)
{
    ui->setupUi(this);
    this->setFixedSize(650,450);
    QPixmap pix(":/images/images/bg2.jpg");
    ui->picture_label->setPixmap(pix);
    //ui->picture_label->setFixedSize(800,500);
    ui->picture_label->setFixedSize(650,450);
    ui->picture_label->lower();
    QObject::connect(ui->actionquit, &QAction::triggered, this, [=]() {this->close(); });//закрытие черещ about
    this->statusBar()->setSizeGripEnabled(false);
}

Spravka::~Spravka()
{
    delete ui;
}
