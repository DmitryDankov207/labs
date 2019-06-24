#include "search1window.h"
#include "ui_serach1window.h"

Search1Window::Search1Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search1Window)
{
    ui->setupUi(this);
}

Search1Window::~Search1Window()
{
    delete ui;
}
