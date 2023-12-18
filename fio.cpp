#include "fio.h"
#include "ui_fio.h"

FIO::FIO(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FIO)
{
    ui->setupUi(this);
}

FIO::~FIO()
{
    delete ui;
}


void FIO::fioSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    show();
}

void FIO::on_backButton_clicked()
{
    this->hide();
    emit fioSignal_back();
}

void FIO::on_delButton_clicked()
{
    //Поиск цифр и знаков в строке, где необходимы только буквы
    QRegExp rx("[\\d\\W]");//возвращает начальную позцию найденного фрагмента строки
    if (rx.indexIn(ui->surName->text()) >= 0 || rx.indexIn(ui->name->text()) >= 0 || rx.indexIn(ui->secondName->text()) >= 0)
    {
    if (rx.indexIn(ui->surName->text()) >= 0)
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод фамилии пациента");
    if(rx.indexIn(ui->name->text()) >= 0)
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод имени пациента");
    if(rx.indexIn(ui->secondName->text()) >= 0)
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод отчества пациента");
    }
    else
    {
        tmpList->delByFio(ui->surName->text(), ui->name->text(), ui->secondName->text());
    }
}

