/********************************************************************************
** Form generated from reading UI file 'createwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWINDOW_H
#define UI_CREATEWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *TitleEdit;
    QLabel *label_2;
    QLineEdit *AuthorEdit;
    QLabel *label_3;
    QLineEdit *PublishingHouseEdit;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QSpinBox *SizeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateWindow)
    {
        if (CreateWindow->objectName().isEmpty())
            CreateWindow->setObjectName(QString::fromUtf8("CreateWindow"));
        CreateWindow->resize(480, 280);
        horizontalLayout = new QHBoxLayout(CreateWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(CreateWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 50, 295, 183));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        TitleEdit = new QLineEdit(formLayoutWidget);
        TitleEdit->setObjectName(QString::fromUtf8("TitleEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TitleEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        AuthorEdit = new QLineEdit(formLayoutWidget);
        AuthorEdit->setObjectName(QString::fromUtf8("AuthorEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, AuthorEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        PublishingHouseEdit = new QLineEdit(formLayoutWidget);
        PublishingHouseEdit->setObjectName(QString::fromUtf8("PublishingHouseEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, PublishingHouseEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumDate(QDate(2020, 12, 31));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, dateEdit);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        SizeEdit = new QSpinBox(formLayoutWidget);
        SizeEdit->setObjectName(QString::fromUtf8("SizeEdit"));
        SizeEdit->setMinimum(1);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, SizeEdit);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(CreateWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(CreateWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateWindow)
    {
        CreateWindow->setWindowTitle(QApplication::translate("CreateWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("CreateWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        label->setText(QApplication::translate("CreateWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("CreateWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QApplication::translate("CreateWindow", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QApplication::translate("CreateWindow", "\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("CreateWindow", "yyyy", nullptr));
        label_5->setText(QApplication::translate("CreateWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWindow: public Ui_CreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWINDOW_H
