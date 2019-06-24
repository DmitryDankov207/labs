#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Queue::CreateQueue(&Q);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QStringList MainWindow::QueueToStringList() {
    QStringList output;
    Node * str = new Node;
    str = Q.first->next;

    for(;;) {
        output.push_back(str->data);
        str = str->next;
        if(!str) break;
    }
    delete str;

    return output;
}

_Ring * MainWindow::QueueToRing() {
    _Ring * R = new _Ring;
    Node * tmp = Q.first->next;
    for (;;) {
        if(!tmp) break;
        Ring::Add(R, &tmp->data);
        tmp = tmp->next;
    }
    delete tmp;
    return R;
}

void MainWindow::RefreshListWidget() {
    ui->listWidget->clear();
    ui->listWidget->addItems(QueueToStringList());
}

void MainWindow::on_pushButton_clicked()
{
    AddWindow  * addWindow = new AddWindow;
    addWindow->setModal(true);
    addWindow->exec();

    if(addWindow->result != "")
        Queue::Add(&Q, &addWindow->result);

    RefreshListWidget();
    delete addWindow;
}

void MainWindow::on_pushButton_2_clicked()
{
    Queue::Remove(&Q, ui->listWidget->currentItem()->text());
    RefreshListWidget();
}

void MainWindow::on_pushButton_3_clicked()
{
    RingViewWindow * ringViewWindow = new RingViewWindow(* QueueToRing(), this);
    ringViewWindow->setModal(true);
    ringViewWindow->exec();
    delete ringViewWindow;
}
