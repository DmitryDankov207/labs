/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Id;
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *deleteButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 414);
        action_Id = new QAction(MainWindow);
        action_Id->setObjectName(QString::fromUtf8("action_Id"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_5);
        menu_2->addAction(action_Id);
        menu_2->addAction(action);
        menu_2->addAction(action_2);
        menu_3->addAction(action_3);
        menu_3->addAction(action_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Id->setText(QApplication::translate("MainWindow", "\320\277\320\276 Id", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270 \320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216 \320\270 \320\263\320\276\320\264\321\203 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\276\320\272\320\275\320\276 \320\262\321\213\320\262\320\276\320\264\320\260", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\320\265\321\201\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
