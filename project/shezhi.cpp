#include "shezhi.h"
#include "ui_shezhi.h"
#include "shezhi1.h"
#include "shezhi2.h"
#include "shezhi3.h"
#include "shezhi4.h"

shezhi::shezhi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shezhi)
{
    ui->setupUi(this);
}

shezhi::~shezhi()
{
    delete ui;
}

void shezhi::on_pushButton_clicked()
{
    shezhi1 j;
    j.exec();
}


void shezhi::on_pushButton_2_clicked()
{
    shezhi2 k;
    k.exec();
}


void shezhi::on_pushButton_3_clicked()
{
    shezhi3 l;
    l.exec();
}

void shezhi::on_pushButton_4_clicked()
{
    shezhi4 o;
    o.exec();
}
