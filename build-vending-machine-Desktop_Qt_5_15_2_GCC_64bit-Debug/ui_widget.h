/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pbCoin500;
    QPushButton *pbCoin100;
    QPushButton *pbCoin50;
    QPushButton *pbCoin10;
    QPushButton *pbCoffee200;
    QPushButton *pbTea150;
    QPushButton *pbMilk100;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(230, 50, 341, 111));
        pbCoin500 = new QPushButton(Widget);
        pbCoin500->setObjectName(QString::fromUtf8("pbCoin500"));
        pbCoin500->setGeometry(QRect(90, 200, 88, 26));
        pbCoin100 = new QPushButton(Widget);
        pbCoin100->setObjectName(QString::fromUtf8("pbCoin100"));
        pbCoin100->setGeometry(QRect(90, 240, 88, 26));
        pbCoin50 = new QPushButton(Widget);
        pbCoin50->setObjectName(QString::fromUtf8("pbCoin50"));
        pbCoin50->setGeometry(QRect(90, 280, 88, 26));
        pbCoin10 = new QPushButton(Widget);
        pbCoin10->setObjectName(QString::fromUtf8("pbCoin10"));
        pbCoin10->setGeometry(QRect(90, 320, 88, 26));
        pbCoffee200 = new QPushButton(Widget);
        pbCoffee200->setObjectName(QString::fromUtf8("pbCoffee200"));
        pbCoffee200->setGeometry(QRect(480, 200, 88, 26));
        pbTea150 = new QPushButton(Widget);
        pbTea150->setObjectName(QString::fromUtf8("pbTea150"));
        pbTea150->setGeometry(QRect(480, 240, 88, 26));
        pbMilk100 = new QPushButton(Widget);
        pbMilk100->setObjectName(QString::fromUtf8("pbMilk100"));
        pbMilk100->setGeometry(QRect(480, 280, 88, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbCoin500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoin100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pbCoin50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pbCoin10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pbCoffee200->setText(QCoreApplication::translate("Widget", "Coffee(200)", nullptr));
        pbTea150->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        pbMilk100->setText(QCoreApplication::translate("Widget", "Milk(100)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
