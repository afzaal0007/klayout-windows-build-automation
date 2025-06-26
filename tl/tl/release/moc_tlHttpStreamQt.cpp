/****************************************************************************
** Meta object code from reading C++ file 'tlHttpStreamQt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/tl/tl/tlHttpStreamQt.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tlHttpStreamQt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS = QtMocHelpers::stringData(
    "tl::AuthenticationHandler",
    "authenticationRequired",
    "",
    "QNetworkReply*",
    "QAuthenticator*",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "reset"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[26];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[16];
    char stringdata5[28];
    char stringdata6[14];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS_t qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "tl::AuthenticationHandler"
        QT_MOC_LITERAL(26, 22),  // "authenticationRequired"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(65, 15),  // "QAuthenticator*"
        QT_MOC_LITERAL(81, 27),  // "proxyAuthenticationRequired"
        QT_MOC_LITERAL(109, 13),  // "QNetworkProxy"
        QT_MOC_LITERAL(123, 5)   // "reset"
    },
    "tl::AuthenticationHandler",
    "authenticationRequired",
    "",
    "QNetworkReply*",
    "QAuthenticator*",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "reset"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStlSCOPEAuthenticationHandlerENDCLASS[] = {

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
       1,    2,   32,    2, 0x0a,    1 /* Public */,
       5,    2,   37,    2, 0x0a,    4 /* Public */,
       7,    0,   42,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4,    2,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject tl::AuthenticationHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStlSCOPEAuthenticationHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AuthenticationHandler, std::true_type>,
        // method 'authenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void tl::AuthenticationHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthenticationHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 2: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject *tl::AuthenticationHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tl::AuthenticationHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStlSCOPEAuthenticationHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tl::AuthenticationHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS = QtMocHelpers::stringData(
    "tl::InputHttpStreamPrivateData",
    "finished",
    "",
    "QNetworkReply*",
    "resend",
    "sslErrors",
    "reply",
    "QList<QSslError>",
    "errors"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[31];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[7];
    char stringdata5[10];
    char stringdata6[6];
    char stringdata7[17];
    char stringdata8[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS_t qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "tl::InputHttpStreamPrivateData"
        QT_MOC_LITERAL(31, 8),  // "finished"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(56, 6),  // "resend"
        QT_MOC_LITERAL(63, 9),  // "sslErrors"
        QT_MOC_LITERAL(73, 5),  // "reply"
        QT_MOC_LITERAL(79, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(96, 6)   // "errors"
    },
    "tl::InputHttpStreamPrivateData",
    "finished",
    "",
    "QNetworkReply*",
    "resend",
    "sslErrors",
    "reply",
    "QList<QSslError>",
    "errors"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS[] = {

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
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    2,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject tl::InputHttpStreamPrivateData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InputHttpStreamPrivateData, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'resend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>
    >,
    nullptr
} };

void tl::InputHttpStreamPrivateData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputHttpStreamPrivateData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 1: _t->resend(); break;
        case 2: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *tl::InputHttpStreamPrivateData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tl::InputHttpStreamPrivateData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStlSCOPEInputHttpStreamPrivateDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tl::InputHttpStreamPrivateData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
