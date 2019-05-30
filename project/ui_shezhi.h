/********************************************************************************
** Form generated from reading UI file 'shezhi.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEZHI_H
#define UI_SHEZHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_shezhi
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *shezhi)
    {
        if (shezhi->objectName().isEmpty())
            shezhi->setObjectName(QStringLiteral("shezhi"));
        shezhi->resize(549, 382);
        label = new QLabel(shezhi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-90, -30, 641, 431));
        label->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/IMG_9262.JPG);"));
        pushButton = new QPushButton(shezhi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 120, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));
        pushButton_2 = new QPushButton(shezhi);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 120, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));
        pushButton_3 = new QPushButton(shezhi);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 210, 131, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));
        pushButton_4 = new QPushButton(shezhi);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 210, 131, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));

        retranslateUi(shezhi);

        QMetaObject::connectSlotsByName(shezhi);
    } // setupUi

    void retranslateUi(QDialog *shezhi)
    {
        shezhi->setWindowTitle(QApplication::translate("shezhi", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("shezhi", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("shezhi", "\346\223\215\344\275\234\350\257\264\346\230\216", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("shezhi", "\345\270\270\350\247\201\351\227\256\351\242\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("shezhi", "\345\217\215\351\246\210\346\270\240\351\201\223", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("shezhi", "\345\274\200\345\217\221\344\272\272\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shezhi: public Ui_shezhi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEZHI_H
