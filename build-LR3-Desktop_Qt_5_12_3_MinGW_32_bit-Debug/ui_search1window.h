/********************************************************************************
** Form generated from reading UI file 'search1window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH1WINDOW_H
#define UI_SEARCH1WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Serach1Window
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *AttributeLabel;
    QLineEdit *AttributeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Serach1Window)
    {
        if (Serach1Window->objectName().isEmpty())
            Serach1Window->setObjectName(QString::fromUtf8("Serach1Window"));
        Serach1Window->resize(320, 134);
        horizontalLayout = new QHBoxLayout(Serach1Window);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Serach1Window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AttributeLabel = new QLabel(groupBox);
        AttributeLabel->setObjectName(QString::fromUtf8("AttributeLabel"));

        horizontalLayout_2->addWidget(AttributeLabel);

        AttributeEdit = new QLineEdit(groupBox);
        AttributeEdit->setObjectName(QString::fromUtf8("AttributeEdit"));

        horizontalLayout_2->addWidget(AttributeEdit);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(Serach1Window);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(Serach1Window);
        QObject::connect(buttonBox, SIGNAL(accepted()), Serach1Window, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Serach1Window, SLOT(reject()));

        QMetaObject::connectSlotsByName(Serach1Window);
    } // setupUi

    void retranslateUi(QDialog *Serach1Window)
    {
        Serach1Window->setWindowTitle(QApplication::translate("Serach1Window", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Serach1Window", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        AttributeLabel->setText(QApplication::translate("Serach1Window", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serach1Window: public Ui_Serach1Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH1WINDOW_H
