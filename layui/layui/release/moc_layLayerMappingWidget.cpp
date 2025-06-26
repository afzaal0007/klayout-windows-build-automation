/****************************************************************************
** Meta object code from reading C++ file 'layLayerMappingWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layLayerMappingWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layLayerMappingWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::LayerMappingWidget",
    "layerListChanged",
    "",
    "layerItemDeleted",
    "layerItemAdded",
    "enable_all_layers",
    "en",
    "load_button_pressed",
    "add_button_pressed",
    "delete_button_pressed",
    "edit_button_pressed",
    "current_tab_changed",
    "tab"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[24];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[18];
    char stringdata6[3];
    char stringdata7[20];
    char stringdata8[19];
    char stringdata9[22];
    char stringdata10[20];
    char stringdata11[20];
    char stringdata12[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "lay::LayerMappingWidget"
        QT_MOC_LITERAL(24, 16),  // "layerListChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 16),  // "layerItemDeleted"
        QT_MOC_LITERAL(59, 14),  // "layerItemAdded"
        QT_MOC_LITERAL(74, 17),  // "enable_all_layers"
        QT_MOC_LITERAL(92, 2),  // "en"
        QT_MOC_LITERAL(95, 19),  // "load_button_pressed"
        QT_MOC_LITERAL(115, 18),  // "add_button_pressed"
        QT_MOC_LITERAL(134, 21),  // "delete_button_pressed"
        QT_MOC_LITERAL(156, 19),  // "edit_button_pressed"
        QT_MOC_LITERAL(176, 19),  // "current_tab_changed"
        QT_MOC_LITERAL(196, 3)   // "tab"
    },
    "lay::LayerMappingWidget",
    "layerListChanged",
    "",
    "layerItemDeleted",
    "layerItemAdded",
    "enable_all_layers",
    "en",
    "load_button_pressed",
    "add_button_pressed",
    "delete_button_pressed",
    "edit_button_pressed",
    "current_tab_changed",
    "tab"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPELayerMappingWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    0,   70,    2, 0x06,    3 /* Public */,
       5,    1,   71,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    0,   77,    2, 0x08,    9 /* Private */,
      11,    1,   78,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::LayerMappingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPELayerMappingWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LayerMappingWidget, std::true_type>,
        // method 'layerListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'layerItemDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'layerItemAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enable_all_layers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_tab_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void lay::LayerMappingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerMappingWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layerListChanged(); break;
        case 1: _t->layerItemDeleted(); break;
        case 2: _t->layerItemAdded(); break;
        case 3: _t->enable_all_layers((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->load_button_pressed(); break;
        case 5: _t->add_button_pressed(); break;
        case 6: _t->delete_button_pressed(); break;
        case 7: _t->edit_button_pressed(); break;
        case 8: _t->current_tab_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerMappingWidget::*)();
            if (_t _q_method = &LayerMappingWidget::layerListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayerMappingWidget::*)();
            if (_t _q_method = &LayerMappingWidget::layerItemDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LayerMappingWidget::*)();
            if (_t _q_method = &LayerMappingWidget::layerItemAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LayerMappingWidget::*)(bool );
            if (_t _q_method = &LayerMappingWidget::enable_all_layers; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *lay::LayerMappingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::LayerMappingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPELayerMappingWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::LayerMappingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void lay::LayerMappingWidget::layerListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lay::LayerMappingWidget::layerItemDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lay::LayerMappingWidget::layerItemAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lay::LayerMappingWidget::enable_all_layers(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
