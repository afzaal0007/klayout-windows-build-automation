/****************************************************************************
** Meta object code from reading C++ file 'layBrowserPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/layui/layui/layBrowserPanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layBrowserPanel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS = QtMocHelpers::stringData(
    "lay::BrowserPanel",
    "title_changed",
    "",
    "t",
    "url_changed",
    "back",
    "forward",
    "prev",
    "next",
    "home",
    "find",
    "bookmark",
    "page_search_edited",
    "page_search_next",
    "search_text_changed",
    "text",
    "search_edited",
    "source_changed",
    "anchor_clicked",
    "url",
    "new_url",
    "outline_item_clicked",
    "QTreeWidgetItem*",
    "item",
    "bookmark_item_selected",
    "delete_bookmark"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[12];
    char stringdata5[5];
    char stringdata6[8];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[5];
    char stringdata11[9];
    char stringdata12[19];
    char stringdata13[17];
    char stringdata14[20];
    char stringdata15[5];
    char stringdata16[14];
    char stringdata17[15];
    char stringdata18[15];
    char stringdata19[4];
    char stringdata20[8];
    char stringdata21[21];
    char stringdata22[17];
    char stringdata23[5];
    char stringdata24[23];
    char stringdata25[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS_t qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "lay::BrowserPanel"
        QT_MOC_LITERAL(18, 13),  // "title_changed"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 1),  // "t"
        QT_MOC_LITERAL(35, 11),  // "url_changed"
        QT_MOC_LITERAL(47, 4),  // "back"
        QT_MOC_LITERAL(52, 7),  // "forward"
        QT_MOC_LITERAL(60, 4),  // "prev"
        QT_MOC_LITERAL(65, 4),  // "next"
        QT_MOC_LITERAL(70, 4),  // "home"
        QT_MOC_LITERAL(75, 4),  // "find"
        QT_MOC_LITERAL(80, 8),  // "bookmark"
        QT_MOC_LITERAL(89, 18),  // "page_search_edited"
        QT_MOC_LITERAL(108, 16),  // "page_search_next"
        QT_MOC_LITERAL(125, 19),  // "search_text_changed"
        QT_MOC_LITERAL(145, 4),  // "text"
        QT_MOC_LITERAL(150, 13),  // "search_edited"
        QT_MOC_LITERAL(164, 14),  // "source_changed"
        QT_MOC_LITERAL(179, 14),  // "anchor_clicked"
        QT_MOC_LITERAL(194, 3),  // "url"
        QT_MOC_LITERAL(198, 7),  // "new_url"
        QT_MOC_LITERAL(206, 20),  // "outline_item_clicked"
        QT_MOC_LITERAL(227, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(244, 4),  // "item"
        QT_MOC_LITERAL(249, 22),  // "bookmark_item_selected"
        QT_MOC_LITERAL(272, 15)   // "delete_bookmark"
    },
    "lay::BrowserPanel",
    "title_changed",
    "",
    "t",
    "url_changed",
    "back",
    "forward",
    "prev",
    "next",
    "home",
    "find",
    "bookmark",
    "page_search_edited",
    "page_search_next",
    "search_text_changed",
    "text",
    "search_edited",
    "source_changed",
    "anchor_clicked",
    "url",
    "new_url",
    "outline_item_clicked",
    "QTreeWidgetItem*",
    "item",
    "bookmark_item_selected",
    "delete_bookmark"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlaySCOPEBrowserPanelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,
       4,    1,  131,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  134,    2, 0x0a,    5 /* Public */,
       6,    0,  135,    2, 0x0a,    6 /* Public */,
       7,    0,  136,    2, 0x0a,    7 /* Public */,
       8,    0,  137,    2, 0x0a,    8 /* Public */,
       9,    0,  138,    2, 0x0a,    9 /* Public */,
      10,    0,  139,    2, 0x0a,   10 /* Public */,
      11,    0,  140,    2, 0x0a,   11 /* Public */,
      12,    0,  141,    2, 0x09,   12 /* Protected */,
      13,    0,  142,    2, 0x09,   13 /* Protected */,
      14,    1,  143,    2, 0x09,   14 /* Protected */,
      16,    0,  146,    2, 0x09,   16 /* Protected */,
      17,    0,  147,    2, 0x09,   17 /* Protected */,
      18,    1,  148,    2, 0x09,   18 /* Protected */,
      20,    0,  151,    2, 0x09,   20 /* Protected */,
      21,    1,  152,    2, 0x09,   21 /* Protected */,
      24,    1,  155,    2, 0x09,   23 /* Protected */,
      25,    0,  158,    2, 0x09,   25 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

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
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject lay::BrowserPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlaySCOPEBrowserPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowserPanel, std::true_type>,
        // method 'title_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'url_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'home'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'find'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bookmark'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'page_search_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'page_search_next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'search_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'source_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'anchor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'new_url'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outline_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'bookmark_item_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'delete_bookmark'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void lay::BrowserPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->title_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->url_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->back(); break;
        case 3: _t->forward(); break;
        case 4: _t->prev(); break;
        case 5: _t->next(); break;
        case 6: _t->home(); break;
        case 7: _t->find(); break;
        case 8: _t->bookmark(); break;
        case 9: _t->page_search_edited(); break;
        case 10: _t->page_search_next(); break;
        case 11: _t->search_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->search_edited(); break;
        case 13: _t->source_changed(); break;
        case 14: _t->anchor_clicked((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 15: _t->new_url(); break;
        case 16: _t->outline_item_clicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 17: _t->bookmark_item_selected((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 18: _t->delete_bookmark(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowserPanel::*)(const QString & );
            if (_t _q_method = &BrowserPanel::title_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BrowserPanel::*)(const QString & );
            if (_t _q_method = &BrowserPanel::url_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *lay::BrowserPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lay::BrowserPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlaySCOPEBrowserPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lay::BrowserPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void lay::BrowserPanel::title_changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void lay::BrowserPanel::url_changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
