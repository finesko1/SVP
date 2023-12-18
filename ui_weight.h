/********************************************************************************
** Form generated from reading UI file 'weight.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEIGHT_H
#define UI_WEIGHT_H

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

class Ui_weight
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *weight_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *delButton;
    QPushButton *backButton;

    void setupUi(QDialog *weight)
    {
        if (weight->objectName().isEmpty())
            weight->setObjectName(QString::fromUtf8("weight"));
        weight->resize(212, 109);
        layoutWidget = new QWidget(weight);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 185, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        weight_2 = new QLineEdit(layoutWidget);
        weight_2->setObjectName(QString::fromUtf8("weight_2"));

        horizontalLayout_2->addWidget(weight_2);


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


        retranslateUi(weight);

        QMetaObject::connectSlotsByName(weight);
    } // setupUi

    void retranslateUi(QDialog *weight)
    {
        weight->setWindowTitle(QCoreApplication::translate("weight", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\276 \320\262\320\265\321\201\321\203", nullptr));
        label->setText(QCoreApplication::translate("weight", "\320\222\320\265\321\201", nullptr));
        delButton->setText(QCoreApplication::translate("weight", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("weight", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class weight: public Ui_weight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHT_H
