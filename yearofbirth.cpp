#include "yearofbirth.h"
#include "ui_yearofbirth.h"

yearOfBirth::yearOfBirth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yearOfBirth)
{
    ui->setupUi(this);
}

yearOfBirth::~yearOfBirth()
{
    delete ui;
}



void yearOfBirth::yearOfBirthSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    show();
}

void yearOfBirth::on_backButton_clicked()
{
    this->hide();
    emit yearOfBirthSignal_back();
}

void yearOfBirth::on_delButton_clicked()
{
    //Проверка - 2 цифры + точка + 2 цифры + точка + 4 цифры
    QRegExp rx("[0-9]{1,2}\\.[0-9]{1,2}\\.[0-9]{4}$");
    if (!rx.indexIn(ui->yearOfBitrh->text()))
        tmpList->delByDateOfBirth(ui->yearOfBitrh->text());
    else
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод даты рождения");
}

