#ifndef LOG_H
#define LOG_H

#include <QDialog>

namespace Ui {
class Log;
}

class Log : public QDialog
{
    Q_OBJECT

public:
    explicit Log(QWidget *parent = 0);
    ~Log();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Log *ui;
};

#endif // LOG_H
