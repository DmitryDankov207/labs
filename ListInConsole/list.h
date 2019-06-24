#ifndef LIST_H
#define LIST_H
#include <QString>

struct Book {
    int id;
    QString author;
    QString title;
    QString publishingHouse;
    int publishingYear;
    int size;
    Book * next;
    Book * prev;
};

class List
{
protected:

    Book * head;
    int size;
public:
    List();
    void Push(Book *);
    Book * GetBook(int);
    void Pop(int);
    int GetSize();
};

#endif // LIST_H
