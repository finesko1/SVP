/********************************************************************************
** Form generated from reading UI file 'patientlinkedlist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTLINKEDLIST_H
#define UI_PATIENTLINKEDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_patientLinkedList
{
public:
    QTableWidget *patientsTable;
    QPushButton *pushButton;

    void setupUi(QDialog *patientLinkedList)
    {
        if (patientLinkedList->objectName().isEmpty())
            patientLinkedList->setObjectName(QString::fromUtf8("patientLinkedList"));
        patientLinkedList->resize(910, 650);
        patientsTable = new QTableWidget(patientLinkedList);
        patientsTable->setObjectName(QString::fromUtf8("patientsTable"));
        patientsTable->setGeometry(QRect(0, 0, 256, 192));
        pushButton = new QPushButton(patientLinkedList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 610, 861, 25));

        retranslateUi(patientLinkedList);

        QMetaObject::connectSlotsByName(patientLinkedList);
    } // setupUi

    void retranslateUi(QDialog *patientLinkedList)
    {
        patientLinkedList->setWindowTitle(QCoreApplication::translate("patientLinkedList", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("patientLinkedList", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientLinkedList: public Ui_patientLinkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLINKEDLIST_H
