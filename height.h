#ifndef HEIGHT_H
#define HEIGHT_H

#include <QDialog>
#include "patientlinkedlist.h"
#include <QRegExp>
#include <QMessageBox>
#include <QCloseEvent>
namespace Ui {
class height;
}

class height : public QDialog
{
    Q_OBJECT

public:
    explicit height(QWidget *parent = nullptr);
    ~height();

public slots:
    void heightSlot(patientLinkedList&);

    void on_backButton_clicked();

private slots:
    void on_delButton_clicked();
private:
signals:
    void heightSignal_back();
private:
    Ui::height *ui;
    patientLinkedList *tmpList;
};

#endif // HEIGHT_H
