/****************************************************************************
** Meta object code from reading C++ file 'layGerberImportDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/plugins/streamers/pcb/lay_plugin/layGerberImportDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layGerberImportDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::GerberImportDialogFileColumnEditorWidget",
    "browse_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[46];
    char stringdata1[15];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 45),  // "lay::GerberImportDialogFileCo..."
        QT_MOC_LITERAL(46, 14),  // "browse_clicked"
        QT_MOC_LITERAL(61, 0)   // ""
    },
    "lay::GerberImportDialogFileColumnEditorWidget",
    "browse_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::GerberImportDialogFileColumnEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GerberImportDialogFileColumnEditorWidget, std::true_type>,
        // method 'browse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::GerberImportDialogFileColumnEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GerberImportDialogFileColumnEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->browse_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::GerberImportDialogFileColumnEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::GerberImportDialogFileColumnEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogFileColumnEditorWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::GerberImportDialogFileColumnEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::GerberImportDialogMetalLayerColumnEditorWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 51)   // "lay::GerberImportDialogMetalL..."
    },
    "lay::GerberImportDialogMetalLayerColumnEditorWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject lay::GerberImportDialogMetalLayerColumnEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GerberImportDialogMetalLayerColumnEditorWidget, std::true_type>
    >,
    nullptr
} };

void lay::GerberImportDialogMetalLayerColumnEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *lay::GerberImportDialogMetalLayerColumnEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::GerberImportDialogMetalLayerColumnEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogMetalLayerColumnEditorWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int lay::GerberImportDialogMetalLayerColumnEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS = QtMocHelpers::stringData(
    "lay::GerberImportDialog",
    "next_page",
    "",
    "last_page",
    "browse_layer_properties_file",
    "browse_base_dir",
    "open_clicked",
    "saveas_clicked",
    "reset_clicked",
    "add_target_layer",
    "delete_target_layer",
    "move_target_layer_up",
    "move_target_layer_down",
    "add_free_file",
    "delete_free_file",
    "move_free_file_up",
    "move_free_file_down",
    "reset_free_mapping",
    "layout_layer_double_clicked",
    "QTreeWidgetItem*",
    "free_layer_mapping_item_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[24];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[29];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[17];
    char stringdata10[20];
    char stringdata11[21];
    char stringdata12[23];
    char stringdata13[14];
    char stringdata14[17];
    char stringdata15[18];
    char stringdata16[20];
    char stringdata17[19];
    char stringdata18[28];
    char stringdata19[17];
    char stringdata20[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::GerberImportDialog"
        QT_MOC_LITERAL(24, 9),  // "next_page"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 9),  // "last_page"
        QT_MOC_LITERAL(45, 28),  // "browse_layer_properties_file"
        QT_MOC_LITERAL(74, 15),  // "browse_base_dir"
        QT_MOC_LITERAL(90, 12),  // "open_clicked"
        QT_MOC_LITERAL(103, 14),  // "saveas_clicked"
        QT_MOC_LITERAL(118, 13),  // "reset_clicked"
        QT_MOC_LITERAL(132, 16),  // "add_target_layer"
        QT_MOC_LITERAL(149, 19),  // "delete_target_layer"
        QT_MOC_LITERAL(169, 20),  // "move_target_layer_up"
        QT_MOC_LITERAL(190, 22),  // "move_target_layer_down"
        QT_MOC_LITERAL(213, 13),  // "add_free_file"
        QT_MOC_LITERAL(227, 16),  // "delete_free_file"
        QT_MOC_LITERAL(244, 17),  // "move_free_file_up"
        QT_MOC_LITERAL(262, 19),  // "move_free_file_down"
        QT_MOC_LITERAL(282, 18),  // "reset_free_mapping"
        QT_MOC_LITERAL(301, 27),  // "layout_layer_double_clicked"
        QT_MOC_LITERAL(329, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(346, 31)   // "free_layer_mapping_item_clicked"
    },
    "lay::GerberImportDialog",
    "next_page",
    "",
    "last_page",
    "browse_layer_properties_file",
    "browse_base_dir",
    "open_clicked",
    "saveas_clicked",
    "reset_clicked",
    "add_target_layer",
    "delete_target_layer",
    "move_target_layer_up",
    "move_target_layer_down",
    "add_free_file",
    "delete_free_file",
    "move_free_file_up",
    "move_free_file_down",
    "reset_free_mapping",
    "layout_layer_double_clicked",
    "QTreeWidgetItem*",
    "free_layer_mapping_item_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEGerberImportDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x0a,    1 /* Public */,
       3,    0,  123,    2, 0x0a,    2 /* Public */,
       4,    0,  124,    2, 0x0a,    3 /* Public */,
       5,    0,  125,    2, 0x0a,    4 /* Public */,
       6,    0,  126,    2, 0x0a,    5 /* Public */,
       7,    0,  127,    2, 0x0a,    6 /* Public */,
       8,    0,  128,    2, 0x0a,    7 /* Public */,
       9,    0,  129,    2, 0x0a,    8 /* Public */,
      10,    0,  130,    2, 0x0a,    9 /* Public */,
      11,    0,  131,    2, 0x0a,   10 /* Public */,
      12,    0,  132,    2, 0x0a,   11 /* Public */,
      13,    0,  133,    2, 0x0a,   12 /* Public */,
      14,    0,  134,    2, 0x0a,   13 /* Public */,
      15,    0,  135,    2, 0x0a,   14 /* Public */,
      16,    0,  136,    2, 0x0a,   15 /* Public */,
      17,    0,  137,    2, 0x0a,   16 /* Public */,
      18,    2,  138,    2, 0x0a,   17 /* Public */,
      20,    2,  143,    2, 0x0a,   20 /* Public */,

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
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::GerberImportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEGerberImportDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GerberImportDialog, std::true_type>,
        // method 'next_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'last_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_layer_properties_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browse_base_dir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveas_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_target_layer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_target_layer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_target_layer_up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_target_layer_down'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_free_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_free_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_free_file_up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move_free_file_down'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_free_mapping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'layout_layer_double_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'free_layer_mapping_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::GerberImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GerberImportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->next_page(); break;
        case 1: _t->last_page(); break;
        case 2: _t->browse_layer_properties_file(); break;
        case 3: _t->browse_base_dir(); break;
        case 4: _t->open_clicked(); break;
        case 5: _t->saveas_clicked(); break;
        case 6: _t->reset_clicked(); break;
        case 7: _t->add_target_layer(); break;
        case 8: _t->delete_target_layer(); break;
        case 9: _t->move_target_layer_up(); break;
        case 10: _t->move_target_layer_down(); break;
        case 11: _t->add_free_file(); break;
        case 12: _t->delete_free_file(); break;
        case 13: _t->move_free_file_up(); break;
        case 14: _t->move_free_file_down(); break;
        case 15: _t->reset_free_mapping(); break;
        case 16: _t->layout_layer_double_clicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->free_layer_mapping_item_clicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *lay::GerberImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::GerberImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEGerberImportDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lay::GerberImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
