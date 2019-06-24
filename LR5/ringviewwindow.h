#ifndef RINGVIEWWINDOW_H
#define RINGVIEWWINDOW_H

#include <QDialog>
#include "ring.h"

namespace Ui {
class RingViewWindow;
}

class RingViewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RingViewWindow(_Ring R, QWidget *parent = nullptr);
    ~RingViewWindow();
private:
    Ui::RingViewWindow *ui;
};

#endif // RINGVIEWWINDOW_H
