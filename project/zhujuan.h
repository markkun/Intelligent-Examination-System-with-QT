#ifndef ZHUJUAN_H
#define ZHUJUAN_H

#include <QDialog>

namespace Ui {
class zhujuan;
}

class zhujuan : public QDialog
{
    Q_OBJECT

public:
    explicit zhujuan(QWidget *parent = 0);
    ~zhujuan();
    bool Zhujuan();
    bool save();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zhujuan *ui;
};

#endif // ZHUJUAN_H
