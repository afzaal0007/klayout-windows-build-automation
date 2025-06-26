/****************************************************************************
** Meta object code from reading C++ file 'layMacroController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMacroController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMacroController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS = QtMocHelpers::stringData(
    "lay::MacroController",
    "macro_collection_changed",
    "",
    "sync_with_external_sources",
    "file_watcher_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[21];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::MacroController"
        QT_MOC_LITERAL(21, 24),  // "macro_collection_changed"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 26),  // "sync_with_external_sources"
        QT_MOC_LITERAL(74, 22)   // "file_watcher_triggered"
    },
    "lay::MacroController",
    "macro_collection_changed",
    "",
    "sync_with_external_sources",
    "file_watcher_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroControllerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroController::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::PluginDeclaration::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroController, std::true_type>,
        // method 'macro_collection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sync_with_external_sources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'file_watcher_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->macro_collection_changed(); break;
        case 1: _t->sync_with_external_sources(); break;
        case 2: _t->file_watcher_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::MacroController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return lay::PluginDeclaration::qt_metacast(_clname);
}

int lay::MacroController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::PluginDeclaration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
