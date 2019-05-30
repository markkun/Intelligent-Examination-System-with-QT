/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_kaoshi;
    QPushButton *pushButton_chengji;
    QPushButton *pushButton_shezhi;
    QPushButton *pushButton_zhujuan;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 578);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_kaoshi = new QPushButton(centralWidget);
        pushButton_kaoshi->setObjectName(QStringLiteral("pushButton_kaoshi"));
        pushButton_kaoshi->setGeometry(QRect(390, 180, 221, 131));
        pushButton_kaoshi->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0203731, y1:0.045, x2:1, y2:1, stop:0 rgba(106, 121, 166, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.159204 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 24pt \"\345\271\274\345\234\206\";"));
        pushButton_chengji = new QPushButton(centralWidget);
        pushButton_chengji->setObjectName(QStringLiteral("pushButton_chengji"));
        pushButton_chengji->setGeometry(QRect(150, 330, 221, 131));
        pushButton_chengji->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0203731, y1:0.045, x2:1, y2:1, stop:0 rgba(106, 121, 166, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0.19403 rgba(57, 66, 139, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 24pt \"\345\271\274\345\234\206\";"));
        pushButton_shezhi = new QPushButton(centralWidget);
        pushButton_shezhi->setObjectName(QStringLiteral("pushButton_shezhi"));
        pushButton_shezhi->setGeometry(QRect(390, 330, 221, 131));
        pushButton_shezhi->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0203731, y1:0.045, x2:1, y2:1, stop:0 rgba(106, 121, 166, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.323383 rgba(170, 172, 78, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 24pt \"\345\271\274\345\234\206\";"));
        pushButton_zhujuan = new QPushButton(centralWidget);
        pushButton_zhujuan->setObjectName(QStringLiteral("pushButton_zhujuan"));
        pushButton_zhujuan->setGeometry(QRect(150, 180, 221, 131));
        pushButton_zhujuan->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0203731, y1:0.045, x2:1, y2:1, stop:0 rgba(106, 121, 166, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0.9801, y1:1, x2:0, y2:0.017, stop:0.243781 rgba(218, 6, 6, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 24pt \"\345\271\274\345\234\206\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 30, 191, 51));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\271\274\345\234\206\";\n"
"color: rgb(38, 107, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 30, 251, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\271\274\345\234\206\";\n"
"color: rgb(255, 51, 0);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 110, 521, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\226\260\345\256\213\344\275\223\";\n"
"color: rgb(184, 184, 184);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_kaoshi->setText(QApplication::translate("MainWindow", "\350\200\203\350\257\225", Q_NULLPTR));
        pushButton_chengji->setText(QApplication::translate("MainWindow", "\346\210\220\347\273\251", Q_NULLPTR));
        pushButton_shezhi->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_zhujuan->setText(QApplication::translate("MainWindow", "\347\273\204\345\215\267", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\350\257\225\345\215\267\351\200\232</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\344\275\240\350\272\253\350\276\271\347\232\204\347\273\204\345\215\267\344\270\216\350\200\203\350\257\225\345\260\217\345\212\251\346\211\213</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
