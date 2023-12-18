/********************************************************************************
** Form generated from reading UI file 'managment.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGMENT_H
#define UI_MANAGMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_managment
{
public:
    QPushButton *listPatient;
    QPushButton *delPatient;
    QLabel *label;
    QPushButton *addPatient;
    QPushButton *openFilePatient;
    QLabel *fone;
    QLabel *foneTwo;
    QPushButton *backButton;

    void setupUi(QDialog *managment)
    {
        if (managment->objectName().isEmpty())
            managment->setObjectName(QString::fromUtf8("managment"));
        managment->resize(1223, 693);
        listPatient = new QPushButton(managment);
        listPatient->setObjectName(QString::fromUtf8("listPatient"));
        listPatient->setGeometry(QRect(330, 280, 551, 24));
        delPatient = new QPushButton(managment);
        delPatient->setObjectName(QString::fromUtf8("delPatient"));
        delPatient->setGeometry(QRect(330, 340, 551, 24));
        label = new QLabel(managment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 230, 131, 16));
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font-size: 15px"));
        label->setAlignment(Qt::AlignCenter);
        addPatient = new QPushButton(managment);
        addPatient->setObjectName(QString::fromUtf8("addPatient"));
        addPatient->setGeometry(QRect(330, 310, 551, 24));
        openFilePatient = new QPushButton(managment);
        openFilePatient->setObjectName(QString::fromUtf8("openFilePatient"));
        openFilePatient->setGeometry(QRect(330, 370, 551, 24));
        fone = new QLabel(managment);
        fone->setObjectName(QString::fromUtf8("fone"));
        fone->setGeometry(QRect(0, 10, 1221, 671));
        fone->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/home.png")));
        foneTwo = new QLabel(managment);
        foneTwo->setObjectName(QString::fromUtf8("foneTwo"));
        foneTwo->setGeometry(QRect(320, 220, 571, 211));
        foneTwo->setStyleSheet(QString::fromUtf8("background: rgb(255, 237, 246)"));
        backButton = new QPushButton(managment);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(570, 400, 80, 24));
        backButton->setStyleSheet(QString::fromUtf8("background: rgb(85, 170, 127);\n"
"color: rgb(0, 0, 0)"));
        fone->raise();
        foneTwo->raise();
        listPatient->raise();
        delPatient->raise();
        label->raise();
        addPatient->raise();
        openFilePatient->raise();
        backButton->raise();

        retranslateUi(managment);

        QMetaObject::connectSlotsByName(managment);
    } // setupUi

    void retranslateUi(QDialog *managment)
    {
        managment->setWindowTitle(QCoreApplication::translate("managment", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201\320\276 \321\201\320\277\320\270\321\201\320\272\320\276\320\274", nullptr));
        listPatient->setText(QCoreApplication::translate("managment", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        delPatient->setText(QCoreApplication::translate("managment", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("managment", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        addPatient->setText(QCoreApplication::translate("managment", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        openFilePatient->setText(QCoreApplication::translate("managment", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273-\321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        fone->setText(QString());
        foneTwo->setText(QString());
        backButton->setText(QCoreApplication::translate("managment", "\320\235\320\220 \320\223\320\233\320\220\320\222\320\235\320\243\320\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managment: public Ui_managment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGMENT_H
