#ifndef TESTPRE_H
#define TESTPRE_H

#include <QDialog>
namespace Ui {
class testpre;
}

class testpre : public QDialog
{
    Q_OBJECT

public:
    explicit testpre(QWidget *parent = 0);
    ~testpre();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testpre *ui;
};

#endif // TESTPRE_H
