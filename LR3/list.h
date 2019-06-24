#ifndef LIST_H
#define LIST_H
#include <QString>
#include <QStringList>
#include <QListWidgetItem>

using namespace std;

struct Book {
    int id;
    QString title;
    QString author;
    int publishingDate;
    QString publishingHouse;
    int size;
};

struct Element {
    Book value;
    Element* next = NULL;
    Element* prev = NULL;
};

class List
{
protected:
    Element* head;
    int size;
public:
    List() {
        head = NULL;
        size = 0;
    }

    void Push(Book value) {
        Element* element = new Element();
        if(head)
            while (head->next) head = head->next;
        element->prev = head;
        element->value = value;
        if(head)
            head->next = element;
        head = element;
        size++;
        while (head->prev) head = head->prev;
    }

    void Pop(int id) {
        while (head) {
            if (head->value.id == id)  {
                Element* tmp = head;
                if (head->prev)
                    head->prev->next = head->next;
                if (head->next)
                    head->next->prev = head->prev;
                if (head->prev)
                    while (head->prev) head = head->prev;
                else
                    head = head->next;

                delete tmp;
                size--;

                return;
            }
            head = head->next;
        }
    }

    int GetSize() {
        return size;
    }

    QListWidgetItem * ConvertBookToListWidget(const Book * book) {
        QStringList item = QStringList({
                                                 book->title,
                                                 QString::number(book->id),
                                                 book->author,
                                                 book->publishingHouse,
                                                 QString::number(book->publishingDate),
                                                 QString::number(book->size)
                                             });
        return new QListWidgetItem (item.join("\n"));
    }

    QListWidgetItem * GetBookByAttribute(QStringList attributes,
                            QStringList attributeNames,
                            const Element* head = NULL) {
        if (!head)
            head = this->head;

        while (head) {
            if(attributes.length() == 1) {
                if(attributeNames[0] == "id"){
                    if (QString::number(head->value.id) == attributes[0])
                        return ConvertBookToListWidget(&(head->value));
                }

                else if(attributeNames[0] == "author") {
                    if (head->value.author == attributes[0])
                        return ConvertBookToListWidget(&(head->value));
                }
            }
            else if(attributeNames[0] == "publishingDate" &&
                    attributeNames[1] == "title") {
                if (QString::number(head->value.publishingDate) ==
                        attributes[0] && head->value.title == attributes[1])
                    return ConvertBookToListWidget(&(head->value));
            }

            head = head->next;
        }

        return new QListWidgetItem("");
    }

    const Element* GetHead() {
        while (head->prev) head = head->prev;
        return head;
    }
};

#endif // LIST_H
