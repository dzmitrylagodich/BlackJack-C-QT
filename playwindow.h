#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

namespace Ui {
class PlayWindow;
}

class MainWindow;

class PlayWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayWindow(MainWindow *parent = 0);
    ~PlayWindow();

private slots:

   void on_coin5_clicked();

  void on_coin20_clicked();

  void on_coin50_clicked();

   void on_coin100_clicked();

   void on_coin500_clicked();

   void on_deal_clicked();

   void on_hit_clicked();

   void on_stand_clicked();

   void on_doubleX2_clicked();

  void dealer();

  void end();

    void nextGame();

  void coinClick(int n);

   void on_split_clicked();

  void splitStep();

  void writeRecord(short score);

  void endGame();

private:
    Ui::PlayWindow *ui;

    MainWindow* parent;
private:
    void closeEvent(QCloseEvent* event);

public slots:
  // void slot(QString a);

};

#endif // PLAYWINDOW_H
