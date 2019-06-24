/********************************************************************************
** Form generated from reading UI file 'treewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEWINDOW_H
#define UI_TREEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TreeWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TreeWindow)
    {
        if (TreeWindow->objectName().isEmpty())
            TreeWindow->setObjectName(QString::fromUtf8("TreeWindow"));
        TreeWindow->resize(640, 480);
        verticalLayout = new QVBoxLayout(TreeWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(TreeWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        pushButton = new QPushButton(TreeWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(TreeWindow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(TreeWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(TreeWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TreeWindow);

        QMetaObject::connectSlotsByName(TreeWindow);
    } // setupUi

    void retranslateUi(QDialog *TreeWindow)
    {
        TreeWindow->setWindowTitle(QApplication::translate("TreeWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("TreeWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QApplication::translate("TreeWindow", "\320\222\321\213\320\262\320\276\320\264 pre-order", nullptr));
        pushButton_3->setText(QApplication::translate("TreeWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("TreeWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeWindow: public Ui_TreeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEWINDOW_H
