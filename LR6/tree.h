#ifndef TREE_H
#define TREE_H
#include<QString>
#include<QStringList>
#include<QTextEdit>

struct Node_t {
    QString str;
    int key;
    Node_t *left;
    Node_t *right;
    Node_t  *parent;
};

class Tree
{
public:
    Tree();

    static Node_t* getFreeNode(int key, QString str, Node_t *parent) {
        Node_t* tmp = new Node_t;
        tmp->left = tmp->right = nullptr;
        tmp->key = key;
        tmp->str = str;
        tmp->parent = parent;
        return tmp;
    }

    static void push_t(Node_t **head, int key, QString str) {
        if (!(*head))
            return;
        else {
            Node_t *tmp = *head;
            while (tmp) {
                if (key >= tmp->key)
                    if (tmp->right)
                        tmp = tmp->right;
                    else {
                        tmp->right = getFreeNode(key, str, tmp);
                        return;
                    }
                else if (key < tmp->key)
                    if (tmp->left)
                        tmp = tmp->left;
                    else {
                        tmp->left = getFreeNode(key, str, tmp);
                        return;
                    }
            }
        }
    }

    static Node_t* GetMinNode(Node_t *root) {
        while (root->left) {
            root = root->left;
        }
        return root;
    }

    static Node_t* GetMaxNode(Node_t *root) {
        while (root->right) {
            root = root->right;
        }
        return root;
    }

    static Node_t * DeleteNode(Node_t *root, int key) {
        if(!root) return nullptr;
        if(root->key > key) {
            root->left = DeleteNode(root->left, key);
            return root;
        } else if(root->key > key) {
            root->right = DeleteNode(root->right, key);
            return root;
        } else {
            if(root->left && root->right) {
                Node_t * locMax = GetMaxNode(root->left);
                root->key = locMax->key;
                root->str = locMax->str;
                root->left = DeleteNode(root->left, locMax->key);
                return root;
            } else if(root->left) {
                Node_t *tmp = root->left;
                free(root);
                return tmp;
            } else if(root->right) {
                Node_t *tmp = root->right;
                free(root);
                return tmp;
            } else {
                free(root);
                return nullptr;
            }
        }
    }

    static void InOrderTravers(Node_t * root, QTextEdit * textEdit) {
        if(root) return InOrderTravers(root->left, textEdit),
                textEdit->setText(textEdit->toPlainText() + "\n" +
                                  QString::number(root->key) + " " + root->str),
                InOrderTravers(root->right, textEdit);
    }
};

#endif // TREE_H
