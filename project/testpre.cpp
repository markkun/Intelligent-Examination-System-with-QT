#include "testpre.h"
#include "test.h"
#include "ui_testpre.h"
#include "student.h"
testpre::testpre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testpre)
{
    ui->setupUi(this);
}

testpre::~testpre()
{
    delete ui;
}

void testpre::on_pushButton_clicked()
{
    QString m = ui->lineEdit->text();
    student s;
    s.name=ui->name->text();
    s.number=ui->xuehao->text();
    s.sex=ui->xingbie->text();
    s.stuclass=ui->banji->text();
    QFile file("G:\\qt\\q\\"+m+".txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QMessageBox::warning(this,"警告","没有找到此试卷",QMessageBox::Yes);
        file.close();
    }
    else
    {
        test t(m,s);
        file.close();
        t.exec();
    }

}
