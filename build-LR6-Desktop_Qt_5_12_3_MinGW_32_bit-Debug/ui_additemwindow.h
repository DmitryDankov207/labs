/********************************************************************************
** Form generated from reading UI file 'additemwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMWINDOW_H
#define UI_ADDITEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddItemWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddItemWindow)
    {
        if (AddItemWindow->objectName().isEmpty())
            AddItemWindow->setObjectName(QString::fromUtf8("AddItemWindow"));
        AddItemWindow->resize(415, 128);
        horizontalLayout = new QHBoxLayout(AddItemWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(AddItemWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        horizontalLayout_2->addLayout(formLayout);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AddItemWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(AddItemWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddItemWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddItemWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddItemWindow);
    } // setupUi

    void retranslateUi(QDialog *AddItemWindow)
    {
        AddItemWindow->setWindowTitle(QApplication::translate("AddItemWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("AddItemWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("AddItemWindow", "\320\232\320\273\321\216\321\207", nullptr));
        label_2->setText(QApplication::translate("AddItemWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemWindow: public Ui_AddItemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMWINDOW_H
