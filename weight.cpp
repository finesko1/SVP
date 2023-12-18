#include "weight.h"
#include "ui_weight.h"

weight::weight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weight)
{
    ui->setupUi(this);
}

weight::~weight()
{
    delete ui;
}



void weight::weightSlot(patientLinkedList& listX)
{
    tmpList = &listX;
    show();
}

void weight::on_backButton_clicked()
{
    this->hide();
    emit weightSignal_back();
}

void weight::on_delButton_clicked()
{
    //Проверка - 1-3 цифры + точка(или нет) + 0-2 цифры
    QRegExp rx("[0-9]{1,3}\\.{0,1}[0-9]{0,2}$");
    if (!rx.indexIn(ui->weight_2->text()))
        tmpList->delByWeight(ui->weight_2->text().toFloat());
    else
        QMessageBox::warning(this, "Ошибка удаления", "Неверный ввод веса пациента");
}
