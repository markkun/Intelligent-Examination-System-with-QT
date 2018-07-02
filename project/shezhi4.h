#ifndef SHEZHI4_H
#define SHEZHI4_H

#include <QDialog>

namespace Ui {
class shezhi4;
}

class shezhi4 : public QDialog
{
    Q_OBJECT

public:
    explicit shezhi4(QWidget *parent = 0);
    ~shezhi4();

private:
    Ui::shezhi4 *ui;
};

#endif // SHEZHI4_H
