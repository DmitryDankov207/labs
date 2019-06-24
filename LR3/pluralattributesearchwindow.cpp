#include "pluralattributesearchwindow.h"
#include "ui_pluralattributesearchwindow.h"

PluralAttributeSearchWindow::PluralAttributeSearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluralAttributeSearchWindow)
{
    ui->setupUi(this);
}

PluralAttributeSearchWindow::~PluralAttributeSearchWindow()
{
    delete ui;
}

void PluralAttributeSearchWindow::on_buttonBox_accepted()
{
    attribute1 = ui->lineEdit->text();
    attribute2 = QString::number(ui->dateEdit->date().year());
}
