/****************************************************************************
** Meta object code from reading C++ file 'laySaltGrainDetailsTextWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/laySaltGrainDetailsTextWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laySaltGrainDetailsTextWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::SaltGrainDetailsTextWidget",
    "show_detailed_view",
    "",
    "f",
    "open_link",
    "url"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[32];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[10];
    char stringdata5[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "lay::SaltGrainDetailsTextWidget"
        QT_MOC_LITERAL(32, 18),  // "show_detailed_view"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 1),  // "f"
        QT_MOC_LITERAL(54, 9),  // "open_link"
        QT_MOC_LITERAL(64, 3)   // "url"
    },
    "lay::SaltGrainDetailsTextWidget",
    "show_detailed_view",
    "",
    "f",
    "open_link",
    "url"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS[] = {

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
       4,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QUrl,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::SaltGrainDetailsTextWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextBrowser::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SaltGrainDetailsTextWidget, std::true_type>,
        // method 'show_detailed_view'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'open_link'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void lay::SaltGrainDetailsTextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaltGrainDetailsTextWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_detailed_view((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->open_link((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::SaltGrainDetailsTextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::SaltGrainDetailsTextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPESaltGrainDetailsTextWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int lay::SaltGrainDetailsTextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
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
