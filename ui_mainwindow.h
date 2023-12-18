/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *admission;
    QAction *patientList;
    QAction *userInfo;
    QAction *createrInfo;
    QAction *exit;
    QWidget *centralwidget;
    QLabel *foneTwo;
    QLabel *autorization;
    QLineEdit *login;
    QTextBrowser *infoTxt;
    QPushButton *loginButton;
    QLineEdit *password;
    QLabel *fone;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1185, 677);
        admission = new QAction(MainWindow);
        admission->setObjectName(QString::fromUtf8("admission"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        admission->setIcon(icon);
        patientList = new QAction(MainWindow);
        patientList->setObjectName(QString::fromUtf8("patientList"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/listPatient.png"), QSize(), QIcon::Normal, QIcon::Off);
        patientList->setIcon(icon1);
        userInfo = new QAction(MainWindow);
        userInfo->setObjectName(QString::fromUtf8("userInfo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/infoClient.png"), QSize(), QIcon::Normal, QIcon::Off);
        userInfo->setIcon(icon2);
        createrInfo = new QAction(MainWindow);
        createrInfo->setObjectName(QString::fromUtf8("createrInfo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/infoCreater.png"), QSize(), QIcon::Normal, QIcon::Off);
        createrInfo->setIcon(icon3);
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        foneTwo = new QLabel(centralwidget);
        foneTwo->setObjectName(QString::fromUtf8("foneTwo"));
        foneTwo->setGeometry(QRect(450, 210, 261, 161));
        foneTwo->setStyleSheet(QString::fromUtf8("background: rgb(255, 237, 246)"));
        autorization = new QLabel(centralwidget);
        autorization->setObjectName(QString::fromUtf8("autorization"));
        autorization->setGeometry(QRect(490, 210, 181, 41));
        autorization->setStyleSheet(QString::fromUtf8("color: rgb(131, 6, 255);\n"
"font-size: 20px;"));
        autorization->setAlignment(Qt::AlignCenter);
        login = new QLineEdit(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(460, 260, 241, 24));
        infoTxt = new QTextBrowser(centralwidget);
        infoTxt->setObjectName(QString::fromUtf8("infoTxt"));
        infoTxt->setEnabled(true);
        infoTxt->setGeometry(QRect(20, 30, 1141, 581));
        infoTxt->setStyleSheet(QString::fromUtf8("background: rgb(207, 229, 255)"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(500, 340, 161, 24));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(460, 300, 241, 24));
        fone = new QLabel(centralwidget);
        fone->setObjectName(QString::fromUtf8("fone"));
        fone->setGeometry(QRect(0, 0, 1181, 631));
        fone->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/home.png")));
        MainWindow->setCentralWidget(centralwidget);
        fone->raise();
        infoTxt->raise();
        foneTwo->raise();
        autorization->raise();
        login->raise();
        loginButton->raise();
        password->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1185, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(admission);
        menu->addAction(patientList);
        menu->addAction(userInfo);
        menu->addAction(createrInfo);
        menu->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\321\207\321\221\321\202 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        admission->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        patientList->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        userInfo->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\264\320\273\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        createrInfo->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\264\320\273\321\217 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        foneTwo->setText(QString());
        autorization->setText(QCoreApplication::translate("MainWindow", "\320\220\320\222\320\242\320\236\320\240\320\230\320\227\320\220\320\246\320\230\320\257", nullptr));
        login->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        fone->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
