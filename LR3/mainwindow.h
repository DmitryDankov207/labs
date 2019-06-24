#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createwindow.h"
#include "singleattributesearchwindow.h"
#include "pluralattributesearchwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_deleteButton_clicked();

    void on_action_4_triggered();

    void on_action_3_triggered();

    void on_action_5_triggered();

    void on_action_Id_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    CreateWindow createWindow;
    Ui::MainWindow *ui;
    List list;
    void PrintList(const Element*);
};

#endif // MAINWINDOW_H
