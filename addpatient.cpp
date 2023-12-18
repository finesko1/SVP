#include "addpatient.h"
#include "ui_addpatient.h"
#include <mainwindow.h>
addPatient::addPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPatient)
{
    ui->setupUi(this);
}

addPatient::~addPatient()
{
    delete ui;
}

void addPatient::addPatientSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    //Номер пациента
    ui->patientNumber->setText(QString::number(tmpList->cntPatient()));
    show();
}

void addPatient::on_saveButton_clicked()
{
    //Создать проверки: первые 3 поля не содержат цифр, следующая тройка не содержит букв
    QRegExp rxFio("[\\d\\W]");
    QRegExp rxYearOfBirht("[0-9]{1,2}\\.[01]{1}[0-9]{1}\\.((20)|(19)){1}[0-9]{2}");//((20)|(19)){1}[0-9]{2}///[0-9]{1,2}\\.[0-9]{1,2}\\.[0-9]{4}$"
    QRegExp rxHeight("[0-9]{2,3}");
    QRegExp rxWeight("[0-9]{1,3}\\.{0,1}[0-9]{0,2}$");
    if(rxFio.indexIn(ui->surName->text()) == -1 && rxFio.indexIn(ui->name->text()) == -1 && rxFio.indexIn(ui->secondName->text()) == -1 &&
            !rxYearOfBirht.indexIn(ui->yearOfBirth->text()) && !rxWeight.indexIn(ui->weight->text()) && !rxHeight.indexIn(ui->height->text()) &&
            ui->height->text().toInt() > 45 && ui->height->text().toInt() < 250 &&
            ui->weight->text().toInt() > 2 && ui->weight->text().toInt() < 350)
    {
        QMessageBox::information(this, "Добавление пациента", ui->surName->text() + " " + ui->name->text() + " успешно добавлен");
        tmpList->push_back(ui->surName->text(), ui->name->text(), ui->secondName->text(), ui->yearOfBirth->text(), ui->height->text().toInt(), ui->weight->text().toFloat());
    }
    else
    {
        if(rxFio.indexIn(ui->surName->text()) >= 0)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в фамилии пациента");
        if(rxFio.indexIn(ui->name->text()) >= 0)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в имени пациента");
        if(rxFio.indexIn(ui->secondName->text()) >= 0)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в отчестве пациента");
        if(rxYearOfBirht.indexIn(ui->yearOfBirth->text()))
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в дате рождения пациента");
        if(rxHeight.indexIn(ui->height->text()) == -1)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в росте пациента");
        if(ui->height->text().toInt() <= 45 || ui->height->text().toInt() >= 250)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в росте пациента");
        if(rxWeight.indexIn(ui->weight->text()) == -1)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в весе пациента");
        if(ui->weight->text().toInt() <= 2 || ui->weight->text().toInt() >= 350)
                QMessageBox::information(this, "Ошибка ввода", "Ошибка в весе пациента");
    }
}
void addPatient::on_backButton_clicked()
{
    this->hide();
    emit addPatientSignal_back();
}
