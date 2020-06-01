#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QStatusBar>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
// //////////软件界面菜单栏//////////////
    ui->setupUi(this);
    resize(560,560);
    QMenuBar *bar=menuBar();
    setMenuBar(bar);
   QMenu*fileMenu=bar->addMenu("文件");
   QMenu*editMenu=bar->addMenu("编辑");
   fileMenu->addAction("新建");
   fileMenu->addAction("打开");
   fileMenu->addAction("另存为");
   editMenu->addAction("复制");
   editMenu->addAction("转到");
// ///////////工具栏///////////////////////
   QToolBar * toolbar=new QToolBar(this);
   addToolBar(Qt::RightToolBarArea,toolbar);
// //////////任务栏////////////////////////
   QStatusBar * sbar=statusBar();
   setStatusBar(sbar);

   QLabel*lbel=new QLabel("诊断",this);
   sbar->addWidget(lbel);


}

MainWindow::~MainWindow()
{
    delete ui;
}
