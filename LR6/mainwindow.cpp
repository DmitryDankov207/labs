#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "additemwindow.h"
#include "treewindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(
                QStringList() << "ключ" << "значение");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    for (int i =  ui->tableWidget->currentRow() + 1;
         i < ui->tableWidget->rowCount(); i++) {
         ui->tableWidget->setItem(i - 1, 0, ui->tableWidget->item(i, 0));
         ui->tableWidget->setItem(i - 1, 1, ui->tableWidget->item(i, 1));
    }
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount() - 1);
}

void MainWindow::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    if(ui->tableWidget->currentRow() == ui->tableWidget->rowCount() - 1 &&
            ((ui->tableWidget->currentColumn() == 1 &&
              ui->tableWidget->item(ui->tableWidget->currentRow(), 0)->text().toInt())))
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
}

void MainWindow::on_pushButton_3_clicked()
{
    TreeWindow *treeWindow = new TreeWindow();
    treeWindow->setModal(true);
    treeWindow->exec();
}
