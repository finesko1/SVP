/********************************************************************************
** Form generated from reading UI file 'height.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEIGHT_H
#define UI_HEIGHT_H

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

class Ui_height
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *height_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *delButton;
    QPushButton *backButton;

    void setupUi(QDialog *height)
    {
        if (height->objectName().isEmpty())
            height->setObjectName(QString::fromUtf8("height"));
        height->resize(230, 115);
        layoutWidget = new QWidget(height);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 185, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        height_2 = new QLineEdit(layoutWidget);
        height_2->setObjectName(QString::fromUtf8("height_2"));

        horizontalLayout_2->addWidget(height_2);


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


        retranslateUi(height);

        QMetaObject::connectSlotsByName(height);
    } // setupUi

    void retranslateUi(QDialog *height)
    {
        height->setWindowTitle(QCoreApplication::translate("height", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\320\276 \321\200\320\276\321\201\321\202\321\203", nullptr));
        label->setText(QCoreApplication::translate("height", "\320\240\320\276\321\201\321\202", nullptr));
        delButton->setText(QCoreApplication::translate("height", "\320\222\321\213\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("height", "<-Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class height: public Ui_height {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEIGHT_H
