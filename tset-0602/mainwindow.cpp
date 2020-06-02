#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QMessageBox>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(800,800);
    ui->setupUi(this);

    connect(ui->actionbaocun,&QAction::triggered,this,[=]()
    {
        QDialog * dlg=new QDialog(this);
        dlg->resize(500,400);
        dlg->show();
        QMessageBox::question(this,"question","确认保存",0x00200000);
    });
    connect(ui->actionxinjian,&QAction::triggered,this,[=]()
    {
       QMessageBox::critical(this,"critical","错误");
    });
    connect(ui->actionopen,&QAction::triggered,this,[=]()
    {
     QFileDialog::getOpenFileNames(this,"打开文件","C:\\Users\\Administrator\\Documents");
    });
    connect(ui->actioninfo,&QAction::triggered,this,[=]()
    {
       QMessageBox::warning(this,"暂无信息","确认关闭?");
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}
