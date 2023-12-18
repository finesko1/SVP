#include "delpatient.h"
#include "ui_delpatient.h"

delPatient::delPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delPatient)
{
    ui->setupUi(this);
    fio = new class FIO;
    height = new class height;
    weight = new class weight;
    yearOfBirth = new class yearOfBirth;

    //Переход в окнах выписки
    connect(this, &delPatient::fioSignal, fio, &FIO::fioSlot);
    connect(this, &delPatient::heightSignal, height, &height::heightSlot);
    connect(this, &delPatient::weightSignal, weight, &weight::weightSlot);
    connect(this, &delPatient::yearOfBirthSignal, yearOfBirth, &yearOfBirth::yearOfBirthSlot);
    connect(fio, &FIO::fioSignal_back, this, &delPatient::delPatientSlotTwo);
    connect(height, &height::heightSignal_back, this, &delPatient::delPatientSlotTwo);
    connect(weight, &weight::weightSignal_back, this, &delPatient::delPatientSlotTwo);
    connect(yearOfBirth, &yearOfBirth::yearOfBirthSignal_back, this, &delPatient::delPatientSlotTwo);
}

delPatient::~delPatient()
{
    delete ui;
    delete fio;
    delete height;
    delete weight;
    delete yearOfBirth;
}

void delPatient::delPatientSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    show();
}
//Возвращение от пунктов удаления
void delPatient::delPatientSlotTwo()
{
    show();
}

void delPatient::on_fioButton_clicked()
{
    this->hide();
    emit fioSignal(*tmpList);
}


void delPatient::on_backButton_clicked()
{
    this->hide();
    emit delPatientSignal_back();
}


void delPatient::on_yearButton_clicked()
{
    this->hide();
    emit yearOfBirthSignal(*tmpList);
}


void delPatient::on_heightButton_clicked()
{
    this->hide();
    emit heightSignal(*tmpList);
}


void delPatient::on_weightButton_clicked()
{
    this->hide();
    emit weightSignal(*tmpList);
}

