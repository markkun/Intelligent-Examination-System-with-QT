#include "shezhi4.h"
#include "ui_shezhi4.h"

shezhi4::shezhi4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shezhi4)
{
    ui->setupUi(this);
}

shezhi4::~shezhi4()
{
    delete ui;
}
