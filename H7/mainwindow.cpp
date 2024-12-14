#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnCount_clicked()
{
    QString s = QString::number(counter);
    counter++;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(counter));
}


void MainWindow::on_btnResult_clicked()
{
    counter = 0;
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}

