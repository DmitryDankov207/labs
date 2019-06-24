#ifndef QUEUE_H
#define QUEUE_H
#include <QString>

struct Node {
    QString data;
    Node *next;
};

struct _Queue {
    int size;
    Node *first;
    Node *last;
};

class Queue {

public:

    Queue();

    static void CreateQueue(_Queue *Q) {
        Q->first = new Node;
        Q->first->next = NULL;
        Q->last = Q->first;
    }

    static bool Full(_Queue *Q) {
        return Q->first == Q->last;
    }

    static QString Top(const _Queue *Q) {
        return Q->first->next->data;
    }

    static void Add(_Queue *Q, QString *value) {
        Q->last->next = new Node;
        Q->last = Q->last->next;
        Q->last->data = *value;
        Q->last->next = NULL;
    }

    static void Remove(_Queue *Q, QString value) {
        Node * element = new Node;
        element = Q->first;
        for (;;) {
            if(element->next) {
                if(element->next->data == value) {
                    Node * removableElement = element->next;
                    element->next = element->next->next;
                    delete removableElement;
                    break;
                }
                element = element->next;
            }
            else break;
        }
    }
};

#endif // QUEUE_H
