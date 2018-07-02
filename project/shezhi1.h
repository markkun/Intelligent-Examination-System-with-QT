#ifndef SHEZHI1_H
#define SHEZHI1_H

#include <QDialog>

namespace Ui {
class shezhi1;
}

class shezhi1 : public QDialog
{
    Q_OBJECT

public:
    explicit shezhi1(QWidget *parent = 0);
    ~shezhi1();

private:
    Ui::shezhi1 *ui;
};

#endif // SHEZHI1_H
