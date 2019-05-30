#include "search.h"
#include "ui_search.h"
#include "QFile"
#include "QString"
#include "QMessageBox"
#include "student2.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_clicked()
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
        sc<<Score;
        int score = Score.toInt();
        
        stu.name[j]=Name;
        stu.number[j]=Number;
        stu.sex[j]=Sex;
        stu.stuclass[j]=Class;
        stu.score[j] = score;
    }

    QString xuehao;
    int x=0;
    xuehao=ui->lineEdit->text();
    for(int i=0;i<10;i++)
    {
        if(xuehao==stu.number[i])
        {
            ui->xingming->setText(stu.name[i]);
            ui->xingbie->setText(stu.sex[i]);
            ui->banji->setText(stu.stuclass[i]);
            ui->chengji->setText(sc[i]);
            x=1;
        }

    }
    if(x==0)
    {
        QMessageBox::warning(this,tr("警告"),
                             tr("未查询到该学生!"),QMessageBox::Yes);
        ui->banji->clear();
        ui->xingbie->clear();
        ui->xingming->clear();
        ui->chengji->clear();
    }
    file.close();



}

void search::on_pushButton_2_clicked()
{
    close();
}
