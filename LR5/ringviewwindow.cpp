#include "ringviewwindow.h"
#include "ui_ringviewwindow.h"

RingViewWindow::RingViewWindow(_Ring R, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RingViewWindow)
{
    ui->setupUi(this);
    //ui->textEdit->setText((Ring::RingToQStringList(&R)).join("\n"));
    QStringList in = QStringList();
    for(int i = 0; i < R.size; i++) {
        in.push_back(R.current->data);
        R.current = R.current->next;
    }
    ui->textEdit->setText(in.join("\n"));
    if(R.size == 0)
        ui->textEdit->setText("zero");
}

RingViewWindow::~RingViewWindow()
{
    delete ui;
}
