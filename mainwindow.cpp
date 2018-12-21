#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel* lb1 = new QLabel(ui->centralWidget);
    lb1->setText("18.12.21 16:03 add this from qt 1507");
    lb1->setGeometry(50,100,300,40);
    lb1->show();
    //18.12.21 16:09 add this from github.com

    QLabel* lb2 = new QLabel(ui->centralWidget);
    lb2->setText("18.12.21 16:14 want to create a new branch");
    lb2->setGeometry(50,200,300,40);
    lb2->show();
    //18.12.21 16:21 add this to branch-test1 from github.com

    QLabel* lb3 = new QLabel(ui->centralWidget);
    lb3->setText("18.12.21 16:42 new version");
    lb3->setGeometry(50,230,300,40);
    lb3->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}
