#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Started";
}

MainWindow::~MainWindow()
{
    qDebug() << "Stopped";
    delete ui;
}

//void MainWindow::on_pushButton_clicked()
//{
//    qDebug() << "You clicked on Button";
//}

void MainWindow::on_MyButton_clicked()
{
    qDebug() << "You clicked on Button";
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Message", "Hello, you are ckick on button :)");
}

