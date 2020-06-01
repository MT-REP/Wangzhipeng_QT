#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *btn=new QPushButton("放大",this);
  // QPushButton *btn_2=new QPushButton("缩小",this);
connect(btn,&QPushButton::clicked,this,);
   // btn_2->move(100,0);
    resize(600,600);
}

Widget::~Widget()
{
    delete ui;
}

