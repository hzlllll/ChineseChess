/********************************************************************************
** Form generated from reading UI file 'ChineseChess.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINESECHESS_H
#define UI_CHINESECHESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(722, 448);
        Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/\350\203\214\346\231\257.jpg);\n"
"background-image: url(:/new/prefix1/\350\203\214\346\231\257.jpg);\n"
""));
        Dialog->setInputMethodHints(Qt::ImhNone);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 220, 93, 28));

        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\345\274\200\345\247\213\345\257\271\345\261\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINESECHESS_H
