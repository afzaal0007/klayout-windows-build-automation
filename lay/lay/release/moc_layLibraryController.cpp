/****************************************************************************
** Meta object code from reading C++ file 'layLibraryController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layLibraryController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLibraryController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS = QtMocHelpers::stringData(
    "lay::LibraryController",
    "file_watcher_triggered",
    "",
    "sync_with_external_sources"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[23];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::LibraryController"
        QT_MOC_LITERAL(23, 22),  // "file_watcher_triggered"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 26)   // "sync_with_external_sources"
    },
    "lay::LibraryController",
    "file_watcher_triggered",
    "",
    "sync_with_external_sources"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELibraryControllerENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::LibraryController::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::PluginDeclaration::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELibraryControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LibraryController, std::true_type>,
        // method 'file_watcher_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sync_with_external_sources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LibraryController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->file_watcher_triggered(); break;
        case 1: _t->sync_with_external_sources(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::LibraryController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LibraryController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELibraryControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return lay::PluginDeclaration::qt_metacast(_clname);
}

int lay::LibraryController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::PluginDeclaration::qt_metacall(_c, _id, _a);
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
