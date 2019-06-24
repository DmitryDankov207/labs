#ifndef SERACH1WINDOW_H
#define SERACH1WINDOW_H

#include <QDialog>

namespace Ui {
class Search1Window;
}

class Search1Window : public QDialog
{
    Q_OBJECT

public:
    explicit Search1Window(QWidget *parent = nullptr);
    ~Search1Window();

private:
    Ui::Search1Window *ui;
};

#endif // SERACH1WINDOW_H
