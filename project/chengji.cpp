#include "chengji.h"
#include "ui_chengji.h"
#include "tianjiachuangkou.h"
#include "search.h"
#include "student2.h"
#include "xiugai.h"
#include <QString>
#include <QTableWidgetItem>
#include <QFile>
#include <QMessageBox>
chengji::chengji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chengji)
{
    ui->setupUi(this);
}

chengji::~chengji()
{
    delete ui;
}

void chengji::on_pushButton_clicked()
{
    tianjiachuangkou x;
    x.exec();
}



void chengji::on_pushButton_3_clicked()
{
    xiugai x;
    x.exec();
}

void chengji::on_pushButton_4_clicked()
{
    search x;
    x.exec();
}



void chengji::on_pushButton_2_clicked()
{
    student2 stu;
    QStringList sc;

    QFile file("G:\\qt\\q\\data\\chengjijilu.xls");

    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))

    {

        QMessageBox::warning(this,tr("警告"),
                             tr("无法创造文件!"),QMessageBox::Yes);

    }


    for(int j=0;j<10;j++)
    {
        QString Name;
        for(int i=0;i<20;i++)
        {
            QString a=file.read(1);
            if(a!="\t")
            {
            Name.append(a);
            }
            else
            {
                break;
            }
        }


        QString Sex;
        for(int i=0;i<20;i++)
        {
            QString a=file.read(1);
            if(a!="\t")
            {
            Sex.append(a);
            }
            else
            {
                break;
            }
        }

        QString Number;
        for(int i=0;i<20;i++)
        {
            QString a=file.read(1);
            if(a!="\t")
            {
            Number.append(a);
            }
            else
            {
                break;
            }
        }

        QString Class;
        for(int i=0;i<20;i++)
        {
            QString a=file.read(1);
            if(a!="\t")
            {
            Class.append(a);
            }
            else
            {
                break;
            }
        }

        QString Score;
        for(int i=0;i<20;i++)
        {
            QString a=file.read(1);
            if(a!="\n")
            {
                Score.append(a);
            }
            else
            {
                break;
            }
        }

        ui->tableWidget->setItem(j,0,new QTableWidgetItem(Name));
        ui->tableWidget->setItem(j,1,new QTableWidgetItem(Number));
        ui->tableWidget->setItem(j,2,new QTableWidgetItem(Sex));
        ui->tableWidget->setItem(j,3,new QTableWidgetItem(Class));
        ui->tableWidget->setItem(j,4,new QTableWidgetItem(Score));

    }

    file.close();
}
