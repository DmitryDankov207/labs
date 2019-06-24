#ifndef ADDITEMWINDOW_H
#define ADDITEMWINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class AddItemWindow;
}

class AddItemWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemWindow(QWidget *parent = nullptr);
    ~AddItemWindow();
    int key;
    QString str;
private slots:
    void on_AddItemWindow_accepted();

private:
    Ui::AddItemWindow *ui;
};

#endif // ADDITEMWINDOW_H
