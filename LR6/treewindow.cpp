#include "treewindow.h"
#include "ui_treewindow.h"
#include "additemwindow.h"
#include <QMessageBox>
#include "treeviewwindow.h"

TreeWindow::TreeWindow(Node_t * tree, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TreeWindow)
{
    ui->setupUi(this);

    this->tree = tree;

}

TreeWindow::~TreeWindow()
{
    delete ui;
}

void TreeWindow::RefreshTree() {
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    if(!tree) return;
    QTreeWidgetItem * head = new QTreeWidgetItem;
    head->setText(0, QString::number(tree->key) + " " + tree->str);
    ui->treeWidget->addTopLevelItem(head);
    QTreeWidgetItem * left = new QTreeWidgetItem;
    QTreeWidgetItem * right = new QTreeWidgetItem;


    AddElement(tree->left, left, 0);
    AddElement(tree->right, right, 1);
    head->addChild(left);
    head->addChild(right);
}

void TreeWindow::AddElement(Node_t *root, QTreeWidgetItem *item, int row) {
    if(!root) return;

    QTreeWidgetItem * left = new QTreeWidgetItem;
    QTreeWidgetItem * right = new QTreeWidgetItem;
    item->addChild(left);
    item->addChild(right);

    item->setText(row, QString::number(root->key) + " " + root->str);
    AddElement(root->left, left, 0);
    AddElement(root->right, right, 1);

}

void TreeWindow::on_pushButton_clicked()
{
    AddItemWindow * addWindow = new AddItemWindow;
    addWindow->setModal(true);
    addWindow->exec();
    Node_t *tree1 = new Node_t;
    Tree::push_t(&tree, addWindow->key, addWindow->str);
    RefreshTree();
}

void TreeWindow::on_pushButton_4_clicked()
{
    TreeViewWindow * window = new TreeViewWindow(tree);
    window->setModal(true);
    window->exec();
}
