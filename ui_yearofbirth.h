/********************************************************************************
** Form generated from reading UI file 'yearofbirth.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YEAROFBIRTH_H
#define UI_YEAROFBIRTH_H

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

class Ui_yearOfBirth
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *yearOfBitrh;
    QHBoxLayout *horizontalLayout;
    QPushButton *delButton;
    QPushButton *backButton;

    void setupUi(QDialog *yearOfBirth)
    {
        if (yearOfBirth->objectName().isEmpty())
            yearOfBirth->setObjectName(QString::fromUtf8("yearOfBirth"));
        yearOfBirth->resize(310, 120);
        layoutWidget = new QWidget(yearOfBirth);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 261, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        yearOfBitrh = new QLineEdit(layoutWidget);
        yearOfBitrh->setObjectName(QString::fromUtf8("yearOfBitrh"));

        horizontalLayout_2->addWidget(yearOfBitrh);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        delButton = new QPushButton(layoutWidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout->addWidget(delButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(yearOfBirth);

        QMetaObject::connectSlotsByName(yearOfBirth);
    } // setupUi

    void retranslateUi(QDialog *yearOfBirth)
    {
        yearOfBirth->setWindowTitle(QCoreApplication::translate("yearOfBirth", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\276 \320\264\320\260\321\202\320\265 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("yearOfBirth", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        delButton->setText(QCoreApplication::translate("yearOfBirth", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("yearOfBirth", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yearOfBirth: public Ui_yearOfBirth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YEAROFBIRTH_H
