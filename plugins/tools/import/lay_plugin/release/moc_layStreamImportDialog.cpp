/****************************************************************************
** Meta object code from reading C++ file 'layStreamImportDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/plugins/tools/import/lay_plugin/layStreamImportDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layStreamImportDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS = QtMocHelpers::stringData(
    "lay::StreamImportDialog",
    "next_page",
    "",
    "last_page",
    "browse_filename",
    "edit_options",
    "reset_options",
    "reset",
    "mapping_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[24];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[14];
    char stringdata7[6];
    char stringdata8[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::StreamImportDialog"
        QT_MOC_LITERAL(24, 9),  // "next_page"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 9),  // "last_page"
        QT_MOC_LITERAL(45, 15),  // "browse_filename"
        QT_MOC_LITERAL(61, 12),  // "edit_options"
        QT_MOC_LITERAL(74, 13),  // "reset_options"
        QT_MOC_LITERAL(88, 5),  // "reset"
        QT_MOC_LITERAL(94, 15)   // "mapping_changed"
    },
    "lay::StreamImportDialog",
    "next_page",
    "",
    "last_page",
    "browse_filename",
    "edit_options",
    "reset_options",
    "reset",
    "mapping_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEStreamImportDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    0,   60,    2, 0x0a,    5 /* Public */,
       7,    0,   61,    2, 0x0a,    6 /* Public */,
       8,    0,   62,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::StreamImportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEStreamImportDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StreamImportDialog, std::true_type>,
        // method 'next_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'last_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_filename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit_options'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_options'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mapping_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::StreamImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamImportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->next_page(); break;
        case 1: _t->last_page(); break;
        case 2: _t->browse_filename(); break;
        case 3: _t->edit_options(); break;
        case 4: _t->reset_options(); break;
        case 5: _t->reset(); break;
        case 6: _t->mapping_changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::StreamImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::StreamImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEStreamImportDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::StreamImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
