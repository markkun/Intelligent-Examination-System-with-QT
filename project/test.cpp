#include "test.h"
#include "ui_test.h"
#include "results.h"
test::test(QString name,student s,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    S=s;
    Name=name;
    QFile file("G:\\qt\\q\\"+name+".txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QMessageBox::warning(this,"警告","无法创造文件",QMessageBox::Yes);
    }

    while (!file.atEnd())
    {
        line = file.readLine();
        line.remove('\n');
        fonts<<line;
    }

    ui->textBrowser->setText(fonts[4*number]+"\n"+fonts[4*number+1]);
    last=fonts.length()/4;
    for(int i=0;i<last;i++)
    {
        youranswer<<" ";
        rightanswer<<fonts[4*i+3];
    }
    file.close();
}

test::~test()
{
    delete ui;
}


void test::on_pushButton_clicked()
{


    int isan=0;
    if(ui->A->isChecked())
    {
        ui->E->setChecked(true);
        youranswer[number]="A";


    }
    else if(ui->B->isChecked())
    {
        youranswer[number]="B";
        ui->E->setChecked(true);
    }
    else if(ui->C->isChecked())
    {
        youranswer[number]="C";

        ui->E->setChecked(true);
    }
    else if(ui->D->isChecked())
    {
        youranswer[number]="D";
        ui->E->setChecked(true);
    }
    else {
        QMessageBox::warning(this,"错误","请选择你的答案！",QMessageBox::Yes);
        isan=1;
    }
    if(number==last-2)
    {
        ui->pushButton->setText("交卷");
    }
    if(isan==0&&number!=last-1)
    {
        number++;
        ui->textBrowser->setText(fonts[4*number]+"\n"+fonts[4*number+1]);
        if(youranswer[number]=="A")
        {
            ui->A->setChecked(true);
        }
        else if(youranswer[number]=="B")
        {
            ui->B->setChecked(true);
        }
        else if(youranswer[number]=="C")
        {
            ui->C->setChecked(true);
        }
        else if(youranswer[number]=="D")
        {
            ui->D->setChecked(true);
        }
    }
    else if(isan==0&&number==last-1)
    {
        if(QMessageBox::information(NULL,"交卷确认","确定交卷吗？",QMessageBox::Yes|QMessageBox::No))
        {
            Results a(rightanswer,youranswer,Name,S);
            a.exec();
        }

    }
}

void test::on_pushButton_6_clicked()
{
    if(number<=last-1)
    {
        ui->pushButton->setText("下一题");
    }
    if(number==0)
    {
        QMessageBox::warning(this,"警告","这已经是第一题了，年轻人！",QMessageBox::Yes);
    }

    else
    {
        number--;
        ui->textBrowser->setText(fonts[4*number]+"\n"+fonts[4*number+1]);
        if(youranswer[number]=="A")
        {
            ui->A->setChecked(true);
        }
        else if(youranswer[number]=="B")
        {
            ui->B->setChecked(true);
        }
        else if(youranswer[number]=="C")
        {
            ui->C->setChecked(true);
        }
        else if(youranswer[number]=="D")
        {
            ui->D->setChecked(true);
        }
    }
}
