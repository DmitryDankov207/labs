/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(418, 121);
        horizontalLayout = new QHBoxLayout(AddWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(AddWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AddWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(AddWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QApplication::translate("AddWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("AddWindow", "\320\241\321\202\321\200\320\276\320\272\320\260: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
