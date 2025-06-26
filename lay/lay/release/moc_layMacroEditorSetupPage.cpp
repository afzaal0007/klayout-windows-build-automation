/****************************************************************************
** Meta object code from reading C++ file 'layMacroEditorSetupPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMacroEditorSetupPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMacroEditorSetupPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorSetupPage",
    "current_attribute_changed",
    "",
    "QListWidgetItem*",
    "current",
    "previous",
    "cb_changed",
    "n",
    "color_changed",
    "c",
    "update_font",
    "clear_exception_list"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[26];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[11];
    char stringdata7[2];
    char stringdata8[14];
    char stringdata9[2];
    char stringdata10[12];
    char stringdata11[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "lay::MacroEditorSetupPage"
        QT_MOC_LITERAL(26, 25),  // "current_attribute_changed"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(70, 7),  // "current"
        QT_MOC_LITERAL(78, 8),  // "previous"
        QT_MOC_LITERAL(87, 10),  // "cb_changed"
        QT_MOC_LITERAL(98, 1),  // "n"
        QT_MOC_LITERAL(100, 13),  // "color_changed"
        QT_MOC_LITERAL(114, 1),  // "c"
        QT_MOC_LITERAL(116, 11),  // "update_font"
        QT_MOC_LITERAL(128, 20)   // "clear_exception_list"
    },
    "lay::MacroEditorSetupPage",
    "current_attribute_changed",
    "",
    "QListWidgetItem*",
    "current",
    "previous",
    "cb_changed",
    "n",
    "color_changed",
    "c",
    "update_font",
    "clear_exception_list"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorSetupPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x09,    1 /* Protected */,
       6,    1,   49,    2, 0x09,    4 /* Protected */,
       8,    1,   52,    2, 0x09,    6 /* Protected */,
      10,    0,   55,    2, 0x09,    8 /* Protected */,
      11,    0,   56,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorSetupPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorSetupPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorSetupPage, std::true_type>,
        // method 'current_attribute_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'cb_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'color_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'update_font'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_exception_list'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorSetupPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->current_attribute_changed((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 1: _t->cb_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->color_changed((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->update_font(); break;
        case 4: _t->clear_exception_list(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::MacroEditorSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorSetupPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::ConfigPage::qt_metacast(_clname);
}

int lay::MacroEditorSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::ConfigPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
