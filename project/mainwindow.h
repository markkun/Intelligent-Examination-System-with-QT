#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_zhujuan_clicked();

    void on_pushButton_chengji_clicked();

    void on_pushButton_kaoshi_clicked();

    void on_pushButton_shezhi_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
