/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

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

class Ui_Log
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *zh;
    QLineEdit *pass;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_8;

    void setupUi(QDialog *Log)
    {
        if (Log->objectName().isEmpty())
            Log->setObjectName(QStringLiteral("Log"));
        Log->resize(1078, 654);
        Log->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(Log);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(700, 170, 201, 41));
        label_3->setStyleSheet(QStringLiteral("font: 20pt \"AcadEref\";"));
        label_2 = new QLabel(Log);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 30, 571, 131));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\232\266\344\271\246\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Log);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(640, 170, 371, 371));
        label_4->setStyleSheet(QLatin1String("background-color: rgb(220, 255, 255);\n"
"background-color: rgb(239, 235, 243);\n"
"background-color: rgb(246, 255, 255);"));
        label_5 = new QLabel(Log);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(760, 190, 161, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\271\274\345\234\206\";\n"
"color: rgb(18, 66, 238);"));
        zh = new QLineEdit(Log);
        zh->setObjectName(QStringLiteral("zh"));
        zh->setGeometry(QRect(720, 270, 261, 51));
        pass = new QLineEdit(Log);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(720, 360, 261, 51));
        pass->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(Log);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 280, 51, 41));
        label_7 = new QLabel(Log);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(660, 370, 51, 31));
        pushButton = new QPushButton(Log);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 460, 191, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(64, 137, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"AcadEref\";\n"
"background-color: rgb(87, 112, 255);"));
        label = new QLabel(Log);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-120, -90, 1421, 751));
        label->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/b8389b504fc2d56293ce80d4ec1190ef77c66cc0.jpg);"));
        label_8 = new QLabel(Log);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 120, 331, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"font: 12pt \"AcadEref\";\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        zh->raise();
        pass->raise();
        label_6->raise();
        label_7->raise();
        pushButton->raise();
        label_8->raise();

        retranslateUi(Log);

        QMetaObject::connectSlotsByName(Log);
    } // setupUi

    void retranslateUi(QDialog *Log)
    {
        Log->setWindowTitle(QApplication::translate("Log", "Dialog", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("Log", "<html><head/><body><p><span style=\" font-size:36pt;\">\346\231\272\350\203\275\347\273\204\345\215\267\344\270\216\350\200\203\350\257\225\347\263\273\347\273\237</span></p><p><span style=\" font-size:36pt;\"><br/></span></p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Log", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\347\231\273\351\231\206</span></p></body></html>", Q_NULLPTR));
        zh->setText(QString());
        pass->setText(QString());
        label_6->setText(QApplication::translate("Log", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\345\217\267</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Log", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Log", "\347\231\273\351\231\206", Q_NULLPTR));
        label->setText(QString());
        label_8->setText(QApplication::translate("Log", "\345\210\266\344\275\234\344\272\272\357\274\232  \350\202\226\345\262\270\346\230\237 \347\275\227\344\270\226\351\233\204 \350\264\272\346\235\260\346\200\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Log: public Ui_Log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
