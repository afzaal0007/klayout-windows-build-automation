/****************************************************************************
** Meta object code from reading C++ file 'layBookmarksView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layBookmarksView.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layBookmarksView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS = QtMocHelpers::stringData(
    "lay::BookmarksView",
    "bookmark_triggered",
    "",
    "QModelIndex",
    "index",
    "current_bookmark_changed",
    "context_menu",
    "p"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[25];
    char stringdata6[13];
    char stringdata7[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "lay::BookmarksView"
        QT_MOC_LITERAL(19, 18),  // "bookmark_triggered"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QModelIndex"
        QT_MOC_LITERAL(51, 5),  // "index"
        QT_MOC_LITERAL(57, 24),  // "current_bookmark_changed"
        QT_MOC_LITERAL(82, 12),  // "context_menu"
        QT_MOC_LITERAL(95, 1)   // "p"
    },
    "lay::BookmarksView",
    "bookmark_triggered",
    "",
    "QModelIndex",
    "index",
    "current_bookmark_changed",
    "context_menu",
    "p"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBookmarksViewENDCLASS[] = {

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
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       6,    1,   38,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::BookmarksView::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBookmarksViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BookmarksView, std::true_type>,
        // method 'bookmark_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'current_bookmark_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'context_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void lay::BookmarksView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BookmarksView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bookmark_triggered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->current_bookmark_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->context_menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::BookmarksView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BookmarksView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBookmarksViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::BookmarksView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
