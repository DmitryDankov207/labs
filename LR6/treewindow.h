#ifndef TREEWINDOW_H
#define TREEWINDOW_H

#include <QDialog>
#include "tree.h"
#include <QTreeWidgetItem>

namespace Ui {
class TreeWindow;
}

class TreeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TreeWindow(Node_t *tree = nullptr, QWidget *parent = nullptr);
    ~TreeWindow();
    Node_t * tree;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    void RefreshTree();
    void AddElement(Node_t * root, QTreeWidgetItem * parentItem, int row);
    Ui::TreeWindow *ui;
};

#endif // TREEWINDOW_H
