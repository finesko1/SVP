/********************************************************************************
** Form generated from reading UI file 'delpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELPATIENT_H
#define UI_DELPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delPatient
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QPushButton *fioButton;
    QPushButton *yearButton;
    QPushButton *heightButton;
    QPushButton *weightButton;
    QPushButton *backButton;

    void setupUi(QDialog *delPatient)
    {
        if (delPatient->objectName().isEmpty())
            delPatient->setObjectName(QString::fromUtf8("delPatient"));
        delPatient->resize(190, 220);
        layoutWidget = new QWidget(delPatient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 149, 197));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        fioButton = new QPushButton(layoutWidget);
        fioButton->setObjectName(QString::fromUtf8("fioButton"));

        verticalLayout->addWidget(fioButton);

        yearButton = new QPushButton(layoutWidget);
        yearButton->setObjectName(QString::fromUtf8("yearButton"));

        verticalLayout->addWidget(yearButton);

        heightButton = new QPushButton(layoutWidget);
        heightButton->setObjectName(QString::fromUtf8("heightButton"));

        verticalLayout->addWidget(heightButton);

        weightButton = new QPushButton(layoutWidget);
        weightButton->setObjectName(QString::fromUtf8("weightButton"));

        verticalLayout->addWidget(weightButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);


        retranslateUi(delPatient);

        QMetaObject::connectSlotsByName(delPatient);
    } // setupUi

    void retranslateUi(QDialog *delPatient)
    {
        delPatient->setWindowTitle(QCoreApplication::translate("delPatient", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("delPatient", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        fioButton->setText(QCoreApplication::translate("delPatient", "\320\244\320\230\320\236", nullptr));
        yearButton->setText(QCoreApplication::translate("delPatient", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        heightButton->setText(QCoreApplication::translate("delPatient", "\320\240\320\276\321\201\321\202", nullptr));
        weightButton->setText(QCoreApplication::translate("delPatient", "\320\222\320\265\321\201", nullptr));
        backButton->setText(QCoreApplication::translate("delPatient", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delPatient: public Ui_delPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELPATIENT_H
