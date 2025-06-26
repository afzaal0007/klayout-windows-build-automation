/****************************************************************************
** Meta object code from reading C++ file 'edtEditorOptionsPages.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtEditorOptionsPages.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtEditorOptionsPages.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS = QtMocHelpers::stringData(
    "edt::EditorOptionsGeneric",
    "grid_changed",
    "",
    "show_shapes_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[26];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "edt::EditorOptionsGeneric"
        QT_MOC_LITERAL(26, 12),  // "grid_changed"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 19)   // "show_shapes_changed"
    },
    "edt::EditorOptionsGeneric",
    "grid_changed",
    "",
    "show_shapes_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEEditorOptionsGenericENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::EditorOptionsGeneric::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::EditorOptionsPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEEditorOptionsGenericENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorOptionsGeneric, std::true_type>,
        // method 'grid_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'show_shapes_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::EditorOptionsGeneric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorOptionsGeneric *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->grid_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->show_shapes_changed(); break;
        default: ;
        }
    }
}

const QMetaObject *edt::EditorOptionsGeneric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::EditorOptionsGeneric::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEEditorOptionsGenericENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::EditorOptionsPage::qt_metacast(_clname);
}

int edt::EditorOptionsGeneric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::EditorOptionsPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS = QtMocHelpers::stringData(
    "edt::EditorOptionsPath",
    "type_changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[23];
    char stringdata1[13];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "edt::EditorOptionsPath"
        QT_MOC_LITERAL(23, 12),  // "type_changed"
        QT_MOC_LITERAL(36, 0)   // ""
    },
    "edt::EditorOptionsPath",
    "type_changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEEditorOptionsPathENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::EditorOptionsPath::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::EditorOptionsPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEEditorOptionsPathENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorOptionsPath, std::true_type>,
        // method 'type_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void edt::EditorOptionsPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorOptionsPath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->type_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *edt::EditorOptionsPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::EditorOptionsPath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEEditorOptionsPathENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::EditorOptionsPage::qt_metacast(_clname);
}

int edt::EditorOptionsPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::EditorOptionsPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS = QtMocHelpers::stringData(
    "edt::EditorOptionsInst",
    "array_changed",
    "",
    "browse_cell",
    "library_changed",
    "update_cell_edits"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[16];
    char stringdata5[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "edt::EditorOptionsInst"
        QT_MOC_LITERAL(23, 13),  // "array_changed"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 11),  // "browse_cell"
        QT_MOC_LITERAL(50, 15),  // "library_changed"
        QT_MOC_LITERAL(66, 17)   // "update_cell_edits"
    },
    "edt::EditorOptionsInst",
    "array_changed",
    "",
    "browse_cell",
    "library_changed",
    "update_cell_edits"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEEditorOptionsInstENDCLASS[] = {

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
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::EditorOptionsInst::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::EditorOptionsPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEEditorOptionsInstENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorOptionsInst, std::true_type>,
        // method 'array_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'library_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_cell_edits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::EditorOptionsInst::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorOptionsInst *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->array_changed(); break;
        case 1: _t->browse_cell(); break;
        case 2: _t->library_changed(); break;
        case 3: _t->update_cell_edits(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::EditorOptionsInst::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::EditorOptionsInst::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::EditorOptionsPage::qt_metacast(_clname);
}

int edt::EditorOptionsInst::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::EditorOptionsPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS = QtMocHelpers::stringData(
    "edt::EditorOptionsInstPCellParam",
    "update_pcell_parameters",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[33];
    char stringdata1[24];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS = {
    {
        QT_MOC_LITERAL(0, 32),  // "edt::EditorOptionsInstPCellParam"
        QT_MOC_LITERAL(33, 23),  // "update_pcell_parameters"
        QT_MOC_LITERAL(57, 0)   // ""
    },
    "edt::EditorOptionsInstPCellParam",
    "update_pcell_parameters",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS[] = {

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
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::EditorOptionsInstPCellParam::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::EditorOptionsPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorOptionsInstPCellParam, std::true_type>,
        // method 'update_pcell_parameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::EditorOptionsInstPCellParam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorOptionsInstPCellParam *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_pcell_parameters(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::EditorOptionsInstPCellParam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::EditorOptionsInstPCellParam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEEditorOptionsInstPCellParamENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::EditorOptionsPage::qt_metacast(_clname);
}

int edt::EditorOptionsInstPCellParam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::EditorOptionsPage::qt_metacall(_c, _id, _a);
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
