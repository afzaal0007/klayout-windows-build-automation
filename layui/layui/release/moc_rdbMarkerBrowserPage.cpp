/****************************************************************************
** Meta object code from reading C++ file 'rdbMarkerBrowserPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/rdbMarkerBrowserPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rdbMarkerBrowserPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS = QtMocHelpers::stringData(
    "rdb::MarkerBrowserPage",
    "directory_header_clicked",
    "",
    "section",
    "directory_sorting_changed",
    "Qt::SortOrder",
    "order",
    "directory_selection_changed",
    "QItemSelection",
    "selected",
    "deselected",
    "markers_header_clicked",
    "markers_sorting_changed",
    "markers_selection_changed",
    "markers_current_changed",
    "QModelIndex",
    "current",
    "previous",
    "marker_double_clicked",
    "index",
    "dir_up_clicked",
    "dir_down_clicked",
    "list_up_clicked",
    "list_down_clicked",
    "rerun_button_pressed",
    "flag_button_clicked",
    "flag_menu_selected",
    "important_button_clicked",
    "waived_button_clicked",
    "edit_button_clicked",
    "snapshot_button_clicked",
    "remove_snapshot_button_clicked",
    "revisit_non_waived",
    "revisit_important",
    "revisit_all",
    "mark_important",
    "mark_unimportant",
    "mark_visited",
    "mark_notvisited",
    "unwaive_all",
    "waive",
    "unwaive",
    "show_all_clicked",
    "list_shapes_clicked",
    "info_anchor_clicked",
    "link",
    "filter_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[23];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[26];
    char stringdata5[14];
    char stringdata6[6];
    char stringdata7[28];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[23];
    char stringdata12[24];
    char stringdata13[26];
    char stringdata14[24];
    char stringdata15[12];
    char stringdata16[8];
    char stringdata17[9];
    char stringdata18[22];
    char stringdata19[6];
    char stringdata20[15];
    char stringdata21[17];
    char stringdata22[16];
    char stringdata23[18];
    char stringdata24[21];
    char stringdata25[20];
    char stringdata26[19];
    char stringdata27[25];
    char stringdata28[22];
    char stringdata29[20];
    char stringdata30[24];
    char stringdata31[31];
    char stringdata32[19];
    char stringdata33[18];
    char stringdata34[12];
    char stringdata35[15];
    char stringdata36[17];
    char stringdata37[13];
    char stringdata38[16];
    char stringdata39[12];
    char stringdata40[6];
    char stringdata41[8];
    char stringdata42[17];
    char stringdata43[20];
    char stringdata44[20];
    char stringdata45[5];
    char stringdata46[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS_t qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "rdb::MarkerBrowserPage"
        QT_MOC_LITERAL(23, 24),  // "directory_header_clicked"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 7),  // "section"
        QT_MOC_LITERAL(57, 25),  // "directory_sorting_changed"
        QT_MOC_LITERAL(83, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(97, 5),  // "order"
        QT_MOC_LITERAL(103, 27),  // "directory_selection_changed"
        QT_MOC_LITERAL(131, 14),  // "QItemSelection"
        QT_MOC_LITERAL(146, 8),  // "selected"
        QT_MOC_LITERAL(155, 10),  // "deselected"
        QT_MOC_LITERAL(166, 22),  // "markers_header_clicked"
        QT_MOC_LITERAL(189, 23),  // "markers_sorting_changed"
        QT_MOC_LITERAL(213, 25),  // "markers_selection_changed"
        QT_MOC_LITERAL(239, 23),  // "markers_current_changed"
        QT_MOC_LITERAL(263, 11),  // "QModelIndex"
        QT_MOC_LITERAL(275, 7),  // "current"
        QT_MOC_LITERAL(283, 8),  // "previous"
        QT_MOC_LITERAL(292, 21),  // "marker_double_clicked"
        QT_MOC_LITERAL(314, 5),  // "index"
        QT_MOC_LITERAL(320, 14),  // "dir_up_clicked"
        QT_MOC_LITERAL(335, 16),  // "dir_down_clicked"
        QT_MOC_LITERAL(352, 15),  // "list_up_clicked"
        QT_MOC_LITERAL(368, 17),  // "list_down_clicked"
        QT_MOC_LITERAL(386, 20),  // "rerun_button_pressed"
        QT_MOC_LITERAL(407, 19),  // "flag_button_clicked"
        QT_MOC_LITERAL(427, 18),  // "flag_menu_selected"
        QT_MOC_LITERAL(446, 24),  // "important_button_clicked"
        QT_MOC_LITERAL(471, 21),  // "waived_button_clicked"
        QT_MOC_LITERAL(493, 19),  // "edit_button_clicked"
        QT_MOC_LITERAL(513, 23),  // "snapshot_button_clicked"
        QT_MOC_LITERAL(537, 30),  // "remove_snapshot_button_clicked"
        QT_MOC_LITERAL(568, 18),  // "revisit_non_waived"
        QT_MOC_LITERAL(587, 17),  // "revisit_important"
        QT_MOC_LITERAL(605, 11),  // "revisit_all"
        QT_MOC_LITERAL(617, 14),  // "mark_important"
        QT_MOC_LITERAL(632, 16),  // "mark_unimportant"
        QT_MOC_LITERAL(649, 12),  // "mark_visited"
        QT_MOC_LITERAL(662, 15),  // "mark_notvisited"
        QT_MOC_LITERAL(678, 11),  // "unwaive_all"
        QT_MOC_LITERAL(690, 5),  // "waive"
        QT_MOC_LITERAL(696, 7),  // "unwaive"
        QT_MOC_LITERAL(704, 16),  // "show_all_clicked"
        QT_MOC_LITERAL(721, 19),  // "list_shapes_clicked"
        QT_MOC_LITERAL(741, 19),  // "info_anchor_clicked"
        QT_MOC_LITERAL(761, 4),  // "link"
        QT_MOC_LITERAL(766, 14)   // "filter_changed"
    },
    "rdb::MarkerBrowserPage",
    "directory_header_clicked",
    "",
    "section",
    "directory_sorting_changed",
    "Qt::SortOrder",
    "order",
    "directory_selection_changed",
    "QItemSelection",
    "selected",
    "deselected",
    "markers_header_clicked",
    "markers_sorting_changed",
    "markers_selection_changed",
    "markers_current_changed",
    "QModelIndex",
    "current",
    "previous",
    "marker_double_clicked",
    "index",
    "dir_up_clicked",
    "dir_down_clicked",
    "list_up_clicked",
    "list_down_clicked",
    "rerun_button_pressed",
    "flag_button_clicked",
    "flag_menu_selected",
    "important_button_clicked",
    "waived_button_clicked",
    "edit_button_clicked",
    "snapshot_button_clicked",
    "remove_snapshot_button_clicked",
    "revisit_non_waived",
    "revisit_important",
    "revisit_all",
    "mark_important",
    "mark_unimportant",
    "mark_visited",
    "mark_notvisited",
    "unwaive_all",
    "waive",
    "unwaive",
    "show_all_clicked",
    "list_shapes_clicked",
    "info_anchor_clicked",
    "link",
    "filter_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSrdbSCOPEMarkerBrowserPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  218,    2, 0x0a,    1 /* Public */,
       4,    2,  221,    2, 0x0a,    3 /* Public */,
       7,    2,  226,    2, 0x0a,    6 /* Public */,
      11,    1,  231,    2, 0x0a,    9 /* Public */,
      12,    2,  234,    2, 0x0a,   11 /* Public */,
      13,    2,  239,    2, 0x0a,   14 /* Public */,
      14,    2,  244,    2, 0x0a,   17 /* Public */,
      18,    1,  249,    2, 0x0a,   20 /* Public */,
      20,    0,  252,    2, 0x0a,   22 /* Public */,
      21,    0,  253,    2, 0x0a,   23 /* Public */,
      22,    0,  254,    2, 0x0a,   24 /* Public */,
      23,    0,  255,    2, 0x0a,   25 /* Public */,
      24,    0,  256,    2, 0x0a,   26 /* Public */,
      25,    0,  257,    2, 0x0a,   27 /* Public */,
      26,    0,  258,    2, 0x0a,   28 /* Public */,
      27,    0,  259,    2, 0x0a,   29 /* Public */,
      28,    0,  260,    2, 0x0a,   30 /* Public */,
      29,    0,  261,    2, 0x0a,   31 /* Public */,
      30,    0,  262,    2, 0x0a,   32 /* Public */,
      31,    0,  263,    2, 0x0a,   33 /* Public */,
      32,    0,  264,    2, 0x0a,   34 /* Public */,
      33,    0,  265,    2, 0x0a,   35 /* Public */,
      34,    0,  266,    2, 0x0a,   36 /* Public */,
      35,    0,  267,    2, 0x0a,   37 /* Public */,
      36,    0,  268,    2, 0x0a,   38 /* Public */,
      37,    0,  269,    2, 0x0a,   39 /* Public */,
      38,    0,  270,    2, 0x0a,   40 /* Public */,
      39,    0,  271,    2, 0x0a,   41 /* Public */,
      40,    0,  272,    2, 0x0a,   42 /* Public */,
      41,    0,  273,    2, 0x0a,   43 /* Public */,
      42,    0,  274,    2, 0x0a,   44 /* Public */,
      43,    0,  275,    2, 0x0a,   45 /* Public */,
      44,    1,  276,    2, 0x0a,   46 /* Public */,
      46,    0,  279,    2, 0x0a,   48 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, 0x80000000 | 15,   19,
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
    QMetaType::Void, QMetaType::QUrl,   45,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject rdb::MarkerBrowserPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSrdbSCOPEMarkerBrowserPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MarkerBrowserPage, std::true_type>,
        // method 'directory_header_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'directory_sorting_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'directory_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'markers_header_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'markers_sorting_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'markers_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'markers_current_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'marker_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'dir_up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dir_down_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'list_up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'list_down_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rerun_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flag_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flag_menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'important_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'waived_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'snapshot_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remove_snapshot_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'revisit_non_waived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'revisit_important'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'revisit_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mark_important'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mark_unimportant'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mark_visited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mark_notvisited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unwaive_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'waive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unwaive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_all_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'list_shapes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'info_anchor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'filter_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void rdb::MarkerBrowserPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MarkerBrowserPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->directory_header_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->directory_sorting_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 2: _t->directory_selection_changed((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 3: _t->markers_header_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->markers_sorting_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 5: _t->markers_selection_changed((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 6: _t->markers_current_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 7: _t->marker_double_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->dir_up_clicked(); break;
        case 9: _t->dir_down_clicked(); break;
        case 10: _t->list_up_clicked(); break;
        case 11: _t->list_down_clicked(); break;
        case 12: _t->rerun_button_pressed(); break;
        case 13: _t->flag_button_clicked(); break;
        case 14: _t->flag_menu_selected(); break;
        case 15: _t->important_button_clicked(); break;
        case 16: _t->waived_button_clicked(); break;
        case 17: _t->edit_button_clicked(); break;
        case 18: _t->snapshot_button_clicked(); break;
        case 19: _t->remove_snapshot_button_clicked(); break;
        case 20: _t->revisit_non_waived(); break;
        case 21: _t->revisit_important(); break;
        case 22: _t->revisit_all(); break;
        case 23: _t->mark_important(); break;
        case 24: _t->mark_unimportant(); break;
        case 25: _t->mark_visited(); break;
        case 26: _t->mark_notvisited(); break;
        case 27: _t->unwaive_all(); break;
        case 28: _t->waive(); break;
        case 29: _t->unwaive(); break;
        case 30: _t->show_all_clicked(); break;
        case 31: _t->list_shapes_clicked(); break;
        case 32: _t->info_anchor_clicked((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 33: _t->filter_changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject *rdb::MarkerBrowserPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rdb::MarkerBrowserPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSrdbSCOPEMarkerBrowserPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MarkerBrowserPage"))
        return static_cast< Ui::MarkerBrowserPage*>(this);
    return QFrame::qt_metacast(_clname);
}

int rdb::MarkerBrowserPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
QT_WARNING_POP
