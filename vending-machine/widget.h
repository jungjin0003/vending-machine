#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pbCoin500_clicked();

    void on_pbCoin100_clicked();

    void on_pbCoin50_clicked();

    void on_pbCoin10_clicked();

    void on_pbCoffee200_clicked();

    void on_pbTea150_clicked();

    void on_pbMilk100_clicked();

private:
    int money = 0;
    void ChangeMoney(int coin);
    void setControl();
    Ui::Widget *ui;
};
#endif // WIDGET_H
