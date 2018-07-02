#ifndef SHEZHI_H
#define SHEZHI_H

#include <QDialog>

namespace Ui {
class shezhi;
}

class shezhi : public QDialog
{
    Q_OBJECT

public:
    explicit shezhi(QWidget *parent = 0);
    ~shezhi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::shezhi *ui;
};

#endif // SHEZHI_H
