#include "height.h"
#include "ui_height.h"

height::height(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::height)
{
    ui->setupUi(this);
}

height::~height()
{
    delete ui;
}



void height::heightSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    show();
}

void height::on_backButton_clicked()
{
    this->hide();
    emit heightSignal_back();
}

void height::on_delButton_clicked()
{
    //Проверка - 2-3 цифры
    QRegExp rx("[0-9]{2,3}$");
    if (!rx.indexIn(ui->height_2->text()))
    {
        tmpList->delByHeight(ui->height_2->text().toInt());
    }
    else
    {
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод роста пациента");
    }
}
