#include "shezhi3.h"
#include "ui_shezhi3.h"

shezhi3::shezhi3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shezhi3)
{
    ui->setupUi(this);
}

shezhi3::~shezhi3()
{
    delete ui;
}
