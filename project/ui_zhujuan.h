/********************************************************************************
** Form generated from reading UI file 'zhujuan.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUJUAN_H
#define UI_ZHUJUAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_zhujuan
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_6;

    void setupUi(QDialog *zhujuan)
    {
        if (zhujuan->objectName().isEmpty())
            zhujuan->setObjectName(QStringLiteral("zhujuan"));
        zhujuan->resize(593, 723);
        zhujuan->setStyleSheet(QStringLiteral(""));
        label = new QLabel(zhujuan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 0, 301, 101));
        label->setStyleSheet(QLatin1String("font: 75 16pt \"AcadEref\";\n"
"color: rgb(0, 0, 0);"));
        checkBox = new QCheckBox(zhujuan);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(390, 170, 191, 31));
        checkBox->setStyleSheet(QLatin1String("font: 14pt \"AcadEref\";\n"
"font: 12pt \"AcadEref\";\n"
"font: 8pt \"AcadEref\";"));
        lineEdit = new QLineEdit(zhujuan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 90, 321, 21));
        label_2 = new QLabel(zhujuan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 90, 72, 15));
        lineEdit_2 = new QLineEdit(zhujuan);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 130, 113, 21));
        label_3 = new QLabel(zhujuan);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 130, 72, 15));
        label_4 = new QLabel(zhujuan);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 170, 72, 15));
        comboBox = new QComboBox(zhujuan);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 170, 87, 22));
        pushButton = new QPushButton(zhujuan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 220, 171, 71));
        pushButton->setStyleSheet(QLatin1String("font: 14pt \"AcadEref\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.637, y2:0.824, stop:0 rgba(85, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
""));
        textEdit = new QTextEdit(zhujuan);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 350, 561, 291));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(171, 255, 250);"));
        label_5 = new QLabel(zhujuan);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 290, 241, 51));
        label_5->setStyleSheet(QLatin1String("font: 75 26pt \"AcadEref\";\n"
"font: 20pt \"AcadEref\";"));
        pushButton_2 = new QPushButton(zhujuan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 660, 93, 41));
        pushButton_2->setStyleSheet(QLatin1String("font: 14pt \"AcadEref\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.637, y2:0.824, stop:0 rgba(85, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_6 = new QLabel(zhujuan);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-10, -10, 611, 741));
        label_6->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.755682, stop:0 rgba(0, 158, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-image: url(:/new/prefix1/V3troBZMPbzMFvzaAMl.jpg);"));
        label_6->raise();
        label->raise();
        checkBox->raise();
        lineEdit->raise();
        label_2->raise();
        lineEdit_2->raise();
        label_3->raise();
        label_4->raise();
        comboBox->raise();
        pushButton->raise();
        textEdit->raise();
        label_5->raise();
        pushButton_2->raise();

        retranslateUi(zhujuan);

        QMetaObject::connectSlotsByName(zhujuan);
    } // setupUi

    void retranslateUi(QDialog *zhujuan)
    {
        zhujuan->setWindowTitle(QApplication::translate("zhujuan", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("zhujuan", "\346\254\242\350\277\216\344\275\277\347\224\250\347\273\204\345\215\267\345\212\237\350\203\275", Q_NULLPTR));
        checkBox->setText(QApplication::translate("zhujuan", "  \346\267\273\345\212\240\345\216\213\350\275\264\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("zhujuan", "\350\257\225\345\215\267\345\220\215\347\247\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("zhujuan", "\351\242\230\347\233\256\346\225\260\351\207\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("zhujuan", "\351\200\211\346\213\251\351\232\276\345\272\246", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("zhujuan", "\347\256\200\345\215\225", Q_NULLPTR)
         << QApplication::translate("zhujuan", "\346\255\243\345\270\270", Q_NULLPTR)
         << QApplication::translate("zhujuan", "\345\233\260\351\232\276", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("zhujuan", "\344\270\200\351\224\256\347\224\237\346\210\220", Q_NULLPTR));
        label_5->setText(QApplication::translate("zhujuan", "\347\224\237\346\210\220\350\257\225\345\215\267\351\242\204\350\247\210", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("zhujuan", "\344\277\235\345\255\230", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhujuan: public Ui_zhujuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUJUAN_H
