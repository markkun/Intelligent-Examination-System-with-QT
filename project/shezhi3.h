#ifndef SHEZHI3_H
#define SHEZHI3_H

#include <QDialog>

namespace Ui {
class shezhi3;
}

class shezhi3 : public QDialog
{
    Q_OBJECT

public:
    explicit shezhi3(QWidget *parent = 0);
    ~shezhi3();

private:
    Ui::shezhi3 *ui;
};

#endif // SHEZHI3_H
