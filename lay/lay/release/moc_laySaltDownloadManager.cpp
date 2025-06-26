/****************************************************************************
** Meta object code from reading C++ file 'laySaltDownloadManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/laySaltDownloadManager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laySaltDownloadManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS = QtMocHelpers::stringData(
    "lay::ConfirmationDialog",
    "confirm_pressed",
    "",
    "cancel_pressed",
    "abort_pressed",
    "close_pressed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[24];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::ConfirmationDialog"
        QT_MOC_LITERAL(24, 15),  // "confirm_pressed"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 14),  // "cancel_pressed"
        QT_MOC_LITERAL(56, 13),  // "abort_pressed"
        QT_MOC_LITERAL(70, 13)   // "close_pressed"
    },
    "lay::ConfirmationDialog",
    "confirm_pressed",
    "",
    "cancel_pressed",
    "abort_pressed",
    "close_pressed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEConfirmationDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::ConfirmationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEConfirmationDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConfirmationDialog, std::true_type>,
        // method 'confirm_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abort_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::ConfirmationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfirmationDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->confirm_pressed(); break;
        case 1: _t->cancel_pressed(); break;
        case 2: _t->abort_pressed(); break;
        case 3: _t->close_pressed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::ConfirmationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::ConfirmationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEConfirmationDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::ConfirmationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS = QtMocHelpers::stringData(
    "lay::SaltDownloadManager"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS_t qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24)   // "lay::SaltDownloadManager"
    },
    "lay::SaltDownloadManager"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPESaltDownloadManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::SaltDownloadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPESaltDownloadManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SaltDownloadManager, std::true_type>
    >,
    nullptr
} };

void lay::SaltDownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::SaltDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::SaltDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPESaltDownloadManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lay::SaltDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
