#ifndef TIANJIACHUANGKOU_H
#define TIANJIACHUANGKOU_H

#include <QDialog>

namespace Ui {
class tianjiachuangkou;
}

class tianjiachuangkou : public QDialog
{
    Q_OBJECT

public:
    explicit tianjiachuangkou(QWidget *parent = 0);
    ~tianjiachuangkou();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::tianjiachuangkou *ui;
};

#endif // TIANJIACHUANGKOU_H
