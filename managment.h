#ifndef MANAGMENT_H
#define MANAGMENT_H

#include <QDialog>
//Подключение списка
#include "patientlinkedlist.h"
#include <addpatient.h>
#include <delpatient.h>
//Excel
#include <QtGui>
#include <QAxObject>
//Кириллица
#include <QTextCodec>
#include <QCloseEvent>
namespace Ui {
class managment;
}

class managment : public QDialog
{
    Q_OBJECT

public:
    explicit managment(QWidget *parent = nullptr);
    ~managment();
public slots:
    void addPatientSlot_back();
    void delPatientSlot_back();
    void showTableSlot_back();
    void admissionSlot(patientLinkedList&);
private:
signals:
    void addPatientSignal(patientLinkedList&);
    void delPatientSignal(patientLinkedList&);
    void showTableSignal(patientLinkedList&);
    void endSettingUpSignal();
    void admissionSignal_back();
private slots:
    void on_listPatient_clicked();
    void on_addPatient_clicked();
    void on_delPatient_clicked();
    void on_openFilePatient_clicked();
    void on_backButton_clicked();

private:
    Ui::managment *ui;
    class addPatient *addPatient;
    class delPatient *delPatient;
    patientLinkedList* tmpList;
    patientLinkedList* tmpListParametr;
    void closeEvent(QCloseEvent*);
};

#endif // MANAGMENT_H
