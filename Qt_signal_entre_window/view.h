#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QDebug>
#include "dialog_connected_to_view.h"

namespace Ui {
class View;
}

class View : public QMainWindow
{
    Q_OBJECT

public slots:
    void Mon_Slot(int ValueReceived);

public:
    explicit View(QWidget *parent = 0);
    ~View();

private:
    Ui::View *ui;
    Dialog_Connected_To_View * MonDialog;
};

#endif // VIEW_H
