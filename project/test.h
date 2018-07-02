#ifndef TEST_H
#define TEST_H
#include <student.h>
#include <QDialog>
#include <QString>
#include <QFile>
#include <QMessageBox>
namespace Ui {
class test;
}

class test : public QDialog
{
    Q_OBJECT

public:
    explicit test(QString name,student s,QWidget *parent = 0);
    ~test();
    int number=0;
    QStringList fonts;
    QString line;
    QStringList rightanswer;
    QStringList youranswer;
    int last;
    QString Name;
    student S;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_6_clicked();
private:
    Ui::test *ui;
};

#endif // TEST_H
