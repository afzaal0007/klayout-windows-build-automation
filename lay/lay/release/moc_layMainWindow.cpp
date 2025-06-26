/****************************************************************************
** Meta object code from reading C++ file 'layMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMainWindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMainWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS = QtMocHelpers::stringData(
    "lay::MainWindow",
    "closed",
    "",
    "current_pos",
    "x",
    "y",
    "dbu_units",
    "clear_current_pos",
    "message",
    "std::string",
    "s",
    "ms",
    "clear_message",
    "select_mode",
    "m",
    "update_action_states",
    "cancel",
    "redraw",
    "exit",
    "close_current_view",
    "close_view",
    "index",
    "close_all_views",
    "close_all_except_this",
    "close_all_views_left",
    "close_all_views_right",
    "clone",
    "tab_close_requested",
    "open_recent",
    "size_t",
    "n",
    "open_recent_session",
    "open_recent_layer_properties",
    "open_recent_bookmarks",
    "is_available_recent",
    "is_available_recent_session",
    "is_available_recent_layer_properties",
    "is_available_recent_bookmarks",
    "view_selected",
    "view_title_changed",
    "lay::LayoutView*",
    "view",
    "show_help",
    "url",
    "show_modal_help",
    "dock_widget_visibility_changed",
    "visible",
    "menu_changed",
    "message_timer",
    "edits_enabled_changed",
    "menu_needs_update",
    "technology_changed",
    "file_changed_timer",
    "file_changed",
    "path",
    "file_removed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS_t {
    uint offsetsAndSizes[112];
    char stringdata0[16];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[2];
    char stringdata5[2];
    char stringdata6[10];
    char stringdata7[18];
    char stringdata8[8];
    char stringdata9[12];
    char stringdata10[2];
    char stringdata11[3];
    char stringdata12[14];
    char stringdata13[12];
    char stringdata14[2];
    char stringdata15[21];
    char stringdata16[7];
    char stringdata17[7];
    char stringdata18[5];
    char stringdata19[19];
    char stringdata20[11];
    char stringdata21[6];
    char stringdata22[16];
    char stringdata23[22];
    char stringdata24[21];
    char stringdata25[22];
    char stringdata26[6];
    char stringdata27[20];
    char stringdata28[12];
    char stringdata29[7];
    char stringdata30[2];
    char stringdata31[20];
    char stringdata32[29];
    char stringdata33[22];
    char stringdata34[20];
    char stringdata35[28];
    char stringdata36[37];
    char stringdata37[30];
    char stringdata38[14];
    char stringdata39[19];
    char stringdata40[17];
    char stringdata41[5];
    char stringdata42[10];
    char stringdata43[4];
    char stringdata44[16];
    char stringdata45[31];
    char stringdata46[8];
    char stringdata47[13];
    char stringdata48[14];
    char stringdata49[22];
    char stringdata50[18];
    char stringdata51[19];
    char stringdata52[19];
    char stringdata53[13];
    char stringdata54[5];
    char stringdata55[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "lay::MainWindow"
        QT_MOC_LITERAL(16, 6),  // "closed"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 11),  // "current_pos"
        QT_MOC_LITERAL(36, 1),  // "x"
        QT_MOC_LITERAL(38, 1),  // "y"
        QT_MOC_LITERAL(40, 9),  // "dbu_units"
        QT_MOC_LITERAL(50, 17),  // "clear_current_pos"
        QT_MOC_LITERAL(68, 7),  // "message"
        QT_MOC_LITERAL(76, 11),  // "std::string"
        QT_MOC_LITERAL(88, 1),  // "s"
        QT_MOC_LITERAL(90, 2),  // "ms"
        QT_MOC_LITERAL(93, 13),  // "clear_message"
        QT_MOC_LITERAL(107, 11),  // "select_mode"
        QT_MOC_LITERAL(119, 1),  // "m"
        QT_MOC_LITERAL(121, 20),  // "update_action_states"
        QT_MOC_LITERAL(142, 6),  // "cancel"
        QT_MOC_LITERAL(149, 6),  // "redraw"
        QT_MOC_LITERAL(156, 4),  // "exit"
        QT_MOC_LITERAL(161, 18),  // "close_current_view"
        QT_MOC_LITERAL(180, 10),  // "close_view"
        QT_MOC_LITERAL(191, 5),  // "index"
        QT_MOC_LITERAL(197, 15),  // "close_all_views"
        QT_MOC_LITERAL(213, 21),  // "close_all_except_this"
        QT_MOC_LITERAL(235, 20),  // "close_all_views_left"
        QT_MOC_LITERAL(256, 21),  // "close_all_views_right"
        QT_MOC_LITERAL(278, 5),  // "clone"
        QT_MOC_LITERAL(284, 19),  // "tab_close_requested"
        QT_MOC_LITERAL(304, 11),  // "open_recent"
        QT_MOC_LITERAL(316, 6),  // "size_t"
        QT_MOC_LITERAL(323, 1),  // "n"
        QT_MOC_LITERAL(325, 19),  // "open_recent_session"
        QT_MOC_LITERAL(345, 28),  // "open_recent_layer_properties"
        QT_MOC_LITERAL(374, 21),  // "open_recent_bookmarks"
        QT_MOC_LITERAL(396, 19),  // "is_available_recent"
        QT_MOC_LITERAL(416, 27),  // "is_available_recent_session"
        QT_MOC_LITERAL(444, 36),  // "is_available_recent_layer_pro..."
        QT_MOC_LITERAL(481, 29),  // "is_available_recent_bookmarks"
        QT_MOC_LITERAL(511, 13),  // "view_selected"
        QT_MOC_LITERAL(525, 18),  // "view_title_changed"
        QT_MOC_LITERAL(544, 16),  // "lay::LayoutView*"
        QT_MOC_LITERAL(561, 4),  // "view"
        QT_MOC_LITERAL(566, 9),  // "show_help"
        QT_MOC_LITERAL(576, 3),  // "url"
        QT_MOC_LITERAL(580, 15),  // "show_modal_help"
        QT_MOC_LITERAL(596, 30),  // "dock_widget_visibility_changed"
        QT_MOC_LITERAL(627, 7),  // "visible"
        QT_MOC_LITERAL(635, 12),  // "menu_changed"
        QT_MOC_LITERAL(648, 13),  // "message_timer"
        QT_MOC_LITERAL(662, 21),  // "edits_enabled_changed"
        QT_MOC_LITERAL(684, 17),  // "menu_needs_update"
        QT_MOC_LITERAL(702, 18),  // "technology_changed"
        QT_MOC_LITERAL(721, 18),  // "file_changed_timer"
        QT_MOC_LITERAL(740, 12),  // "file_changed"
        QT_MOC_LITERAL(753, 4),  // "path"
        QT_MOC_LITERAL(758, 12)   // "file_removed"
    },
    "lay::MainWindow",
    "closed",
    "",
    "current_pos",
    "x",
    "y",
    "dbu_units",
    "clear_current_pos",
    "message",
    "std::string",
    "s",
    "ms",
    "clear_message",
    "select_mode",
    "m",
    "update_action_states",
    "cancel",
    "redraw",
    "exit",
    "close_current_view",
    "close_view",
    "index",
    "close_all_views",
    "close_all_except_this",
    "close_all_views_left",
    "close_all_views_right",
    "clone",
    "tab_close_requested",
    "open_recent",
    "size_t",
    "n",
    "open_recent_session",
    "open_recent_layer_properties",
    "open_recent_bookmarks",
    "is_available_recent",
    "is_available_recent_session",
    "is_available_recent_layer_properties",
    "is_available_recent_bookmarks",
    "view_selected",
    "view_title_changed",
    "lay::LayoutView*",
    "view",
    "show_help",
    "url",
    "show_modal_help",
    "dock_widget_visibility_changed",
    "visible",
    "menu_changed",
    "message_timer",
    "edits_enabled_changed",
    "menu_needs_update",
    "technology_changed",
    "file_changed_timer",
    "file_changed",
    "path",
    "file_removed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  248,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    3,  249,    2, 0x0a,    2 /* Public */,
       7,    0,  256,    2, 0x0a,    6 /* Public */,
       8,    2,  257,    2, 0x0a,    7 /* Public */,
      12,    0,  262,    2, 0x0a,   10 /* Public */,
      13,    1,  263,    2, 0x0a,   11 /* Public */,
      15,    0,  266,    2, 0x0a,   13 /* Public */,
      16,    0,  267,    2, 0x0a,   14 /* Public */,
      17,    0,  268,    2, 0x0a,   15 /* Public */,
      18,    0,  269,    2, 0x0a,   16 /* Public */,
      19,    0,  270,    2, 0x0a,   17 /* Public */,
      20,    1,  271,    2, 0x0a,   18 /* Public */,
      22,    0,  274,    2, 0x0a,   20 /* Public */,
      23,    0,  275,    2, 0x0a,   21 /* Public */,
      24,    0,  276,    2, 0x0a,   22 /* Public */,
      25,    0,  277,    2, 0x0a,   23 /* Public */,
      26,    0,  278,    2, 0x0a,   24 /* Public */,
      27,    1,  279,    2, 0x0a,   25 /* Public */,
      28,    1,  282,    2, 0x0a,   27 /* Public */,
      31,    1,  285,    2, 0x0a,   29 /* Public */,
      32,    1,  288,    2, 0x0a,   31 /* Public */,
      33,    1,  291,    2, 0x0a,   33 /* Public */,
      34,    1,  294,    2, 0x0a,   35 /* Public */,
      35,    1,  297,    2, 0x0a,   37 /* Public */,
      36,    1,  300,    2, 0x0a,   39 /* Public */,
      37,    1,  303,    2, 0x0a,   41 /* Public */,
      38,    1,  306,    2, 0x0a,   43 /* Public */,
      39,    1,  309,    2, 0x0a,   45 /* Public */,
      42,    1,  312,    2, 0x0a,   47 /* Public */,
      44,    1,  315,    2, 0x0a,   49 /* Public */,
      45,    1,  318,    2, 0x0a,   51 /* Public */,
      47,    0,  321,    2, 0x09,   53 /* Protected */,
      48,    0,  322,    2, 0x09,   54 /* Protected */,
      49,    0,  323,    2, 0x09,   55 /* Protected */,
      50,    0,  324,    2, 0x09,   56 /* Protected */,
      51,    0,  325,    2, 0x09,   57 /* Protected */,
      52,    0,  326,    2, 0x09,   58 /* Protected */,
      53,    1,  327,    2, 0x09,   59 /* Protected */,
      55,    1,  330,    2, 0x09,   61 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   54,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_pos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear_current_pos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clear_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'select_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'update_action_states'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redraw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_current_view'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_view'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'close_all_views'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_except_this'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_views_left'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_views_right'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_close_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'open_recent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'open_recent_session'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'open_recent_layer_properties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'open_recent_bookmarks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'is_available_recent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'is_available_recent_session'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'is_available_recent_layer_properties'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'is_available_recent_bookmarks'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'view_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'view_title_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lay::LayoutView *, std::false_type>,
        // method 'show_help'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'show_modal_help'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dock_widget_visibility_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'menu_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'message_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edits_enabled_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'menu_needs_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'technology_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'file_changed_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'file_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'file_removed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void lay::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->current_pos((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->clear_current_pos(); break;
        case 3: _t->message((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->clear_message(); break;
        case 5: _t->select_mode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->update_action_states(); break;
        case 7: _t->cancel(); break;
        case 8: _t->redraw(); break;
        case 9: _t->exit(); break;
        case 10: _t->close_current_view(); break;
        case 11: _t->close_view((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->close_all_views(); break;
        case 13: _t->close_all_except_this(); break;
        case 14: _t->close_all_views_left(); break;
        case 15: _t->close_all_views_right(); break;
        case 16: _t->clone(); break;
        case 17: _t->tab_close_requested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->open_recent((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 19: _t->open_recent_session((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 20: _t->open_recent_layer_properties((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 21: _t->open_recent_bookmarks((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 22: { bool _r = _t->is_available_recent((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->is_available_recent_session((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->is_available_recent_layer_properties((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->is_available_recent_bookmarks((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->view_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->view_title_changed((*reinterpret_cast< std::add_pointer_t<lay::LayoutView*>>(_a[1]))); break;
        case 28: _t->show_help((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->show_modal_help((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->dock_widget_visibility_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->menu_changed(); break;
        case 32: _t->message_timer(); break;
        case 33: _t->edits_enabled_changed(); break;
        case 34: _t->menu_needs_update(); break;
        case 35: _t->technology_changed(); break;
        case 36: _t->file_changed_timer(); break;
        case 37: _t->file_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->file_removed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *lay::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "tl::Object"))
        return static_cast< tl::Object*>(this);
    if (!strcmp(_clname, "lay::DispatcherDelegate"))
        return static_cast< lay::DispatcherDelegate*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int lay::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void lay::MainWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
