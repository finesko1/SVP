#ifndef PATIENTLINKEDLIST_H
#define PATIENTLINKEDLIST_H

#include <QDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
//Excel
#include <QtGui>
#include <QAxObject>

using namespace std;

namespace Ui {
class patientLinkedList;
}

class patientLinkedList : public QDialog
{
    Q_OBJECT

public:
    explicit patientLinkedList(QWidget *parent = nullptr);
    ~patientLinkedList();
private:
    Ui::patientLinkedList *ui;
    QTableWidgetItem* tmpTbl;
    void testList();
    class patientNode
    {
    private:
        QString dateOfBirth;
        float weight;
        int height;
        QString name;
        QString surName;
        QString secondName;
    public:
        patientNode* next;
        patientNode* prev;
        patientNode(QString, QString, QString, QString, int, float);
        QString getDateOfBirth();
        float getWeight();
        int getHeight();
        QString getName();
        QString getSurName();
        QString getSecondName();
        friend class linkedList;//Открываем доступ к приватным переменным со стороны методов класса patientLinkedList
    };
public:
    patientNode* head;
    patientNode* tail;

    void push_back(QString, QString, QString, QString, int, float);
    void push_front(QString, QString, QString, QString, int, float);
    void pop_front();
    void pop_back();
    void printList();
    void delByFio(QString, QString, QString);
    void delByHeight(int);
    void delByWeight(float);
    void delByDateOfBirth(QString);
    void showList(); //Для файла ?:
    int cntPatient(); //Количество пациентов от 1
public slots:
    void showTableSlot(patientLinkedList&);
    void endSettingUpSlot();
private slots:
    void on_pushButton_clicked();
private:
signals:
    void showTableSignal_back();
};

#endif // PATIENTLINKEDLIST_H
