/****************************************************************************
** Meta object code from reading C++ file 'layNetlistBrowserPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layNetlistBrowserPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layNetlistBrowserPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS = QtMocHelpers::stringData(
    "lay::NetlistBrowserPage",
    "export_all",
    "",
    "export_selected",
    "show_all_clicked",
    "info_button_pressed",
    "rerun_button_pressed",
    "find_button_pressed",
    "anchor_clicked",
    "url",
    "navigate_back",
    "navigate_forward",
    "nl_current_index_changed",
    "QModelIndex",
    "index",
    "sch_current_index_changed",
    "xref_current_index_changed",
    "nl_current_tree_index_changed",
    "sch_current_tree_index_changed",
    "xref_current_tree_index_changed",
    "nl_selection_changed",
    "sch_selection_changed",
    "xref_selection_changed",
    "log_selection_changed",
    "browse_color_for_net",
    "select_color_for_net",
    "mode_tab_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[24];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[20];
    char stringdata6[21];
    char stringdata7[20];
    char stringdata8[15];
    char stringdata9[4];
    char stringdata10[14];
    char stringdata11[17];
    char stringdata12[25];
    char stringdata13[12];
    char stringdata14[6];
    char stringdata15[26];
    char stringdata16[27];
    char stringdata17[30];
    char stringdata18[31];
    char stringdata19[32];
    char stringdata20[21];
    char stringdata21[22];
    char stringdata22[23];
    char stringdata23[22];
    char stringdata24[21];
    char stringdata25[21];
    char stringdata26[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::NetlistBrowserPage"
        QT_MOC_LITERAL(24, 10),  // "export_all"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 15),  // "export_selected"
        QT_MOC_LITERAL(52, 16),  // "show_all_clicked"
        QT_MOC_LITERAL(69, 19),  // "info_button_pressed"
        QT_MOC_LITERAL(89, 20),  // "rerun_button_pressed"
        QT_MOC_LITERAL(110, 19),  // "find_button_pressed"
        QT_MOC_LITERAL(130, 14),  // "anchor_clicked"
        QT_MOC_LITERAL(145, 3),  // "url"
        QT_MOC_LITERAL(149, 13),  // "navigate_back"
        QT_MOC_LITERAL(163, 16),  // "navigate_forward"
        QT_MOC_LITERAL(180, 24),  // "nl_current_index_changed"
        QT_MOC_LITERAL(205, 11),  // "QModelIndex"
        QT_MOC_LITERAL(217, 5),  // "index"
        QT_MOC_LITERAL(223, 25),  // "sch_current_index_changed"
        QT_MOC_LITERAL(249, 26),  // "xref_current_index_changed"
        QT_MOC_LITERAL(276, 29),  // "nl_current_tree_index_changed"
        QT_MOC_LITERAL(306, 30),  // "sch_current_tree_index_changed"
        QT_MOC_LITERAL(337, 31),  // "xref_current_tree_index_changed"
        QT_MOC_LITERAL(369, 20),  // "nl_selection_changed"
        QT_MOC_LITERAL(390, 21),  // "sch_selection_changed"
        QT_MOC_LITERAL(412, 22),  // "xref_selection_changed"
        QT_MOC_LITERAL(435, 21),  // "log_selection_changed"
        QT_MOC_LITERAL(457, 20),  // "browse_color_for_net"
        QT_MOC_LITERAL(478, 20),  // "select_color_for_net"
        QT_MOC_LITERAL(499, 16)   // "mode_tab_changed"
    },
    "lay::NetlistBrowserPage",
    "export_all",
    "",
    "export_selected",
    "show_all_clicked",
    "info_button_pressed",
    "rerun_button_pressed",
    "find_button_pressed",
    "anchor_clicked",
    "url",
    "navigate_back",
    "navigate_forward",
    "nl_current_index_changed",
    "QModelIndex",
    "index",
    "sch_current_index_changed",
    "xref_current_index_changed",
    "nl_current_tree_index_changed",
    "sch_current_tree_index_changed",
    "xref_current_tree_index_changed",
    "nl_selection_changed",
    "sch_selection_changed",
    "xref_selection_changed",
    "log_selection_changed",
    "browse_color_for_net",
    "select_color_for_net",
    "mode_tab_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPENetlistBrowserPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x0a,    1 /* Public */,
       3,    0,  147,    2, 0x0a,    2 /* Public */,
       4,    0,  148,    2, 0x08,    3 /* Private */,
       5,    0,  149,    2, 0x08,    4 /* Private */,
       6,    0,  150,    2, 0x08,    5 /* Private */,
       7,    0,  151,    2, 0x08,    6 /* Private */,
       8,    1,  152,    2, 0x08,    7 /* Private */,
      10,    0,  155,    2, 0x08,    9 /* Private */,
      11,    0,  156,    2, 0x08,   10 /* Private */,
      12,    1,  157,    2, 0x08,   11 /* Private */,
      15,    1,  160,    2, 0x08,   13 /* Private */,
      16,    1,  163,    2, 0x08,   15 /* Private */,
      17,    1,  166,    2, 0x08,   17 /* Private */,
      18,    1,  169,    2, 0x08,   19 /* Private */,
      19,    1,  172,    2, 0x08,   21 /* Private */,
      20,    0,  175,    2, 0x08,   23 /* Private */,
      21,    0,  176,    2, 0x08,   24 /* Private */,
      22,    0,  177,    2, 0x08,   25 /* Private */,
      23,    0,  178,    2, 0x08,   26 /* Private */,
      24,    0,  179,    2, 0x08,   27 /* Private */,
      25,    0,  180,    2, 0x08,   28 /* Private */,
      26,    1,  181,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::NetlistBrowserPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPENetlistBrowserPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetlistBrowserPage, std::true_type>,
        // method 'export_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_all_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'info_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rerun_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'find_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'anchor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'navigate_back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'navigate_forward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nl_current_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'sch_current_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'xref_current_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'nl_current_tree_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'sch_current_tree_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'xref_current_tree_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'nl_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sch_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xref_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'log_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_color_for_net'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'select_color_for_net'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mode_tab_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::NetlistBrowserPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetlistBrowserPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->export_all(); break;
        case 1: _t->export_selected(); break;
        case 2: _t->show_all_clicked(); break;
        case 3: _t->info_button_pressed(); break;
        case 4: _t->rerun_button_pressed(); break;
        case 5: _t->find_button_pressed(); break;
        case 6: _t->anchor_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->navigate_back(); break;
        case 8: _t->navigate_forward(); break;
        case 9: _t->nl_current_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->sch_current_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->xref_current_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->nl_current_tree_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 13: _t->sch_current_tree_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 14: _t->xref_current_tree_index_changed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 15: _t->nl_selection_changed(); break;
        case 16: _t->sch_selection_changed(); break;
        case 17: _t->xref_selection_changed(); break;
        case 18: _t->log_selection_changed(); break;
        case 19: _t->browse_color_for_net(); break;
        case 20: _t->select_color_for_net(); break;
        case 21: _t->mode_tab_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::NetlistBrowserPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::NetlistBrowserPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPENetlistBrowserPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::NetlistBrowserPage"))
        return static_cast< Ui::NetlistBrowserPage*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::NetlistBrowserPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
