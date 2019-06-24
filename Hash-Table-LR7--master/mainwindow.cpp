#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    table = SortedHashTable(37);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUI() {

    ui->listWidget->clear();

    for (const auto str : table.TableToString())
        ui->listWidget->addItem(str);
}

void MainWindow::on_pushButton_clicked()
{
    table = SortedHashTable(37);

    if(ui->lineEdit->text().toInt()){
        for (int i = 0; i < ui->lineEdit->text().toInt(); i++) {
            table.Push((double)(rand() % ui->lineEdit->text().toInt()) + (double)(rand() % 100) / 100);
        }

        emit updateUI();
    }
    else
        ui->listWidget->addItem("Неверный ввод!");
}

void MainWindow::on_pushButton_2_clicked()
{
    table.Push(ui->doubleSpinBox_2->value());
    emit updateUI();
}

void MainWindow::on_pushButton_3_clicked()
{
    table.Delete(ui->doubleSpinBox->value());
    emit updateUI();
}

