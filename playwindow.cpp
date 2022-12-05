/*
 Рекорды для приложения.
*/

#include "playwindow.h"
#include "mainwindow.h"
#include <ui_playwindow.h>

#include "login.cpp"
//#include "ui_login.h"
//#include "login.h"
#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <QDebug>
#include <QList>
#include <map>
#include <QGraphicsView>
#include <QPixmap>
#include <QPalette>
#include <QPainter>
#include <QTimer>
//#include <QLineEdit>
// для работы с блокнотом
#include <fstream>
#include <sstream>


int betCoin = 0;
int money = 1000;
QString betValue = "";
QString deck[52] = { "c2", "c3", "c4", "c5", "c6", "c7", "c8", "c9", "c10", "cJ", "cQ", "cK", "cA",
                     "d2", "d3", "d4", "d5", "d6", "d7", "d8", "d9", "d10", "dJ", "dQ", "dK", "dA",
                     "h2", "h3", "h4", "h5", "h6", "h7", "h8", "h9", "h10", "hJ", "hQ", "hK", "hA",
                     "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "sJ", "sQ", "sK", "sA"};
int coins[5] = {5,20,50,100,500};
int deskNum = 0;

int plScore = 0;
int dlScore = 0;
int simpleScore = 0;
int simpleScoreResrved = 0;

int numOfCard = 0;

bool firstClick = false;
int plCountA = 0;
int dlCountA = 0;


//-----for spliting-------
//QString hand[2] = {};
//QString firstCardsForSp[4] = {};
//int whichHand = 0;


PlayWindow::PlayWindow(MainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayWindow),
    parent(parent)
{
    ui->setupUi(this);
 //   ui->name_label->setText(name);
    //ui->name_label->setText(name);
    QPixmap pix(":/img/pictures/background/bg.png");
    int w = ui->background->width();
    int h = ui->background->height();
    ui->background->setPixmap(pix.scaled(w,h));
    QObject::connect(ui->actionquit, &QAction::triggered, this, [=]() {this->close(); });//закрытие
    this->statusBar()->setSizeGripEnabled(false);
    this->setFixedSize(1200,800);


    //---------------shuffle-----------------
        srand(time(NULL));

        for (int i = 51; i >= 0; i--)
        {
            int j = rand() % (i + 1);

            QString tmp = deck[j];
            deck[j] = deck[i];
            deck[i] = tmp;
        }
    //-----------------------------------------
        ui->deal->setVisible(false);
        ui->hit->setVisible(false);
        ui->doubleX2->setVisible(false);
        ui->split->setVisible(false);
        ui->stand->setVisible(false);
        ui->endBg->setVisible(false);
        ui->bet_bet->setVisible(false);
    //-----------------------------------------
        ui->coin5->setEnabled(true);
        ui->coin20->setEnabled(true);
        ui->coin50->setEnabled(true);
        ui->coin100->setEnabled(true);
        ui->coin500->setEnabled(true);
    }

    void scoreCounter(int n, QString who = ""){
        int score = 0;
        int countA = 0;
        if (who == "p"){
            score = plScore;
            countA = plCountA;
        }
        if (who == "d"){
            score = dlScore;
            countA = dlCountA;
        }
        //---------------------------------------------------------------------

        if(deck[n] == "c2"||deck[n] == "d2"||deck[n] == "h2"||deck[n] == "s2"){
            score += 2;
        }
        else if(deck[n]== "c3"||deck[n] == "d3"||deck[n] == "h3"||deck[n] == "s3"){
            score += 3;
        }
        else if(deck[n]== "c4"||deck[n] == "d4"||deck[n] == "h4"||deck[n] == "s4"){
            score += 4;
        }
        else if(deck[n]== "c5"||deck[n] == "d5"||deck[n] == "h5"||deck[n] == "s5"){
            score += 5;
        }
        else if(deck[n]== "c6"||deck[n] == "d6"||deck[n] == "h6"||deck[n] == "s6"){
            score += 6;
        }
        else if(deck[n]== "c7"||deck[n] == "d7"||deck[n] == "h7"||deck[n] == "s7"){
            score += 7;
        }
        else if(deck[n]== "c8"||deck[n] == "d8"||deck[n] == "h8"||deck[n] == "s8"){
            score += 8;
        }
        else if(deck[n]== "c9"||deck[n] == "d9"||deck[n] == "h9"||deck[n] == "s9"){
            score += 9;
        }
        else if(deck[n]== "c10"||deck[n] == "d10"||deck[n] == "h10"||deck[n] == "s10"
                        ||deck[n] == "cJ"||deck[n] == "dJ"||deck[n] == "hJ"||deck[n] == "sJ"
                        ||deck[n] == "cQ"||deck[n] == "dQ"||deck[n] == "hQ"||deck[n] == "sQ"
                        ||deck[n] == "cK"||deck[n] == "dK"||deck[n] == "hK"||deck[n] == "sK"){
            score += 10;
        }
        else if(deck[n]== "cA"||deck[n] == "dA"||deck[n] == "hA"||deck[n] == "sA"){
            score += 11;
            countA++;
        }

        //-------------------------------------A----------------------------------------
        if (score>21&&countA>=1){
            countA-=1;
            score -=10;
        }

        if (who == "p"){
            plScore = score;
            plCountA = countA;
        }
        if (who == "d"){
            dlScore = score;
            dlCountA = countA;
        }
        if (who == "") simpleScore = score;
    }

    void PlayWindow::dealer(){
        numOfCard=2;

        ui->hit->setVisible(false);
        ui->doubleX2->setVisible(false);
        ui->stand->setVisible(false);
        //ui->split->setVisible(false);


        QPixmap d1(":/img/pictures/cards/"+deck[2]+".png");
        ui->dCard1->setPixmap(d1);
        ui->dScore->setText(QString::number(dlScore));

        //----------------------Logic------------------------
        if(plScore>21){
            end();
        }else{
            while(dlScore<17){

                QPixmap d1(":/img/pictures/cards/"+deck[deskNum]+".png");

                if(numOfCard == 2){
                    ui->dCard3->setPixmap(d1);
                }else if(numOfCard==3){
                    ui->dCard4->setPixmap(d1);
                }else if(numOfCard==4){
                    ui->dCard5->setPixmap(d1);
                }else if(numOfCard==5){
                   // ui->dCard6->setPixmap(d1);
                }else{
                   // ui->dCard7->setPixmap(d1);
                }

                scoreCounter(deskNum,"d");
                ui->dScore->setText(QString::number(dlScore));

                deskNum++;
                numOfCard++;
            }
            end();
        }

    }

    void PlayWindow::end(){
     // ui->link->setPixmap(z1);
      if(plScore>21){
            ui->link->setText("Dealer wins!");
           // ui->link->setText(":/images/lose.png");
        }else if(dlScore>21){
            money+=betCoin*2;
            ui->link->setText("You win!");
        }else if(plScore==dlScore){
            money+=betCoin;
            ui->link->setText("Push!");
        }else if(plScore>dlScore){
            money+=betCoin*2;
            ui->link->setText("You win!");
        }else{
            ui->link->setText("Dealer wins!");
       //     ui->link->setText(":/images/lose.png");
        }
        ui->endBg->setVisible(true);
        ui->money->setText(QString::number(money).append(" $"));

        QTimer::singleShot(5*1000, this, SLOT(nextGame()));

       // if(money==0){
        //   nextGame();
      //  }
    }

    void PlayWindow::nextGame(){

        betCoin = 0;
        betValue = "";
        deskNum = 0;
        plScore = 0;
        dlScore = 0;
        numOfCard = 0;
        firstClick = false;
        plCountA = 0;
        dlCountA = 0;

        //------------------------------------------------------------------

        srand(time(NULL));
        for (int i = 51; i >= 0; i--)
        {
            int j = rand() % (i + 1);

            QString tmp = deck[j];
            deck[j] = deck[i];
            deck[i] = tmp;
        }
        //------------------------------------------------------------------
       // ui->label->move(-10,600);
       // ui->money->move(790,690);

        ui->endBg->setVisible(false);
        ui->link->setText("");
        ui->pScore->setText("");
        ui->dScore->setText("");
        ui->betValue->setText("");
        //------------------------------------------------------------------
        ui->coin5->setHidden(false);
        ui->coin20->setHidden(false);
        ui->coin50->setHidden(false);
        ui->coin100->setHidden(false);
        ui->coin500->setHidden(false);

        ui->coin5->setEnabled(true);
        ui->coin20->setEnabled(true);
        ui->coin50->setEnabled(true);
        ui->coin100->setEnabled(true);
        ui->coin500->setEnabled(true);

        if (money <500) ui->coin500->setEnabled(false);
        if (money <100) ui->coin100->setEnabled(false);
        if (money <50) ui->coin50->setEnabled(false);
        if (money <20) ui->coin20->setEnabled(false);
        if (money <5) ui->coin5->setEnabled(false);
        //------------------------------------------------------------------

        ui->pCard1->clear();
        ui->pCard2->clear();
        ui->pCard3->clear();
        ui->pCard4->clear();
        ui->pCard5->clear();
      //  ui->pCard6->clear();
        //ui->pCard7->clear();

        ui->dCard1->clear();
        ui->dCard2->clear();
        ui->dCard3->clear();
        ui->dCard4->clear();
        ui->dCard5->clear();
       // ui->dCard6->clear();
       // ui->dCard7->clear();

        ui->bet->clear();
        ui->Score->clear();
        ui->Score2->clear();
    }

    PlayWindow::~PlayWindow()
    {
        delete ui;
    }

    void PlayWindow::on_coin5_clicked()
    {
        coinClick(5);
    }

    void PlayWindow::on_coin20_clicked()
    {
        coinClick(20);
    }

    void PlayWindow::on_coin50_clicked()
    {
        coinClick(50);
    }

    void PlayWindow::on_coin100_clicked()
    {
        coinClick(100);
    }

    void PlayWindow::on_coin500_clicked()
    {
        coinClick(500);
    }

    void PlayWindow::coinClick(int n){

        if (money>=n){
            QPixmap coin(":/img/pictures/coins/"+ QString::number(n) +".png");
            ui->bet->setPixmap(coin.scaled(100,100,Qt::KeepAspectRatio));

            betCoin+=n;
            ui->betValue->setText(QString::number(betCoin).append("$"));

            money-=n;
            ui->money->setText(QString::number(money).append(" $"));

            if (!firstClick){
                firstClick = true;
                ui->deal->setVisible(true);
            }
        }

        if (money <500) ui->coin500->setEnabled(false);
        if (money <100) ui->coin100->setEnabled(false);
        if (money <50) ui->coin50->setEnabled(false);
        if (money <20) ui->coin20->setEnabled(false);
        if (money <5) ui->coin5->setEnabled(false);


    }

    void PlayWindow::on_deal_clicked()
    {
        ui->deal->setVisible(false);
        ui->hit->setVisible(true);
        ui->stand->setVisible(true);
        if(money>=betCoin) ui->doubleX2->setVisible(true);
        //-----------split----------------
        /*scoreCounter(deskNum);
        simpleScoreResrved = simpleScore;
        scoreCounter(deskNum+1);
        if(money>=betCoin && simpleScoreResrved == simpleScore){
            ui->split->setVisible(true);
            hand[0] = deskNum;
            hand[1] = deskNum+1;
        }*/


        ui->coin5->setHidden(true);
        ui->coin20->setHidden(true);
        ui->coin50->setHidden(true);
        ui->coin100->setHidden(true);
        ui->coin500->setHidden(true);


        ui->bet_bet->setVisible(true);

        //ui->label->hide();
        ui->bet->hide();
        ui->betValue->move(1020,150);


        //-------------------------cardsPixmap----------------------------------
        QPixmap p1(":/img/pictures/cards/"+deck[deskNum]+".png");
        QPixmap p2(":/img/pictures/cards/"+deck[deskNum+1]+".png");
        QPixmap d1(parent->oblozhkaPix);
        QPixmap d2(":/img/pictures/cards/"+deck[deskNum+3]+".png");

        ui->pCard1->setPixmap(p1);
        ui->pCard2->setPixmap(p2);
        ui->dCard1->setPixmap(d1);
        ui->dCard2->setPixmap(d2);

        //------------------------------Score------------------------------------
        QPixmap score(":/img/pictures/background/score.png");
        ui->Score->setPixmap(score.scaled(120,120,Qt::KeepAspectRatio));
        ui->Score2->setPixmap(score.scaled(120,120,Qt::KeepAspectRatio));


        scoreCounter(deskNum,"p"); scoreCounter(deskNum+1,"p");
        scoreCounter(deskNum+2,"d"); scoreCounter(3);
        dlScore+=simpleScore;

        //plScore += scoreCounter(deskNum)+scoreCounter(deskNum+1);
        //dlScore += scoreCounter(deskNum+2)+scoreCounter(deskNum+3);

        ui->pScore->setText(QString::number(plScore));
        ui->dScore->setText(QString::number(simpleScore));

        //----------------------------------------------------------------

        numOfCard+=2;
        deskNum += 4;

        if(plScore>=21){
            dealer();
        }
    }

    void PlayWindow::on_hit_clicked()
    {
        ui->doubleX2->setVisible(false);
        //ui->split->setVisible(false);

        QPixmap p1(":/img/pictures/cards/"+deck[deskNum]+".png");

        if(numOfCard == 2){
            ui->pCard3->setPixmap(p1);
        }else if(numOfCard==3){
            ui->pCard4->setPixmap(p1);
        }else if(numOfCard==4){
            ui->pCard5->setPixmap(p1);
        }else if(numOfCard==5){
           // ui->pCard6->setPixmap(p1);
        }else{
           // ui->pCard7->setPixmap(p1);
        }

        scoreCounter(deskNum,"p");
        ui->pScore->setText(QString::number(plScore));

        deskNum++;
        numOfCard++;

        if(plScore>=21){
            dealer();
        }

    }

    void PlayWindow::on_stand_clicked()
    {
        dealer();
    }

    void PlayWindow::on_doubleX2_clicked()
    {
        money-=betCoin;
        betCoin*=2;

        betValue = QString::number(betCoin).append("$");
        ui->betValue->setText(betValue);
        betValue = QString::number(money).append(" $");
        ui->money->setText(betValue);
        QPixmap p1(":/img/pictures/cards/"+deck[deskNum]+".png");
        ui->pCard3->setPixmap(p1);
        scoreCounter(deskNum,"p");
        ui->pScore->setText(QString::number(plScore));
        deskNum++;
        dealer();
    }

    void PlayWindow::on_split_clicked()
    {
        /*ui->split->setVisible(false);
        ui->doubleX2->setVisible(false);

        money-=betCoin;
        betValue = QString::number(money).append(" $");
        ui->money->setText(betValue);

        firstCardsForSp[whichHand] = hand[0];
        hand[1] = "";
        ui->pCard1->clear();

        whichHand++;

        splitStep();*/

    }

    void PlayWindow::splitStep(){
        /*if(money>=betCoin) ui->doubleX2->setVisible(true);
        scoreCounter(deskNum);
        simpleScoreResrved = simpleScore;
        scoreCounter(deskNum+1);
        if(money>=betCoin && simpleScoreResrved == simpleScore){
            ui->split->setVisible(true);
            hand[1] = deskNum;
        }*/
    }
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void PlayWindow::endGame(){
    if(money==0){
      ui->link2->setText("you lost your money xdxd");
    }
}

//void PlayWindow::slot(QString a)
//{
//ui->name_label->setText(a);
//}

void PlayWindow::closeEvent(QCloseEvent* event)
{
    writeRecord(money);
}

void PlayWindow::writeRecord(short score)
{
        std::string s, file;
        std::fstream recordFile("../bjmain/record.txt");

        int i;
        for (i = 0; i < 5; i++)
        {
            if (std::getline(recordFile, s))
            {
                std::istringstream iss(s, std::istringstream::in);

                short val;
                iss >> val;
                if (score > val)
                {
                    std::ostringstream ostr;
                    ostr << score;
                    file += ostr.str() + "\n";
                    score = val;
                }
                else
                {
                    file += s + "\n";
                }
            }
            else
            {
                std::ostringstream ostr;
                ostr << score;
                file += ostr.str();
                break;
            }
        }
        recordFile.close();
        recordFile.open("../bjmain/record.txt", std::ios::out | std::ios::trunc);
        recordFile << file;

        setAttribute(Qt::WA_DeleteOnClose);
    }























