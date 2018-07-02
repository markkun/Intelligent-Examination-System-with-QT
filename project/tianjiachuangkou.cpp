#include "tianjiachuangkou.h"
#include "ui_tianjiachuangkou.h"
#include "QFile"
#include "QString"
#include "QMessageBox"
#include "QTextStream"

tianjiachuangkou::tianjiachuangkou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tianjiachuangkou)
{
    ui->setupUi(this);
}

tianjiachuangkou::~tianjiachuangkou()
{
    delete ui;
}

void tianjiachuangkou::on_pushButton_clicked()//添加完成
{
    QFile file("G:\\qt\\q\\data\\chengjijilu.xls");

    if(!file.open(QIODevice::Append|QIODevice::Text))

    {

        QMessageBox::warning(this,tr("警告"),tr("无法创造文件!"),QMessageBox::Yes);

    }

    QTextStream out(&file);

    out<< ui->lineEdit->text()<<"\t";
    out<< ui->lineEdit_3->text()<<"\t";
    out<< ui->lineEdit_4->text()<<"\t";
    out<< ui->lineEdit_5->text()<<"\t";
    out<< ui->lineEdit_6->text()<<endl;

    out.flush();

    file.close();

    this->close();
}

void tianjiachuangkou::on_pushButton_2_clicked()//添加下一位同学
{
    QFile file("G:\\qt\\q\\data\\chengjijilu.xls");

    if(!file.open(QIODevice::Append|QIODevice::Text))

    {

        QMessageBox::warning(this,tr("警告"),tr("无法创造文件!"),QMessageBox::Yes);

    }

    QTextStream out(&file);

    out<< ui->lineEdit->text()<<"\t";
    out<< ui->lineEdit_3->text()<<"\t";
    out<< ui->lineEdit_4->text()<<"\t";
    out<< ui->lineEdit_5->text()<<"\t";
    out<< ui->lineEdit_6->text()<<endl;

    out.flush();

    file.close();

    ui->lineEdit->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}
