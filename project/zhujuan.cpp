#include "zhujuan.h"
#include "ui_zhujuan.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QString>
#include <QtGlobal>
#include <QTime>

zhujuan::zhujuan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhujuan)
{
    ui->setupUi(this);
}

zhujuan::~zhujuan()
{
    delete ui;
}

void Randomlist(int a[],int n,int max)
{
    int i,j;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for(i=0;i<n;i++)
    {
        a[i]=qrand()%max;
        bool flag=true;
        while(flag)
        {
                for(j=0;j<=i;j++)
                {
                    if(a[i]==a[j])
                    {
                        break;
                    }
                }
                if(j<i)
                    {
                        a[i]=qrand()%max;
                    }
                if(j==i)
                    {
                        flag=!flag;
                    }
        }

    }
}

bool zhujuan::Zhujuan()
{
    QFile file("G:\\qt\\q\\e.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QMessageBox::warning(this,"警告","无法创造文件",QMessageBox::Yes);
    }

    QFile file2("G:\\qt\\q\\answer.txt");
    if(!file2.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QMessageBox::warning(this,"警告","无法创造文件",QMessageBox::Yes);
    }
    QStringList answer;
    QString line2;
    while (!file2.atEnd())
    {
        line2 = file2.readLine();
        line2.remove('\n');
        answer<<line2;
    }

    QStringList fonts;
    QString line;
    while (!file.atEnd())
    {
        line = file.readLine();
        line.remove('\n');
        fonts<<line;
    }
    QString w;
    int n=ui->lineEdit_2->text().toInt();
    int number[n];
    int max=30;
    Randomlist(number,n,max);
    for(int k=0;k<n;k++)
    {
        int question=2*number[k];
        int choice=2*number[k]+1;
        w=w+QString::number(k+1)+'.'+fonts[question]+'\n'+fonts[choice]+'\n'+"答案 ："+'\n'+answer[number[k]]+'\n';
    }
    ui->textEdit->setPlainText(w);
    file.close();
    file2.close();
}

bool zhujuan::save()
{
    QString name="unknow";
    name=ui->lineEdit->text();
    QFile file("G:\\qt\\q\\"+name+".txt");
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        QMessageBox::warning(this,tr("警号"),tr("无法创造文件!"),QMessageBox::Yes);
    }
    QTextStream out(&file);
    out<<ui->textEdit->toPlainText()<<endl;
    out.flush();
    file.close();
}


void zhujuan::on_pushButton_clicked()
{
   Zhujuan();
}

void zhujuan::on_pushButton_2_clicked()
{
    save();
}
