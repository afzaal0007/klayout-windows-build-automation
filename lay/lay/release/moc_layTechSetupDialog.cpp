/****************************************************************************
** Meta object code from reading C++ file 'layTechSetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layTechSetupDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layTechSetupDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS = QtMocHelpers::stringData(
    "lay::TechBaseEditorPage",
    "browse_clicked",
    "",
    "browse_lyp_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[24];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::TechBaseEditorPage"
        QT_MOC_LITERAL(24, 14),  // "browse_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 18)   // "browse_lyp_clicked"
    },
    "lay::TechBaseEditorPage",
    "browse_clicked",
    "",
    "browse_lyp_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechBaseEditorPageENDCLASS[] = {

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
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::TechBaseEditorPage::staticMetaObject = { {
    QMetaObject::SuperData::link<TechnologyComponentEditor::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechBaseEditorPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechBaseEditorPage, std::true_type>,
        // method 'browse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_lyp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::TechBaseEditorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TechBaseEditorPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->browse_clicked(); break;
        case 1: _t->browse_lyp_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::TechBaseEditorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechBaseEditorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechBaseEditorPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TechnologyComponentEditor::qt_metacast(_clname);
}

int lay::TechBaseEditorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TechnologyComponentEditor::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS = QtMocHelpers::stringData(
    "lay::TechMacrosPage",
    "macro_selected",
    "",
    "QModelIndex",
    "index",
    "create_folder_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "lay::TechMacrosPage"
        QT_MOC_LITERAL(20, 14),  // "macro_selected"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "QModelIndex"
        QT_MOC_LITERAL(48, 5),  // "index"
        QT_MOC_LITERAL(54, 21)   // "create_folder_clicked"
    },
    "lay::TechMacrosPage",
    "macro_selected",
    "",
    "QModelIndex",
    "index",
    "create_folder_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechMacrosPageENDCLASS[] = {

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
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    0,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::TechMacrosPage::staticMetaObject = { {
    QMetaObject::SuperData::link<TechnologyComponentEditor::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechMacrosPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechMacrosPage, std::true_type>,
        // method 'macro_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'create_folder_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::TechMacrosPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TechMacrosPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->macro_selected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->create_folder_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::TechMacrosPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechMacrosPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechMacrosPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TechnologyComponentEditor::qt_metacast(_clname);
}

int lay::TechMacrosPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TechnologyComponentEditor::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS = QtMocHelpers::stringData(
    "lay::TechLoadOptionsEditorPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30)   // "lay::TechLoadOptionsEditorPage"
    },
    "lay::TechLoadOptionsEditorPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::TechLoadOptionsEditorPage::staticMetaObject = { {
    QMetaObject::SuperData::link<TechnologyComponentEditor::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechLoadOptionsEditorPage, std::true_type>
    >,
    nullptr
} };

void lay::TechLoadOptionsEditorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::TechLoadOptionsEditorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechLoadOptionsEditorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechLoadOptionsEditorPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TechnologyComponentEditor::qt_metacast(_clname);
}

int lay::TechLoadOptionsEditorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TechnologyComponentEditor::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS = QtMocHelpers::stringData(
    "lay::TechSaveOptionsEditorPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30)   // "lay::TechSaveOptionsEditorPage"
    },
    "lay::TechSaveOptionsEditorPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::TechSaveOptionsEditorPage::staticMetaObject = { {
    QMetaObject::SuperData::link<TechnologyComponentEditor::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechSaveOptionsEditorPage, std::true_type>
    >,
    nullptr
} };

void lay::TechSaveOptionsEditorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::TechSaveOptionsEditorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechSaveOptionsEditorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechSaveOptionsEditorPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TechnologyComponentEditor::qt_metacast(_clname);
}

int lay::TechSaveOptionsEditorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TechnologyComponentEditor::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS = QtMocHelpers::stringData(
    "lay::TechSetupDialog",
    "current_tech_changed",
    "",
    "QTreeWidgetItem*",
    "current",
    "previous",
    "add_clicked",
    "delete_clicked",
    "rename_clicked",
    "import_clicked",
    "export_clicked",
    "refresh_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[21];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[15];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::TechSetupDialog"
        QT_MOC_LITERAL(21, 20),  // "current_tech_changed"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(60, 7),  // "current"
        QT_MOC_LITERAL(68, 8),  // "previous"
        QT_MOC_LITERAL(77, 11),  // "add_clicked"
        QT_MOC_LITERAL(89, 14),  // "delete_clicked"
        QT_MOC_LITERAL(104, 14),  // "rename_clicked"
        QT_MOC_LITERAL(119, 14),  // "import_clicked"
        QT_MOC_LITERAL(134, 14),  // "export_clicked"
        QT_MOC_LITERAL(149, 15)   // "refresh_clicked"
    },
    "lay::TechSetupDialog",
    "current_tech_changed",
    "",
    "QTreeWidgetItem*",
    "current",
    "previous",
    "add_clicked",
    "delete_clicked",
    "rename_clicked",
    "import_clicked",
    "export_clicked",
    "refresh_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechSetupDialogENDCLASS[] = {

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
       1,    2,   56,    2, 0x09,    1 /* Protected */,
       6,    0,   61,    2, 0x09,    4 /* Protected */,
       7,    0,   62,    2, 0x09,    5 /* Protected */,
       8,    0,   63,    2, 0x09,    6 /* Protected */,
       9,    0,   64,    2, 0x09,    7 /* Protected */,
      10,    0,   65,    2, 0x09,    8 /* Protected */,
      11,    0,   66,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::TechSetupDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechSetupDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechSetupDialog, std::true_type>,
        // method 'current_tech_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rename_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'import_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::TechSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TechSetupDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->current_tech_changed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 1: _t->add_clicked(); break;
        case 2: _t->delete_clicked(); break;
        case 3: _t->rename_clicked(); break;
        case 4: _t->import_clicked(); break;
        case 5: _t->export_clicked(); break;
        case 6: _t->refresh_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::TechSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechSetupDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::TechSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
