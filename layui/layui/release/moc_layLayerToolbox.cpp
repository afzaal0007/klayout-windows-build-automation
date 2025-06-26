/****************************************************************************
** Meta object code from reading C++ file 'layLayerToolbox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layLayerToolbox.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLayerToolbox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS = QtMocHelpers::stringData(
    "lay::LCPRemitter",
    "the_signal",
    "",
    "index",
    "the_slot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "lay::LCPRemitter"
        QT_MOC_LITERAL(17, 10),  // "the_signal"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 5),  // "index"
        QT_MOC_LITERAL(35, 8)   // "the_slot"
    },
    "lay::LCPRemitter",
    "the_signal",
    "",
    "index",
    "the_slot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPRemitterENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPRemitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPRemitterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPRemitter, std::true_type>,
        // method 'the_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'the_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LCPRemitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPRemitter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->the_signal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->the_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPRemitter::*)(int );
            if (_t _q_method = &LCPRemitter::the_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPRemitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPRemitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPRemitterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lay::LCPRemitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LCPRemitter::the_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS = QtMocHelpers::stringData(
    "lay::LCPColorPalette",
    "color_selected",
    "",
    "color_brightness_selected",
    "button_clicked",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[15];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::LCPColorPalette"
        QT_MOC_LITERAL(21, 14),  // "color_selected"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 25),  // "color_brightness_selected"
        QT_MOC_LITERAL(63, 14),  // "button_clicked"
        QT_MOC_LITERAL(78, 5)   // "index"
    },
    "lay::LCPColorPalette",
    "color_selected",
    "",
    "color_brightness_selected",
    "button_clicked",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPColorPaletteENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       3,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPColorPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPColorPaletteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPColorPalette, std::true_type>,
        // method 'color_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'color_brightness_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPColorPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPColorPalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_selected((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->color_brightness_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPColorPalette::*)(QColor );
            if (_t _q_method = &LCPColorPalette::color_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LCPColorPalette::*)(int );
            if (_t _q_method = &LCPColorPalette::color_brightness_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPColorPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPColorPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPColorPaletteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LCPColorPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void lay::LCPColorPalette::color_selected(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LCPColorPalette::color_brightness_selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS = QtMocHelpers::stringData(
    "lay::LCPAnimationPalette",
    "animation_selected",
    "",
    "mode",
    "button_clicked",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[25];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[15];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "lay::LCPAnimationPalette"
        QT_MOC_LITERAL(25, 18),  // "animation_selected"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 4),  // "mode"
        QT_MOC_LITERAL(50, 14),  // "button_clicked"
        QT_MOC_LITERAL(65, 5)   // "index"
    },
    "lay::LCPAnimationPalette",
    "animation_selected",
    "",
    "mode",
    "button_clicked",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPAnimationPaletteENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPAnimationPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPAnimationPaletteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPAnimationPalette, std::true_type>,
        // method 'animation_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPAnimationPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPAnimationPalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->animation_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPAnimationPalette::*)(int );
            if (_t _q_method = &LCPAnimationPalette::animation_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPAnimationPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPAnimationPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPAnimationPaletteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LCPAnimationPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LCPAnimationPalette::animation_selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS = QtMocHelpers::stringData(
    "lay::LCPStylePalette",
    "width_selected",
    "",
    "width",
    "marked_selected",
    "marked",
    "xfill_selected",
    "xfill",
    "line_style_selected",
    "index",
    "line_styles_changed",
    "lay::LineStyles",
    "button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[7];
    char stringdata6[15];
    char stringdata7[6];
    char stringdata8[20];
    char stringdata9[6];
    char stringdata10[20];
    char stringdata11[16];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::LCPStylePalette"
        QT_MOC_LITERAL(21, 14),  // "width_selected"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 5),  // "width"
        QT_MOC_LITERAL(43, 15),  // "marked_selected"
        QT_MOC_LITERAL(59, 6),  // "marked"
        QT_MOC_LITERAL(66, 14),  // "xfill_selected"
        QT_MOC_LITERAL(81, 5),  // "xfill"
        QT_MOC_LITERAL(87, 19),  // "line_style_selected"
        QT_MOC_LITERAL(107, 5),  // "index"
        QT_MOC_LITERAL(113, 19),  // "line_styles_changed"
        QT_MOC_LITERAL(133, 15),  // "lay::LineStyles"
        QT_MOC_LITERAL(149, 14)   // "button_clicked"
    },
    "lay::LCPStylePalette",
    "width_selected",
    "",
    "width",
    "marked_selected",
    "marked",
    "xfill_selected",
    "xfill",
    "line_style_selected",
    "index",
    "line_styles_changed",
    "lay::LineStyles",
    "button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPStylePaletteENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       6,    1,   56,    2, 0x06,    5 /* Public */,
       8,    1,   59,    2, 0x06,    7 /* Public */,
      10,    1,   62,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPStylePalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPStylePaletteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPStylePalette, std::true_type>,
        // method 'width_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'marked_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'xfill_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'line_style_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'line_styles_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const lay::LineStyles &, std::false_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPStylePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPStylePalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->width_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->marked_selected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->xfill_selected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->line_style_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->line_styles_changed((*reinterpret_cast< std::add_pointer_t<lay::LineStyles>>(_a[1]))); break;
        case 5: _t->button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPStylePalette::*)(int );
            if (_t _q_method = &LCPStylePalette::width_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LCPStylePalette::*)(bool );
            if (_t _q_method = &LCPStylePalette::marked_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LCPStylePalette::*)(bool );
            if (_t _q_method = &LCPStylePalette::xfill_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LCPStylePalette::*)(int );
            if (_t _q_method = &LCPStylePalette::line_style_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LCPStylePalette::*)(const lay::LineStyles & );
            if (_t _q_method = &LCPStylePalette::line_styles_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPStylePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPStylePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPStylePaletteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LCPStylePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void lay::LCPStylePalette::width_selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LCPStylePalette::marked_selected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lay::LCPStylePalette::xfill_selected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lay::LCPStylePalette::line_style_selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void lay::LCPStylePalette::line_styles_changed(const lay::LineStyles & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS = QtMocHelpers::stringData(
    "lay::LCPDitherPalette",
    "dither_selected",
    "",
    "dither_index",
    "pattern_changed",
    "lay::DitherPattern",
    "button_clicked",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[22];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[19];
    char stringdata6[15];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "lay::LCPDitherPalette"
        QT_MOC_LITERAL(22, 15),  // "dither_selected"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 12),  // "dither_index"
        QT_MOC_LITERAL(52, 15),  // "pattern_changed"
        QT_MOC_LITERAL(68, 18),  // "lay::DitherPattern"
        QT_MOC_LITERAL(87, 14),  // "button_clicked"
        QT_MOC_LITERAL(102, 5)   // "index"
    },
    "lay::LCPDitherPalette",
    "dither_selected",
    "",
    "dither_index",
    "pattern_changed",
    "lay::DitherPattern",
    "button_clicked",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPDitherPaletteENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPDitherPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPDitherPaletteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPDitherPalette, std::true_type>,
        // method 'dither_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pattern_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const lay::DitherPattern &, std::false_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPDitherPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPDitherPalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dither_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->pattern_changed((*reinterpret_cast< std::add_pointer_t<lay::DitherPattern>>(_a[1]))); break;
        case 2: _t->button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPDitherPalette::*)(int );
            if (_t _q_method = &LCPDitherPalette::dither_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LCPDitherPalette::*)(const lay::DitherPattern & );
            if (_t _q_method = &LCPDitherPalette::pattern_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPDitherPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPDitherPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPDitherPaletteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LCPDitherPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void lay::LCPDitherPalette::dither_selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LCPDitherPalette::pattern_changed(const lay::DitherPattern & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS = QtMocHelpers::stringData(
    "lay::LCPVisibilityPalette",
    "visibility_change",
    "",
    "visible",
    "transparency_change",
    "transparent",
    "button_clicked",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[26];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[20];
    char stringdata5[12];
    char stringdata6[15];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "lay::LCPVisibilityPalette"
        QT_MOC_LITERAL(26, 17),  // "visibility_change"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 7),  // "visible"
        QT_MOC_LITERAL(53, 19),  // "transparency_change"
        QT_MOC_LITERAL(73, 11),  // "transparent"
        QT_MOC_LITERAL(85, 14),  // "button_clicked"
        QT_MOC_LITERAL(100, 5)   // "index"
    },
    "lay::LCPVisibilityPalette",
    "visibility_change",
    "",
    "visible",
    "transparency_change",
    "transparent",
    "button_clicked",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPVisibilityPaletteENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPVisibilityPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPVisibilityPaletteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPVisibilityPalette, std::true_type>,
        // method 'visibility_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'transparency_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPVisibilityPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPVisibilityPalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visibility_change((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->transparency_change((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPVisibilityPalette::*)(bool );
            if (_t _q_method = &LCPVisibilityPalette::visibility_change; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LCPVisibilityPalette::*)(bool );
            if (_t _q_method = &LCPVisibilityPalette::transparency_change; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPVisibilityPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPVisibilityPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPVisibilityPaletteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LCPVisibilityPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void lay::LCPVisibilityPalette::visibility_change(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LCPVisibilityPalette::transparency_change(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS = QtMocHelpers::stringData(
    "lay::LCPActiveLabel",
    "clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[20];
    char stringdata1[8];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "lay::LCPActiveLabel"
        QT_MOC_LITERAL(20, 7),  // "clicked"
        QT_MOC_LITERAL(28, 0)   // ""
    },
    "lay::LCPActiveLabel",
    "clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPActiveLabelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPActiveLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPActiveLabelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPActiveLabel, std::true_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LCPActiveLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPActiveLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPActiveLabel::*)(int );
            if (_t _q_method = &LCPActiveLabel::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPActiveLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPActiveLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPActiveLabelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int lay::LCPActiveLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LCPActiveLabel::clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS = QtMocHelpers::stringData(
    "lay::LayerToolbox",
    "panel_button_clicked",
    "",
    "index",
    "fill_color_changed",
    "c",
    "frame_color_changed",
    "fill_color_brightness",
    "delta",
    "frame_color_brightness",
    "dither_changed",
    "di",
    "dither_pattern_changed",
    "lay::DitherPattern",
    "pattern",
    "line_styles_changed",
    "lay::LineStyles",
    "styles",
    "visibility_changed",
    "visible",
    "transparency_changed",
    "transparent",
    "width_changed",
    "width",
    "marked_changed",
    "marked",
    "xfill_changed",
    "xfill",
    "line_style_changed",
    "animation_changed",
    "mode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[18];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[2];
    char stringdata6[20];
    char stringdata7[22];
    char stringdata8[6];
    char stringdata9[23];
    char stringdata10[15];
    char stringdata11[3];
    char stringdata12[23];
    char stringdata13[19];
    char stringdata14[8];
    char stringdata15[20];
    char stringdata16[16];
    char stringdata17[7];
    char stringdata18[19];
    char stringdata19[8];
    char stringdata20[21];
    char stringdata21[12];
    char stringdata22[14];
    char stringdata23[6];
    char stringdata24[15];
    char stringdata25[7];
    char stringdata26[14];
    char stringdata27[6];
    char stringdata28[19];
    char stringdata29[18];
    char stringdata30[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "lay::LayerToolbox"
        QT_MOC_LITERAL(18, 20),  // "panel_button_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 5),  // "index"
        QT_MOC_LITERAL(46, 18),  // "fill_color_changed"
        QT_MOC_LITERAL(65, 1),  // "c"
        QT_MOC_LITERAL(67, 19),  // "frame_color_changed"
        QT_MOC_LITERAL(87, 21),  // "fill_color_brightness"
        QT_MOC_LITERAL(109, 5),  // "delta"
        QT_MOC_LITERAL(115, 22),  // "frame_color_brightness"
        QT_MOC_LITERAL(138, 14),  // "dither_changed"
        QT_MOC_LITERAL(153, 2),  // "di"
        QT_MOC_LITERAL(156, 22),  // "dither_pattern_changed"
        QT_MOC_LITERAL(179, 18),  // "lay::DitherPattern"
        QT_MOC_LITERAL(198, 7),  // "pattern"
        QT_MOC_LITERAL(206, 19),  // "line_styles_changed"
        QT_MOC_LITERAL(226, 15),  // "lay::LineStyles"
        QT_MOC_LITERAL(242, 6),  // "styles"
        QT_MOC_LITERAL(249, 18),  // "visibility_changed"
        QT_MOC_LITERAL(268, 7),  // "visible"
        QT_MOC_LITERAL(276, 20),  // "transparency_changed"
        QT_MOC_LITERAL(297, 11),  // "transparent"
        QT_MOC_LITERAL(309, 13),  // "width_changed"
        QT_MOC_LITERAL(323, 5),  // "width"
        QT_MOC_LITERAL(329, 14),  // "marked_changed"
        QT_MOC_LITERAL(344, 6),  // "marked"
        QT_MOC_LITERAL(351, 13),  // "xfill_changed"
        QT_MOC_LITERAL(365, 5),  // "xfill"
        QT_MOC_LITERAL(371, 18),  // "line_style_changed"
        QT_MOC_LITERAL(390, 17),  // "animation_changed"
        QT_MOC_LITERAL(408, 4)   // "mode"
    },
    "lay::LayerToolbox",
    "panel_button_clicked",
    "",
    "index",
    "fill_color_changed",
    "c",
    "frame_color_changed",
    "fill_color_brightness",
    "delta",
    "frame_color_brightness",
    "dither_changed",
    "di",
    "dither_pattern_changed",
    "lay::DitherPattern",
    "pattern",
    "line_styles_changed",
    "lay::LineStyles",
    "styles",
    "visibility_changed",
    "visible",
    "transparency_changed",
    "transparent",
    "width_changed",
    "width",
    "marked_changed",
    "marked",
    "xfill_changed",
    "xfill",
    "line_style_changed",
    "animation_changed",
    "mode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELayerToolboxENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x09,    1 /* Protected */,
       4,    1,  107,    2, 0x09,    3 /* Protected */,
       6,    1,  110,    2, 0x09,    5 /* Protected */,
       7,    1,  113,    2, 0x09,    7 /* Protected */,
       9,    1,  116,    2, 0x09,    9 /* Protected */,
      10,    1,  119,    2, 0x09,   11 /* Protected */,
      12,    1,  122,    2, 0x09,   13 /* Protected */,
      15,    1,  125,    2, 0x09,   15 /* Protected */,
      18,    1,  128,    2, 0x09,   17 /* Protected */,
      20,    1,  131,    2, 0x09,   19 /* Protected */,
      22,    1,  134,    2, 0x09,   21 /* Protected */,
      24,    1,  137,    2, 0x09,   23 /* Protected */,
      26,    1,  140,    2, 0x09,   25 /* Protected */,
      28,    1,  143,    2, 0x09,   27 /* Protected */,
      29,    1,  146,    2, 0x09,   29 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   30,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LayerToolbox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELayerToolboxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LayerToolbox, std::true_type>,
        // method 'panel_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fill_color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'frame_color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'fill_color_brightness'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'frame_color_brightness'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dither_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dither_pattern_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const lay::DitherPattern &, std::false_type>,
        // method 'line_styles_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const lay::LineStyles &, std::false_type>,
        // method 'visibility_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'transparency_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'width_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'marked_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'xfill_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'line_style_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'animation_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LayerToolbox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerToolbox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->panel_button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->fill_color_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->frame_color_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->fill_color_brightness((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->frame_color_brightness((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->dither_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->dither_pattern_changed((*reinterpret_cast< std::add_pointer_t<lay::DitherPattern>>(_a[1]))); break;
        case 7: _t->line_styles_changed((*reinterpret_cast< std::add_pointer_t<lay::LineStyles>>(_a[1]))); break;
        case 8: _t->visibility_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->transparency_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->width_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->marked_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->xfill_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->line_style_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->animation_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::LayerToolbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LayerToolbox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELayerToolboxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lay::LayerToolbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
