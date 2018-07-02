#include "mainwindow.h"
#include "log.h"
#include "zhujuan.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Log l;
    if(l.exec()==QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }

    else return 0;
}
