/****************************************************************************
** Meta object code from reading C++ file 'imgWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/img/img/imgWidgets.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imgWidgets.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS = QtMocHelpers::stringData(
    "img::TwoColorWidget",
    "color_changed",
    "",
    "std::pair<QColor,QColor>",
    "c",
    "set_color",
    "set_single_mode",
    "f",
    "lcolor_changed",
    "rcolor_changed",
    "lock_changed",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[20];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[2];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[2];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[13];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS_t qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "img::TwoColorWidget"
        QT_MOC_LITERAL(20, 13),  // "color_changed"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 24),  // "std::pair<QColor,QColor>"
        QT_MOC_LITERAL(60, 1),  // "c"
        QT_MOC_LITERAL(62, 9),  // "set_color"
        QT_MOC_LITERAL(72, 15),  // "set_single_mode"
        QT_MOC_LITERAL(88, 1),  // "f"
        QT_MOC_LITERAL(90, 14),  // "lcolor_changed"
        QT_MOC_LITERAL(105, 14),  // "rcolor_changed"
        QT_MOC_LITERAL(120, 12),  // "lock_changed"
        QT_MOC_LITERAL(133, 7)   // "checked"
    },
    "img::TwoColorWidget",
    "color_changed",
    "",
    "std::pair<QColor,QColor>",
    "c",
    "set_color",
    "set_single_mode",
    "f",
    "lcolor_changed",
    "rcolor_changed",
    "lock_changed",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSimgSCOPETwoColorWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   53,    2, 0x0a,    3 /* Public */,
       6,    1,   56,    2, 0x0a,    5 /* Public */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
       9,    1,   62,    2, 0x08,    9 /* Private */,
      10,    1,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject img::TwoColorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSimgSCOPETwoColorWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TwoColorWidget, std::true_type>,
        // method 'color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<QColor,QColor>, std::false_type>,
        // method 'set_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<QColor,QColor>, std::false_type>,
        // method 'set_single_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'lcolor_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'rcolor_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'lock_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void img::TwoColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TwoColorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_changed((*reinterpret_cast< std::add_pointer_t<std::pair<QColor,QColor>>>(_a[1]))); break;
        case 1: _t->set_color((*reinterpret_cast< std::add_pointer_t<std::pair<QColor,QColor>>>(_a[1]))); break;
        case 2: _t->set_single_mode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->lcolor_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 4: _t->rcolor_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 5: _t->lock_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TwoColorWidget::*)(std::pair<QColor,QColor> );
            if (_t _q_method = &TwoColorWidget::color_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *img::TwoColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *img::TwoColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSimgSCOPETwoColorWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int img::TwoColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void img::TwoColorWidget::color_changed(std::pair<QColor,QColor> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS = QtMocHelpers::stringData(
    "img::ColorBar",
    "color_mapping_changed",
    "",
    "selection_changed",
    "std::pair<QColor,QColor>",
    "c",
    "set_current_color",
    "set_current_position",
    "x"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[25];
    char stringdata5[2];
    char stringdata6[18];
    char stringdata7[21];
    char stringdata8[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS_t qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "img::ColorBar"
        QT_MOC_LITERAL(14, 21),  // "color_mapping_changed"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 17),  // "selection_changed"
        QT_MOC_LITERAL(55, 24),  // "std::pair<QColor,QColor>"
        QT_MOC_LITERAL(80, 1),  // "c"
        QT_MOC_LITERAL(82, 17),  // "set_current_color"
        QT_MOC_LITERAL(100, 20),  // "set_current_position"
        QT_MOC_LITERAL(121, 1)   // "x"
    },
    "img::ColorBar",
    "color_mapping_changed",
    "",
    "selection_changed",
    "std::pair<QColor,QColor>",
    "c",
    "set_current_color",
    "set_current_position",
    "x"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSimgSCOPEColorBarENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       3,    1,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   49,    2, 0x0a,    5 /* Public */,
       7,    1,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject img::ColorBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSimgSCOPEColorBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorBar, std::true_type>,
        // method 'color_mapping_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<QColor,QColor>, std::false_type>,
        // method 'set_current_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<QColor,QColor>, std::false_type>,
        // method 'set_current_position'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void img::ColorBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->color_mapping_changed(); break;
        case 1: _t->selection_changed(); break;
        case 2: _t->selection_changed((*reinterpret_cast< std::add_pointer_t<std::pair<QColor,QColor>>>(_a[1]))); break;
        case 3: _t->set_current_color((*reinterpret_cast< std::add_pointer_t<std::pair<QColor,QColor>>>(_a[1]))); break;
        case 4: _t->set_current_position((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorBar::*)();
            if (_t _q_method = &ColorBar::color_mapping_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorBar::*)();
            if (_t _q_method = &ColorBar::selection_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorBar::*)(std::pair<QColor,QColor> );
            if (_t _q_method = &ColorBar::selection_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *img::ColorBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *img::ColorBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSimgSCOPEColorBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int img::ColorBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void img::ColorBar::color_mapping_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void img::ColorBar::selection_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void img::ColorBar::selection_changed(std::pair<QColor,QColor> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
