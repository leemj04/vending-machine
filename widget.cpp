#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget) {
    ui->setupUi(this);
    changeMoney(0);
}

Widget::~Widget() {
    delete ui;
}

void Widget::changeMoney(int diff) {
    money += diff;
    ui->btn_coffee->setEnabled(false);
    ui->btn_tea->setEnabled(false);
    ui->btn_milk->setEnabled(false);
    if (money >= 100) {
        ui->btn_coffee->setEnabled(true);
    }
    if (money >= 150) {
        ui->btn_tea->setEnabled(true);
    }
    if (money >= 200) {
        ui->btn_milk->setEnabled(true);
    }
    ui->lcdNumber->display(money);
}

void Widget::on_btn_10_clicked() {
    changeMoney(10);
}

void Widget::on_btn_50_clicked() {
    changeMoney(50);
}

void Widget::on_btn_100_clicked() {
    changeMoney(100);
}


void Widget::on_btn_500_clicked() {
    changeMoney(500);
}


void Widget::on_btn_coffee_clicked() {
    changeMoney(-100);
}


void Widget::on_btn_tea_clicked() {
    changeMoney(-150);
}


void Widget::on_btn_milk_clicked() {
    changeMoney(-200);
}


void Widget::on_btn_reset_clicked()
{
    QMessageBox mb;
    int num10, num50, num100, num500;

    num500 = money / 500; money %= 500;
    num100 = money / 100; money %= 100;
    num50  = money /  50; money %=  50;
    num10  = money /  10; money %=  10;
    mb.information(this, "changes", "500: "+QString::number(num500)+
                                  "\n100: "+QString::number(num100)+
                                   "\n50: "+QString::number(num50)+
                                   "\n10: "+QString::number(num10));
    ui->lcdNumber->display(money);
}

