/********************************************************************************
** Form generated from reading UI file 'addpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENT_H
#define UI_ADDPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addPatient
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *patientNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *surName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *secondName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *yearOfBirth;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *height;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *weight;
    QVBoxLayout *verticalLayout_2;
    QPushButton *saveButton;
    QPushButton *backButton;

    void setupUi(QDialog *addPatient)
    {
        if (addPatient->objectName().isEmpty())
            addPatient->setObjectName(QString::fromUtf8("addPatient"));
        addPatient->resize(355, 390);
        layoutWidget = new QWidget(addPatient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 315, 365));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::AutoText);

        horizontalLayout_7->addWidget(label_7);

        patientNumber = new QLabel(layoutWidget);
        patientNumber->setObjectName(QString::fromUtf8("patientNumber"));

        horizontalLayout_7->addWidget(patientNumber);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        surName = new QLineEdit(layoutWidget);
        surName->setObjectName(QString::fromUtf8("surName"));

        horizontalLayout_2->addWidget(surName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_2);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_3->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        secondName = new QLineEdit(layoutWidget);
        secondName->setObjectName(QString::fromUtf8("secondName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(secondName->sizePolicy().hasHeightForWidth());
        secondName->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(secondName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_4);

        yearOfBirth = new QLineEdit(layoutWidget);
        yearOfBirth->setObjectName(QString::fromUtf8("yearOfBirth"));

        horizontalLayout_6->addWidget(yearOfBirth);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        height = new QLineEdit(layoutWidget);
        height->setObjectName(QString::fromUtf8("height"));

        horizontalLayout_5->addWidget(height);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        weight = new QLineEdit(layoutWidget);
        weight->setObjectName(QString::fromUtf8("weight"));

        horizontalLayout_4->addWidget(weight);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_2->addWidget(saveButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout_2->addWidget(backButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(addPatient);

        QMetaObject::connectSlotsByName(addPatient);
    } // setupUi

    void retranslateUi(QDialog *addPatient)
    {
        addPatient->setWindowTitle(QCoreApplication::translate("addPatient", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\260\321\217 \320\272\320\260\321\200\321\202\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("addPatient", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202 \342\204\226", nullptr));
        patientNumber->setText(QCoreApplication::translate("addPatient", "5555", nullptr));
        label->setText(QCoreApplication::translate("addPatient", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("addPatient", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("addPatient", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("addPatient", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("addPatient", "\320\240\320\276\321\201\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("addPatient", "\320\222\320\265\321\201", nullptr));
        saveButton->setText(QCoreApplication::translate("addPatient", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("addPatient", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addPatient: public Ui_addPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENT_H
