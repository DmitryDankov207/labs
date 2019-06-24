#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myexception.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createWindow.setModal(true);

    Book book = Book();
        book.author = "sfsg";
        book.publishingHouse = "svgsg";
        book.publishingDate = 2005;
        book.title = "svbgr";
        book.size = 200;
        book.id = list.GetSize();
        list.Push(book);
        book.author = "me";
        book.publishingHouse = "svgsg";
        book.publishingDate = 2019;
        book.title = "svbgr";
        book.size = 124;
        book.id = list.GetSize();
        list.Push(book);
        book.id = list.GetSize();
        book.author = "smb";
        book.publishingHouse = "svgsg";
        book.publishingDate = 2002;
        book.title = "svbgr";
        book.size = 35;
        list.Push(book);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_deleteButton_clicked()
{
    try {
        if(!ui->listWidget->currentItem())
            throw MyException();
        list.Pop(ui->listWidget->currentItem()->text().split("\n")[1].toInt());
        delete ui->listWidget->currentItem();
    } catch (MyException &e) {
        QMessageBox *mes = new QMessageBox;
        mes->setText(e.Message());
        mes->addButton(QMessageBox::Ok);
        mes->exec();
    }
}

void MainWindow::on_action_4_triggered()
{
    ui->listWidget->clear();
    PrintList(list.GetHead());
}

void MainWindow::PrintList(const Element *head) {
    while (head) {
        ui->listWidget->addItem(&list.GetBookByAttribute({QString::number(head->value.id)}, {"id"})[0]);
        head = head->next;
    }
}

void MainWindow::on_action_3_triggered()
{
    ui->listWidget->clear();
}

void MainWindow::on_action_5_triggered()
{
    createWindow.exec();

    list.Push(createWindow.book);
    on_action_4_triggered();
}

void MainWindow::on_action_Id_triggered()
{
    SingleAttributeSearchWindow * searchWindow1 = new SingleAttributeSearchWindow(this);
    searchWindow1->setModal(true);
    searchWindow1->exec();

    on_action_3_triggered();
    const Element * head = list.GetHead();
    while(head){
        if(head->value.id == searchWindow1->attribute.toInt())
            ui->listWidget->addItem(list.ConvertBookToListWidget(&head->value));
        head = head->next;
    }

}

void MainWindow::on_action_triggered()
{
    SingleAttributeSearchWindow * searchWindow1 = new SingleAttributeSearchWindow(this);
    searchWindow1->setModal(true);
    searchWindow1->exec();

    on_action_3_triggered();
    const Element * head = list.GetHead();
    while(head){
        if(head->value.author.contains(searchWindow1->attribute))
            ui->listWidget->addItem(list.ConvertBookToListWidget(&head->value));
        head = head->next;
    }
}

void MainWindow::on_action_2_triggered()
{
    PluralAttributeSearchWindow * searchWindow1 = new PluralAttributeSearchWindow(this);
    searchWindow1->setModal(true);
    searchWindow1->exec();

    on_action_3_triggered();
    const Element * head = list.GetHead();
    while(head){
        if(head->value.title == searchWindow1->attribute1 &&
                head->value.publishingDate == searchWindow1->attribute2.toInt())
            ui->listWidget->addItem(list.ConvertBookToListWidget(&head->value));
        head = head->next;
    }
}
