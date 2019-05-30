/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QRadioButton *A;
    QPushButton *pushButton;
    QRadioButton *B;
    QRadioButton *C;
    QRadioButton *D;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *theTime;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label;
    QRadioButton *E;
    QLabel *label_3;

    void setupUi(QDialog *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QStringLiteral("test"));
        test->resize(996, 605);
        A = new QRadioButton(test);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(260, 390, 115, 31));
        A->setStyleSheet(QStringLiteral("font: 14pt \"AcadEref\";"));
        pushButton = new QPushButton(test);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 460, 161, 81));
        pushButton->setStyleSheet(QLatin1String("font: 18pt \"AcadEref\";\n"
"background-color: rgb(85, 255, 255);"));
        B = new QRadioButton(test);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(430, 390, 115, 31));
        B->setStyleSheet(QStringLiteral("font: 14pt \"AcadEref\";"));
        C = new QRadioButton(test);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(600, 390, 115, 31));
        C->setStyleSheet(QStringLiteral("font: 14pt \"AcadEref\";"));
        D = new QRadioButton(test);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(750, 390, 115, 31));
        D->setStyleSheet(QStringLiteral("font: 14pt \"AcadEref\";"));
        pushButton_2 = new QPushButton(test);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 190, 101, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 198, 178);"));
        pushButton_3 = new QPushButton(test);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 290, 101, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pushButton_6 = new QPushButton(test);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(240, 460, 161, 81));
        pushButton_6->setStyleSheet(QLatin1String("font: 18pt \"AcadEref\";\n"
"background-color: rgb(0, 255, 255);"));
        theTime = new QLabel(test);
        theTime->setObjectName(QStringLiteral("theTime"));
        theTime->setGeometry(QRect(840, 90, 211, 51));
        label_2 = new QLabel(test);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 100, 131, 41));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"AcadEref\";"));
        textBrowser = new QTextBrowser(test);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(190, 161, 741, 201));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"background-color: rgb(193, 254, 255);"));
        label = new QLabel(test);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1001, 611));
        label->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/t01709fd5e4e2d72726.jpg);"));
        E = new QRadioButton(test);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(870, 390, 111, 31));
        label_3 = new QLabel(test);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 40, 171, 81));
        label_3->setStyleSheet(QStringLiteral("font: 75 26pt \"AcadEref\";"));
        E->raise();
        label->raise();
        A->raise();
        pushButton->raise();
        B->raise();
        C->raise();
        D->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_6->raise();
        theTime->raise();
        label_2->raise();
        textBrowser->raise();
        label_3->raise();

        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QDialog *test)
    {
        test->setWindowTitle(QApplication::translate("test", "Dialog", Q_NULLPTR));
        A->setText(QApplication::translate("test", " A", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test", "\344\270\213\344\270\200\351\242\230", Q_NULLPTR));
        B->setText(QApplication::translate("test", " B", Q_NULLPTR));
        C->setText(QApplication::translate("test", " C", Q_NULLPTR));
        D->setText(QApplication::translate("test", " D", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("test", "\346\232\202\345\201\234", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("test", "\351\207\215\345\201\232", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("test", "\344\270\212\344\270\200\351\242\230", Q_NULLPTR));
        theTime->setText(QApplication::translate("test", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("test", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("test", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe \351\273\221\344\275\223 Std R'; font-size:16pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label->setText(QString());
        E->setText(QApplication::translate("test", "E", Q_NULLPTR));
        label_3->setText(QApplication::translate("test", "\350\200\203\350\257\225\344\270\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
