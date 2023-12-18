#include "managment.h"
#include "ui_managment.h"

managment::managment(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::managment)
{
    ui->setupUi(this);
}

managment::~managment()
{
    delete ui;
}

//Закрытие главного окна
void managment::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        emit endSettingUpSignal();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void managment::admissionSlot(patientLinkedList& listX)
{
    tmpListParametr = &listX;
    show();
}


void managment::on_listPatient_clicked()
{
    this->hide();
    emit showTableSignal(*tmpListParametr);
}


void managment::on_addPatient_clicked()
{
    this->hide();
    emit addPatientSignal(*tmpListParametr);
}


void managment::on_delPatient_clicked()
{
    this->hide();
    emit delPatientSignal(*tmpListParametr);
}


void managment::on_openFilePatient_clicked()
{
    tmpListParametr->showList();
}

void managment::addPatientSlot_back()
{
    show();
}

void managment::delPatientSlot_back()
{
    show();
}

void managment::showTableSlot_back()
{
    show();
}


void managment::on_backButton_clicked()
{
    this->hide();
    emit admissionSignal_back();
}
