/****************************************************************************
** Meta object code from reading C++ file 'layLogViewerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layLogViewerDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLogViewerDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS = QtMocHelpers::stringData(
    "lay::LogFile",
    "attention_changed",
    "",
    "f",
    "clear",
    "separator",
    "copy",
    "error",
    "warn",
    "info",
    "log",
    "yield",
    "set_max_entries",
    "size_t",
    "n",
    "max_entries",
    "timeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[5];
    char stringdata7[6];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[4];
    char stringdata11[6];
    char stringdata12[16];
    char stringdata13[7];
    char stringdata14[2];
    char stringdata15[12];
    char stringdata16[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "lay::LogFile"
        QT_MOC_LITERAL(13, 17),  // "attention_changed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 1),  // "f"
        QT_MOC_LITERAL(34, 5),  // "clear"
        QT_MOC_LITERAL(40, 9),  // "separator"
        QT_MOC_LITERAL(50, 4),  // "copy"
        QT_MOC_LITERAL(55, 5),  // "error"
        QT_MOC_LITERAL(61, 4),  // "warn"
        QT_MOC_LITERAL(66, 4),  // "info"
        QT_MOC_LITERAL(71, 3),  // "log"
        QT_MOC_LITERAL(75, 5),  // "yield"
        QT_MOC_LITERAL(81, 15),  // "set_max_entries"
        QT_MOC_LITERAL(97, 6),  // "size_t"
        QT_MOC_LITERAL(104, 1),  // "n"
        QT_MOC_LITERAL(106, 11),  // "max_entries"
        QT_MOC_LITERAL(118, 7)   // "timeout"
    },
    "lay::LogFile",
    "attention_changed",
    "",
    "f",
    "clear",
    "separator",
    "copy",
    "error",
    "warn",
    "info",
    "log",
    "yield",
    "set_max_entries",
    "size_t",
    "n",
    "max_entries",
    "timeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELogFileENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   89,    2, 0x0a,    3 /* Public */,
       5,    0,   90,    2, 0x0a,    4 /* Public */,
       6,    0,   91,    2, 0x0a,    5 /* Public */,
       7,    0,   92,    2, 0x0a,    6 /* Public */,
       8,    0,   93,    2, 0x0a,    7 /* Public */,
       9,    0,   94,    2, 0x0a,    8 /* Public */,
      10,    0,   95,    2, 0x0a,    9 /* Public */,
      11,    0,   96,    2, 0x0a,   10 /* Public */,
      12,    1,   97,    2, 0x0a,   11 /* Public */,
      15,    0,  100,    2, 0x10a,   13 /* Public | MethodIsConst  */,
      16,    0,  101,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    0x80000000 | 13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LogFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELogFileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogFile, std::true_type>,
        // method 'attention_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'separator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yield'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_max_entries'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'max_entries'
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LogFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->attention_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->separator(); break;
        case 3: _t->copy(); break;
        case 4: _t->error(); break;
        case 5: _t->warn(); break;
        case 6: _t->info(); break;
        case 7: _t->log(); break;
        case 8: _t->yield(); break;
        case 9: _t->set_max_entries((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 10: { size_t _r = _t->max_entries();
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogFile::*)(bool );
            if (_t _q_method = &LogFile::attention_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LogFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LogFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELogFileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int lay::LogFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void lay::LogFile::attention_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS = QtMocHelpers::stringData(
    "lay::LogViewerDialog",
    "verbosity_changed",
    "",
    "l"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[21];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::LogViewerDialog"
        QT_MOC_LITERAL(21, 17),  // "verbosity_changed"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 1)   // "l"
    },
    "lay::LogViewerDialog",
    "verbosity_changed",
    "",
    "l"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELogViewerDialogENDCLASS[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LogViewerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELogViewerDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogViewerDialog, std::true_type>,
        // method 'verbosity_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LogViewerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogViewerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->verbosity_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::LogViewerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LogViewerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELogViewerDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::LogViewerDialog"))
        return static_cast< Ui::LogViewerDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::LogViewerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS = QtMocHelpers::stringData(
    "lay::AlertLogButton",
    "clear",
    "",
    "attention_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "lay::AlertLogButton"
        QT_MOC_LITERAL(20, 5),  // "clear"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 17)   // "attention_changed"
    },
    "lay::AlertLogButton",
    "clear",
    "",
    "attention_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEAlertLogButtonENDCLASS[] = {

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
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::AlertLogButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEAlertLogButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlertLogButton, std::true_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'attention_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void lay::AlertLogButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlertLogButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->attention_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::AlertLogButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::AlertLogButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEAlertLogButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int lay::AlertLogButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
