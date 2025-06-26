/****************************************************************************
** Meta object code from reading C++ file 'laySearchReplaceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/laySearchReplaceDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laySearchReplaceDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS = QtMocHelpers::stringData(
    "lay::SearchReplaceResults"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS_t qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25)   // "lay::SearchReplaceResults"
    },
    "lay::SearchReplaceResults"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPESearchReplaceResultsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::SearchReplaceResults::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPESearchReplaceResultsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SearchReplaceResults, std::true_type>
    >,
    nullptr
} };

void lay::SearchReplaceResults::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::SearchReplaceResults::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::SearchReplaceResults::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPESearchReplaceResultsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int lay::SearchReplaceResults::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS = QtMocHelpers::stringData(
    "lay::SearchReplaceDialog",
    "find_all_button_clicked",
    "",
    "delete_button_clicked",
    "delete_all_button_clicked",
    "replace_button_clicked",
    "replace_all_button_clicked",
    "configure_button_clicked",
    "execute_all_button_clicked",
    "execute_selected_button_clicked",
    "add_saved_button_clicked",
    "replace_saved_button_clicked",
    "delete_saved_button_clicked",
    "rename_saved_button_clicked",
    "tab_index_changed",
    "index",
    "saved_query_double_clicked",
    "recent_query_index_changed",
    "result_selection_changed",
    "header_columns_changed",
    "from",
    "to",
    "cancel",
    "cancel_exec",
    "select_items",
    "export_csv",
    "export_csv_to_clipboard",
    "export_rdb",
    "export_layout",
    "sel_select_items",
    "sel_export_csv",
    "sel_export_csv_to_clipboard",
    "sel_export_rdb",
    "sel_export_layout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[25];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[27];
    char stringdata7[25];
    char stringdata8[27];
    char stringdata9[32];
    char stringdata10[25];
    char stringdata11[29];
    char stringdata12[28];
    char stringdata13[28];
    char stringdata14[18];
    char stringdata15[6];
    char stringdata16[27];
    char stringdata17[27];
    char stringdata18[25];
    char stringdata19[23];
    char stringdata20[5];
    char stringdata21[3];
    char stringdata22[7];
    char stringdata23[12];
    char stringdata24[13];
    char stringdata25[11];
    char stringdata26[24];
    char stringdata27[11];
    char stringdata28[14];
    char stringdata29[17];
    char stringdata30[15];
    char stringdata31[28];
    char stringdata32[15];
    char stringdata33[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "lay::SearchReplaceDialog"
        QT_MOC_LITERAL(25, 23),  // "find_all_button_clicked"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 21),  // "delete_button_clicked"
        QT_MOC_LITERAL(72, 25),  // "delete_all_button_clicked"
        QT_MOC_LITERAL(98, 22),  // "replace_button_clicked"
        QT_MOC_LITERAL(121, 26),  // "replace_all_button_clicked"
        QT_MOC_LITERAL(148, 24),  // "configure_button_clicked"
        QT_MOC_LITERAL(173, 26),  // "execute_all_button_clicked"
        QT_MOC_LITERAL(200, 31),  // "execute_selected_button_clicked"
        QT_MOC_LITERAL(232, 24),  // "add_saved_button_clicked"
        QT_MOC_LITERAL(257, 28),  // "replace_saved_button_clicked"
        QT_MOC_LITERAL(286, 27),  // "delete_saved_button_clicked"
        QT_MOC_LITERAL(314, 27),  // "rename_saved_button_clicked"
        QT_MOC_LITERAL(342, 17),  // "tab_index_changed"
        QT_MOC_LITERAL(360, 5),  // "index"
        QT_MOC_LITERAL(366, 26),  // "saved_query_double_clicked"
        QT_MOC_LITERAL(393, 26),  // "recent_query_index_changed"
        QT_MOC_LITERAL(420, 24),  // "result_selection_changed"
        QT_MOC_LITERAL(445, 22),  // "header_columns_changed"
        QT_MOC_LITERAL(468, 4),  // "from"
        QT_MOC_LITERAL(473, 2),  // "to"
        QT_MOC_LITERAL(476, 6),  // "cancel"
        QT_MOC_LITERAL(483, 11),  // "cancel_exec"
        QT_MOC_LITERAL(495, 12),  // "select_items"
        QT_MOC_LITERAL(508, 10),  // "export_csv"
        QT_MOC_LITERAL(519, 23),  // "export_csv_to_clipboard"
        QT_MOC_LITERAL(543, 10),  // "export_rdb"
        QT_MOC_LITERAL(554, 13),  // "export_layout"
        QT_MOC_LITERAL(568, 16),  // "sel_select_items"
        QT_MOC_LITERAL(585, 14),  // "sel_export_csv"
        QT_MOC_LITERAL(600, 27),  // "sel_export_csv_to_clipboard"
        QT_MOC_LITERAL(628, 14),  // "sel_export_rdb"
        QT_MOC_LITERAL(643, 17)   // "sel_export_layout"
    },
    "lay::SearchReplaceDialog",
    "find_all_button_clicked",
    "",
    "delete_button_clicked",
    "delete_all_button_clicked",
    "replace_button_clicked",
    "replace_all_button_clicked",
    "configure_button_clicked",
    "execute_all_button_clicked",
    "execute_selected_button_clicked",
    "add_saved_button_clicked",
    "replace_saved_button_clicked",
    "delete_saved_button_clicked",
    "rename_saved_button_clicked",
    "tab_index_changed",
    "index",
    "saved_query_double_clicked",
    "recent_query_index_changed",
    "result_selection_changed",
    "header_columns_changed",
    "from",
    "to",
    "cancel",
    "cancel_exec",
    "select_items",
    "export_csv",
    "export_csv_to_clipboard",
    "export_rdb",
    "export_layout",
    "sel_select_items",
    "sel_export_csv",
    "sel_export_csv_to_clipboard",
    "sel_export_rdb",
    "sel_export_layout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPESearchReplaceDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  188,    2, 0x08,    1 /* Private */,
       3,    0,  189,    2, 0x08,    2 /* Private */,
       4,    0,  190,    2, 0x08,    3 /* Private */,
       5,    0,  191,    2, 0x08,    4 /* Private */,
       6,    0,  192,    2, 0x08,    5 /* Private */,
       7,    0,  193,    2, 0x08,    6 /* Private */,
       8,    0,  194,    2, 0x08,    7 /* Private */,
       9,    0,  195,    2, 0x08,    8 /* Private */,
      10,    0,  196,    2, 0x08,    9 /* Private */,
      11,    0,  197,    2, 0x08,   10 /* Private */,
      12,    0,  198,    2, 0x08,   11 /* Private */,
      13,    0,  199,    2, 0x08,   12 /* Private */,
      14,    1,  200,    2, 0x08,   13 /* Private */,
      16,    0,  203,    2, 0x08,   15 /* Private */,
      17,    1,  204,    2, 0x08,   16 /* Private */,
      18,    0,  207,    2, 0x08,   18 /* Private */,
      19,    2,  208,    2, 0x08,   19 /* Private */,
      22,    0,  213,    2, 0x08,   22 /* Private */,
      23,    0,  214,    2, 0x08,   23 /* Private */,
      24,    0,  215,    2, 0x08,   24 /* Private */,
      25,    0,  216,    2, 0x08,   25 /* Private */,
      26,    0,  217,    2, 0x08,   26 /* Private */,
      27,    0,  218,    2, 0x08,   27 /* Private */,
      28,    0,  219,    2, 0x08,   28 /* Private */,
      29,    0,  220,    2, 0x08,   29 /* Private */,
      30,    0,  221,    2, 0x08,   30 /* Private */,
      31,    0,  222,    2, 0x08,   31 /* Private */,
      32,    0,  223,    2, 0x08,   32 /* Private */,
      33,    0,  224,    2, 0x08,   33 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
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

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::SearchReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<lay::Browser::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPESearchReplaceDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SearchReplaceDialog, std::true_type>,
        // method 'find_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'configure_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'execute_all_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'execute_selected_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_saved_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace_saved_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_saved_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rename_saved_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tab_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saved_query_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recent_query_index_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'result_selection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'header_columns_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel_exec'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'select_items'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_csv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_csv_to_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_rdb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_layout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sel_select_items'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sel_export_csv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sel_export_csv_to_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sel_export_rdb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sel_export_layout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::SearchReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchReplaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->find_all_button_clicked(); break;
        case 1: _t->delete_button_clicked(); break;
        case 2: _t->delete_all_button_clicked(); break;
        case 3: _t->replace_button_clicked(); break;
        case 4: _t->replace_all_button_clicked(); break;
        case 5: _t->configure_button_clicked(); break;
        case 6: _t->execute_all_button_clicked(); break;
        case 7: _t->execute_selected_button_clicked(); break;
        case 8: _t->add_saved_button_clicked(); break;
        case 9: _t->replace_saved_button_clicked(); break;
        case 10: _t->delete_saved_button_clicked(); break;
        case 11: _t->rename_saved_button_clicked(); break;
        case 12: _t->tab_index_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->saved_query_double_clicked(); break;
        case 14: _t->recent_query_index_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->result_selection_changed(); break;
        case 16: _t->header_columns_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->cancel(); break;
        case 18: _t->cancel_exec(); break;
        case 19: _t->select_items(); break;
        case 20: _t->export_csv(); break;
        case 21: _t->export_csv_to_clipboard(); break;
        case 22: _t->export_rdb(); break;
        case 23: _t->export_layout(); break;
        case 24: _t->sel_select_items(); break;
        case 25: _t->sel_export_csv(); break;
        case 26: _t->sel_export_csv_to_clipboard(); break;
        case 27: _t->sel_export_rdb(); break;
        case 28: _t->sel_export_layout(); break;
        default: ;
        }
    }
}

const QMetaObject *lay::SearchReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::SearchReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPESearchReplaceDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return lay::Browser::qt_metacast(_clname);
}

int lay::SearchReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = lay::Browser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
