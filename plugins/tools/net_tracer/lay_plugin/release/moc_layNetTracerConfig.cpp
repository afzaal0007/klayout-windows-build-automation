/****************************************************************************
** Meta object code from reading C++ file 'layNetTracerConfig.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/plugins/tools/net_tracer/lay_plugin/layNetTracerConfig.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layNetTracerConfig.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS = QtMocHelpers::stringData(
    "lay::NetTracerConfigPage",
    "window_changed",
    "",
    "color_button_clicked",
    "update_colors"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[25];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "lay::NetTracerConfigPage"
        QT_MOC_LITERAL(25, 14),  // "window_changed"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 20),  // "color_button_clicked"
        QT_MOC_LITERAL(62, 13)   // "update_colors"
    },
    "lay::NetTracerConfigPage",
    "window_changed",
    "",
    "color_button_clicked",
    "update_colors"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPENetTracerConfigPageENDCLASS[] = {

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
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   35,    2, 0x0a,    3 /* Public */,
       4,    0,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::NetTracerConfigPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPENetTracerConfigPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetTracerConfigPage, std::true_type>,
        // method 'window_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'color_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_colors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::NetTracerConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetTracerConfigPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->window_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->color_button_clicked(); break;
        case 2: _t->update_colors(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::NetTracerConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::NetTracerConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPENetTracerConfigPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::NetTracerConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::ConfigPage::qt_metacall(_c, _id, _a);
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
