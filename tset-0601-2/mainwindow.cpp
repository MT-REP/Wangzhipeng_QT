#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QMessageBox>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(800,800);
    connect(ui->actiondakaizuijin,&QAction::triggered,this,[=](){
     // QDialog dlg= QDialog(this);
     // dlg.exec();
        QDialog *dlg=new QDialog(this);
        dlg->show();
        dlg->resize(300,300);
       // QMessageBox::critical(this,"critical","错误");

    });
connect(ui->actionclose,&QAction::triggered,this,[=](){
      QMessageBox::critical(this,"critical","无法退出");
});
connect(ui->actionmulu,&QAction::triggered,this,[=](){
     QMessageBox::information(this,"info","当前不可用",0x00200000);
});


connect(ui->actionfuzhi,&QAction::triggered,this,[=](){
      QMessageBox::warning(this,"系统提示","安全警告");
});
//connect(ui->actionmulu,&QAction::triggered,this,[=](){
     // QMessageBox::information(this,"info","当前不可用",QMessageBox::close);});
//}
connect(ui->actiondakai,&QAction::triggered,this,[=](){
      QFileDialog::getOpenFileName(this,"打开文件"，"C:\Users\Administrator\Documents");
});
}
MainWindow::~MainWindow()
{
    delete ui;
}
