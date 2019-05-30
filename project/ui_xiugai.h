/********************************************************************************
** Form generated from reading UI file 'xiugai.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIUGAI_H
#define UI_XIUGAI_H

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

class Ui_xiugai
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *xingming;
    QLineEdit *banji;
    QLineEdit *xuehao;
    QLabel *label_6;
    QLabel *dangqianchengji;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *xiugaichengji;
    QPushButton *pushButton;

    void setupUi(QDialog *xiugai)
    {
        if (xiugai->objectName().isEmpty())
            xiugai->setObjectName(QStringLiteral("xiugai"));
        xiugai->resize(790, 535);
        label = new QLabel(xiugai);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-100, -10, 931, 661));
        label->setStyleSheet(QStringLiteral("background-image: url(:/G:/5.6.3/resource/022.png);"));
        label_2 = new QLabel(xiugai);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 261, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(xiugai);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 200, 71, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(xiugai);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 270, 71, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(xiugai);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 344, 81, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        xingming = new QLineEdit(xiugai);
        xingming->setObjectName(QStringLiteral("xingming"));
        xingming->setGeometry(QRect(140, 200, 201, 41));
        xingming->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        banji = new QLineEdit(xiugai);
        banji->setObjectName(QStringLiteral("banji"));
        banji->setGeometry(QRect(140, 280, 201, 41));
        banji->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        xuehao = new QLineEdit(xiugai);
        xuehao->setObjectName(QStringLiteral("xuehao"));
        xuehao->setGeometry(QRect(140, 350, 201, 41));
        xuehao->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(xiugai);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(410, 80, 141, 61));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        dangqianchengji = new QLabel(xiugai);
        dangqianchengji->setObjectName(QStringLiteral("dangqianchengji"));
        dangqianchengji->setGeometry(QRect(560, 90, 141, 41));
        dangqianchengji->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(xiugai);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(560, 140, 131, 151));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/G:/5.6.3/resource/025.png);"));
        label_9 = new QLabel(xiugai);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(400, 320, 141, 61));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        xiugaichengji = new QLineEdit(xiugai);
        xiugaichengji->setObjectName(QStringLiteral("xiugaichengji"));
        xiugaichengji->setGeometry(QRect(550, 330, 151, 41));
        xiugaichengji->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(xiugai);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 410, 161, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(xiugai);

        QMetaObject::connectSlotsByName(xiugai);
    } // setupUi

    void retranslateUi(QDialog *xiugai)
    {
        xiugai->setWindowTitle(QApplication::translate("xiugai", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("xiugai", "\345\255\246\347\224\237\346\210\220\347\273\251\344\277\256\346\224\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("xiugai", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("xiugai", "\347\217\255\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("xiugai", "\345\255\246\345\217\267", Q_NULLPTR));
        label_6->setText(QApplication::translate("xiugai", "\345\255\246\347\224\237\346\210\220\347\273\251", Q_NULLPTR));
        dangqianchengji->setText(QString());
        label_8->setText(QString());
        label_9->setText(QApplication::translate("xiugai", "\344\277\256\346\224\271\346\210\220\347\273\251", Q_NULLPTR));
        pushButton->setText(QApplication::translate("xiugai", "\344\270\200\351\224\256\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class xiugai: public Ui_xiugai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIUGAI_H
