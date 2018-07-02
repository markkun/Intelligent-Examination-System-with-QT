#include "log.h"
#include "ui_log.h"
#include "QMessageBox"

Log::Log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Log)
{
    ui->setupUi(this);
}

Log::~Log()
{
    delete ui;
}

void Log::on_pushButton_clicked()
{
    if(ui->zh->text()=="xiao"&&ui->pass->text()=="123456")
        accept();
    else
    {
        QMessageBox::warning(this,"error","密码错误",QMessageBox::Yes);
        ui->zh->clear();
        ui->pass->clear();
    }
}
