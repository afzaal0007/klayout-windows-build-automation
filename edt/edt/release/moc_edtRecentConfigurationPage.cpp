/****************************************************************************
** Meta object code from reading C++ file 'edtRecentConfigurationPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtRecentConfigurationPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtRecentConfigurationPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS = QtMocHelpers::stringData(
    "edt::RecentConfigurationPage",
    "item_clicked",
    "",
    "QTreeWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[29];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "edt::RecentConfigurationPage"
        QT_MOC_LITERAL(29, 12),  // "item_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(60, 4)   // "item"
    },
    "edt::RecentConfigurationPage",
    "item_clicked",
    "",
    "QTreeWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPERecentConfigurationPageENDCLASS[] = {

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
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::RecentConfigurationPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::EditorOptionsPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPERecentConfigurationPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RecentConfigurationPage, std::true_type>,
        // method 'item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>
    >,
    nullptr
} };

void edt::RecentConfigurationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecentConfigurationPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->item_clicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *edt::RecentConfigurationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::RecentConfigurationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPERecentConfigurationPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::EditorOptionsPage::qt_metacast(_clname);
}

int edt::RecentConfigurationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
