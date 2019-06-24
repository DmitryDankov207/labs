#include "singleattributesearchwindow.h"
#include "ui_singleattributesearchwindow.h"

SingleAttributeSearchWindow::SingleAttributeSearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingleAttributeSearchWindow)
{
    ui->setupUi(this);
}

SingleAttributeSearchWindow::~SingleAttributeSearchWindow()
{
    delete ui;
}

void SingleAttributeSearchWindow::on_buttonBox_accepted()
{
    attribute = ui->lineEdit->text();
}
