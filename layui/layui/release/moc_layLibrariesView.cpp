/****************************************************************************
** Meta object code from reading C++ file 'layLibrariesView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layLibrariesView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLibrariesView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::LibraryTreeWidget",
    "cell_clicked",
    "",
    "QModelIndex",
    "cell_double_clicked",
    "cell_middle_clicked",
    "search_triggered",
    "t"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[23];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[17];
    char stringdata7[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::LibraryTreeWidget"
        QT_MOC_LITERAL(23, 12),  // "cell_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 11),  // "QModelIndex"
        QT_MOC_LITERAL(49, 19),  // "cell_double_clicked"
        QT_MOC_LITERAL(69, 19),  // "cell_middle_clicked"
        QT_MOC_LITERAL(89, 16),  // "search_triggered"
        QT_MOC_LITERAL(106, 1)   // "t"
    },
    "lay::LibraryTreeWidget",
    "cell_clicked",
    "",
    "QModelIndex",
    "cell_double_clicked",
    "cell_middle_clicked",
    "search_triggered",
    "t"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELibraryTreeWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,
       5,    1,   44,    2, 0x06,    5 /* Public */,
       6,    1,   47,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LibraryTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELibraryTreeWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LibraryTreeWidget, std::true_type>,
        // method 'cell_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'cell_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'cell_middle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'search_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void lay::LibraryTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cell_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->cell_double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->cell_middle_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->search_triggered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &LibraryTreeWidget::cell_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibraryTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &LibraryTreeWidget::cell_double_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibraryTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &LibraryTreeWidget::cell_middle_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibraryTreeWidget::*)(const QString & );
            if (_t _q_method = &LibraryTreeWidget::search_triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *lay::LibraryTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LibraryTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELibraryTreeWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int lay::LibraryTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LibraryTreeWidget::cell_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LibraryTreeWidget::cell_double_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lay::LibraryTreeWidget::cell_middle_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lay::LibraryTreeWidget::search_triggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS = QtMocHelpers::stringData(
    "lay::LibrariesView",
    "active_library_changed",
    "",
    "cellview_index",
    "clicked",
    "QModelIndex",
    "index",
    "header_clicked",
    "double_clicked",
    "middle_clicked",
    "selection_changed",
    "context_menu",
    "pt",
    "search_triggered",
    "t",
    "search_edited",
    "search_editing_finished",
    "search_next",
    "search_prev"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[19];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[18];
    char stringdata11[13];
    char stringdata12[3];
    char stringdata13[17];
    char stringdata14[2];
    char stringdata15[14];
    char stringdata16[24];
    char stringdata17[12];
    char stringdata18[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "lay::LibrariesView"
        QT_MOC_LITERAL(19, 22),  // "active_library_changed"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 14),  // "cellview_index"
        QT_MOC_LITERAL(58, 7),  // "clicked"
        QT_MOC_LITERAL(66, 11),  // "QModelIndex"
        QT_MOC_LITERAL(78, 5),  // "index"
        QT_MOC_LITERAL(84, 14),  // "header_clicked"
        QT_MOC_LITERAL(99, 14),  // "double_clicked"
        QT_MOC_LITERAL(114, 14),  // "middle_clicked"
        QT_MOC_LITERAL(129, 17),  // "selection_changed"
        QT_MOC_LITERAL(147, 12),  // "context_menu"
        QT_MOC_LITERAL(160, 2),  // "pt"
        QT_MOC_LITERAL(163, 16),  // "search_triggered"
        QT_MOC_LITERAL(180, 1),  // "t"
        QT_MOC_LITERAL(182, 13),  // "search_edited"
        QT_MOC_LITERAL(196, 23),  // "search_editing_finished"
        QT_MOC_LITERAL(220, 11),  // "search_next"
        QT_MOC_LITERAL(232, 11)   // "search_prev"
    },
    "lay::LibrariesView",
    "active_library_changed",
    "",
    "cellview_index",
    "clicked",
    "QModelIndex",
    "index",
    "header_clicked",
    "double_clicked",
    "middle_clicked",
    "selection_changed",
    "context_menu",
    "pt",
    "search_triggered",
    "t",
    "search_edited",
    "search_editing_finished",
    "search_next",
    "search_prev"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELibrariesViewENDCLASS[] = {

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
       4,    1,   89,    2, 0x0a,    3 /* Public */,
       7,    0,   92,    2, 0x0a,    5 /* Public */,
       8,    1,   93,    2, 0x0a,    6 /* Public */,
       9,    1,   96,    2, 0x0a,    8 /* Public */,
      10,    1,   99,    2, 0x0a,   10 /* Public */,
      11,    1,  102,    2, 0x0a,   12 /* Public */,
      13,    1,  105,    2, 0x0a,   14 /* Public */,
      15,    0,  108,    2, 0x0a,   16 /* Public */,
      16,    0,  109,    2, 0x0a,   17 /* Public */,
      17,    0,  110,    2, 0x0a,   18 /* Public */,
      18,    0,  111,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LibrariesView::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELibrariesViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LibrariesView, std::true_type>,
        // method 'active_library_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'header_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'middle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'context_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'search_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'search_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_editing_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_prev'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LibrariesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibrariesView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->active_library_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->header_clicked(); break;
        case 3: _t->double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->middle_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->selection_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->context_menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 7: _t->search_triggered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->search_edited(); break;
        case 9: _t->search_editing_finished(); break;
        case 10: _t->search_next(); break;
        case 11: _t->search_prev(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibrariesView::*)(int );
            if (_t _q_method = &LibrariesView::active_library_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::LibrariesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LibrariesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELibrariesViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LibrariesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void lay::LibrariesView::active_library_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
