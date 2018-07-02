/********************************************************************************
** Form generated from reading UI file 'shezhi3.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEZHI3_H
#define UI_SHEZHI3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_shezhi3
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *shezhi3)
    {
        if (shezhi3->objectName().isEmpty())
            shezhi3->setObjectName(QStringLiteral("shezhi3"));
        shezhi3->resize(308, 378);
        label = new QLabel(shezhi3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-240, -180, 651, 731));
        label->setStyleSheet(QStringLiteral("background-image: url(:/IMG_9262.JPG);"));
        label_2 = new QLabel(shezhi3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 311, 381));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/QQ\345\233\276\347\211\20720180713105103.png);"));

        retranslateUi(shezhi3);

        QMetaObject::connectSlotsByName(shezhi3);
    } // setupUi

    void retranslateUi(QDialog *shezhi3)
    {
        shezhi3->setWindowTitle(QApplication::translate("shezhi3", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class shezhi3: public Ui_shezhi3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEZHI3_H
