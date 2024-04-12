#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int money{0};
    void changeMoney(int diff);

private slots:
    void on_btn_10_clicked();

    void on_btn_50_clicked();

    void on_btn_100_clicked();

    void on_btn_500_clicked();

    void on_btn_coffee_clicked();

    void on_btn_tea_clicked();

    void on_btn_milk_clicked();

    void on_btn_reset_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
