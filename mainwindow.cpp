#include "mainwindow.h"
#include "temperaturereader.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include <QColor>
#include <iostream>
#include <QString>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->setStyleSheet("background:white;");
    ui->lcdNumber->setStyleSheet("background:#5bfc55;");
    tempReader = new TemperatureReader(this);
    tempReader->start();
    ui->lcdNumber->display("0.0'C");
    connect(tempReader, SIGNAL(new_read(int)), this, SLOT(on_new_read(int)),Qt::UniqueConnection);
}

void MainWindow::on_new_read(int t){
    if(t>0){
        double tmp = (50*t)/1023.0;
        QString temperature;
        temperature.sprintf("%02.1f'C", tmp);
        ui->lcdNumber->display(temperature);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
