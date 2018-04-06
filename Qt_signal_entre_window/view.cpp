#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);

    Dialog_Connected_To_View * MonDialog = new Dialog_Connected_To_View();
    MonDialog->show();

    //Connecte le slot Mon_Slot de View au signal Mon_Signal de Dialog_connected_to_view
    QObject::connect(MonDialog, SIGNAL(Mon_Signal(int)), this, SLOT(Mon_Slot(int))) ;
}

//Slot activé par MonSignal et qui recoit un int depuis MonSignal
void View::Mon_Slot(int ValueReceived)
{
   ui->m_lcd->display(ValueReceived);
}

View::~View()
{
    delete MonDialog;
    delete ui;
}
