/********************************************************************************
** Form generated from reading UI file 'fio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIO_H
#define UI_FIO_H

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

class Ui_FIO
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *surName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *secondName;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *delButton;
    QPushButton *backButton;

    void setupUi(QDialog *FIO)
    {
        if (FIO->objectName().isEmpty())
            FIO->setObjectName(QString::fromUtf8("FIO"));
        FIO->resize(260, 165);
        layoutWidget = new QWidget(FIO);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 21, 219, 128));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        surName = new QLineEdit(layoutWidget);
        surName->setObjectName(QString::fromUtf8("surName"));

        horizontalLayout->addWidget(surName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        secondName = new QLineEdit(layoutWidget);
        secondName->setObjectName(QString::fromUtf8("secondName"));

        horizontalLayout_3->addWidget(secondName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        delButton = new QPushButton(layoutWidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout_4->addWidget(delButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_4->addWidget(backButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(FIO);

        QMetaObject::connectSlotsByName(FIO);
    } // setupUi

    void retranslateUi(QDialog *FIO)
    {
        FIO->setWindowTitle(QCoreApplication::translate("FIO", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260 \320\277\320\276 \320\244\320\230\320\236", nullptr));
        label->setText(QCoreApplication::translate("FIO", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("FIO", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("FIO", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        delButton->setText(QCoreApplication::translate("FIO", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("FIO", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FIO: public Ui_FIO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIO_H
