/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
    QPushButton *btn_10;
    QLCDNumber *lcdNumber;
    QPushButton *btn_50;
    QPushButton *btn_100;
    QPushButton *btn_500;
    QPushButton *btn_coffee;
    QPushButton *btn_tea;
    QPushButton *btn_milk;
    QPushButton *btn_reset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        btn_10 = new QPushButton(Widget);
        btn_10->setObjectName("btn_10");
        btn_10->setGeometry(QRect(10, 160, 91, 41));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(10, 30, 391, 121));
        btn_50 = new QPushButton(Widget);
        btn_50->setObjectName("btn_50");
        btn_50->setGeometry(QRect(110, 160, 91, 41));
        btn_100 = new QPushButton(Widget);
        btn_100->setObjectName("btn_100");
        btn_100->setGeometry(QRect(210, 160, 91, 41));
        btn_500 = new QPushButton(Widget);
        btn_500->setObjectName("btn_500");
        btn_500->setGeometry(QRect(310, 160, 91, 41));
        btn_coffee = new QPushButton(Widget);
        btn_coffee->setObjectName("btn_coffee");
        btn_coffee->setGeometry(QRect(10, 210, 89, 41));
        btn_tea = new QPushButton(Widget);
        btn_tea->setObjectName("btn_tea");
        btn_tea->setGeometry(QRect(110, 210, 89, 41));
        btn_milk = new QPushButton(Widget);
        btn_milk->setObjectName("btn_milk");
        btn_milk->setGeometry(QRect(210, 210, 89, 41));
        btn_reset = new QPushButton(Widget);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setGeometry(QRect(310, 210, 89, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        btn_50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        btn_100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        btn_500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        btn_coffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        btn_tea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        btn_milk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        btn_reset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
