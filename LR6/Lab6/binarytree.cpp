#include "binarytree.h"


BinaryTree::t_node *BinaryTree::addRecursion(BinaryTree::t_node *root, QPair<int, QString> value)
{
    if(!root)
        return new t_node(value);
    if(value.first < root->key ())
        root->t_left = addRecursion (root->t_left, value);
    else if(value.first > root->key())
        root->t_right = addRecursion (root->t_right, value);

    return balance (root);
}

QString BinaryTree::findRecursion(BinaryTree::t_node *root, const int &key)
{
    if(root->key () == key)
        return root->value ();

    if(key < root->key ())
        if(root->t_left != nullptr)
            return findRecursion (root->t_left, key);

    if(key > root->key ())
        if(root->t_right != nullptr)
            return findRecursion (root->t_right, key);

    return nullptr;
}

BinaryTree::t_node *BinaryTree::removeRecursion(BinaryTree::t_node *root, const int &key)
{
    if(root == nullptr)
        return root;

    if(key < root->key ())
        root->t_left = balance(removeRecursion (root->t_left, key));
    else if (key > root->key ())
        root->t_right = balance (removeRecursion (root->t_right, key));
    else if (root->t_left != nullptr && root->t_right != nullptr) {
        t_node *minimum = min(root->t_right);
        root->setKey (minimum->key ());
        root->setValue (minimum->value ());
        root->t_right = balance(removeRecursion (root->t_right, root->key ()));
    } else if(root->t_left != nullptr) {
        t_node *temp = root;
        root = balance(root->t_left);
        delete temp;
    } else {
        t_node *temp = root;
        root = balance (root->t_right);
        delete temp;
    }

    return balance(root);
}

BinaryTree::t_node *BinaryTree::balance(t_node *root)
{
    if(root == nullptr)
        return root;

    updateHeight (root);
    if(balanceFactor (root) == 2) {
        if(balanceFactor (root->t_right) < 0)
            root->t_right = rotateRight (root->t_right);
        return rotateLeft (root);
    }

    if(balanceFactor (root) == -2) {
        if(balanceFactor (root->t_left) > 0)
            root->t_left = rotateLeft (root->t_left);
        return rotateRight (root);
    }

    return root;
}

int BinaryTree::height(BinaryTree::t_node *root)
{
    return root ? root->t_height : 0;
}

int BinaryTree::balanceFactor(BinaryTree::t_node *root)
{
    return height (root->t_right) - height (root->t_left);
}

void BinaryTree::updateHeight(BinaryTree::t_node *root)
{
    int hLeft = height (root->t_left);
    int hRight = height (root->t_right);

    root->t_height = (hLeft > hRight ? hLeft : hRight) + 1;
}

BinaryTree::t_node *BinaryTree::rotateRight(BinaryTree::t_node *root)
{
    t_node *axis = root->t_left;
    root->t_left = axis->t_right;
    axis->t_right = root;

    updateHeight (root);
    updateHeight (axis);

    return axis;
}

BinaryTree::t_node *BinaryTree::rotateLeft(BinaryTree::t_node *root)
{
    t_node *axis = root->t_right;
    root->t_right = axis->t_left;
    axis->t_left = root;

    updateHeight (root);
    updateHeight (axis);

    return axis;
}

BinaryTree::t_node *BinaryTree::min(t_node *root)
{
    if(root->t_left == nullptr)
        return root;
    else
        return min(root->t_left);
}

BinaryTree::t_node *BinaryTree::max(BinaryTree::t_node *root)
{
    if(root->t_right == nullptr)
        return root;
    else
        return max(root->t_right);
}

void BinaryTree::forwardRecursion(BinaryTree::t_node *root, QList<QString> &output)
{
    if(root == nullptr)
        return ;

    output.append (root->value ());

    if(root->t_left != nullptr)
        forwardRecursion (root->t_left, output);

    if(root->t_right != nullptr)
        forwardRecursion (root->t_right, output);
}

void BinaryTree::backwardRecursion(BinaryTree::t_node *root, QList<QString> &output)
{
    if(root == nullptr)
        return ;

    if(root->t_left != nullptr)
        backwardRecursion (root->t_left, output);

    if(root->t_right != nullptr)
        backwardRecursion (root->t_right, output);

    output.append (root->value ());
}

void BinaryTree::symmetricRecursion(BinaryTree::t_node *root, QList<QString> &output)
{
    if(root == nullptr)
        return ;

    if(root->t_left != nullptr)
        symmetricRecursion (root->t_left, output);

    output.append (root->value ());

    if(root->t_right != nullptr)
        symmetricRecursion (root->t_right, output);
}

void BinaryTree::setModelRecursion(BinaryTree::t_node *root, QStandardItem *itemRoot)
{
    if(root == nullptr)
        return;

    QStandardItem *item = new QStandardItem(root->value ());
    itemRoot->appendRow (item);

    if(root->t_right != nullptr)
        setModelRecursion (root->t_right, item);

    if(root->t_left != nullptr)
        setModelRecursion (root->t_left, item);
}

BinaryTree::BinaryTree()
{
    m_root = nullptr;
}

BinaryTree::~BinaryTree()
{
    while(m_root)
        remove (m_root->key ());
}

void BinaryTree::add(int key, QString value)
{
    QPair<int, QString> info = qMakePair(key, value);
    m_root = addRecursion (m_root, info);
}

QString BinaryTree::find(const int &key)
{
    if(!this->empty ())
        return findRecursion (m_root, key);
    else
        return  nullptr;
}

void BinaryTree::remove(const int &key)
{
    m_root = removeRecursion(m_root, key);
}

bool BinaryTree::empty()
{
    if(m_root == nullptr)
        return true;
    else
        return false;
}

int BinaryTree::minKey()
{
    return min(m_root)->key ();
}

int BinaryTree::maxKey()
{
    return max(m_root)->key ();
}

QList<QString> BinaryTree::forward()
{
    QList<QString> output;
    forwardRecursion (m_root, output);
    return output;
}

QList<QString> BinaryTree::backward()
{
    QList<QString> output;
    backwardRecursion (m_root, output);
    return output;
}

QList<QString> BinaryTree::symmetric()
{
    QList<QString> output;
    symmetricRecursion (m_root, output);
    return output;
}

void BinaryTree::swapMaxMin()
{
    if(this->empty ())
        return;

    QString minValue = min(m_root)->value ();
    min (m_root)->setValue (max (m_root)->value ());
    max(m_root)->setValue (minValue);
}

void BinaryTree::setModel(QStandardItemModel *model)
{
    model->clear ();
    QStandardItem *rootItem = new QStandardItem("Binary Search Tree");
    model->appendRow (rootItem);

    setModelRecursion (m_root, rootItem);
}
