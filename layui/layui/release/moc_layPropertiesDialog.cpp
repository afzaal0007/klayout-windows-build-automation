/****************************************************************************
** Meta object code from reading C++ file 'layPropertiesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layPropertiesDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layPropertiesDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS = QtMocHelpers::stringData(
    "lay::PropertiesDialog",
    "properties_edited",
    "",
    "next_pressed",
    "prev_pressed",
    "cancel_pressed",
    "ok_pressed",
    "apply_to_all_pressed",
    "current_index_changed",
    "QModelIndex",
    "index",
    "previous",
    "selection_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[22];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[15];
    char stringdata6[11];
    char stringdata7[21];
    char stringdata8[22];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[9];
    char stringdata12[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "lay::PropertiesDialog"
        QT_MOC_LITERAL(22, 17),  // "properties_edited"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 12),  // "next_pressed"
        QT_MOC_LITERAL(54, 12),  // "prev_pressed"
        QT_MOC_LITERAL(67, 14),  // "cancel_pressed"
        QT_MOC_LITERAL(82, 10),  // "ok_pressed"
        QT_MOC_LITERAL(93, 20),  // "apply_to_all_pressed"
        QT_MOC_LITERAL(114, 21),  // "current_index_changed"
        QT_MOC_LITERAL(136, 11),  // "QModelIndex"
        QT_MOC_LITERAL(148, 5),  // "index"
        QT_MOC_LITERAL(154, 8),  // "previous"
        QT_MOC_LITERAL(163, 17)   // "selection_changed"
    },
    "lay::PropertiesDialog",
    "properties_edited",
    "",
    "next_pressed",
    "prev_pressed",
    "cancel_pressed",
    "ok_pressed",
    "apply_to_all_pressed",
    "current_index_changed",
    "QModelIndex",
    "index",
    "previous",
    "selection_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEPropertiesDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    2,   68,    2, 0x0a,    7 /* Public */,
      12,    0,   73,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::PropertiesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEPropertiesDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertiesDialog, std::true_type>,
        // method 'properties_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ok_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'apply_to_all_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::PropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertiesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->properties_edited(); break;
        case 1: _t->next_pressed(); break;
        case 2: _t->prev_pressed(); break;
        case 3: _t->cancel_pressed(); break;
        case 4: _t->ok_pressed(); break;
        case 5: _t->apply_to_all_pressed(); break;
        case 6: _t->current_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 7: _t->selection_changed(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::PropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::PropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEPropertiesDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::PropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
