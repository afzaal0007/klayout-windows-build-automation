/****************************************************************************
** Meta object code from reading C++ file 'layBrowseShapesForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layBrowseShapesForm.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layBrowseShapesForm.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS = QtMocHelpers::stringData(
    "lay::BrowseShapesConfigPage",
    "context_changed",
    "",
    "window_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[28];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "lay::BrowseShapesConfigPage"
        QT_MOC_LITERAL(28, 15),  // "context_changed"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14)   // "window_changed"
    },
    "lay::BrowseShapesConfigPage",
    "context_changed",
    "",
    "window_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::BrowseShapesConfigPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowseShapesConfigPage, std::true_type>,
        // method 'context_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'window_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::BrowseShapesConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseShapesConfigPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->context_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->window_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::BrowseShapesConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BrowseShapesConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBrowseShapesConfigPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::BrowseShapesConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS = QtMocHelpers::stringData(
    "lay::BrowseShapesForm",
    "cell_changed",
    "",
    "QTreeWidgetItem*",
    "shape_inst_changed",
    "cell_inst_changed",
    "next_cell",
    "prev_cell",
    "next_shape",
    "prev_shape",
    "next_inst",
    "prev_inst",
    "configure"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[22];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "lay::BrowseShapesForm"
        QT_MOC_LITERAL(22, 12),  // "cell_changed"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(53, 18),  // "shape_inst_changed"
        QT_MOC_LITERAL(72, 17),  // "cell_inst_changed"
        QT_MOC_LITERAL(90, 9),  // "next_cell"
        QT_MOC_LITERAL(100, 9),  // "prev_cell"
        QT_MOC_LITERAL(110, 10),  // "next_shape"
        QT_MOC_LITERAL(121, 10),  // "prev_shape"
        QT_MOC_LITERAL(132, 9),  // "next_inst"
        QT_MOC_LITERAL(142, 9),  // "prev_inst"
        QT_MOC_LITERAL(152, 9)   // "configure"
    },
    "lay::BrowseShapesForm",
    "cell_changed",
    "",
    "QTreeWidgetItem*",
    "shape_inst_changed",
    "cell_inst_changed",
    "next_cell",
    "prev_cell",
    "next_shape",
    "prev_shape",
    "next_inst",
    "prev_inst",
    "configure"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBrowseShapesFormENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x0a,    1 /* Public */,
       4,    0,   79,    2, 0x0a,    4 /* Public */,
       5,    2,   80,    2, 0x0a,    5 /* Public */,
       6,    0,   85,    2, 0x0a,    8 /* Public */,
       7,    0,   86,    2, 0x0a,    9 /* Public */,
       8,    0,   87,    2, 0x0a,   10 /* Public */,
       9,    0,   88,    2, 0x0a,   11 /* Public */,
      10,    0,   89,    2, 0x0a,   12 /* Public */,
      11,    0,   90,    2, 0x0a,   13 /* Public */,
      12,    0,   91,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
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

Q_CONSTINIT const QMetaObject lay::BrowseShapesForm::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::Browser::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBrowseShapesFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowseShapesForm, std::true_type>,
        // method 'cell_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'shape_inst_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cell_inst_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'next_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_shape'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev_shape'
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

void lay::BrowseShapesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseShapesForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cell_changed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 1: _t->shape_inst_changed(); break;
        case 2: _t->cell_inst_changed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 3: _t->next_cell(); break;
        case 4: _t->prev_cell(); break;
        case 5: _t->next_shape(); break;
        case 6: _t->prev_shape(); break;
        case 7: _t->next_inst(); break;
        case 8: _t->prev_inst(); break;
        case 9: _t->configure(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::BrowseShapesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BrowseShapesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBrowseShapesFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::Browser::qt_metacast(_clname);
}

int lay::BrowseShapesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::Browser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
