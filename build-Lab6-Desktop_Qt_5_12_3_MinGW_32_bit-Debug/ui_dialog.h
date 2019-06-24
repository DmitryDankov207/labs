/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QPlainTextEdit *textEdit_output;
    QTableWidget *tableWidget_input;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_key;
    QLineEdit *lineEdit_value;
    QPushButton *pushButton_add;
    QPushButton *pushButton_search;
    QPushButton *pushButton_delete;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_findSingleNodeCount;
    QLabel *resultLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(900, 540);
        Dialog->setMinimumSize(QSize(900, 540));
        Dialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout_3 = new QHBoxLayout(Dialog);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeView = new QTreeView(Dialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setLayoutDirection(Qt::LeftToRight);
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(false);
        treeView->setSelectionMode(QAbstractItemView::NoSelection);
        treeView->setTextElideMode(Qt::ElideRight);
        treeView->setRootIsDecorated(false);
        treeView->setUniformRowHeights(false);
        treeView->setItemsExpandable(true);
        treeView->setAnimated(true);
        treeView->setAllColumnsShowFocus(false);
        treeView->setWordWrap(false);
        treeView->setHeaderHidden(true);

        verticalLayout->addWidget(treeView);

        textEdit_output = new QPlainTextEdit(Dialog);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));
        textEdit_output->setReadOnly(true);

        verticalLayout->addWidget(textEdit_output);

        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        tableWidget_input = new QTableWidget(Dialog);
        if (tableWidget_input->columnCount() < 2)
            tableWidget_input->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_input->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_input->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_input->setObjectName(QString::fromUtf8("tableWidget_input"));
        tableWidget_input->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_input->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_input->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_input->horizontalHeader()->setVisible(false);
        tableWidget_input->horizontalHeader()->setHighlightSections(false);
        tableWidget_input->horizontalHeader()->setStretchLastSection(true);
        tableWidget_input->verticalHeader()->setVisible(false);
        tableWidget_input->verticalHeader()->setHighlightSections(false);

        horizontalLayout->addWidget(tableWidget_input);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);

        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 80, 10, 200);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        spinBox_key = new QSpinBox(Dialog);
        spinBox_key->setObjectName(QString::fromUtf8("spinBox_key"));
        spinBox_key->setAlignment(Qt::AlignCenter);
        spinBox_key->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_key->setMaximum(9999999);

        horizontalLayout_2->addWidget(spinBox_key);


        verticalLayout_2->addLayout(horizontalLayout_2);

        lineEdit_value = new QLineEdit(Dialog);
        lineEdit_value->setObjectName(QString::fromUtf8("lineEdit_value"));

        verticalLayout_2->addWidget(lineEdit_value);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_add = new QPushButton(Dialog);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_add);

        pushButton_search = new QPushButton(Dialog);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        sizePolicy.setHeightForWidth(pushButton_search->sizePolicy().hasHeightForWidth());
        pushButton_search->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_search);

        pushButton_delete = new QPushButton(Dialog);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_delete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_findSingleNodeCount = new QPushButton(Dialog);
        pushButton_findSingleNodeCount->setObjectName(QString::fromUtf8("pushButton_findSingleNodeCount"));
        sizePolicy.setHeightForWidth(pushButton_findSingleNodeCount->sizePolicy().hasHeightForWidth());
        pushButton_findSingleNodeCount->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_findSingleNodeCount);

        resultLabel = new QLabel(Dialog);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));

        verticalLayout_3->addWidget(resultLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Binary tree", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_input->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "Key", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_input->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "String", nullptr));
        label->setText(QApplication::translate("Dialog", "Key:", nullptr));
        pushButton_add->setText(QApplication::translate("Dialog", "Add", nullptr));
        pushButton_search->setText(QApplication::translate("Dialog", "Search", nullptr));
        pushButton_delete->setText(QApplication::translate("Dialog", "Delete", nullptr));
        pushButton_findSingleNodeCount->setText(QApplication::translate("Dialog", "Complete task", nullptr));
        resultLabel->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
