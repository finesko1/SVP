QT       += core gui
QT       += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addpatient.cpp \
    delpatient.cpp \
    fio.cpp \
    height.cpp \
    main.cpp \
    mainwindow.cpp \
    managment.cpp \
    patientlinkedlist.cpp \
    weight.cpp \
    yearofbirth.cpp

HEADERS += \
    addpatient.h \
    delpatient.h \
    fio.h \
    height.h \
    mainwindow.h \
    managment.h \
    patientlinkedlist.h \
    weight.h \
    yearofbirth.h

FORMS += \
    addpatient.ui \
    delpatient.ui \
    fio.ui \
    height.ui \
    mainwindow.ui \
    managment.ui \
    patientlinkedlist.ui \
    weight.ui \
    yearofbirth.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    in.txt \
    out.txt

RESOURCES += \
    resource.qrc
