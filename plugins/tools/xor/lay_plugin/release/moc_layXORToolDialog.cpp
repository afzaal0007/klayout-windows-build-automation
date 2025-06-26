/****************************************************************************
** Meta object code from reading C++ file 'layXORToolDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/plugins/tools/xor/lay_plugin/layXORToolDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layXORToolDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS = QtMocHelpers::stringData(
    "lay::XORToolDialog",
    "deep_changed",
    "",
    "input_changed",
    "index",
    "output_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[19];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "lay::XORToolDialog"
        QT_MOC_LITERAL(19, 12),  // "deep_changed"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 13),  // "input_changed"
        QT_MOC_LITERAL(47, 5),  // "index"
        QT_MOC_LITERAL(53, 14)   // "output_changed"
    },
    "lay::XORToolDialog",
    "deep_changed",
    "",
    "input_changed",
    "index",
    "output_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEXORToolDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x09,    1 /* Protected */,
       3,    1,   33,    2, 0x09,    2 /* Protected */,
       5,    1,   36,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::XORToolDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEXORToolDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XORToolDialog, std::true_type>,
        // method 'deep_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'input_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'output_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::XORToolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XORToolDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deep_changed(); break;
        case 1: _t->input_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->output_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::XORToolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::XORToolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEXORToolDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::XORToolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
