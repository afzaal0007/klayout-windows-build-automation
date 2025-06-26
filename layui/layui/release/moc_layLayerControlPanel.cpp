/****************************************************************************
** Meta object code from reading C++ file 'layLayerControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layLayerControlPanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLayerControlPanel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::LCPTreeWidget",
    "double_clicked",
    "",
    "QModelIndex",
    "Qt::KeyboardModifiers",
    "search_triggered",
    "t"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[22];
    char stringdata5[17];
    char stringdata6[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "lay::LCPTreeWidget"
        QT_MOC_LITERAL(19, 14),  // "double_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 11),  // "QModelIndex"
        QT_MOC_LITERAL(47, 21),  // "Qt::KeyboardModifiers"
        QT_MOC_LITERAL(69, 16),  // "search_triggered"
        QT_MOC_LITERAL(86, 1)   // "t"
    },
    "lay::LCPTreeWidget",
    "double_clicked",
    "",
    "QModelIndex",
    "Qt::KeyboardModifiers",
    "search_triggered",
    "t"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELCPTreeWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,
       5,    1,   31,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LCPTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELCPTreeWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LCPTreeWidget, std::true_type>,
        // method 'double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'search_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void lay::LCPTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCPTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 1: _t->search_triggered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LCPTreeWidget::*)(const QModelIndex & , Qt::KeyboardModifiers );
            if (_t _q_method = &LCPTreeWidget::double_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LCPTreeWidget::*)(const QString & );
            if (_t _q_method = &LCPTreeWidget::search_triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::LCPTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LCPTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELCPTreeWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int lay::LCPTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::LCPTreeWidget::double_clicked(const QModelIndex & _t1, Qt::KeyboardModifiers _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::LCPTreeWidget::search_triggered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS = QtMocHelpers::stringData(
    "lay::LayerControlPanel",
    "order_changed",
    "",
    "tab_changed",
    "current_layer_changed",
    "lay::LayerPropertiesConstIterator",
    "iter",
    "cm_new_tab",
    "cm_remove_tab",
    "cm_rename_tab",
    "cm_select_all",
    "cm_invert_selection",
    "cm_make_valid",
    "cm_make_invalid",
    "cm_hide",
    "cm_hide_all",
    "cm_show",
    "cm_show_all",
    "cm_toggle_visibility",
    "cm_show_only",
    "cm_rename",
    "cm_delete",
    "cm_insert",
    "cm_group",
    "cm_ungroup",
    "cm_source",
    "cm_sort_by_name",
    "cm_sort_by_ild",
    "cm_sort_by_idl",
    "cm_sort_by_ldi",
    "cm_sort_by_dli",
    "cm_regroup_by_index",
    "cm_regroup_by_datatype",
    "cm_regroup_by_layer",
    "cm_regroup_flatten",
    "cm_expand_all",
    "cm_add_missing",
    "cm_remove_unused",
    "tab_selected",
    "index",
    "double_clicked",
    "QModelIndex",
    "Qt::KeyboardModifiers",
    "modifiers",
    "context_menu",
    "pt",
    "tab_context_menu",
    "group_collapsed",
    "group_expanded",
    "current_index_changed",
    "selection_changed",
    "QItemSelection",
    "up_clicked",
    "upup_clicked",
    "down_clicked",
    "downdown_clicked",
    "search_triggered",
    "t",
    "search_edited",
    "search_editing_finished",
    "search_next",
    "search_prev",
    "update_hidden_flags"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS_t {
    uint offsetsAndSizes[126];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[22];
    char stringdata5[34];
    char stringdata6[5];
    char stringdata7[11];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[14];
    char stringdata11[20];
    char stringdata12[14];
    char stringdata13[16];
    char stringdata14[8];
    char stringdata15[12];
    char stringdata16[8];
    char stringdata17[12];
    char stringdata18[21];
    char stringdata19[13];
    char stringdata20[10];
    char stringdata21[10];
    char stringdata22[10];
    char stringdata23[9];
    char stringdata24[11];
    char stringdata25[10];
    char stringdata26[16];
    char stringdata27[15];
    char stringdata28[15];
    char stringdata29[15];
    char stringdata30[15];
    char stringdata31[20];
    char stringdata32[23];
    char stringdata33[20];
    char stringdata34[19];
    char stringdata35[14];
    char stringdata36[15];
    char stringdata37[17];
    char stringdata38[13];
    char stringdata39[6];
    char stringdata40[15];
    char stringdata41[12];
    char stringdata42[22];
    char stringdata43[10];
    char stringdata44[13];
    char stringdata45[3];
    char stringdata46[17];
    char stringdata47[16];
    char stringdata48[15];
    char stringdata49[22];
    char stringdata50[18];
    char stringdata51[15];
    char stringdata52[11];
    char stringdata53[13];
    char stringdata54[13];
    char stringdata55[17];
    char stringdata56[17];
    char stringdata57[2];
    char stringdata58[14];
    char stringdata59[24];
    char stringdata60[12];
    char stringdata61[12];
    char stringdata62[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::LayerControlPanel"
        QT_MOC_LITERAL(23, 13),  // "order_changed"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 11),  // "tab_changed"
        QT_MOC_LITERAL(50, 21),  // "current_layer_changed"
        QT_MOC_LITERAL(72, 33),  // "lay::LayerPropertiesConstIter..."
        QT_MOC_LITERAL(106, 4),  // "iter"
        QT_MOC_LITERAL(111, 10),  // "cm_new_tab"
        QT_MOC_LITERAL(122, 13),  // "cm_remove_tab"
        QT_MOC_LITERAL(136, 13),  // "cm_rename_tab"
        QT_MOC_LITERAL(150, 13),  // "cm_select_all"
        QT_MOC_LITERAL(164, 19),  // "cm_invert_selection"
        QT_MOC_LITERAL(184, 13),  // "cm_make_valid"
        QT_MOC_LITERAL(198, 15),  // "cm_make_invalid"
        QT_MOC_LITERAL(214, 7),  // "cm_hide"
        QT_MOC_LITERAL(222, 11),  // "cm_hide_all"
        QT_MOC_LITERAL(234, 7),  // "cm_show"
        QT_MOC_LITERAL(242, 11),  // "cm_show_all"
        QT_MOC_LITERAL(254, 20),  // "cm_toggle_visibility"
        QT_MOC_LITERAL(275, 12),  // "cm_show_only"
        QT_MOC_LITERAL(288, 9),  // "cm_rename"
        QT_MOC_LITERAL(298, 9),  // "cm_delete"
        QT_MOC_LITERAL(308, 9),  // "cm_insert"
        QT_MOC_LITERAL(318, 8),  // "cm_group"
        QT_MOC_LITERAL(327, 10),  // "cm_ungroup"
        QT_MOC_LITERAL(338, 9),  // "cm_source"
        QT_MOC_LITERAL(348, 15),  // "cm_sort_by_name"
        QT_MOC_LITERAL(364, 14),  // "cm_sort_by_ild"
        QT_MOC_LITERAL(379, 14),  // "cm_sort_by_idl"
        QT_MOC_LITERAL(394, 14),  // "cm_sort_by_ldi"
        QT_MOC_LITERAL(409, 14),  // "cm_sort_by_dli"
        QT_MOC_LITERAL(424, 19),  // "cm_regroup_by_index"
        QT_MOC_LITERAL(444, 22),  // "cm_regroup_by_datatype"
        QT_MOC_LITERAL(467, 19),  // "cm_regroup_by_layer"
        QT_MOC_LITERAL(487, 18),  // "cm_regroup_flatten"
        QT_MOC_LITERAL(506, 13),  // "cm_expand_all"
        QT_MOC_LITERAL(520, 14),  // "cm_add_missing"
        QT_MOC_LITERAL(535, 16),  // "cm_remove_unused"
        QT_MOC_LITERAL(552, 12),  // "tab_selected"
        QT_MOC_LITERAL(565, 5),  // "index"
        QT_MOC_LITERAL(571, 14),  // "double_clicked"
        QT_MOC_LITERAL(586, 11),  // "QModelIndex"
        QT_MOC_LITERAL(598, 21),  // "Qt::KeyboardModifiers"
        QT_MOC_LITERAL(620, 9),  // "modifiers"
        QT_MOC_LITERAL(630, 12),  // "context_menu"
        QT_MOC_LITERAL(643, 2),  // "pt"
        QT_MOC_LITERAL(646, 16),  // "tab_context_menu"
        QT_MOC_LITERAL(663, 15),  // "group_collapsed"
        QT_MOC_LITERAL(679, 14),  // "group_expanded"
        QT_MOC_LITERAL(694, 21),  // "current_index_changed"
        QT_MOC_LITERAL(716, 17),  // "selection_changed"
        QT_MOC_LITERAL(734, 14),  // "QItemSelection"
        QT_MOC_LITERAL(749, 10),  // "up_clicked"
        QT_MOC_LITERAL(760, 12),  // "upup_clicked"
        QT_MOC_LITERAL(773, 12),  // "down_clicked"
        QT_MOC_LITERAL(786, 16),  // "downdown_clicked"
        QT_MOC_LITERAL(803, 16),  // "search_triggered"
        QT_MOC_LITERAL(820, 1),  // "t"
        QT_MOC_LITERAL(822, 13),  // "search_edited"
        QT_MOC_LITERAL(836, 23),  // "search_editing_finished"
        QT_MOC_LITERAL(860, 11),  // "search_next"
        QT_MOC_LITERAL(872, 11),  // "search_prev"
        QT_MOC_LITERAL(884, 19)   // "update_hidden_flags"
    },
    "lay::LayerControlPanel",
    "order_changed",
    "",
    "tab_changed",
    "current_layer_changed",
    "lay::LayerPropertiesConstIterator",
    "iter",
    "cm_new_tab",
    "cm_remove_tab",
    "cm_rename_tab",
    "cm_select_all",
    "cm_invert_selection",
    "cm_make_valid",
    "cm_make_invalid",
    "cm_hide",
    "cm_hide_all",
    "cm_show",
    "cm_show_all",
    "cm_toggle_visibility",
    "cm_show_only",
    "cm_rename",
    "cm_delete",
    "cm_insert",
    "cm_group",
    "cm_ungroup",
    "cm_source",
    "cm_sort_by_name",
    "cm_sort_by_ild",
    "cm_sort_by_idl",
    "cm_sort_by_ldi",
    "cm_sort_by_dli",
    "cm_regroup_by_index",
    "cm_regroup_by_datatype",
    "cm_regroup_by_layer",
    "cm_regroup_flatten",
    "cm_expand_all",
    "cm_add_missing",
    "cm_remove_unused",
    "tab_selected",
    "index",
    "double_clicked",
    "QModelIndex",
    "Qt::KeyboardModifiers",
    "modifiers",
    "context_menu",
    "pt",
    "tab_context_menu",
    "group_collapsed",
    "group_expanded",
    "current_index_changed",
    "selection_changed",
    "QItemSelection",
    "up_clicked",
    "upup_clicked",
    "down_clicked",
    "downdown_clicked",
    "search_triggered",
    "t",
    "search_edited",
    "search_editing_finished",
    "search_next",
    "search_prev",
    "update_hidden_flags"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELayerControlPanelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  326,    2, 0x06,    1 /* Public */,
       3,    0,  327,    2, 0x06,    2 /* Public */,
       4,    1,  328,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  331,    2, 0x0a,    5 /* Public */,
       8,    0,  332,    2, 0x0a,    6 /* Public */,
       9,    0,  333,    2, 0x0a,    7 /* Public */,
      10,    0,  334,    2, 0x0a,    8 /* Public */,
      11,    0,  335,    2, 0x0a,    9 /* Public */,
      12,    0,  336,    2, 0x0a,   10 /* Public */,
      13,    0,  337,    2, 0x0a,   11 /* Public */,
      14,    0,  338,    2, 0x0a,   12 /* Public */,
      15,    0,  339,    2, 0x0a,   13 /* Public */,
      16,    0,  340,    2, 0x0a,   14 /* Public */,
      17,    0,  341,    2, 0x0a,   15 /* Public */,
      18,    0,  342,    2, 0x0a,   16 /* Public */,
      19,    0,  343,    2, 0x0a,   17 /* Public */,
      20,    0,  344,    2, 0x0a,   18 /* Public */,
      21,    0,  345,    2, 0x0a,   19 /* Public */,
      22,    0,  346,    2, 0x0a,   20 /* Public */,
      23,    0,  347,    2, 0x0a,   21 /* Public */,
      24,    0,  348,    2, 0x0a,   22 /* Public */,
      25,    0,  349,    2, 0x0a,   23 /* Public */,
      26,    0,  350,    2, 0x0a,   24 /* Public */,
      27,    0,  351,    2, 0x0a,   25 /* Public */,
      28,    0,  352,    2, 0x0a,   26 /* Public */,
      29,    0,  353,    2, 0x0a,   27 /* Public */,
      30,    0,  354,    2, 0x0a,   28 /* Public */,
      31,    0,  355,    2, 0x0a,   29 /* Public */,
      32,    0,  356,    2, 0x0a,   30 /* Public */,
      33,    0,  357,    2, 0x0a,   31 /* Public */,
      34,    0,  358,    2, 0x0a,   32 /* Public */,
      35,    0,  359,    2, 0x0a,   33 /* Public */,
      36,    0,  360,    2, 0x0a,   34 /* Public */,
      37,    0,  361,    2, 0x0a,   35 /* Public */,
      38,    1,  362,    2, 0x0a,   36 /* Public */,
      40,    2,  365,    2, 0x0a,   38 /* Public */,
      44,    1,  370,    2, 0x0a,   41 /* Public */,
      46,    1,  373,    2, 0x0a,   43 /* Public */,
      47,    1,  376,    2, 0x0a,   45 /* Public */,
      48,    1,  379,    2, 0x0a,   47 /* Public */,
      49,    1,  382,    2, 0x0a,   49 /* Public */,
      50,    2,  385,    2, 0x0a,   51 /* Public */,
      52,    0,  390,    2, 0x0a,   54 /* Public */,
      53,    0,  391,    2, 0x0a,   55 /* Public */,
      54,    0,  392,    2, 0x0a,   56 /* Public */,
      55,    0,  393,    2, 0x0a,   57 /* Public */,
      56,    1,  394,    2, 0x0a,   58 /* Public */,
      58,    0,  397,    2, 0x0a,   60 /* Public */,
      59,    0,  398,    2, 0x0a,   61 /* Public */,
      60,    0,  399,    2, 0x0a,   62 /* Public */,
      61,    0,  400,    2, 0x0a,   63 /* Public */,
      62,    0,  401,    2, 0x08,   64 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 42,   39,   43,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, 0x80000000 | 41,   39,
    QMetaType::Void, 0x80000000 | 41,   39,
    QMetaType::Void, 0x80000000 | 41,   39,
    QMetaType::Void, 0x80000000 | 51, 0x80000000 | 51,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LayerControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELayerControlPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LayerControlPanel, std::true_type>,
        // method 'order_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_layer_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const lay::LayerPropertiesConstIterator &, std::false_type>,
        // method 'cm_new_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_remove_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_rename_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_select_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_invert_selection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_make_valid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_make_invalid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_hide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_hide_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_show_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_toggle_visibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_show_only'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_rename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_delete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_insert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_group'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_ungroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_source'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_sort_by_name'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_sort_by_ild'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_sort_by_idl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_sort_by_ldi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_sort_by_dli'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_regroup_by_index'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_regroup_by_datatype'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_regroup_by_layer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_regroup_flatten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_expand_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_add_missing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cm_remove_unused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'context_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'tab_context_menu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'group_collapsed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'group_expanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'current_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'down_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downdown_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'update_hidden_flags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::LayerControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerControlPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->order_changed(); break;
        case 1: _t->tab_changed(); break;
        case 2: _t->current_layer_changed((*reinterpret_cast< std::add_pointer_t<lay::LayerPropertiesConstIterator>>(_a[1]))); break;
        case 3: _t->cm_new_tab(); break;
        case 4: _t->cm_remove_tab(); break;
        case 5: _t->cm_rename_tab(); break;
        case 6: _t->cm_select_all(); break;
        case 7: _t->cm_invert_selection(); break;
        case 8: _t->cm_make_valid(); break;
        case 9: _t->cm_make_invalid(); break;
        case 10: _t->cm_hide(); break;
        case 11: _t->cm_hide_all(); break;
        case 12: _t->cm_show(); break;
        case 13: _t->cm_show_all(); break;
        case 14: _t->cm_toggle_visibility(); break;
        case 15: _t->cm_show_only(); break;
        case 16: _t->cm_rename(); break;
        case 17: _t->cm_delete(); break;
        case 18: _t->cm_insert(); break;
        case 19: _t->cm_group(); break;
        case 20: _t->cm_ungroup(); break;
        case 21: _t->cm_source(); break;
        case 22: _t->cm_sort_by_name(); break;
        case 23: _t->cm_sort_by_ild(); break;
        case 24: _t->cm_sort_by_idl(); break;
        case 25: _t->cm_sort_by_ldi(); break;
        case 26: _t->cm_sort_by_dli(); break;
        case 27: _t->cm_regroup_by_index(); break;
        case 28: _t->cm_regroup_by_datatype(); break;
        case 29: _t->cm_regroup_by_layer(); break;
        case 30: _t->cm_regroup_flatten(); break;
        case 31: _t->cm_expand_all(); break;
        case 32: _t->cm_add_missing(); break;
        case 33: _t->cm_remove_unused(); break;
        case 34: _t->tab_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 36: _t->context_menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 37: _t->tab_context_menu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 38: _t->group_collapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 39: _t->group_expanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 40: _t->current_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 41: _t->selection_changed((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 42: _t->up_clicked(); break;
        case 43: _t->upup_clicked(); break;
        case 44: _t->down_clicked(); break;
        case 45: _t->downdown_clicked(); break;
        case 46: _t->search_triggered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->search_edited(); break;
        case 48: _t->search_editing_finished(); break;
        case 49: _t->search_next(); break;
        case 50: _t->search_prev(); break;
        case 51: _t->update_hidden_flags(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerControlPanel::*)();
            if (_t _q_method = &LayerControlPanel::order_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayerControlPanel::*)();
            if (_t _q_method = &LayerControlPanel::tab_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LayerControlPanel::*)(const lay::LayerPropertiesConstIterator & );
            if (_t _q_method = &LayerControlPanel::current_layer_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *lay::LayerControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LayerControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELayerControlPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "db::Object"))
        return static_cast< db::Object*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LayerControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void lay::LayerControlPanel::order_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lay::LayerControlPanel::tab_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lay::LayerControlPanel::current_layer_changed(const lay::LayerPropertiesConstIterator & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
