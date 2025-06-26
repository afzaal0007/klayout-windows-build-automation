/****************************************************************************
** Meta object code from reading C++ file 'layFillDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layFillDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layFillDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS = QtMocHelpers::stringData(
    "lay::FillDialog",
    "fill_area_changed",
    "",
    "ok_pressed",
    "choose_fc",
    "choose_fc_2nd"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[16];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "lay::FillDialog"
        QT_MOC_LITERAL(16, 17),  // "fill_area_changed"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 10),  // "ok_pressed"
        QT_MOC_LITERAL(46, 9),  // "choose_fc"
        QT_MOC_LITERAL(56, 13)   // "choose_fc_2nd"
    },
    "lay::FillDialog",
    "fill_area_changed",
    "",
    "ok_pressed",
    "choose_fc",
    "choose_fc_2nd"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEFillDialogENDCLASS[] = {

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
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   41,    2, 0x0a,    3 /* Public */,
       4,    0,   42,    2, 0x0a,    4 /* Public */,
       5,    0,   43,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::FillDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEFillDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FillDialog, std::true_type>,
        // method 'fill_area_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ok_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_fc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_fc_2nd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::FillDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FillDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fill_area_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->ok_pressed(); break;
        case 2: _t->choose_fc(); break;
        case 3: _t->choose_fc_2nd(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::FillDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::FillDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEFillDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "lay::Plugin"))
        return static_cast< lay::Plugin*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::FillDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
