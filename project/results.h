#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>
#include <QString>
#include <qvector.h>
#include <student.h>
namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT

public:
    explicit Results(QStringList r,QStringList y,QString Name,student s,QWidget *parent = 0);
    ~Results();
    student S;
    QStringList ra;
    QStringList ya;

    QVector<int>wrong;
private:
    Ui::Results *ui;
};

#endif // RESULTS_H
