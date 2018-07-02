/********************************************************************************
** Form generated from reading UI file 'tianjiachuangkou.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIANJIACHUANGKOU_H
#define UI_TIANJIACHUANGKOU_H

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

class Ui_tianjiachuangkou
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label;

    void setupUi(QDialog *tianjiachuangkou)
    {
        if (tianjiachuangkou->objectName().isEmpty())
            tianjiachuangkou->setObjectName(QStringLiteral("tianjiachuangkou"));
        tianjiachuangkou->resize(630, 427);
        label_2 = new QLabel(tianjiachuangkou);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 211, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";"));
        label_3 = new QLabel(tianjiachuangkou);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 90, 531, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(tianjiachuangkou);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 300, 161, 71));
        pushButton->setStyleSheet(QLatin1String("font: 75 12pt \"AcadEref\";\n"
""));
        pushButton_2 = new QPushButton(tianjiachuangkou);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 300, 171, 71));
        pushButton_2->setStyleSheet(QLatin1String("font: 75 12pt \"AcadEref\";\n"
""));
        lineEdit = new QLineEdit(tianjiachuangkou);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 160, 91, 51));
        lineEdit_3 = new QLineEdit(tianjiachuangkou);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 160, 91, 51));
        lineEdit_4 = new QLineEdit(tianjiachuangkou);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 160, 101, 51));
        lineEdit_5 = new QLineEdit(tianjiachuangkou);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(370, 160, 81, 51));
        lineEdit_6 = new QLineEdit(tianjiachuangkou);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(470, 160, 101, 51));
        label = new QLabel(tianjiachuangkou);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 731, 511));
        label->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/timg.jpg);"));
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();

        retranslateUi(tianjiachuangkou);

        QMetaObject::connectSlotsByName(tianjiachuangkou);
    } // setupUi

    void retranslateUi(QDialog *tianjiachuangkou)
    {
        tianjiachuangkou->setWindowTitle(QApplication::translate("tianjiachuangkou", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("tianjiachuangkou", "\350\257\267\346\267\273\345\212\240\346\210\220\347\273\251", Q_NULLPTR));
        label_3->setText(QApplication::translate("tianjiachuangkou", "\345\247\223\345\220\215     \346\200\247\345\210\253    \345\255\246\345\217\267    \347\217\255\347\272\247     \346\210\220\347\273\251", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tianjiachuangkou", "\346\267\273\345\212\240\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tianjiachuangkou", "\344\270\213\344\270\200\344\275\215", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tianjiachuangkou: public Ui_tianjiachuangkou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIANJIACHUANGKOU_H
