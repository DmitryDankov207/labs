#include <QCoreApplication>
#include <list.h>
#include <iostream>

using namespace std;

void PrintList(List & list) {
    for(int i = 0; i < list.GetSize(); i++) {
        Book book = *(list.GetBook(i));
        cout << "\ntitle" << book.title.toStdString();
        cout << "\nauthor" << book.author.toStdString();
        cout << "\npublishingYear" << book.publishingYear;
        cout << "\npublishingHouse" << book.publishingHouse.toStdString();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "hi";
    List list = List();
    Book book = Book();
    book.size = 200;
    book.title = "hi";
    book.author = "smb";
    book.publishingYear = 2000;
    book.publishingHouse = "asdf";
    cout << "\ntitle" << book.title.toStdString();
    cout << "\nauthor" << book.author.toStdString();
    cout << "\npublishingYear" << book.publishingYear;
    cout << "\npublishingHouse" << book.publishingHouse.toStdString();
    list.Push(&book);
    book.size = 210;
    book.title = "hi";
    book.author = "smb1";
    book.publishingYear = 2001;
    book.publishingHouse = "asdf";
    cout << "\ntitle" << book.title.toStdString();
    cout << "\nauthor" << book.author.toStdString();
    cout << "\npublishingYear" << book.publishingYear;
    cout << "\npublishingHouse" << book.publishingHouse.toStdString();
    list.Push(&book);
    PrintList(list);
    cout << "hi";
    return a.exec();
}
