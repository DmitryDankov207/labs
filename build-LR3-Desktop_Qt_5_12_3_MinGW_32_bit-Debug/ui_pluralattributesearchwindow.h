/********************************************************************************
** Form generated from reading UI file 'pluralattributesearchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLURALATTRIBUTESEARCHWINDOW_H
#define UI_PLURALATTRIBUTESEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluralAttributeSearchWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluralAttributeSearchWindow)
    {
        if (PluralAttributeSearchWindow->objectName().isEmpty())
            PluralAttributeSearchWindow->setObjectName(QString::fromUtf8("PluralAttributeSearchWindow"));
        PluralAttributeSearchWindow->resize(319, 147);
        verticalLayout = new QVBoxLayout(PluralAttributeSearchWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(PluralAttributeSearchWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dateEdit);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout_2);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(PluralAttributeSearchWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PluralAttributeSearchWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluralAttributeSearchWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluralAttributeSearchWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluralAttributeSearchWindow);
    } // setupUi

    void retranslateUi(QDialog *PluralAttributeSearchWindow)
    {
        PluralAttributeSearchWindow->setWindowTitle(QApplication::translate("PluralAttributeSearchWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("PluralAttributeSearchWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label->setText(QApplication::translate("PluralAttributeSearchWindow", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("PluralAttributeSearchWindow", "\320\263\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("PluralAttributeSearchWindow", "yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluralAttributeSearchWindow: public Ui_PluralAttributeSearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLURALATTRIBUTESEARCHWINDOW_H
