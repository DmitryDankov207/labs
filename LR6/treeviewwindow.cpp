#include "treeviewwindow.h"
#include "ui_treeviewwindow.h"

TreeViewWindow::TreeViewWindow(Node_t *tree, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TreeViewWindow)
{
    ui->setupUi(this);

    Tree::InOrderTravers(tree, ui->textEdit);
}

TreeViewWindow::~TreeViewWindow()
{
    delete ui;
}
