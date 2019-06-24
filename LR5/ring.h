#ifndef RING_H
#define RING_H
#include <QString>
#include <QStringList>

struct RNode{
    QString data;
    RNode *next;
    RNode *prev;
};

struct _Ring {
    int size;
    RNode * current;
    _Ring() {
        this->size = 0;
        this->current = NULL;
    }
};

class Ring
{
public:
    Ring();

    static void CreateRing(_Ring *R) {
        R = new _Ring;
        R->size = 0;
        R->current = NULL;
    }

    static void Add(_Ring *R, const QString *value) {
        RNode *tmp = new RNode;
        tmp->data = *value;
        if(!R->current) {
            R->current = tmp;
            tmp->next = tmp->prev = tmp;
        } else {
            tmp->next = R->current;
            R->current->prev->next = tmp;
            tmp->prev = R->current->prev;
            R->current->prev = tmp;
            R->current = tmp;
        }
        R->size++;
    }

    static void Remove(_Ring *R, const QString * value) {
        if(R->current) {
            RNode * removable = new RNode;
            removable = R->current;
            for (int i = 0; i < R->size; i++) {
                if(removable->data == *value) {
                    removable->prev->next = removable->next;
                    removable->next->prev = removable->prev;

                    delete removable;
                    break;
                } else
                    removable = removable->next;
            }
            delete removable;
        }
    }

    static QStringList RingToQStringList(_Ring * R) {
        QStringList output = QStringList();
        for (int i = 0; i < R->size; i++) {
            output.push_back(R->current->data);
            R->current = R->current->next;
        }
        R->current = R->current->next;
        return output;

    }
};

#endif // RING_H
