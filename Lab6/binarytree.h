#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <QtCore>
#include <QtGui>
#include <QPair>
#include <QString>
#include <QList>

class BinaryTree
{
private:
    struct t_node {
        t_node *t_right;
        QPair<int, QString> t_info;
        t_node *t_left;
        int t_height;

        t_node()
        {
            t_right = nullptr;
            t_left = nullptr;
            t_height = 1;
        }
        t_node(QPair<int, QString> value)
        {
            t_right = nullptr;
            t_left = nullptr;
            t_info = value;
            t_height = 1;
        }

        int key()
        {
            return t_info.first;
        }
        QString value()
        {
            return t_info.second;
        }

        void setKey(const int &key)
        {
            t_info.first = key;
        }
        void setValue(const QString &value)
        {
            t_info.second = value;
        }
    };

    t_node *m_root;

    static BinaryTree::t_node *addRecursion(t_node *root, QPair<int, QString> value);
    static QString findRecursion(t_node *root, const int &key);
    static BinaryTree::t_node *removeRecursion(t_node *root, const int &key);

    static t_node *balance(t_node *root);

    static int height(t_node *root);
    static int balanceFactor(t_node *root);
    static void updateHeight(t_node *root);

    static t_node *rotateRight(t_node *root);
    static t_node *rotateLeft(t_node *root);

    static t_node *min(t_node *root);
    static t_node *max(t_node *root);

    static void forwardRecursion(t_node *root, QList<QString> &output);
    static void backwardRecursion(t_node *root, QList<QString> &output);
    static void symmetricRecursion(t_node *root, QList<QString> &output);

    static void setModelRecursion(t_node *root, QStandardItem *itemRoot);

public:
    BinaryTree();
    ~BinaryTree();

    void add(int key, QString value);
    QString find(const int &key);
    void remove(const int &key);

    bool empty();

    int minKey();
    int maxKey();

    QList<QString> forward();
    QList<QString> backward();
    QList<QString> symmetric();

    int completeTask();
    void findSingleChildCount(t_node *root, int *count);
    void setModel(QStandardItemModel *model);
};

#endif // BINARYTREE_H
