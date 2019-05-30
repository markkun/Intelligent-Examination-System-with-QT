#include "shezhi2.h"
#include "ui_shezhi2.h"

shezhi2::shezhi2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shezhi2)
{
    ui->setupUi(this);
}

shezhi2::~shezhi2()
{
    delete ui;
}
