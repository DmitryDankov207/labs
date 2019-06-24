#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <QString>
#include<QStringList>

class HashTable
{
protected:
    int capacity;    
    void InitTable();
public:
    struct Node{
        double key;
        Node *next;
    };
    QString StackToString(const Node *head);
    Node ** Table;
    HashTable(int capacity = 31);
    int Hash(double);
    void Push(double);
    double Pop(int);
    double pop(Node**);
    void Delete(double);
};

#endif // HASHTABLE_H
