#ifndef ADDPATIENT_H
#define ADDPATIENT_H

#include <QDialog>
#include <patientlinkedlist.h>
namespace Ui {
class addPatient;
}

class addPatient : public QDialog
{
    Q_OBJECT

public:
    explicit addPatient(QWidget *parent = nullptr);
    ~addPatient();
public slots:
    void addPatientSlot(patientLinkedList&);

private slots:
    void on_saveButton_clicked();
    void on_backButton_clicked();
private:
signals:
    void addPatientSignal_back();
private:
    Ui::addPatient *ui;
    patientLinkedList *tmpList;
};

#endif // ADDPATIENT_H
