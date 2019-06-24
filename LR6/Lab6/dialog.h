#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QTreeView>
#include <QtGui>
#include "binarytree.h"

namespace Ui
{
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_add_released();

    void on_pushButton_search_released();

    void on_pushButton_delete_released();

    void on_pushButton_swap_released();

    void updateTreeView();

    void on_tableWidget_input_cellDoubleClicked(int row, int column);

private:
    Ui::Dialog *ui;
    BinaryTree binTree;
    QStandardItemModel *model;
};

#endif // DIALOG_H
