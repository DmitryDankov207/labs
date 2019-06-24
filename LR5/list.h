#ifndef LIST_H
#define LIST_H
#include <QString>

struct Node {
    QString value;
    Node *next;
    Node *prev;
};


class List
{
public:
    List();
};

#endif // LIST_H
