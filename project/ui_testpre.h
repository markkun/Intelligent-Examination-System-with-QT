/********************************************************************************
** Form generated from reading UI file 'testpre.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPRE_H
#define UI_TESTPRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_testpre
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *xuehao;
    QLabel *label_3;
    QLineEdit *banji;
    QLabel *label_4;
    QLineEdit *xingbie;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *testpre)
    {
        if (testpre->objectName().isEmpty())
            testpre->setObjectName(QStringLiteral("testpre"));
        testpre->resize(708, 429);
        testpre->setStyleSheet(QStringLiteral(""));
        label = new QLabel(testpre);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 81, 41));
        label->setStyleSheet(QStringLiteral("font: 12pt \"AcadEref\";"));
        lineEdit = new QLineEdit(testpre);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 60, 341, 31));
        pushButton = new QPushButton(testpre);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 310, 141, 51));
        pushButton->setStyleSheet(QLatin1String("font: 12pt \"AcadEref\";\n"
"font: 20pt \"AcadEref\";\n"
"font: 16pt \"AcadEref\";"));
        name = new QLineEdit(testpre);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(180, 120, 121, 31));
        label_2 = new QLabel(testpre);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 110, 81, 41));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"AcadEref\";"));
        xuehao = new QLineEdit(testpre);
        xuehao->setObjectName(QStringLiteral("xuehao"));
        xuehao->setGeometry(QRect(180, 180, 341, 31));
        label_3 = new QLabel(testpre);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 170, 41, 41));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"AcadEref\";"));
        banji = new QLineEdit(testpre);
        banji->setObjectName(QStringLiteral("banji"));
        banji->setGeometry(QRect(180, 240, 341, 31));
        label_4 = new QLabel(testpre);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 230, 51, 41));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"AcadEref\";"));
        xingbie = new QLineEdit(testpre);
        xingbie->setObjectName(QStringLiteral("xingbie"));
        xingbie->setGeometry(QRect(460, 120, 61, 31));
        label_5 = new QLabel(testpre);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 110, 81, 41));
        label_5->setStyleSheet(QStringLiteral("font: 12pt \"AcadEref\";"));
        label_6 = new QLabel(testpre);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 711, 431));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/2336171_014913342271_2.jpg);"));
        label_6->raise();
        label->raise();
        lineEdit->raise();
        pushButton->raise();
        name->raise();
        label_2->raise();
        xuehao->raise();
        label_3->raise();
        banji->raise();
        label_4->raise();
        xingbie->raise();
        label_5->raise();

        retranslateUi(testpre);

        QMetaObject::connectSlotsByName(testpre);
    } // setupUi

    void retranslateUi(QDialog *testpre)
    {
        testpre->setWindowTitle(QApplication::translate("testpre", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("testpre", "\350\257\225\345\215\267\345\220\215\347\247\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("testpre", "\345\274\200\345\247\213\350\200\203\350\257\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("testpre", "\345\255\246\347\224\237\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("testpre", "\345\255\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("testpre", "\347\217\255\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("testpre", "\346\200\247\345\210\253", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class testpre: public Ui_testpre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPRE_H
