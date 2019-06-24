#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QMessageBox>
#include <functional>
#include <QTreeView>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);
    ui->treeView->setModel (model);
    ui->resultLabel->setText("");
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_add_released()
{
    int key = ui->spinBox_key->value ();
    QString value = ui->lineEdit_value->text ();

    if(value.length () < 1)
        return;

    QString noCopy = binTree.find(key);
    if(noCopy != nullptr) {
        QMessageBox::warning (this, "Failed", "A record with this key already exists", QMessageBox::Ok);
        ui->spinBox_key->clear ();
        return;
    }

    int row = ui->tableWidget_input->rowCount ();
    ui->tableWidget_input->insertRow (row);
    ui->tableWidget_input->setItem (row, 0, new QTableWidgetItem(QString::number (key)));
    ui->tableWidget_input->setItem (row, 1, new QTableWidgetItem(value));

    binTree.add (key, value);
    emit updateTreeView ();
}

void Dialog::on_pushButton_search_released()
{
    int key = ui->spinBox_key->value ();

    QString value = binTree.find (key);

    if(value == nullptr) {
        QMessageBox::warning (this, "Failed", "There's no record with this key", QMessageBox::Ok);
        ui->lineEdit_value->clear ();
        ui->spinBox_key->clear ();
        return;
    }

    ui->lineEdit_value->setText (value);
}

void Dialog::on_pushButton_delete_released()
{
    int key = ui->spinBox_key->value ();
    emit on_pushButton_search_released ();

    if(ui->lineEdit_value->text () < 1)
        return;

    if(QMessageBox::question (this, "Confirm", "Are you sure, you want to delete this record?",
                              QMessageBox::Yes, QMessageBox::No) == QMessageBox::No)
        return;

    for(int i = 0; i < ui->tableWidget_input->rowCount (); i++) {
        if(ui->tableWidget_input->item (i, 0)->text () == QString::number (key)) {
            ui->tableWidget_input->removeRow (i);
            break;
        }
    }

    binTree.remove (key);
    emit updateTreeView ();
}

void Dialog::updateTreeView()
{
    binTree.setModel (model);
    ui->treeView->expandAll ();
    ui->textEdit_output->clear ();

    std::function<void(QList<QString>)> setUpOutput = [ = ](QList<QString> pathTree) {
        QString out;
        foreach(QString elem, pathTree)
            out.append (elem + " ");
        ui->textEdit_output->appendPlainText (out);
    };

    setUpOutput(binTree.forward ());
    setUpOutput(binTree.backward ());
    setUpOutput(binTree.symmetric ());
}

void Dialog::on_tableWidget_input_cellDoubleClicked(int row, int column)
{
    ui->spinBox_key->setValue (ui->tableWidget_input->item (row, 0)->text ().toInt ());
    emit on_pushButton_search_released ();
}

void Dialog::on_pushButton_findSingleNodeCount_clicked()
{
    if(binTree.empty()) return;

    ui->resultLabel->setText(QString::number(binTree.completeTask()));
}
