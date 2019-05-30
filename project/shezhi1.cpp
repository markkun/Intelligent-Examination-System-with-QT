#include "shezhi1.h"
#include "ui_shezhi1.h"

shezhi1::shezhi1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shezhi1)
{
    ui->setupUi(this);
}

shezhi1::~shezhi1()
{
    delete ui;
}
