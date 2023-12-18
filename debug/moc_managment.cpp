/****************************************************************************
** Meta object code from reading C++ file 'managment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../managment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_managment_t {
    QByteArrayData data[17];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_managment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_managment_t qt_meta_stringdata_managment = {
    {
QT_MOC_LITERAL(0, 0, 9), // "managment"
QT_MOC_LITERAL(1, 10, 16), // "addPatientSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "patientLinkedList&"
QT_MOC_LITERAL(4, 47, 16), // "delPatientSignal"
QT_MOC_LITERAL(5, 64, 15), // "showTableSignal"
QT_MOC_LITERAL(6, 80, 18), // "endSettingUpSignal"
QT_MOC_LITERAL(7, 99, 20), // "admissionSignal_back"
QT_MOC_LITERAL(8, 120, 19), // "addPatientSlot_back"
QT_MOC_LITERAL(9, 140, 19), // "delPatientSlot_back"
QT_MOC_LITERAL(10, 160, 18), // "showTableSlot_back"
QT_MOC_LITERAL(11, 179, 13), // "admissionSlot"
QT_MOC_LITERAL(12, 193, 22), // "on_listPatient_clicked"
QT_MOC_LITERAL(13, 216, 21), // "on_addPatient_clicked"
QT_MOC_LITERAL(14, 238, 21), // "on_delPatient_clicked"
QT_MOC_LITERAL(15, 260, 26), // "on_openFilePatient_clicked"
QT_MOC_LITERAL(16, 287, 21) // "on_backButton_clicked"

    },
    "managment\0addPatientSignal\0\0"
    "patientLinkedList&\0delPatientSignal\0"
    "showTableSignal\0endSettingUpSignal\0"
    "admissionSignal_back\0addPatientSlot_back\0"
    "delPatientSlot_back\0showTableSlot_back\0"
    "admissionSlot\0on_listPatient_clicked\0"
    "on_addPatient_clicked\0on_delPatient_clicked\0"
    "on_openFilePatient_clicked\0"
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_managment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void managment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<managment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addPatientSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 1: _t->delPatientSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 2: _t->showTableSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 3: _t->endSettingUpSignal(); break;
        case 4: _t->admissionSignal_back(); break;
        case 5: _t->addPatientSlot_back(); break;
        case 6: _t->delPatientSlot_back(); break;
        case 7: _t->showTableSlot_back(); break;
        case 8: _t->admissionSlot((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 9: _t->on_listPatient_clicked(); break;
        case 10: _t->on_addPatient_clicked(); break;
        case 11: _t->on_delPatient_clicked(); break;
        case 12: _t->on_openFilePatient_clicked(); break;
        case 13: _t->on_backButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (managment::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&managment::addPatientSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (managment::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&managment::delPatientSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (managment::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&managment::showTableSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (managment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&managment::endSettingUpSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (managment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&managment::admissionSignal_back)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject managment::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_managment.data,
    qt_meta_data_managment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *managment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *managment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_managment.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int managment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void managment::addPatientSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void managment::delPatientSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void managment::showTableSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void managment::endSettingUpSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void managment::admissionSignal_back()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
