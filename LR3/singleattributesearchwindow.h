#ifndef SINGLEATTRIBUTESEARCHWINDOW_H
#define SINGLEATTRIBUTESEARCHWINDOW_H

#include <QDialog>

namespace Ui {
class SingleAttributeSearchWindow;
}

class SingleAttributeSearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SingleAttributeSearchWindow(QWidget *parent = nullptr);
    ~SingleAttributeSearchWindow();
    QString attribute;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::SingleAttributeSearchWindow *ui;
};

#endif // SINGLEATTRIBUTESEARCHWINDOW_H
