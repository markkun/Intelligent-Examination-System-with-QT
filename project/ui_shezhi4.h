/********************************************************************************
** Form generated from reading UI file 'shezhi4.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEZHI4_H
#define UI_SHEZHI4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_shezhi4
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *shezhi4)
    {
        if (shezhi4->objectName().isEmpty())
            shezhi4->setObjectName(QStringLiteral("shezhi4"));
        shezhi4->resize(452, 551);
        label = new QLabel(shezhi4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, -20, 491, 631));
        label->setStyleSheet(QStringLiteral("background-image: url(:/IMG_9262.JPG);"));
        label_2 = new QLabel(shezhi4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 451, 571));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/QQ\345\233\276\347\211\20720180713104411.png);"));

        retranslateUi(shezhi4);

        QMetaObject::connectSlotsByName(shezhi4);
    } // setupUi

    void retranslateUi(QDialog *shezhi4)
    {
        shezhi4->setWindowTitle(QApplication::translate("shezhi4", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class shezhi4: public Ui_shezhi4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEZHI4_H
