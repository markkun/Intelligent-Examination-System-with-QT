#include "results.h"
#include "ui_results.h"
#include "QFile"
#include "QMessageBox"
Results::Results(QStringList r,QStringList y,QString Name,student s,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);
    S=s;
    ra=r;
    ya=y;
    for(int i=0;i<ra.length();i++)
    {
        if(ra[i]!=ya[i])
        {
            wrong.append(i);
        }
    }
    double sc=(ra.length()-wrong.length())/(double)ra.length()*100;
    ui->chengji->setNum((int)sc);
    ui->banji->setText(S.stuclass);
    ui->xingbie->setText(S.sex);
    ui->xingming->setText(S.name);
    ui->xuehao->setText(S.number);
    QStringList fonts;
    QString line;
    QFile file("G:\\qt\\q\\"+Name+".txt");
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
    QString w;
    for(int i=0;i<wrong.length();i++)
    {
        w=w+fonts[4*wrong[i]]+"\n"+fonts[4*wrong[i]+1]+"\n"+"正确答案： "+fonts[4*wrong[i]+3]+"\n"+"你的答案： "+y[i]+"\n"+"\n";
    }
    ui->textEdit->setText(w);
}



Results::~Results()
{
    delete ui;
}
