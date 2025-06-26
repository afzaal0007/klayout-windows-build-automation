/****************************************************************************
** Meta object code from reading C++ file 'layNetlistBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layNetlistBrowser.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layNetlistBrowser.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS = QtMocHelpers::stringData(
    "lay::NetlistBrowserConfigPage",
    "window_changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[30];
    char stringdata1[15];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "lay::NetlistBrowserConfigPage"
        QT_MOC_LITERAL(30, 14),  // "window_changed"
        QT_MOC_LITERAL(45, 0)   // ""
    },
    "lay::NetlistBrowserConfigPage",
    "window_changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::NetlistBrowserConfigPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetlistBrowserConfigPage, std::true_type>,
        // method 'window_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::NetlistBrowserConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetlistBrowserConfigPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->window_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::NetlistBrowserConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::NetlistBrowserConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::NetlistBrowserConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::ConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS = QtMocHelpers::stringData(
    "lay::NetlistBrowserConfigPage2",
    "color_button_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[31];
    char stringdata1[21];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS_t qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "lay::NetlistBrowserConfigPage2"
        QT_MOC_LITERAL(31, 20),  // "color_button_clicked"
        QT_MOC_LITERAL(52, 0)   // ""
    },
    "lay::NetlistBrowserConfigPage2",
    "color_button_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::NetlistBrowserConfigPage2::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetlistBrowserConfigPage2, std::true_type>,
        // method 'color_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::NetlistBrowserConfigPage2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetlistBrowserConfigPage2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::NetlistBrowserConfigPage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::NetlistBrowserConfigPage2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPENetlistBrowserConfigPage2ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::NetlistBrowserConfigPage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::ConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
