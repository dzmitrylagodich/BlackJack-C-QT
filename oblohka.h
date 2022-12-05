#ifndef OBLOHKA_H
#define OBLOHKA_H

#include <QMainWindow>

namespace Ui {
class Oblohka;
}

class MainWindow;

class Oblohka : public QMainWindow
{
    Q_OBJECT

public:
    explicit Oblohka(MainWindow *parent = nullptr);
    ~Oblohka();


private slots:

    void on_pushforobl1_clicked();

    void on_pushforobl2_clicked();

    void on_pushfoobl3_clicked();

private:
    Ui::Oblohka *ui;

    MainWindow* parent;
};

#endif // OBLOHKA_H
