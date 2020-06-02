#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTimer*timer=new QTimer(this);
    connect(ui->pushButton,&QPushButton::clicked,[=]()
    {
       timer->start(300);
    });
    connect(timer,&QTimer::timeout,[=]()
    {
        static int num=0;
        ui->label_2->setText(QString::number(num++) );
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=]()
    {
       timer->stop();
       //ui->label_2->setText(QString::number(0));
    });
}

Widget::~Widget()
{
    delete ui;
}
