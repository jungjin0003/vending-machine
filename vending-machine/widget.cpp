#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setControl();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setControl()
{
    ui->pbCoffee200->setEnabled(money >= 200);
    ui->pbTea150->setEnabled(money >= 150);
    ui->pbMilk100->setEnabled(money >= 100);
}

void Widget::ChangeMoney(int coin)
{
    money += coin;
    ui->lcdNumber->display(money);
    setControl();
}

void Widget::on_pbCoin500_clicked()
{
    ChangeMoney(500);
}


void Widget::on_pbCoin100_clicked()
{
    ChangeMoney(100);
}


void Widget::on_pbCoin50_clicked()
{
    ChangeMoney(50);
}


void Widget::on_pbCoin10_clicked()
{
    ChangeMoney(10);
}


void Widget::on_pbCoffee200_clicked()
{
    ChangeMoney(-200);
}


void Widget::on_pbTea150_clicked()
{
    ChangeMoney(-150);
}


void Widget::on_pbMilk100_clicked()
{
    ChangeMoney(-100);
}

