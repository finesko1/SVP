#ifndef FIO_H
#define FIO_H

#include <QDialog>
#include "patientlinkedlist.h"
#include <QRegExp>
#include <QMessageBox>
#include <QCloseEvent>
namespace Ui {
class FIO;
}

class FIO : public QDialog
{
    Q_OBJECT

public:
    explicit FIO(QWidget *parent = nullptr);
    ~FIO();
public slots:
    void fioSlot(patientLinkedList&);
    void on_backButton_clicked();

private slots:
    void on_delButton_clicked();

private:
signals:
    void fioSignal_back();
private:
    Ui::FIO *ui;
    patientLinkedList *tmpList;
};

#endif // FIO_H
