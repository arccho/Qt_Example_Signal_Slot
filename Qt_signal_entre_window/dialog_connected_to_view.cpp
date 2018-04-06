#include "dialog_connected_to_view.h"
#include "ui_dialog_connected_to_view.h"

Dialog_Connected_To_View::Dialog_Connected_To_View(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Connected_To_View)
{
    ui->setupUi(this);
    QObject::connect(ui->m_slider, SIGNAL(valueChanged(int)), this, SLOT(Slot_Recupere_Int_Slider(int))) ;
}

void Dialog_Connected_To_View::Slot_Recupere_Int_Slider(int ValueGotFromSlider)
{
    //Envoie la valeur récupéré du signal slider dans mon signal personnalisé
    emit(Mon_Signal(ValueGotFromSlider));
}

Dialog_Connected_To_View::~Dialog_Connected_To_View()
{
    delete ui;
}
