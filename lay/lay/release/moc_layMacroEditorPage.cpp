/****************************************************************************
** Meta object code from reading C++ file 'layMacroEditorPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/lay/lay/layMacroEditorPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layMacroEditorPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorExecutionModel",
    "breakpoints_changed",
    "",
    "current_line_changed",
    "run_mode_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[31];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "lay::MacroEditorExecutionModel"
        QT_MOC_LITERAL(31, 19),  // "breakpoints_changed"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 20),  // "current_line_changed"
        QT_MOC_LITERAL(73, 16)   // "run_mode_changed"
    },
    "lay::MacroEditorExecutionModel",
    "breakpoints_changed",
    "",
    "current_line_changed",
    "run_mode_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,
       4,    0,   34,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorExecutionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorExecutionModel, std::true_type>,
        // method 'breakpoints_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_line_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'run_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorExecutionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorExecutionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->breakpoints_changed(); break;
        case 1: _t->current_line_changed(); break;
        case 2: _t->run_mode_changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MacroEditorExecutionModel::*)();
            if (_t _q_method = &MacroEditorExecutionModel::breakpoints_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MacroEditorExecutionModel::*)();
            if (_t _q_method = &MacroEditorExecutionModel::current_line_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MacroEditorExecutionModel::*)();
            if (_t _q_method = &MacroEditorExecutionModel::run_mode_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *lay::MacroEditorExecutionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorExecutionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorExecutionModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lay::MacroEditorExecutionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void lay::MacroEditorExecutionModel::breakpoints_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lay::MacroEditorExecutionModel::current_line_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lay::MacroEditorExecutionModel::run_mode_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorTextWidget",
    "contentsChanged",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[27];
    char stringdata1[16];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "lay::MacroEditorTextWidget"
        QT_MOC_LITERAL(27, 15),  // "contentsChanged"
        QT_MOC_LITERAL(43, 0)   // ""
    },
    "lay::MacroEditorTextWidget",
    "contentsChanged",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorTextWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TextEditWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorTextWidget, std::true_type>,
        // method 'contentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorTextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorTextWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MacroEditorTextWidget::*)();
            if (_t _q_method = &MacroEditorTextWidget::contentsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *lay::MacroEditorTextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorTextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorTextWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TextEditWidget::qt_metacast(_clname);
}

int lay::MacroEditorTextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextEditWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void lay::MacroEditorTextWidget::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorSidePanel",
    "redraw",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[26];
    char stringdata1[7];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "lay::MacroEditorSidePanel"
        QT_MOC_LITERAL(26, 6),  // "redraw"
        QT_MOC_LITERAL(33, 0)   // ""
    },
    "lay::MacroEditorSidePanel",
    "redraw",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorSidePanelENDCLASS[] = {

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
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorSidePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorSidePanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorSidePanel, std::true_type>,
        // method 'redraw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorSidePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorSidePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->redraw(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::MacroEditorSidePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorSidePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorSidePanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lay::MacroEditorSidePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorNotificationWidget",
    "action_triggered",
    "",
    "close_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[35];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 34),  // "lay::MacroEditorNotificationW..."
        QT_MOC_LITERAL(35, 16),  // "action_triggered"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 15)   // "close_triggered"
    },
    "lay::MacroEditorNotificationWidget",
    "action_triggered",
    "",
    "close_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorNotificationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorNotificationWidget, std::true_type>,
        // method 'action_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorNotificationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorNotificationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->action_triggered(); break;
        case 1: _t->close_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *lay::MacroEditorNotificationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorNotificationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorNotificationWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int lay::MacroEditorNotificationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS = QtMocHelpers::stringData(
    "lay::MacroEditorPage",
    "help_requested",
    "",
    "s",
    "search_requested",
    "backward",
    "edit_trace",
    "close_requested",
    "commit",
    "update",
    "text_changed",
    "cursor_position_changed",
    "breakpoints_changed",
    "current_line_changed",
    "run_mode_changed",
    "completer_timer",
    "hide_completer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[11];
    char stringdata7[16];
    char stringdata8[7];
    char stringdata9[7];
    char stringdata10[13];
    char stringdata11[24];
    char stringdata12[20];
    char stringdata13[21];
    char stringdata14[17];
    char stringdata15[16];
    char stringdata16[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "lay::MacroEditorPage"
        QT_MOC_LITERAL(21, 14),  // "help_requested"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 1),  // "s"
        QT_MOC_LITERAL(39, 16),  // "search_requested"
        QT_MOC_LITERAL(56, 8),  // "backward"
        QT_MOC_LITERAL(65, 10),  // "edit_trace"
        QT_MOC_LITERAL(76, 15),  // "close_requested"
        QT_MOC_LITERAL(92, 6),  // "commit"
        QT_MOC_LITERAL(99, 6),  // "update"
        QT_MOC_LITERAL(106, 12),  // "text_changed"
        QT_MOC_LITERAL(119, 23),  // "cursor_position_changed"
        QT_MOC_LITERAL(143, 19),  // "breakpoints_changed"
        QT_MOC_LITERAL(163, 20),  // "current_line_changed"
        QT_MOC_LITERAL(184, 16),  // "run_mode_changed"
        QT_MOC_LITERAL(201, 15),  // "completer_timer"
        QT_MOC_LITERAL(217, 14)   // "hide_completer"
    },
    "lay::MacroEditorPage",
    "help_requested",
    "",
    "s",
    "search_requested",
    "backward",
    "edit_trace",
    "close_requested",
    "commit",
    "update",
    "text_changed",
    "cursor_position_changed",
    "breakpoints_changed",
    "current_line_changed",
    "run_mode_changed",
    "completer_timer",
    "hide_completer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEMacroEditorPageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       4,    2,   95,    2, 0x06,    3 /* Public */,
       6,    1,  100,    2, 0x06,    6 /* Public */,
       7,    0,  103,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  104,    2, 0x0a,    9 /* Public */,
       9,    0,  105,    2, 0x0a,   10 /* Public */,
      10,    0,  106,    2, 0x09,   11 /* Protected */,
      11,    0,  107,    2, 0x09,   12 /* Protected */,
      12,    0,  108,    2, 0x09,   13 /* Protected */,
      13,    0,  109,    2, 0x09,   14 /* Protected */,
      14,    0,  110,    2, 0x09,   15 /* Protected */,
      15,    0,  111,    2, 0x09,   16 /* Protected */,
      16,    0,  112,    2, 0x09,   17 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::MacroEditorPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEMacroEditorPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MacroEditorPage, std::true_type>,
        // method 'help_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'search_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'edit_trace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'close_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursor_position_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'breakpoints_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'current_line_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'run_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'completer_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_completer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::MacroEditorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->help_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->search_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->edit_trace((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->close_requested(); break;
        case 4: _t->commit(); break;
        case 5: _t->update(); break;
        case 6: _t->text_changed(); break;
        case 7: _t->cursor_position_changed(); break;
        case 8: _t->breakpoints_changed(); break;
        case 9: _t->current_line_changed(); break;
        case 10: _t->run_mode_changed(); break;
        case 11: _t->completer_timer(); break;
        case 12: _t->hide_completer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MacroEditorPage::*)(const QString & );
            if (_t _q_method = &MacroEditorPage::help_requested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MacroEditorPage::*)(const QString & , bool );
            if (_t _q_method = &MacroEditorPage::search_requested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MacroEditorPage::*)(bool );
            if (_t _q_method = &MacroEditorPage::edit_trace; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MacroEditorPage::*)();
            if (_t _q_method = &MacroEditorPage::close_requested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *lay::MacroEditorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::MacroEditorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEMacroEditorPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lay::MacroEditorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void lay::MacroEditorPage::help_requested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::MacroEditorPage::search_requested(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void lay::MacroEditorPage::edit_trace(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void lay::MacroEditorPage::close_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
