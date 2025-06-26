/****************************************************************************
** Meta object code from reading C++ file 'edtPropertiesPages.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtPropertiesPages.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtPropertiesPages.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::ShapePropertiesPage",
    "show_inst",
    "",
    "show_props",
    "display_mode_changed",
    "update_shape"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[25];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[21];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "edt::ShapePropertiesPage"
        QT_MOC_LITERAL(25, 9),  // "show_inst"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 10),  // "show_props"
        QT_MOC_LITERAL(47, 20),  // "display_mode_changed"
        QT_MOC_LITERAL(68, 12)   // "update_shape"
    },
    "edt::ShapePropertiesPage",
    "show_inst",
    "",
    "show_props",
    "display_mode_changed",
    "update_shape"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEShapePropertiesPageENDCLASS[] = {

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
       5,    0,   43,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::ShapePropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::PropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEShapePropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShapePropertiesPage, std::true_type>,
        // method 'show_inst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_props'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'display_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'update_shape'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::ShapePropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShapePropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_inst(); break;
        case 1: _t->show_props(); break;
        case 2: _t->display_mode_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->update_shape(); break;
        default: ;
        }
    }
}

const QMetaObject *edt::ShapePropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::ShapePropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEShapePropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::PropertiesPage::qt_metacast(_clname);
}

int edt::ShapePropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::PropertiesPage::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::PolygonPropertiesPage",
    "text_changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[27];
    char stringdata1[13];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "edt::PolygonPropertiesPage"
        QT_MOC_LITERAL(27, 12),  // "text_changed"
        QT_MOC_LITERAL(40, 0)   // ""
    },
    "edt::PolygonPropertiesPage",
    "text_changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEPolygonPropertiesPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::PolygonPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEPolygonPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PolygonPropertiesPage, std::true_type>,
        // method 'text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::PolygonPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolygonPropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->text_changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::PolygonPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::PolygonPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEPolygonPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PolygonPropertiesPage"))
        return static_cast< Ui::PolygonPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::PolygonPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::BoxPropertiesPage",
    "changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[23];
    char stringdata1[8];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "edt::BoxPropertiesPage"
        QT_MOC_LITERAL(23, 7),  // "changed"
        QT_MOC_LITERAL(31, 0)   // ""
    },
    "edt::BoxPropertiesPage",
    "changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEBoxPropertiesPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::BoxPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEBoxPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoxPropertiesPage, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::BoxPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoxPropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::BoxPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::BoxPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEBoxPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::BoxPropertiesPage"))
        return static_cast< Ui::BoxPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::BoxPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::PointPropertiesPage",
    "changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[25];
    char stringdata1[8];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "edt::PointPropertiesPage"
        QT_MOC_LITERAL(25, 7),  // "changed"
        QT_MOC_LITERAL(33, 0)   // ""
    },
    "edt::PointPropertiesPage",
    "changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEPointPropertiesPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::PointPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEPointPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PointPropertiesPage, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::PointPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointPropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::PointPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::PointPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEPointPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PointPropertiesPage"))
        return static_cast< Ui::PointPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::PointPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::TextPropertiesPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "edt::TextPropertiesPage"
    },
    "edt::TextPropertiesPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPETextPropertiesPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::TextPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPETextPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextPropertiesPage, std::true_type>
    >,
    nullptr
} };

void edt::TextPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::TextPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::TextPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPETextPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::TextPropertiesPage"))
        return static_cast< Ui::TextPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::TextPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::PathPropertiesPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "edt::PathPropertiesPage"
    },
    "edt::PathPropertiesPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEPathPropertiesPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::PathPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEPathPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PathPropertiesPage, std::true_type>
    >,
    nullptr
} };

void edt::PathPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::PathPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::PathPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEPathPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PathPropertiesPage"))
        return static_cast< Ui::PathPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::PathPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::EditablePathPropertiesPage",
    "type_selected",
    "",
    "text_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[32];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "edt::EditablePathPropertiesPage"
        QT_MOC_LITERAL(32, 13),  // "type_selected"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 12)   // "text_changed"
    },
    "edt::EditablePathPropertiesPage",
    "type_selected",
    "",
    "text_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS[] = {

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
       3,    0,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::EditablePathPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ShapePropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditablePathPropertiesPage, std::true_type>,
        // method 'type_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::EditablePathPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditablePathPropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->type_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->text_changed(); break;
        default: ;
        }
    }
}

const QMetaObject *edt::EditablePathPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::EditablePathPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEEditablePathPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::EditablePathPropertiesPage"))
        return static_cast< Ui::EditablePathPropertiesPage*>(this);
    return ShapePropertiesPage::qt_metacast(_clname);
}

int edt::EditablePathPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ShapePropertiesPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
