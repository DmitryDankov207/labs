#include "additemwindow.h"
#include "ui_additemwindow.h"

AddItemWindow::AddItemWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemWindow)
{
    ui->setupUi(this);
}

AddItemWindow::~AddItemWindow()
{
    delete ui;
}

void AddItemWindow::on_AddItemWindow_accepted()
{
    key = ui->lineEdit->text().toInt() ? ui->lineEdit->text().toInt() : 0;
    str = ui->lineEdit_2->text();
}
