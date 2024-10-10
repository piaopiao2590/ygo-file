#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(220, 460);
    setWindowTitle("灵兽计数器");
}

Widget::~Widget()
{
    delete ui;
}
