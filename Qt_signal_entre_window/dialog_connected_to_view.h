#ifndef DIALOG_CONNECTED_TO_VIEW_H
#define DIALOG_CONNECTED_TO_VIEW_H

#include <QDialog>

namespace Ui {
class Dialog_Connected_To_View;
}

class Dialog_Connected_To_View : public QDialog
{
    Q_OBJECT

signals:
    void Mon_Signal(int ValueToShow);

public slots:
    void Slot_Recupere_Int_Slider(int ValueGotFromSlider);

public:
    explicit Dialog_Connected_To_View(QWidget *parent = 0);
    ~Dialog_Connected_To_View();

private:
    Ui::Dialog_Connected_To_View *ui;
};

#endif // DIALOG_CONNECTED_TO_VIEW_H
