/****************************************************************************
** Meta object code from reading C++ file 'layMacroVariableView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMacroVariableView.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMacroVariableView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS = QtMocHelpers::stringData(
    "lay::MacroVariableView",
    "set_show_all",
    "",
    "show_all",
    "expanded",
    "QTreeWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[23];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::MacroVariableView"
        QT_MOC_LITERAL(23, 12),  // "set_show_all"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 8),  // "show_all"
        QT_MOC_LITERAL(46, 8),  // "expanded"
        QT_MOC_LITERAL(55, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(72, 4)   // "item"
    },
    "lay::MacroVariableView",
    "set_show_all",
    "",
    "show_all",
    "expanded",
    "QTreeWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroVariableViewENDCLASS[] = {

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
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroVariableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroVariableViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroVariableView, std::true_type>,
        // method 'set_show_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'expanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>
    >,
    nullptr
} };

void lay::MacroVariableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroVariableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_show_all((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->expanded((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::MacroVariableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroVariableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroVariableViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int lay::MacroVariableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
