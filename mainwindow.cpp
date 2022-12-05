#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTextEdit>
#include <fstream>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      oblozhkaPix("../bjmain/pictures/cards/suit.png"),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/images/images/bg.jpg");
       ui->picture_label->setPixmap(pix);
       ui->picture_label->setFixedSize(480,360);
       ui->picture_label->lower();
       QObject::connect(ui->actionquit, &QAction::triggered, this, [=]() {this->close(); });//закрытие черещ about
       this->setFixedSize(480,400);
       this->statusBar()->setSizeGripEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    playwindow = new PlayWindow(this);
    playwindow->show();
    this->hide();
    //login = new Login(this);
    //login->show();
    //this->hide(); // нужно коментить чтобы вообще работало приложение )))))
}


void MainWindow::on_spravka_clicked()
{
    spravka = new Spravka(this);
    spravka->show();
}


void MainWindow::on_obl_button_clicked()
{
    oblohka = new Oblohka(this);
    oblohka->show();
}


void MainWindow::on_pushButton_clicked()
{
    QWidget* recordWiget = new QWidget();
      recordWiget->setAttribute(Qt::WA_DeleteOnClose);
      recordWiget->setFixedSize(100, 100);

      QTextEdit* textRecord = new QTextEdit(recordWiget);
      textRecord->setFixedSize(recordWiget->size());
      textRecord->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

      std::string s;
      std::ifstream recordFile("../bjmain/record.txt");
      while (std::getline(recordFile, s))
      {
        textRecord->setPlainText(textRecord->toPlainText() +  QString::fromStdString(s) + "\n");
      }
      textRecord->setReadOnly(true);

      recordWiget->show();

      hide();

        QObject::connect(recordWiget, &QWidget::destroyed, [this]()
          {this->show(); }
        );
}

