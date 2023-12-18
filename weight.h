#ifndef WEIGHT_H
#define WEIGHT_H

#include <QDialog>
#include "patientlinkedlist.h"
#include <QRegExp>
#include <QMessageBox>
#include <QCloseEvent>
namespace Ui {
class weight;
}

class weight : public QDialog
{
    Q_OBJECT

public:
    explicit weight(QWidget *parent = nullptr);
    ~weight();
public slots:
    void weightSlot(patientLinkedList&);
    void on_backButton_clicked();

private slots:
    void on_delButton_clicked();
private:
signals:
    void weightSignal_back();
private:
    Ui::weight *ui;
    patientLinkedList *tmpList;
};

#endif // WEIGHT_H
