/****************************************************************************
** Meta object code from reading C++ file 'layD25ViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/plugins/tools/view_25d/lay_plugin/layD25ViewWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layD25ViewWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::D25ViewWidget",
    "scale_factor_changed",
    "",
    "f",
    "vscale_factor_changed",
    "init_failed",
    "fit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[22];
    char stringdata5[12];
    char stringdata6[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "lay::D25ViewWidget"
        QT_MOC_LITERAL(19, 20),  // "scale_factor_changed"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 1),  // "f"
        QT_MOC_LITERAL(43, 21),  // "vscale_factor_changed"
        QT_MOC_LITERAL(65, 11),  // "init_failed"
        QT_MOC_LITERAL(77, 3)   // "fit"
    },
    "lay::D25ViewWidget",
    "scale_factor_changed",
    "",
    "f",
    "vscale_factor_changed",
    "init_failed",
    "fit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPED25ViewWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,
       5,    0,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::D25ViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPED25ViewWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<D25ViewWidget, std::true_type>,
        // method 'scale_factor_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'vscale_factor_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'init_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::D25ViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<D25ViewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scale_factor_changed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->vscale_factor_changed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->init_failed(); break;
        case 3: _t->fit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (D25ViewWidget::*)(double );
            if (_t _q_method = &D25ViewWidget::scale_factor_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (D25ViewWidget::*)(double );
            if (_t _q_method = &D25ViewWidget::vscale_factor_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (D25ViewWidget::*)();
            if (_t _q_method = &D25ViewWidget::init_failed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *lay::D25ViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::D25ViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPED25ViewWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "D25Camera"))
        return static_cast< D25Camera*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int lay::D25ViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
void lay::D25ViewWidget::scale_factor_changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::D25ViewWidget::vscale_factor_changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lay::D25ViewWidget::init_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
