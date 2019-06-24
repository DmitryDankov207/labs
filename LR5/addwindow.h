#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();
    QString result;
private slots:
    void on_AddWindow_accepted();

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
