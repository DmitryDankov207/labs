#ifndef TREEVIEWWINDOW_H
#define TREEVIEWWINDOW_H

#include <QDialog>
#include "tree.h"

namespace Ui {
class TreeViewWindow;
}

class TreeViewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TreeViewWindow(Node_t *tree, QWidget *parent = nullptr);
    ~TreeViewWindow();
private:
    Ui::TreeViewWindow *ui;
};

#endif // TREEVIEWWINDOW_H
