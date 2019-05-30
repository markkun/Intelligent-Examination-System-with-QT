#ifndef CHENGJI_H
#define CHENGJI_H

#include <QDialog>

namespace Ui {
class chengji;
}

class chengji : public QDialog
{
    Q_OBJECT

public:
    explicit chengji(QWidget *parent = 0);
    ~chengji();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::chengji *ui;
};

#endif // CHENGJI_H
