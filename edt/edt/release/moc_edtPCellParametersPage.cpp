/****************************************************************************
** Meta object code from reading C++ file 'edtPCellParametersPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtPCellParametersPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtPCellParametersPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS = QtMocHelpers::stringData(
    "edt::PCellParametersPage",
    "edited",
    "",
    "show_parameter_names",
    "f",
    "lazy_eval_mode",
    "parameter_changed",
    "update_button_pressed",
    "lazy_eval_mode_slot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[25];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[2];
    char stringdata5[15];
    char stringdata6[18];
    char stringdata7[22];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "edt::PCellParametersPage"
        QT_MOC_LITERAL(25, 6),  // "edited"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 20),  // "show_parameter_names"
        QT_MOC_LITERAL(54, 1),  // "f"
        QT_MOC_LITERAL(56, 14),  // "lazy_eval_mode"
        QT_MOC_LITERAL(71, 17),  // "parameter_changed"
        QT_MOC_LITERAL(89, 21),  // "update_button_pressed"
        QT_MOC_LITERAL(111, 19)   // "lazy_eval_mode_slot"
    },
    "edt::PCellParametersPage",
    "edited",
    "",
    "show_parameter_names",
    "f",
    "lazy_eval_mode",
    "parameter_changed",
    "update_button_pressed",
    "lazy_eval_mode_slot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEPCellParametersPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x0a,    2 /* Public */,
       5,    1,   54,    2, 0x0a,    4 /* Public */,
       6,    0,   57,    2, 0x08,    6 /* Private */,
       7,    0,   58,    2, 0x08,    7 /* Private */,
       8,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::PCellParametersPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEPCellParametersPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PCellParametersPage, std::true_type>,
        // method 'edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_parameter_names'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'lazy_eval_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'parameter_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lazy_eval_mode_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::PCellParametersPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PCellParametersPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->edited(); break;
        case 1: _t->show_parameter_names((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->lazy_eval_mode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->parameter_changed(); break;
        case 4: _t->update_button_pressed(); break;
        case 5: _t->lazy_eval_mode_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PCellParametersPage::*)();
            if (_t _q_method = &PCellParametersPage::edited; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *edt::PCellParametersPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::PCellParametersPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEPCellParametersPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QFrame::qt_metacast(_clname);
}

int edt::PCellParametersPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void edt::PCellParametersPage::edited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
