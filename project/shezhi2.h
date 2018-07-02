#ifndef SHEZHI2_H
#define SHEZHI2_H

#include <QDialog>

namespace Ui {
class shezhi2;
}

class shezhi2 : public QDialog
{
    Q_OBJECT

public:
    explicit shezhi2(QWidget *parent = 0);
    ~shezhi2();

private:
    Ui::shezhi2 *ui;
};

#endif // SHEZHI2_H
