/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *xingming;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_7;
    QLineEdit *xingbie;
    QLineEdit *chengji;
    QPushButton *pushButton_2;
    QLineEdit *banji;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QStringLiteral("search"));
        search->resize(864, 513);
        label_2 = new QLabel(search);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 40, 141, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(221, 255, 233);"));
        label_3 = new QLabel(search);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 130, 151, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(85, 255, 255);"));
        lineEdit = new QLineEdit(search);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 140, 231, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(search);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 220, 181, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(search);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 360, 61, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(85, 255, 255);"));
        label = new QLabel(search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 370, 71, 41));
        label->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(85, 255, 255);"));
        label_5 = new QLabel(search);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(650, 380, 72, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(85, 255, 255);"));
        xingming = new QLineEdit(search);
        xingming->setObjectName(QStringLiteral("xingming"));
        xingming->setGeometry(QRect(60, 440, 151, 51));
        xingming->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(search);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-190, 0, 1071, 601));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/timg33.jpg);"));
        line = new QFrame(search);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 310, 841, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(search);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 360, 91, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(85, 255, 255);"));
        xingbie = new QLineEdit(search);
        xingbie->setObjectName(QStringLiteral("xingbie"));
        xingbie->setGeometry(QRect(222, 440, 171, 51));
        xingbie->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        chengji = new QLineEdit(search);
        chengji->setObjectName(QStringLiteral("chengji"));
        chengji->setGeometry(QRect(610, 440, 141, 51));
        chengji->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(search);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 220, 191, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        banji = new QLineEdit(search);
        banji->setObjectName(QStringLiteral("banji"));
        banji->setGeometry(QRect(420, 440, 161, 51));
        banji->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        pushButton->raise();
        label_4->raise();
        label->raise();
        label_5->raise();
        xingming->raise();
        line->raise();
        label_7->raise();
        xingbie->raise();
        chengji->raise();
        pushButton_2->raise();
        banji->raise();

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QApplication::translate("search", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("search", "\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("search", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("search", "\346\237\245\350\257\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("search", "\345\247\223\345\220\215", Q_NULLPTR));
        label->setText(QApplication::translate("search", "\347\217\255\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("search", "\346\210\220\347\273\251", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("search", "\346\200\247\345\210\253", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("search", "\345\256\214\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
