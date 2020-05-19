#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton1_clicked()
{
    double num1,num2;
    num1=ui->textEdit1->toPlainText().toDouble();
    num2=ui->textEdit2->toPlainText().toDouble();
    ui->textEdit3->setText(QString::number(num1+num2));
}

void MainWindow::on_pushButton2_clicked()
{
    double num1,num2;
    num1=ui->textEdit1->toPlainText().toDouble();
    num2=ui->textEdit2->toPlainText().toDouble();
    ui->textEdit3->setText(QString::number(num1-num2));
}

void MainWindow::on_pushButton3_clicked()
{
    double num1,num2;
    num1=ui->textEdit1->toPlainText().toDouble();
    num2=ui->textEdit2->toPlainText().toDouble();
    ui->textEdit3->setText(QString::number(num1*num2));
}

void MainWindow::on_pushButton4_clicked()
{
    double num1,num2;
    num1=ui->textEdit1->toPlainText().toDouble();
    num2=ui->textEdit2->toPlainText().toDouble();
    ui->textEdit3->setText(QString::number(num1/num2));
}

void MainWindow::on_pushButton7_clicked()
{
    double num1;
    num1=ui->textEdit1->toPlainText().toDouble();
    ui->textEdit3->setText(QString::number(sqrt(num1)));
}


