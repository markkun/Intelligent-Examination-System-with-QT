#include "mainwindow.h"
#include "zhujuan.h"
#include "chengji.h"
#include "test.h"
#include "testpre.h"
#include "ui_mainwindow.h"
#include "shezhi.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_zhujuan_clicked()
{
    zhujuan z;
    z.exec();

}

void MainWindow::on_pushButton_chengji_clicked()
{
    chengji c;
    c.exec();
}

void MainWindow::on_pushButton_kaoshi_clicked()
{
    testpre tpre;
    tpre.exec();
}

void MainWindow::on_pushButton_shezhi_clicked()
{
    shezhi z;
    z.exec();
}
