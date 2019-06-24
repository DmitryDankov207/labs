/********************************************************************************
** Form generated from reading UI file 'treeviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEVIEWWINDOW_H
#define UI_TREEVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TreeViewWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *TreeViewWindow)
    {
        if (TreeViewWindow->objectName().isEmpty())
            TreeViewWindow->setObjectName(QString::fromUtf8("TreeViewWindow"));
        TreeViewWindow->resize(640, 480);
        verticalLayout = new QVBoxLayout(TreeViewWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(TreeViewWindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(TreeViewWindow);

        QMetaObject::connectSlotsByName(TreeViewWindow);
    } // setupUi

    void retranslateUi(QDialog *TreeViewWindow)
    {
        TreeViewWindow->setWindowTitle(QApplication::translate("TreeViewWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeViewWindow: public Ui_TreeViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEVIEWWINDOW_H
