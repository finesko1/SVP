#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <addpatient.h>
#include <delpatient.h>
#include <managment.h>
//Для выравнивания главного окна
#include <QtGui>
#include <QtWidgets>
//Подключение списка
#include "patientlinkedlist.h"
//Excel
#include <QAxObject>
#include <QFile>
//Закрытие главного окна
#include <QCloseEvent>
#include <fio.h>
#include <height.h>
#include <weight.h>
#include <yearofbirth.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void startSettingUp();//!!!!оформление листа пациентов, считываение Excel
public slots:
    void admissionSlot_back();
//    void addPatientSlot_back();
//    void delPatientSlot_back();
//    void showTableSlot_back();

//private slots:
//    void on_listPatient_clicked();
//    void on_addPatient_clicked();
//    void on_delPatient_clicked();
//    void on_openFilePatient_clicked();
private:
    signals:
    void admissionSignal(patientLinkedList&);
//        void addPatientSignal(patientLinkedList&);
//        void delPatientSignal(patientLinkedList&);
//        void showTableSignal(patientLinkedList&);
    void endSettingUpSignal();
private slots:
    void on_admission_triggered();
    void on_patientList_triggered();
    void on_userInfo_triggered();
    void on_createrInfo_triggered();
    void on_exit_triggered();
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    class addPatient *addPatient;
    class delPatient *delPatient;
    class patientLinkedList *list;
    //class FIO *fio;
    //class weight *weight;
    //class height *heightX;
    //class yearOfBirth *yearOfBirth;
    class patientLinkedList *endSettingUpObj;
    class managment *menu;
    QTableWidgetItem* tmpTbl;
    //Закрытие главного окна
    void closeAll();
    void closeEvent(QCloseEvent*);
};
#endif // MAINWINDOW_H
