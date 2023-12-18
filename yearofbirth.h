#ifndef YEAROFBIRTH_H
#define YEAROFBIRTH_H

#include <QDialog>
#include <QRegExp>
#include <QMessageBox>
#include "patientlinkedlist.h"
#include <QCloseEvent>
namespace Ui {
class yearOfBirth;
}

class yearOfBirth : public QDialog
{
    Q_OBJECT

public:
    explicit yearOfBirth(QWidget *parent = nullptr);
    ~yearOfBirth();
public slots:
    void yearOfBirthSlot(patientLinkedList&);
    void on_backButton_clicked();

private slots:
    void on_delButton_clicked();
private:
signals:
    void yearOfBirthSignal_back();
private:
    Ui::yearOfBirth *ui;
    patientLinkedList *tmpList;
};

#endif // YEAROFBIRTH_H
