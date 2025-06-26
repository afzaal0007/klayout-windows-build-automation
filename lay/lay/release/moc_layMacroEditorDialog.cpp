/****************************************************************************
** Meta object code from reading C++ file 'layMacroEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMacroEditorDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMacroEditorDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorDialog",
    "refresh",
    "",
    "help_button_clicked",
    "add_button_clicked",
    "close_button_clicked",
    "delete_button_clicked",
    "rename_button_clicked",
    "import_button_clicked",
    "new_folder_button_clicked",
    "save_all_button_clicked",
    "save_button_clicked",
    "save_as_button_clicked",
    "run_button_clicked",
    "run_this_button_clicked",
    "single_step_button_clicked",
    "next_step_button_clicked",
    "pause_button_clicked",
    "stop_button_clicked",
    "properties_button_clicked",
    "setup_button_clicked",
    "breakpoint_button_clicked",
    "add_location",
    "remove_location",
    "clear_breakpoints_button_clicked",
    "item_double_clicked",
    "lym::Macro*",
    "macro",
    "move_macro",
    "source",
    "lym::MacroCollection*",
    "target",
    "move_folder",
    "macro_renamed",
    "folder_renamed",
    "mc",
    "current_tab_changed",
    "index",
    "commit",
    "stack_element_double_clicked",
    "QListWidgetItem*",
    "item",
    "search_edited",
    "search_editing",
    "search_finished",
    "tab_close_requested",
    "close_requested",
    "close_all",
    "close_all_but_this",
    "close_all_left",
    "close_all_right",
    "replace_mode_button_clicked",
    "replace_next_button_clicked",
    "replace_all_button_clicked",
    "find_next_button_clicked",
    "find_prev_button_clicked",
    "help_requested",
    "s",
    "search_requested",
    "prev",
    "macro_changed",
    "macro_deleted",
    "macro_collection_deleted",
    "collection",
    "macro_collection_changed",
    "add_watch",
    "edit_watch",
    "del_watches",
    "clear_watches",
    "set_debugging_on",
    "on",
    "tabs_menu_about_to_show",
    "tab_menu_selected",
    "forward",
    "backward",
    "add_edit_trace",
    "compress",
    "clear_edit_trace",
    "file_changed_timer",
    "immediate_command_text_changed",
    "text",
    "file_changed",
    "path",
    "file_removed",
    "clear_log",
    "apply_search"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS_t {
    uint offsetsAndSizes[172];
    char stringdata0[23];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[19];
    char stringdata5[21];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[26];
    char stringdata10[24];
    char stringdata11[20];
    char stringdata12[23];
    char stringdata13[19];
    char stringdata14[24];
    char stringdata15[27];
    char stringdata16[25];
    char stringdata17[21];
    char stringdata18[20];
    char stringdata19[26];
    char stringdata20[21];
    char stringdata21[26];
    char stringdata22[13];
    char stringdata23[16];
    char stringdata24[33];
    char stringdata25[20];
    char stringdata26[12];
    char stringdata27[6];
    char stringdata28[11];
    char stringdata29[7];
    char stringdata30[22];
    char stringdata31[7];
    char stringdata32[12];
    char stringdata33[14];
    char stringdata34[15];
    char stringdata35[3];
    char stringdata36[20];
    char stringdata37[6];
    char stringdata38[7];
    char stringdata39[29];
    char stringdata40[17];
    char stringdata41[5];
    char stringdata42[14];
    char stringdata43[15];
    char stringdata44[16];
    char stringdata45[20];
    char stringdata46[16];
    char stringdata47[10];
    char stringdata48[19];
    char stringdata49[15];
    char stringdata50[16];
    char stringdata51[28];
    char stringdata52[28];
    char stringdata53[27];
    char stringdata54[25];
    char stringdata55[25];
    char stringdata56[15];
    char stringdata57[2];
    char stringdata58[17];
    char stringdata59[5];
    char stringdata60[14];
    char stringdata61[14];
    char stringdata62[25];
    char stringdata63[11];
    char stringdata64[25];
    char stringdata65[10];
    char stringdata66[11];
    char stringdata67[12];
    char stringdata68[14];
    char stringdata69[17];
    char stringdata70[3];
    char stringdata71[24];
    char stringdata72[18];
    char stringdata73[8];
    char stringdata74[9];
    char stringdata75[15];
    char stringdata76[9];
    char stringdata77[17];
    char stringdata78[19];
    char stringdata79[31];
    char stringdata80[5];
    char stringdata81[13];
    char stringdata82[5];
    char stringdata83[13];
    char stringdata84[10];
    char stringdata85[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "lay::MacroEditorDialog"
        QT_MOC_LITERAL(23, 7),  // "refresh"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 19),  // "help_button_clicked"
        QT_MOC_LITERAL(52, 18),  // "add_button_clicked"
        QT_MOC_LITERAL(71, 20),  // "close_button_clicked"
        QT_MOC_LITERAL(92, 21),  // "delete_button_clicked"
        QT_MOC_LITERAL(114, 21),  // "rename_button_clicked"
        QT_MOC_LITERAL(136, 21),  // "import_button_clicked"
        QT_MOC_LITERAL(158, 25),  // "new_folder_button_clicked"
        QT_MOC_LITERAL(184, 23),  // "save_all_button_clicked"
        QT_MOC_LITERAL(208, 19),  // "save_button_clicked"
        QT_MOC_LITERAL(228, 22),  // "save_as_button_clicked"
        QT_MOC_LITERAL(251, 18),  // "run_button_clicked"
        QT_MOC_LITERAL(270, 23),  // "run_this_button_clicked"
        QT_MOC_LITERAL(294, 26),  // "single_step_button_clicked"
        QT_MOC_LITERAL(321, 24),  // "next_step_button_clicked"
        QT_MOC_LITERAL(346, 20),  // "pause_button_clicked"
        QT_MOC_LITERAL(367, 19),  // "stop_button_clicked"
        QT_MOC_LITERAL(387, 25),  // "properties_button_clicked"
        QT_MOC_LITERAL(413, 20),  // "setup_button_clicked"
        QT_MOC_LITERAL(434, 25),  // "breakpoint_button_clicked"
        QT_MOC_LITERAL(460, 12),  // "add_location"
        QT_MOC_LITERAL(473, 15),  // "remove_location"
        QT_MOC_LITERAL(489, 32),  // "clear_breakpoints_button_clicked"
        QT_MOC_LITERAL(522, 19),  // "item_double_clicked"
        QT_MOC_LITERAL(542, 11),  // "lym::Macro*"
        QT_MOC_LITERAL(554, 5),  // "macro"
        QT_MOC_LITERAL(560, 10),  // "move_macro"
        QT_MOC_LITERAL(571, 6),  // "source"
        QT_MOC_LITERAL(578, 21),  // "lym::MacroCollection*"
        QT_MOC_LITERAL(600, 6),  // "target"
        QT_MOC_LITERAL(607, 11),  // "move_folder"
        QT_MOC_LITERAL(619, 13),  // "macro_renamed"
        QT_MOC_LITERAL(633, 14),  // "folder_renamed"
        QT_MOC_LITERAL(648, 2),  // "mc"
        QT_MOC_LITERAL(651, 19),  // "current_tab_changed"
        QT_MOC_LITERAL(671, 5),  // "index"
        QT_MOC_LITERAL(677, 6),  // "commit"
        QT_MOC_LITERAL(684, 28),  // "stack_element_double_clicked"
        QT_MOC_LITERAL(713, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(730, 4),  // "item"
        QT_MOC_LITERAL(735, 13),  // "search_edited"
        QT_MOC_LITERAL(749, 14),  // "search_editing"
        QT_MOC_LITERAL(764, 15),  // "search_finished"
        QT_MOC_LITERAL(780, 19),  // "tab_close_requested"
        QT_MOC_LITERAL(800, 15),  // "close_requested"
        QT_MOC_LITERAL(816, 9),  // "close_all"
        QT_MOC_LITERAL(826, 18),  // "close_all_but_this"
        QT_MOC_LITERAL(845, 14),  // "close_all_left"
        QT_MOC_LITERAL(860, 15),  // "close_all_right"
        QT_MOC_LITERAL(876, 27),  // "replace_mode_button_clicked"
        QT_MOC_LITERAL(904, 27),  // "replace_next_button_clicked"
        QT_MOC_LITERAL(932, 26),  // "replace_all_button_clicked"
        QT_MOC_LITERAL(959, 24),  // "find_next_button_clicked"
        QT_MOC_LITERAL(984, 24),  // "find_prev_button_clicked"
        QT_MOC_LITERAL(1009, 14),  // "help_requested"
        QT_MOC_LITERAL(1024, 1),  // "s"
        QT_MOC_LITERAL(1026, 16),  // "search_requested"
        QT_MOC_LITERAL(1043, 4),  // "prev"
        QT_MOC_LITERAL(1048, 13),  // "macro_changed"
        QT_MOC_LITERAL(1062, 13),  // "macro_deleted"
        QT_MOC_LITERAL(1076, 24),  // "macro_collection_deleted"
        QT_MOC_LITERAL(1101, 10),  // "collection"
        QT_MOC_LITERAL(1112, 24),  // "macro_collection_changed"
        QT_MOC_LITERAL(1137, 9),  // "add_watch"
        QT_MOC_LITERAL(1147, 10),  // "edit_watch"
        QT_MOC_LITERAL(1158, 11),  // "del_watches"
        QT_MOC_LITERAL(1170, 13),  // "clear_watches"
        QT_MOC_LITERAL(1184, 16),  // "set_debugging_on"
        QT_MOC_LITERAL(1201, 2),  // "on"
        QT_MOC_LITERAL(1204, 23),  // "tabs_menu_about_to_show"
        QT_MOC_LITERAL(1228, 17),  // "tab_menu_selected"
        QT_MOC_LITERAL(1246, 7),  // "forward"
        QT_MOC_LITERAL(1254, 8),  // "backward"
        QT_MOC_LITERAL(1263, 14),  // "add_edit_trace"
        QT_MOC_LITERAL(1278, 8),  // "compress"
        QT_MOC_LITERAL(1287, 16),  // "clear_edit_trace"
        QT_MOC_LITERAL(1304, 18),  // "file_changed_timer"
        QT_MOC_LITERAL(1323, 30),  // "immediate_command_text_changed"
        QT_MOC_LITERAL(1354, 4),  // "text"
        QT_MOC_LITERAL(1359, 12),  // "file_changed"
        QT_MOC_LITERAL(1372, 4),  // "path"
        QT_MOC_LITERAL(1377, 12),  // "file_removed"
        QT_MOC_LITERAL(1390, 9),  // "clear_log"
        QT_MOC_LITERAL(1400, 12)   // "apply_search"
    },
    "lay::MacroEditorDialog",
    "refresh",
    "",
    "help_button_clicked",
    "add_button_clicked",
    "close_button_clicked",
    "delete_button_clicked",
    "rename_button_clicked",
    "import_button_clicked",
    "new_folder_button_clicked",
    "save_all_button_clicked",
    "save_button_clicked",
    "save_as_button_clicked",
    "run_button_clicked",
    "run_this_button_clicked",
    "single_step_button_clicked",
    "next_step_button_clicked",
    "pause_button_clicked",
    "stop_button_clicked",
    "properties_button_clicked",
    "setup_button_clicked",
    "breakpoint_button_clicked",
    "add_location",
    "remove_location",
    "clear_breakpoints_button_clicked",
    "item_double_clicked",
    "lym::Macro*",
    "macro",
    "move_macro",
    "source",
    "lym::MacroCollection*",
    "target",
    "move_folder",
    "macro_renamed",
    "folder_renamed",
    "mc",
    "current_tab_changed",
    "index",
    "commit",
    "stack_element_double_clicked",
    "QListWidgetItem*",
    "item",
    "search_edited",
    "search_editing",
    "search_finished",
    "tab_close_requested",
    "close_requested",
    "close_all",
    "close_all_but_this",
    "close_all_left",
    "close_all_right",
    "replace_mode_button_clicked",
    "replace_next_button_clicked",
    "replace_all_button_clicked",
    "find_next_button_clicked",
    "find_prev_button_clicked",
    "help_requested",
    "s",
    "search_requested",
    "prev",
    "macro_changed",
    "macro_deleted",
    "macro_collection_deleted",
    "collection",
    "macro_collection_changed",
    "add_watch",
    "edit_watch",
    "del_watches",
    "clear_watches",
    "set_debugging_on",
    "on",
    "tabs_menu_about_to_show",
    "tab_menu_selected",
    "forward",
    "backward",
    "add_edit_trace",
    "compress",
    "clear_edit_trace",
    "file_changed_timer",
    "immediate_command_text_changed",
    "text",
    "file_changed",
    "path",
    "file_removed",
    "clear_log",
    "apply_search"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  422,    2, 0x0a,    1 /* Public */,
       3,    0,  423,    2, 0x08,    2 /* Private */,
       4,    0,  424,    2, 0x08,    3 /* Private */,
       5,    0,  425,    2, 0x08,    4 /* Private */,
       6,    0,  426,    2, 0x08,    5 /* Private */,
       7,    0,  427,    2, 0x08,    6 /* Private */,
       8,    0,  428,    2, 0x08,    7 /* Private */,
       9,    0,  429,    2, 0x08,    8 /* Private */,
      10,    0,  430,    2, 0x08,    9 /* Private */,
      11,    0,  431,    2, 0x08,   10 /* Private */,
      12,    0,  432,    2, 0x08,   11 /* Private */,
      13,    0,  433,    2, 0x08,   12 /* Private */,
      14,    0,  434,    2, 0x08,   13 /* Private */,
      15,    0,  435,    2, 0x08,   14 /* Private */,
      16,    0,  436,    2, 0x08,   15 /* Private */,
      17,    0,  437,    2, 0x08,   16 /* Private */,
      18,    0,  438,    2, 0x08,   17 /* Private */,
      19,    0,  439,    2, 0x08,   18 /* Private */,
      20,    0,  440,    2, 0x08,   19 /* Private */,
      21,    0,  441,    2, 0x08,   20 /* Private */,
      22,    0,  442,    2, 0x08,   21 /* Private */,
      23,    0,  443,    2, 0x08,   22 /* Private */,
      24,    0,  444,    2, 0x08,   23 /* Private */,
      25,    1,  445,    2, 0x08,   24 /* Private */,
      28,    2,  448,    2, 0x08,   26 /* Private */,
      32,    2,  453,    2, 0x08,   29 /* Private */,
      33,    1,  458,    2, 0x08,   32 /* Private */,
      34,    1,  461,    2, 0x08,   34 /* Private */,
      36,    1,  464,    2, 0x08,   36 /* Private */,
      38,    0,  467,    2, 0x08,   38 /* Private */,
      39,    1,  468,    2, 0x08,   39 /* Private */,
      42,    0,  471,    2, 0x08,   41 /* Private */,
      43,    0,  472,    2, 0x08,   42 /* Private */,
      44,    0,  473,    2, 0x08,   43 /* Private */,
      45,    1,  474,    2, 0x08,   44 /* Private */,
      46,    0,  477,    2, 0x08,   46 /* Private */,
      47,    0,  478,    2, 0x08,   47 /* Private */,
      48,    0,  479,    2, 0x08,   48 /* Private */,
      49,    0,  480,    2, 0x08,   49 /* Private */,
      50,    0,  481,    2, 0x08,   50 /* Private */,
      51,    0,  482,    2, 0x08,   51 /* Private */,
      52,    0,  483,    2, 0x08,   52 /* Private */,
      53,    0,  484,    2, 0x08,   53 /* Private */,
      54,    0,  485,    2, 0x08,   54 /* Private */,
      55,    0,  486,    2, 0x08,   55 /* Private */,
      56,    1,  487,    2, 0x08,   56 /* Private */,
      58,    2,  490,    2, 0x08,   58 /* Private */,
      60,    1,  495,    2, 0x08,   61 /* Private */,
      61,    1,  498,    2, 0x08,   63 /* Private */,
      62,    1,  501,    2, 0x08,   65 /* Private */,
      64,    1,  504,    2, 0x08,   67 /* Private */,
      65,    0,  507,    2, 0x08,   69 /* Private */,
      66,    0,  508,    2, 0x08,   70 /* Private */,
      67,    0,  509,    2, 0x08,   71 /* Private */,
      68,    0,  510,    2, 0x08,   72 /* Private */,
      69,    1,  511,    2, 0x08,   73 /* Private */,
      71,    0,  514,    2, 0x08,   75 /* Private */,
      72,    0,  515,    2, 0x08,   76 /* Private */,
      73,    0,  516,    2, 0x08,   77 /* Private */,
      74,    0,  517,    2, 0x08,   78 /* Private */,
      75,    1,  518,    2, 0x08,   79 /* Private */,
      77,    0,  521,    2, 0x08,   81 /* Private */,
      78,    0,  522,    2, 0x09,   82 /* Protected */,
      79,    1,  523,    2, 0x09,   83 /* Protected */,
      81,    1,  526,    2, 0x09,   85 /* Protected */,
      83,    1,  529,    2, 0x09,   87 /* Protected */,
      84,    0,  532,    2, 0x09,   89 /* Protected */,
      85,    0,  533,    2, 0x09,   90 /* Protected */,

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
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 30,   29,   31,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   29,   31,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 30,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   57,   59,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 30,   63,
    QMetaType::Void, 0x80000000 | 30,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   80,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorDialog, std::true_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'help_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rename_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'import_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'new_folder_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_as_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'run_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'run_this_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'single_step_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_step_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pause_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'properties_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setup_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'breakpoint_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_location'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remove_location'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_breakpoints_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'item_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::Macro *, std::false_type>,
        // method 'move_macro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::Macro *, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        // method 'move_folder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        // method 'macro_renamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::Macro *, std::false_type>,
        // method 'folder_renamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        // method 'current_tab_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'commit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stack_element_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'search_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_editing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_close_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'close_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_but_this'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_left'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_all_right'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_mode_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_next_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'find_next_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'find_prev_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'help_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'search_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'macro_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::Macro *, std::false_type>,
        // method 'macro_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::Macro *, std::false_type>,
        // method 'macro_collection_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        // method 'macro_collection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<lym::MacroCollection *, std::false_type>,
        // method 'add_watch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit_watch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'del_watches'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_watches'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_debugging_on'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'tabs_menu_about_to_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_edit_trace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear_edit_trace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'file_changed_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'immediate_command_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'file_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'file_removed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clear_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'apply_search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->help_button_clicked(); break;
        case 2: _t->add_button_clicked(); break;
        case 3: _t->close_button_clicked(); break;
        case 4: _t->delete_button_clicked(); break;
        case 5: _t->rename_button_clicked(); break;
        case 6: _t->import_button_clicked(); break;
        case 7: _t->new_folder_button_clicked(); break;
        case 8: _t->save_all_button_clicked(); break;
        case 9: _t->save_button_clicked(); break;
        case 10: _t->save_as_button_clicked(); break;
        case 11: _t->run_button_clicked(); break;
        case 12: _t->run_this_button_clicked(); break;
        case 13: _t->single_step_button_clicked(); break;
        case 14: _t->next_step_button_clicked(); break;
        case 15: _t->pause_button_clicked(); break;
        case 16: _t->stop_button_clicked(); break;
        case 17: _t->properties_button_clicked(); break;
        case 18: _t->setup_button_clicked(); break;
        case 19: _t->breakpoint_button_clicked(); break;
        case 20: _t->add_location(); break;
        case 21: _t->remove_location(); break;
        case 22: _t->clear_breakpoints_button_clicked(); break;
        case 23: _t->item_double_clicked((*reinterpret_cast< std::add_pointer_t<lym::Macro*>>(_a[1]))); break;
        case 24: _t->move_macro((*reinterpret_cast< std::add_pointer_t<lym::Macro*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[2]))); break;
        case 25: _t->move_folder((*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[2]))); break;
        case 26: _t->macro_renamed((*reinterpret_cast< std::add_pointer_t<lym::Macro*>>(_a[1]))); break;
        case 27: _t->folder_renamed((*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[1]))); break;
        case 28: _t->current_tab_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->commit(); break;
        case 30: _t->stack_element_double_clicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 31: _t->search_edited(); break;
        case 32: _t->search_editing(); break;
        case 33: _t->search_finished(); break;
        case 34: _t->tab_close_requested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->close_requested(); break;
        case 36: _t->close_all(); break;
        case 37: _t->close_all_but_this(); break;
        case 38: _t->close_all_left(); break;
        case 39: _t->close_all_right(); break;
        case 40: _t->replace_mode_button_clicked(); break;
        case 41: _t->replace_next_button_clicked(); break;
        case 42: _t->replace_all_button_clicked(); break;
        case 43: _t->find_next_button_clicked(); break;
        case 44: _t->find_prev_button_clicked(); break;
        case 45: _t->help_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 46: _t->search_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 47: _t->macro_changed((*reinterpret_cast< std::add_pointer_t<lym::Macro*>>(_a[1]))); break;
        case 48: _t->macro_deleted((*reinterpret_cast< std::add_pointer_t<lym::Macro*>>(_a[1]))); break;
        case 49: _t->macro_collection_deleted((*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[1]))); break;
        case 50: _t->macro_collection_changed((*reinterpret_cast< std::add_pointer_t<lym::MacroCollection*>>(_a[1]))); break;
        case 51: _t->add_watch(); break;
        case 52: _t->edit_watch(); break;
        case 53: _t->del_watches(); break;
        case 54: _t->clear_watches(); break;
        case 55: _t->set_debugging_on((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->tabs_menu_about_to_show(); break;
        case 57: _t->tab_menu_selected(); break;
        case 58: _t->forward(); break;
        case 59: _t->backward(); break;
        case 60: _t->add_edit_trace((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->clear_edit_trace(); break;
        case 62: _t->file_changed_timer(); break;
        case 63: _t->immediate_command_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 64: _t->file_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 65: _t->file_removed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 66: _t->clear_log(); break;
        case 67: _t->apply_search(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::Macro* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::Macro* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::MacroCollection* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::MacroCollection* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::Macro* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::MacroCollection* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::Macro* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::Macro* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::MacroCollection* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< lym::MacroCollection* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *lay::MacroEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "lay::Plugin"))
        return static_cast< lay::Plugin*>(this);
    if (!strcmp(_clname, "gsi::Console"))
        return static_cast< gsi::Console*>(this);
    if (!strcmp(_clname, "gsi::ExecutionHandler"))
        return static_cast< gsi::ExecutionHandler*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::MacroEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    }
    return _id;
}
QT_WARNING_POP
