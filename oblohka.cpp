#include "oblohka.h"
#include "mainwindow.h"
#include "ui_oblohka.h"

Oblohka::Oblohka(MainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::Oblohka),
    parent(parent)
{
    ui->setupUi(this);
    this->setFixedSize(700,500);
    this->statusBar()->setSizeGripEnabled(false);


    QPixmap z1("../bjmain/pictures/cards/suit2.png"); // путь к обложке 1
    QPixmap z2("../bjmain/pictures/cards/suit3.png"); // путь к обложке 2
    QPixmap z3("../bjmain/pictures/cards/suit.png"); // путь к обложке 3

    ui->obl1->setPixmap(z1);
    ui->obl2->setPixmap(z2);
    ui->obl3->setPixmap(z3);

    QObject::connect(ui->pushforobl1, &QPushButton::clicked,
                     [this, z1]()
    {
        this->parent->oblozhkaPix = z1;
        this->close();
    });
    QObject::connect(ui->pushforobl2, &QPushButton::clicked,
                     [this, z2]()
    {
        this->parent->oblozhkaPix = z2;
        this->close();
    });
    QObject::connect(ui->pushfoobl3, &QPushButton::clicked,
                     [this, z3]()
    {
        this->parent->oblozhkaPix = z3;
        this->close();
    });
}

Oblohka::~Oblohka()
{
    delete ui;
}

void Oblohka::on_pushforobl1_clicked()
{

}

void Oblohka::on_pushforobl2_clicked()
{

}

void Oblohka::on_pushfoobl3_clicked()
{

}
