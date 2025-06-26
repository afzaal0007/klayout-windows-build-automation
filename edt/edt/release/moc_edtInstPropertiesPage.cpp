/****************************************************************************
** Meta object code from reading C++ file 'edtInstPropertiesPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtInstPropertiesPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtInstPropertiesPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS = QtMocHelpers::stringData(
    "edt::InstPropertiesPage",
    "show_inst",
    "",
    "show_cell",
    "show_props",
    "cell_name_changed",
    "s",
    "display_mode_changed",
    "browse_cell",
    "update_pcell_parameters",
    "library_changed",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[24];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[18];
    char stringdata6[2];
    char stringdata7[21];
    char stringdata8[12];
    char stringdata9[24];
    char stringdata10[16];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "edt::InstPropertiesPage"
        QT_MOC_LITERAL(24, 9),  // "show_inst"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 9),  // "show_cell"
        QT_MOC_LITERAL(45, 10),  // "show_props"
        QT_MOC_LITERAL(56, 17),  // "cell_name_changed"
        QT_MOC_LITERAL(74, 1),  // "s"
        QT_MOC_LITERAL(76, 20),  // "display_mode_changed"
        QT_MOC_LITERAL(97, 11),  // "browse_cell"
        QT_MOC_LITERAL(109, 23),  // "update_pcell_parameters"
        QT_MOC_LITERAL(133, 15),  // "library_changed"
        QT_MOC_LITERAL(149, 5)   // "index"
    },
    "edt::InstPropertiesPage",
    "show_inst",
    "",
    "show_cell",
    "show_props",
    "cell_name_changed",
    "s",
    "display_mode_changed",
    "browse_cell",
    "update_pcell_parameters",
    "library_changed",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEInstPropertiesPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x09,    1 /* Protected */,
       3,    0,   63,    2, 0x09,    2 /* Protected */,
       4,    0,   64,    2, 0x09,    3 /* Protected */,
       5,    1,   65,    2, 0x09,    4 /* Protected */,
       7,    1,   68,    2, 0x09,    6 /* Protected */,
       8,    0,   71,    2, 0x09,    8 /* Protected */,
       9,    0,   72,    2, 0x09,    9 /* Protected */,
      10,    1,   73,    2, 0x09,   10 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::InstPropertiesPage::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::PropertiesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEInstPropertiesPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstPropertiesPage, std::true_type>,
        // method 'show_inst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_props'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cell_name_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'display_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'browse_cell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_pcell_parameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'library_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void edt::InstPropertiesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstPropertiesPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_inst(); break;
        case 1: _t->show_cell(); break;
        case 2: _t->show_props(); break;
        case 3: _t->cell_name_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->display_mode_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->browse_cell(); break;
        case 6: _t->update_pcell_parameters(); break;
        case 7: _t->library_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *edt::InstPropertiesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::InstPropertiesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEInstPropertiesPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::InstPropertiesPage"))
        return static_cast< Ui::InstPropertiesPage*>(this);
    return lay::PropertiesPage::qt_metacast(_clname);
}

int edt::InstPropertiesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::PropertiesPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
