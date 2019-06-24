#ifndef PLURALATTRIBUTESEARCHWINDOW_H
#define PLURALATTRIBUTESEARCHWINDOW_H

#include <QDialog>

namespace Ui {
class PluralAttributeSearchWindow;
}

class PluralAttributeSearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PluralAttributeSearchWindow(QWidget *parent = nullptr);
    ~PluralAttributeSearchWindow();
    QString attribute1;
    QString attribute2;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::PluralAttributeSearchWindow *ui;
};

#endif // PLURALATTRIBUTESEARCHWINDOW_H
