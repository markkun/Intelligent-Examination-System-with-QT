/********************************************************************************
** Form generated from reading UI file 'shezhi2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEZHI2_H
#define UI_SHEZHI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_shezhi2
{
public:

    void setupUi(QDialog *shezhi2)
    {
        if (shezhi2->objectName().isEmpty())
            shezhi2->setObjectName(QStringLiteral("shezhi2"));
        shezhi2->resize(452, 560);
        shezhi2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/IMG_9262.JPG);"));

        retranslateUi(shezhi2);

        QMetaObject::connectSlotsByName(shezhi2);
    } // setupUi

    void retranslateUi(QDialog *shezhi2)
    {
        shezhi2->setWindowTitle(QApplication::translate("shezhi2", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shezhi2: public Ui_shezhi2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEZHI2_H
