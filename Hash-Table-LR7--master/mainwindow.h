#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sortedhashtable.h>

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
    void on_pushButton_clicked();
    void updateUI();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    SortedHashTable table;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
