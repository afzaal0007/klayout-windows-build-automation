/****************************************************************************
** Meta object code from reading C++ file 'layWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layWidgets.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layWidgets.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS = QtMocHelpers::stringData(
    "lay::DitherPatternSelectionButton",
    "dither_pattern_changed",
    "",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[34];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[14];
    char stringdata5[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 33),  // "lay::DitherPatternSelectionBu..."
        QT_MOC_LITERAL(34, 22),  // "dither_pattern_changed"
        QT_MOC_LITERAL(57, 0),  // ""
        QT_MOC_LITERAL(58, 15),  // "browse_selected"
        QT_MOC_LITERAL(74, 13),  // "menu_selected"
        QT_MOC_LITERAL(88, 18)   // "menu_about_to_show"
    },
    "lay::DitherPatternSelectionButton",
    "dither_pattern_changed",
    "",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   41,    2, 0x08,    3 /* Private */,
       4,    0,   42,    2, 0x08,    4 /* Private */,
       5,    0,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::DitherPatternSelectionButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DitherPatternSelectionButton, std::true_type>,
        // method 'dither_pattern_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'browse_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_about_to_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::DitherPatternSelectionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DitherPatternSelectionButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dither_pattern_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->browse_selected(); break;
        case 2: _t->menu_selected(); break;
        case 3: _t->menu_about_to_show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DitherPatternSelectionButton::*)(int );
            if (_t _q_method = &DitherPatternSelectionButton::dither_pattern_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::DitherPatternSelectionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::DitherPatternSelectionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEDitherPatternSelectionButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int lay::DitherPatternSelectionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::DitherPatternSelectionButton::dither_pattern_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS = QtMocHelpers::stringData(
    "lay::LineStyleSelectionButton",
    "line_style_changed",
    "",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[30];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[14];
    char stringdata5[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "lay::LineStyleSelectionButton"
        QT_MOC_LITERAL(30, 18),  // "line_style_changed"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 15),  // "browse_selected"
        QT_MOC_LITERAL(66, 13),  // "menu_selected"
        QT_MOC_LITERAL(80, 18)   // "menu_about_to_show"
    },
    "lay::LineStyleSelectionButton",
    "line_style_changed",
    "",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELineStyleSelectionButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   41,    2, 0x08,    3 /* Private */,
       4,    0,   42,    2, 0x08,    4 /* Private */,
       5,    0,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LineStyleSelectionButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELineStyleSelectionButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LineStyleSelectionButton, std::true_type>,
        // method 'line_style_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'browse_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_about_to_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LineStyleSelectionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineStyleSelectionButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->line_style_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->browse_selected(); break;
        case 2: _t->menu_selected(); break;
        case 3: _t->menu_about_to_show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineStyleSelectionButton::*)(int );
            if (_t _q_method = &LineStyleSelectionButton::line_style_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LineStyleSelectionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LineStyleSelectionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELineStyleSelectionButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int lay::LineStyleSelectionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LineStyleSelectionButton::line_style_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS = QtMocHelpers::stringData(
    "lay::LibrarySelectionComboBox"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "lay::LibrarySelectionComboBox"
    },
    "lay::LibrarySelectionComboBox"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::LibrarySelectionComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LibrarySelectionComboBox, std::true_type>
    >,
    nullptr
} };

void lay::LibrarySelectionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::LibrarySelectionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LibrarySelectionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELibrarySelectionComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int lay::LibrarySelectionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS = QtMocHelpers::stringData(
    "lay::LayerSelectionComboBox",
    "item_selected",
    "",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[28];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "lay::LayerSelectionComboBox"
        QT_MOC_LITERAL(28, 13),  // "item_selected"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 5)   // "index"
    },
    "lay::LayerSelectionComboBox",
    "item_selected",
    "",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELayerSelectionComboBoxENDCLASS[] = {

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
       1,    1,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LayerSelectionComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELayerSelectionComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LayerSelectionComboBox, std::true_type>,
        // method 'item_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LayerSelectionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerSelectionComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->item_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::LayerSelectionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LayerSelectionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELayerSelectionComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QComboBox::qt_metacast(_clname);
}

int lay::LayerSelectionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS = QtMocHelpers::stringData(
    "lay::CellViewSelectionComboBox"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS_t qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30)   // "lay::CellViewSelectionComboBox"
    },
    "lay::CellViewSelectionComboBox"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::CellViewSelectionComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CellViewSelectionComboBox, std::true_type>
    >,
    nullptr
} };

void lay::CellViewSelectionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::CellViewSelectionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::CellViewSelectionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPECellViewSelectionComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int lay::CellViewSelectionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS = QtMocHelpers::stringData(
    "lay::SimpleColorButton",
    "color_changed",
    "",
    "color",
    "set_color",
    "selected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[10];
    char stringdata5[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS_t qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::SimpleColorButton"
        QT_MOC_LITERAL(23, 13),  // "color_changed"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "color"
        QT_MOC_LITERAL(44, 9),  // "set_color"
        QT_MOC_LITERAL(54, 8)   // "selected"
    },
    "lay::SimpleColorButton",
    "color_changed",
    "",
    "color",
    "set_color",
    "selected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPESimpleColorButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x0a,    3 /* Public */,
       5,    0,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::SimpleColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPESimpleColorButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimpleColorButton, std::true_type>,
        // method 'color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'set_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::SimpleColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleColorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->set_color((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->selected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleColorButton::*)(QColor );
            if (_t _q_method = &SimpleColorButton::color_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::SimpleColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::SimpleColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPESimpleColorButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int lay::SimpleColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::SimpleColorButton::color_changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::MarginWidget",
    "mode_selection_changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[18];
    char stringdata1[23];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "lay::MarginWidget"
        QT_MOC_LITERAL(18, 22),  // "mode_selection_changed"
        QT_MOC_LITERAL(41, 0)   // ""
    },
    "lay::MarginWidget",
    "mode_selection_changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMarginWidgetENDCLASS[] = {

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
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MarginWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMarginWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MarginWidget, std::true_type>,
        // method 'mode_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MarginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MarginWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mode_selection_changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::MarginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MarginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMarginWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::MarginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS = QtMocHelpers::stringData(
    "lay::ColorButton",
    "color_changed",
    "",
    "color",
    "set_color",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[10];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "lay::ColorButton"
        QT_MOC_LITERAL(17, 13),  // "color_changed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 5),  // "color"
        QT_MOC_LITERAL(38, 9),  // "set_color"
        QT_MOC_LITERAL(48, 15),  // "browse_selected"
        QT_MOC_LITERAL(64, 13),  // "menu_selected"
        QT_MOC_LITERAL(78, 18)   // "menu_about_to_show"
    },
    "lay::ColorButton",
    "color_changed",
    "",
    "color",
    "set_color",
    "browse_selected",
    "menu_selected",
    "menu_about_to_show"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEColorButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       5,    0,   50,    2, 0x09,    5 /* Protected */,
       6,    0,   51,    2, 0x09,    6 /* Protected */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::ColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEColorButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorButton, std::true_type>,
        // method 'color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'set_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'browse_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_about_to_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->set_color((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->browse_selected(); break;
        case 3: _t->menu_selected(); break;
        case 4: _t->menu_about_to_show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorButton::*)(QColor );
            if (_t _q_method = &ColorButton::color_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEColorButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int lay::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void lay::ColorButton::color_changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS = QtMocHelpers::stringData(
    "lay::DecoratedLineEdit",
    "options_button_clicked",
    "",
    "esc_pressed",
    "tab_pressed",
    "backtab_pressed",
    "clear_pressed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[23];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::DecoratedLineEdit"
        QT_MOC_LITERAL(23, 22),  // "options_button_clicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 11),  // "esc_pressed"
        QT_MOC_LITERAL(59, 11),  // "tab_pressed"
        QT_MOC_LITERAL(71, 15),  // "backtab_pressed"
        QT_MOC_LITERAL(87, 13)   // "clear_pressed"
    },
    "lay::DecoratedLineEdit",
    "options_button_clicked",
    "",
    "esc_pressed",
    "tab_pressed",
    "backtab_pressed",
    "clear_pressed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEDecoratedLineEditENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    0,   47,    2, 0x06,    4 /* Public */,
       6,    0,   48,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::DecoratedLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEDecoratedLineEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DecoratedLineEdit, std::true_type>,
        // method 'options_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'esc_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backtab_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::DecoratedLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoratedLineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->options_button_clicked(); break;
        case 1: _t->esc_pressed(); break;
        case 2: _t->tab_pressed(); break;
        case 3: _t->backtab_pressed(); break;
        case 4: _t->clear_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecoratedLineEdit::*)();
            if (_t _q_method = &DecoratedLineEdit::options_button_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DecoratedLineEdit::*)();
            if (_t _q_method = &DecoratedLineEdit::esc_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DecoratedLineEdit::*)();
            if (_t _q_method = &DecoratedLineEdit::tab_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DecoratedLineEdit::*)();
            if (_t _q_method = &DecoratedLineEdit::backtab_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DecoratedLineEdit::*)();
            if (_t _q_method = &DecoratedLineEdit::clear_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *lay::DecoratedLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::DecoratedLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEDecoratedLineEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int lay::DecoratedLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void lay::DecoratedLineEdit::options_button_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lay::DecoratedLineEdit::esc_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lay::DecoratedLineEdit::tab_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lay::DecoratedLineEdit::backtab_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void lay::DecoratedLineEdit::clear_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::InteractiveListWidget",
    "delete_selected_items",
    "",
    "move_selected_items_up",
    "move_selected_items_down"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[27];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "lay::InteractiveListWidget"
        QT_MOC_LITERAL(27, 21),  // "delete_selected_items"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 22),  // "move_selected_items_up"
        QT_MOC_LITERAL(73, 24)   // "move_selected_items_down"
    },
    "lay::InteractiveListWidget",
    "delete_selected_items",
    "",
    "move_selected_items_up",
    "move_selected_items_down"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEInteractiveListWidgetENDCLASS[] = {

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
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::InteractiveListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEInteractiveListWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InteractiveListWidget, std::true_type>,
        // method 'delete_selected_items'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_selected_items_up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_selected_items_down'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::InteractiveListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delete_selected_items(); break;
        case 1: _t->move_selected_items_up(); break;
        case 2: _t->move_selected_items_down(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::InteractiveListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::InteractiveListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEInteractiveListWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int lay::InteractiveListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
