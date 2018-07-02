#ifndef XIUGAI_H
#define XIUGAI_H

#include <QDialog>

namespace Ui {
class xiugai;
}

class xiugai : public QDialog
{
    Q_OBJECT

public:
    explicit xiugai(QWidget *parent = 0);
    ~xiugai();

private slots:
    void on_pushButton_clicked();

private:
    Ui::xiugai *ui;
};

#endif // XIUGAI_H
