#include "xiugai.h"
#include "ui_xiugai.h"
#include "student2.h"
#include "QString"
#include "QMessageBox"
#include "QFile"
#include "QTextStream"

xiugai::xiugai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xiugai)
{
    ui->setupUi(this);
}

xiugai::~xiugai()
{
    delete ui;
}

void xiugai::on_pushButton_clicked()
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
        file.close();

        int f=0;
        QString xingming=ui->xingming->text();
        QString banji=ui->banji->text();
        QString xuehao=ui->xuehao->text();
        for(int i=0;i<10;i++)
        {
            if(xingming==stu.name[i]&&xuehao==stu.number[i]&&banji==stu.stuclass[i])
            {
                ui->dangqianchengji->setNum(stu.score[i]);
                stu.score[i]=ui->xiugaichengji->text().toInt();

                QFile file("G:\\qt\\q\\data\\chengjijilu.xls");

                if(!file.open(QIODevice::WriteOnly|QIODevice::Text))

                {

                    QMessageBox::warning(this,tr("警告"),tr("无法创造文件!"),QMessageBox::Yes);

                }
                QTextStream out(&file);
                out<<stu.name[i]<<"\t";
                out<<stu.sex[i]<<"\t";
                out<<stu.number[i]<<"\t";
                out<<stu.stuclass[i]<<"\t";
                out<<stu.score[i]<<"\n";
                f=1;
                QMessageBox::warning(this,tr("通知"),
                                     tr("修改完成!"),QMessageBox::Yes);
                file.close();

            }
         }
        if(f==0)
        {
            QMessageBox::warning(this,tr("错误"),
                                 tr("请输入正确的学生信息!"),QMessageBox::Yes);
            ui->banji->clear();
            ui->xingming->clear();
            ui->xuehao->clear();
            ui->xiugaichengji->clear();
        }
}
