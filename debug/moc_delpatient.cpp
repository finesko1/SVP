/****************************************************************************
** Meta object code from reading C++ file 'delpatient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../delpatient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delpatient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_delPatient_t {
    QByteArrayData data[15];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_delPatient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_delPatient_t qt_meta_stringdata_delPatient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "delPatient"
QT_MOC_LITERAL(1, 11, 21), // "delPatientSignal_back"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "fioSignal"
QT_MOC_LITERAL(4, 44, 18), // "patientLinkedList&"
QT_MOC_LITERAL(5, 63, 12), // "heightSignal"
QT_MOC_LITERAL(6, 76, 12), // "weightSignal"
QT_MOC_LITERAL(7, 89, 17), // "yearOfBirthSignal"
QT_MOC_LITERAL(8, 107, 14), // "delPatientSlot"
QT_MOC_LITERAL(9, 122, 17), // "delPatientSlotTwo"
QT_MOC_LITERAL(10, 140, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(11, 162, 20), // "on_fioButton_clicked"
QT_MOC_LITERAL(12, 183, 21), // "on_yearButton_clicked"
QT_MOC_LITERAL(13, 205, 23), // "on_heightButton_clicked"
QT_MOC_LITERAL(14, 229, 23) // "on_weightButton_clicked"

    },
    "delPatient\0delPatientSignal_back\0\0"
    "fioSignal\0patientLinkedList&\0heightSignal\0"
    "weightSignal\0yearOfBirthSignal\0"
    "delPatientSlot\0delPatientSlotTwo\0"
    "on_backButton_clicked\0on_fioButton_clicked\0"
    "on_yearButton_clicked\0on_heightButton_clicked\0"
    "on_weightButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_delPatient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   87,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void delPatient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<delPatient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delPatientSignal_back(); break;
        case 1: _t->fioSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 2: _t->heightSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 3: _t->weightSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 4: _t->yearOfBirthSignal((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 5: _t->delPatientSlot((*reinterpret_cast< patientLinkedList(*)>(_a[1]))); break;
        case 6: _t->delPatientSlotTwo(); break;
        case 7: _t->on_backButton_clicked(); break;
        case 8: _t->on_fioButton_clicked(); break;
        case 9: _t->on_yearButton_clicked(); break;
        case 10: _t->on_heightButton_clicked(); break;
        case 11: _t->on_weightButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (delPatient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&delPatient::delPatientSignal_back)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (delPatient::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&delPatient::fioSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (delPatient::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&delPatient::heightSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (delPatient::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&delPatient::weightSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (delPatient::*)(patientLinkedList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&delPatient::yearOfBirthSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject delPatient::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_delPatient.data,
    qt_meta_data_delPatient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *delPatient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *delPatient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_delPatient.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int delPatient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void delPatient::delPatientSignal_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void delPatient::fioSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void delPatient::heightSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void delPatient::weightSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void delPatient::yearOfBirthSignal(patientLinkedList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
