/****************************************************************************
** Meta object code from reading C++ file 'layTechnologyController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layTechnologyController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layTechnologyController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS = QtMocHelpers::stringData(
    "lay::TechnologyController",
    "active_technology_changed",
    "",
    "technologies_edited",
    "sync_with_external_sources"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[26];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS_t qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "lay::TechnologyController"
        QT_MOC_LITERAL(26, 25),  // "active_technology_changed"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 19),  // "technologies_edited"
        QT_MOC_LITERAL(73, 26)   // "sync_with_external_sources"
    },
    "lay::TechnologyController",
    "active_technology_changed",
    "",
    "technologies_edited",
    "sync_with_external_sources"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPETechnologyControllerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::TechnologyController::staticMetaObject = { {
    QMetaObject::SuperData::link<PluginDeclaration::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPETechnologyControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechnologyController, std::true_type>,
        // method 'active_technology_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'technologies_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sync_with_external_sources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::TechnologyController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TechnologyController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->active_technology_changed(); break;
        case 1: _t->technologies_edited(); break;
        case 2: _t->sync_with_external_sources(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TechnologyController::*)();
            if (_t _q_method = &TechnologyController::active_technology_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TechnologyController::*)();
            if (_t _q_method = &TechnologyController::technologies_edited; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *lay::TechnologyController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::TechnologyController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPETechnologyControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return PluginDeclaration::qt_metacast(_clname);
}

int lay::TechnologyController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PluginDeclaration::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::TechnologyController::active_technology_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lay::TechnologyController::technologies_edited()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
