#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QDialog>
#include "list.h"
#include <QDateTime>

namespace Ui {
class CreateWindow;
}

class CreateWindow : public QDialog
{
    Q_OBJECT

public:
    Book book;
    explicit CreateWindow(QWidget *parent = nullptr);
    ~CreateWindow();
    Book GetBook() { return book; }
private slots:
    void on_buttonBox_accepted();

private:
    void ClearFields();
    Ui::CreateWindow *ui;
    int id = 3;
};

#endif // CREATEWINDOW_H
