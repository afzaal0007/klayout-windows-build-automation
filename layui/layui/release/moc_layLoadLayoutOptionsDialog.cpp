/****************************************************************************
** Meta object code from reading C++ file 'layLoadLayoutOptionsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layLoadLayoutOptionsDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLoadLayoutOptionsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "lay::LoadLayoutOptionsDialog",
    "ok_button_pressed",
    "",
    "reset_button_pressed",
    "button_pressed",
    "QAbstractButton*",
    "button",
    "current_tech_changed",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[29];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[15];
    char stringdata5[17];
    char stringdata6[7];
    char stringdata7[21];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "lay::LoadLayoutOptionsDialog"
        QT_MOC_LITERAL(29, 17),  // "ok_button_pressed"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 20),  // "reset_button_pressed"
        QT_MOC_LITERAL(69, 14),  // "button_pressed"
        QT_MOC_LITERAL(84, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(101, 6),  // "button"
        QT_MOC_LITERAL(108, 20),  // "current_tech_changed"
        QT_MOC_LITERAL(129, 5)   // "index"
    },
    "lay::LoadLayoutOptionsDialog",
    "ok_button_pressed",
    "",
    "reset_button_pressed",
    "button_pressed",
    "QAbstractButton*",
    "button",
    "current_tech_changed",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    1,   40,    2, 0x0a,    3 /* Public */,
       7,    1,   43,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LoadLayoutOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoadLayoutOptionsDialog, std::true_type>,
        // method 'ok_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'current_tech_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LoadLayoutOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadLayoutOptionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ok_button_pressed(); break;
        case 1: _t->reset_button_pressed(); break;
        case 2: _t->button_pressed((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 3: _t->current_tech_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::LoadLayoutOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LoadLayoutOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELoadLayoutOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::LoadLayoutOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
