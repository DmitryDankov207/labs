/********************************************************************************
** Form generated from reading UI file 'singleattributesearchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEATTRIBUTESEARCHWINDOW_H
#define UI_SINGLEATTRIBUTESEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SingleAttributeSearchWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SingleAttributeSearchWindow)
    {
        if (SingleAttributeSearchWindow->objectName().isEmpty())
            SingleAttributeSearchWindow->setObjectName(QString::fromUtf8("SingleAttributeSearchWindow"));
        SingleAttributeSearchWindow->resize(320, 136);
        verticalLayout = new QVBoxLayout(SingleAttributeSearchWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SingleAttributeSearchWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(SingleAttributeSearchWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SingleAttributeSearchWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), SingleAttributeSearchWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SingleAttributeSearchWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(SingleAttributeSearchWindow);
    } // setupUi

    void retranslateUi(QDialog *SingleAttributeSearchWindow)
    {
        SingleAttributeSearchWindow->setWindowTitle(QApplication::translate("SingleAttributeSearchWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("SingleAttributeSearchWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleAttributeSearchWindow: public Ui_SingleAttributeSearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEATTRIBUTESEARCHWINDOW_H
