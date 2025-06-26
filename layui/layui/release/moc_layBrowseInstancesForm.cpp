/****************************************************************************
** Meta object code from reading C++ file 'layBrowseInstancesForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layBrowseInstancesForm.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layBrowseInstancesForm.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS = QtMocHelpers::stringData(
    "lay::BrowseInstancesConfigPage",
    "context_changed",
    "",
    "window_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[31];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "lay::BrowseInstancesConfigPage"
        QT_MOC_LITERAL(31, 15),  // "context_changed"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 14)   // "window_changed"
    },
    "lay::BrowseInstancesConfigPage",
    "context_changed",
    "",
    "window_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::BrowseInstancesConfigPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowseInstancesConfigPage, std::true_type>,
        // method 'context_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'window_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::BrowseInstancesConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseInstancesConfigPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->context_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->window_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::BrowseInstancesConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BrowseInstancesConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesConfigPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::BrowseInstancesConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::ConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS = QtMocHelpers::stringData(
    "lay::BrowseInstancesForm",
    "cell_changed",
    "",
    "QTreeWidgetItem*",
    "cell_inst_changed",
    "choose_cell_pressed",
    "next_cell",
    "prev_cell",
    "next_inst",
    "prev_inst",
    "configure"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[25];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[18];
    char stringdata5[20];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "lay::BrowseInstancesForm"
        QT_MOC_LITERAL(25, 12),  // "cell_changed"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(56, 17),  // "cell_inst_changed"
        QT_MOC_LITERAL(74, 19),  // "choose_cell_pressed"
        QT_MOC_LITERAL(94, 9),  // "next_cell"
        QT_MOC_LITERAL(104, 9),  // "prev_cell"
        QT_MOC_LITERAL(114, 9),  // "next_inst"
        QT_MOC_LITERAL(124, 9),  // "prev_inst"
        QT_MOC_LITERAL(134, 9)   // "configure"
    },
    "lay::BrowseInstancesForm",
    "cell_changed",
    "",
    "QTreeWidgetItem*",
    "cell_inst_changed",
    "choose_cell_pressed",
    "next_cell",
    "prev_cell",
    "next_inst",
    "prev_inst",
    "configure"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBrowseInstancesFormENDCLASS[] = {

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
       1,    2,   62,    2, 0x0a,    1 /* Public */,
       4,    0,   67,    2, 0x0a,    4 /* Public */,
       5,    0,   68,    2, 0x0a,    5 /* Public */,
       6,    0,   69,    2, 0x0a,    6 /* Public */,
       7,    0,   70,    2, 0x0a,    7 /* Public */,
       8,    0,   71,    2, 0x0a,    8 /* Public */,
       9,    0,   72,    2, 0x0a,    9 /* Public */,
      10,    0,   73,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::BrowseInstancesForm::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::Browser::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBrowseInstancesFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowseInstancesForm, std::true_type>,
        // method 'cell_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'cell_inst_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_cell_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_inst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev_inst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'configure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::BrowseInstancesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseInstancesForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cell_changed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 1: _t->cell_inst_changed(); break;
        case 2: _t->choose_cell_pressed(); break;
        case 3: _t->next_cell(); break;
        case 4: _t->prev_cell(); break;
        case 5: _t->next_inst(); break;
        case 6: _t->prev_inst(); break;
        case 7: _t->configure(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::BrowseInstancesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BrowseInstancesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBrowseInstancesFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::Browser::qt_metacast(_clname);
}

int lay::BrowseInstancesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::Browser::qt_metacall(_c, _id, _a);
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
