/****************************************************************************
** Meta object code from reading C++ file 'edtDialogs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/edt/edt/edtDialogs.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edtDialogs.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS = QtMocHelpers::stringData(
    "edt::CopyModeDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "edt::CopyModeDialog"
    },
    "edt::CopyModeDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPECopyModeDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::CopyModeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPECopyModeDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CopyModeDialog, std::true_type>
    >,
    nullptr
} };

void edt::CopyModeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::CopyModeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::CopyModeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPECopyModeDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CopyModeDialog"))
        return static_cast< Ui::CopyModeDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::CopyModeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS = QtMocHelpers::stringData(
    "edt::InstantiationForm",
    "display_mode_changed",
    "",
    "double_clicked",
    "QListWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[23];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[17];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "edt::InstantiationForm"
        QT_MOC_LITERAL(23, 20),  // "display_mode_changed"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "double_clicked"
        QT_MOC_LITERAL(60, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(77, 4)   // "item"
    },
    "edt::InstantiationForm",
    "display_mode_changed",
    "",
    "double_clicked",
    "QListWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEInstantiationFormENDCLASS[] = {

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
       3,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::InstantiationForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEInstantiationFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstantiationForm, std::true_type>,
        // method 'display_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void edt::InstantiationForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstantiationForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->display_mode_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->double_clicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *edt::InstantiationForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::InstantiationForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEInstantiationFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::InstantiationForm"))
        return static_cast< Ui::InstantiationForm*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::InstantiationForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::ChangeLayerOptionsDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "edt::ChangeLayerOptionsDialog"
    },
    "edt::ChangeLayerOptionsDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::ChangeLayerOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChangeLayerOptionsDialog, std::true_type>
    >,
    nullptr
} };

void edt::ChangeLayerOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::ChangeLayerOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::ChangeLayerOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEChangeLayerOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ChangeLayerOptionsDialog"))
        return static_cast< Ui::ChangeLayerOptionsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::ChangeLayerOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::AlignOptionsDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "edt::AlignOptionsDialog"
    },
    "edt::AlignOptionsDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEAlignOptionsDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::AlignOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEAlignOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlignOptionsDialog, std::true_type>
    >,
    nullptr
} };

void edt::AlignOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::AlignOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::AlignOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEAlignOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::AlignOptionsDialog"))
        return static_cast< Ui::AlignOptionsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::AlignOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::DistributeOptionsDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28)   // "edt::DistributeOptionsDialog"
    },
    "edt::DistributeOptionsDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEDistributeOptionsDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::DistributeOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEDistributeOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DistributeOptionsDialog, std::true_type>
    >,
    nullptr
} };

void edt::DistributeOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::DistributeOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::DistributeOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEDistributeOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DistributeOptionsDialog"))
        return static_cast< Ui::DistributeOptionsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::DistributeOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::MakeCellOptionsDialog",
    "button_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[27];
    char stringdata1[15];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "edt::MakeCellOptionsDialog"
        QT_MOC_LITERAL(27, 14),  // "button_clicked"
        QT_MOC_LITERAL(42, 0)   // ""
    },
    "edt::MakeCellOptionsDialog",
    "button_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS[] = {

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
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::MakeCellOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MakeCellOptionsDialog, std::true_type>,
        // method 'button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::MakeCellOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MakeCellOptionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::MakeCellOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::MakeCellOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEMakeCellOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::MakeCellOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::MakeArrayOptionsDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27)   // "edt::MakeArrayOptionsDialog"
    },
    "edt::MakeArrayOptionsDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::MakeArrayOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MakeArrayOptionsDialog, std::true_type>
    >,
    nullptr
} };

void edt::MakeArrayOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::MakeArrayOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::MakeArrayOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEMakeArrayOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::MakeArrayOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS = QtMocHelpers::stringData(
    "edt::RoundCornerOptionsDialog",
    "amend_changed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[30];
    char stringdata1[14];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "edt::RoundCornerOptionsDialog"
        QT_MOC_LITERAL(30, 13),  // "amend_changed"
        QT_MOC_LITERAL(44, 0)   // ""
    },
    "edt::RoundCornerOptionsDialog",
    "amend_changed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS[] = {

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
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edt::RoundCornerOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoundCornerOptionsDialog, std::true_type>,
        // method 'amend_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edt::RoundCornerOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoundCornerOptionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->amend_changed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *edt::RoundCornerOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::RoundCornerOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPERoundCornerOptionsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::RoundCornerOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS = QtMocHelpers::stringData(
    "edt::AreaAndPerimeterDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS_t qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27)   // "edt::AreaAndPerimeterDialog"
    },
    "edt::AreaAndPerimeterDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject edt::AreaAndPerimeterDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AreaAndPerimeterDialog, std::true_type>
    >,
    nullptr
} };

void edt::AreaAndPerimeterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *edt::AreaAndPerimeterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edt::AreaAndPerimeterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedtSCOPEAreaAndPerimeterDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edt::AreaAndPerimeterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
