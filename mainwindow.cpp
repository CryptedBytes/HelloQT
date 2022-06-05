#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  ui->hellolabel->setText("");



}

QLabel *hellolabel;
int stage = 0;

MainWindow::~MainWindow()
{

    delete ui;

}





void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Hello world!";
     hellolabel = ui->hellolabel;

     switch (stage) {
        case 0:
             hellolabel->setText("Hello World!");
             stage = 1;
            break;

        case 1:
            hellolabel->setText("Hello Universe!");
            stage = 0;
            break;
        default:
            break;
        }

}

