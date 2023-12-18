#ifndef DELPATIENT_H
#define DELPATIENT_H

#include <QDialog>
#include <fio.h>
#include <height.h>
#include <weight.h>
#include <yearofbirth.h>
#include <patientlinkedlist.h>
#include <QCloseEvent>

namespace Ui {
class delPatient;
}

class delPatient : public QDialog
{
    Q_OBJECT

public:
    explicit delPatient(QWidget *parent = nullptr);
    ~delPatient();
    patientLinkedList* listX;
public slots:
    void delPatientSlot(patientLinkedList&);
    void delPatientSlotTwo();

private slots:
    void on_backButton_clicked();
    void on_fioButton_clicked();
    void on_yearButton_clicked();
    void on_heightButton_clicked();
    void on_weightButton_clicked();
private:
signals:
    void delPatientSignal_back();
    void fioSignal(patientLinkedList&);
    void heightSignal(patientLinkedList&);
    void weightSignal(patientLinkedList&);
    void yearOfBirthSignal(patientLinkedList&);
private:
    Ui::delPatient *ui;
    class FIO *fio;
    class height *height;
    class weight *weight;
    class yearOfBirth *yearOfBirth;
    class patientLinkedList* tmpList;
};

#endif // DELPATIENT_H
