#include "list.h"

List::List() {
    size = 0;
    head = nullptr;
    head->next = head->prev = nullptr;
}

void List::Push(Book * book) {
    book->id = size;
    book->next = head;
    book->prev = nullptr;
    head->prev = book;
    (*head) = (*book);
    size++;
}

Book * List::GetBook(int id) {
    while(head->next) {
        if(head->id == id)
            return head;

        head = head->next;
    }

    return nullptr;
}

void List::Pop(int id) {
    Book * book = GetBook(id);
    book->prev->next = book->next;
    book->next->prev = book->prev;
    delete book;
    size--;
}

int List::GetSize() {
    return size;
}
