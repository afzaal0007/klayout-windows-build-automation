/****************************************************************************
** Meta object code from reading C++ file 'layHierarchyControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layHierarchyControlPanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layHierarchyControlPanel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::HCPCellTreeWidget",
    "cell_clicked",
    "",
    "QModelIndex",
    "cell_double_clicked",
    "cell_middle_clicked",
    "search_triggered",
    "t"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS_t {
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
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::HCPCellTreeWidget"
        QT_MOC_LITERAL(23, 12),  // "cell_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 11),  // "QModelIndex"
        QT_MOC_LITERAL(49, 19),  // "cell_double_clicked"
        QT_MOC_LITERAL(69, 19),  // "cell_middle_clicked"
        QT_MOC_LITERAL(89, 16),  // "search_triggered"
        QT_MOC_LITERAL(106, 1)   // "t"
    },
    "lay::HCPCellTreeWidget",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::HCPCellTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HCPCellTreeWidget, std::true_type>,
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

void lay::HCPCellTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HCPCellTreeWidget *>(_o);
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
            using _t = void (HCPCellTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &HCPCellTreeWidget::cell_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HCPCellTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &HCPCellTreeWidget::cell_double_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HCPCellTreeWidget::*)(const QModelIndex & );
            if (_t _q_method = &HCPCellTreeWidget::cell_middle_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HCPCellTreeWidget::*)(const QString & );
            if (_t _q_method = &HCPCellTreeWidget::search_triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *lay::HCPCellTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::HCPCellTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEHCPCellTreeWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int lay::HCPCellTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void lay::HCPCellTreeWidget::cell_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::HCPCellTreeWidget::cell_double_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lay::HCPCellTreeWidget::cell_middle_clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lay::HCPCellTreeWidget::search_triggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS = QtMocHelpers::stringData(
    "lay::HierarchyControlPanel",
    "cell_selected",
    "",
    "cell_path_type",
    "path",
    "cellview_index",
    "active_cellview_changed",
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
    "search_prev",
    "cm_cell_select"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[27];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[24];
    char stringdata7[8];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[15];
    char stringdata11[15];
    char stringdata12[15];
    char stringdata13[18];
    char stringdata14[13];
    char stringdata15[3];
    char stringdata16[17];
    char stringdata17[2];
    char stringdata18[14];
    char stringdata19[24];
    char stringdata20[12];
    char stringdata21[12];
    char stringdata22[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "lay::HierarchyControlPanel"
        QT_MOC_LITERAL(27, 13),  // "cell_selected"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 14),  // "cell_path_type"
        QT_MOC_LITERAL(57, 4),  // "path"
        QT_MOC_LITERAL(62, 14),  // "cellview_index"
        QT_MOC_LITERAL(77, 23),  // "active_cellview_changed"
        QT_MOC_LITERAL(101, 7),  // "clicked"
        QT_MOC_LITERAL(109, 11),  // "QModelIndex"
        QT_MOC_LITERAL(121, 5),  // "index"
        QT_MOC_LITERAL(127, 14),  // "header_clicked"
        QT_MOC_LITERAL(142, 14),  // "double_clicked"
        QT_MOC_LITERAL(157, 14),  // "middle_clicked"
        QT_MOC_LITERAL(172, 17),  // "selection_changed"
        QT_MOC_LITERAL(190, 12),  // "context_menu"
        QT_MOC_LITERAL(203, 2),  // "pt"
        QT_MOC_LITERAL(206, 16),  // "search_triggered"
        QT_MOC_LITERAL(223, 1),  // "t"
        QT_MOC_LITERAL(225, 13),  // "search_edited"
        QT_MOC_LITERAL(239, 23),  // "search_editing_finished"
        QT_MOC_LITERAL(263, 11),  // "search_next"
        QT_MOC_LITERAL(275, 11),  // "search_prev"
        QT_MOC_LITERAL(287, 14)   // "cm_cell_select"
    },
    "lay::HierarchyControlPanel",
    "cell_selected",
    "",
    "cell_path_type",
    "path",
    "cellview_index",
    "active_cellview_changed",
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
    "search_prev",
    "cm_cell_select"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEHierarchyControlPanelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   98,    2, 0x06,    1 /* Public */,
       6,    1,  103,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  106,    2, 0x0a,    6 /* Public */,
      10,    0,  109,    2, 0x0a,    8 /* Public */,
      11,    1,  110,    2, 0x0a,    9 /* Public */,
      12,    1,  113,    2, 0x0a,   11 /* Public */,
      13,    1,  116,    2, 0x0a,   13 /* Public */,
      14,    1,  119,    2, 0x0a,   15 /* Public */,
      16,    1,  122,    2, 0x0a,   17 /* Public */,
      18,    0,  125,    2, 0x0a,   19 /* Public */,
      19,    0,  126,    2, 0x0a,   20 /* Public */,
      20,    0,  127,    2, 0x0a,   21 /* Public */,
      21,    0,  128,    2, 0x0a,   22 /* Public */,
      22,    0,  129,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::HierarchyControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEHierarchyControlPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HierarchyControlPanel, std::true_type>,
        // method 'cell_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<cell_path_type, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'active_cellview_changed'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_cell_select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::HierarchyControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HierarchyControlPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cell_selected((*reinterpret_cast< std::add_pointer_t<cell_path_type>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->active_cellview_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->header_clicked(); break;
        case 4: _t->double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->middle_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->selection_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->context_menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 8: _t->search_triggered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->search_edited(); break;
        case 10: _t->search_editing_finished(); break;
        case 11: _t->search_next(); break;
        case 12: _t->search_prev(); break;
        case 13: _t->cm_cell_select(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HierarchyControlPanel::*)(cell_path_type , int );
            if (_t _q_method = &HierarchyControlPanel::cell_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HierarchyControlPanel::*)(int );
            if (_t _q_method = &HierarchyControlPanel::active_cellview_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::HierarchyControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::HierarchyControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEHierarchyControlPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::HierarchyControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void lay::HierarchyControlPanel::cell_selected(cell_path_type _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::HierarchyControlPanel::active_cellview_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
