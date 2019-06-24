#include "createwindow.h"
#include "ui_createwindow.h"

CreateWindow::CreateWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateWindow)
{
    ui->setupUi(this);
}

CreateWindow::~CreateWindow()
{
    delete ui;
}

void CreateWindow::on_buttonBox_accepted()
{
    book.title = ui->TitleEdit->text();
    book.author = ui->AuthorEdit->text();
    book.publishingHouse = ui->PublishingHouseEdit->text();
    book.publishingDate = ui->dateEdit->date().year();
    book.id = id++;
    book.size = ui->SizeEdit->text().toInt();
    ClearFields();
}

void CreateWindow::ClearFields() {
    ui->TitleEdit->text().clear();
    ui->AuthorEdit->text().clear();
    ui->PublishingHouseEdit->text().clear();
    ui->dateEdit->date() = QDateTime::currentDateTime().date();
    ui->SizeEdit->text() = "1";
}
