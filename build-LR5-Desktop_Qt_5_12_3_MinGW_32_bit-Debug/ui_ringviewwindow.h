/********************************************************************************
** Form generated from reading UI file 'ringviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RINGVIEWWINDOW_H
#define UI_RINGVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RingViewWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *RingViewWindow)
    {
        if (RingViewWindow->objectName().isEmpty())
            RingViewWindow->setObjectName(QString::fromUtf8("RingViewWindow"));
        RingViewWindow->resize(374, 296);
        verticalLayout = new QVBoxLayout(RingViewWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(RingViewWindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(RingViewWindow);

        QMetaObject::connectSlotsByName(RingViewWindow);
    } // setupUi

    void retranslateUi(QDialog *RingViewWindow)
    {
        RingViewWindow->setWindowTitle(QApplication::translate("RingViewWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RingViewWindow: public Ui_RingViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RINGVIEWWINDOW_H
