/********************************************************************************
** Form generated from reading UI file 'NetTracerConnectivityEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTRACERCONNECTIVITYEDITOR_H
#define UI_NETTRACERCONNECTIVITYEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetTracerConnectivityEditor
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QFrame *frame_6;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLabel *help_label;
    QSpacerItem *spacerItem;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QToolButton *move_conductor_down_pb;
    QToolButton *del_conductor_pb;
    QTableWidget *connectivity_table;
    QToolButton *add_conductor_pb;
    QSpacerItem *spacerItem1;
    QToolButton *move_conductor_up_pb;
    QFrame *frame_4;
    QVBoxLayout *vboxLayout2;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout1;
    QLabel *symbol_help_label;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QToolButton *move_symbol_down_pb;
    QToolButton *del_symbol_pb;
    QTableWidget *symbol_table;
    QToolButton *add_symbol_pb;
    QSpacerItem *spacerItem3;
    QToolButton *move_symbol_up_pb;

    void setupUi(QWidget *NetTracerConnectivityEditor)
    {
        if (NetTracerConnectivityEditor->objectName().isEmpty())
            NetTracerConnectivityEditor->setObjectName("NetTracerConnectivityEditor");
        NetTracerConnectivityEditor->resize(572, 449);
        vboxLayout = new QVBoxLayout(NetTracerConnectivityEditor);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        splitter = new QSplitter(NetTracerConnectivityEditor);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        frame_6 = new QFrame(splitter);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_6);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        frame_2 = new QFrame(frame_6);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        help_label = new QLabel(frame_2);
        help_label->setObjectName("help_label");

        hboxLayout->addWidget(help_label);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addWidget(frame_2);

        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        move_conductor_down_pb = new QToolButton(frame_5);
        move_conductor_down_pb->setObjectName("move_conductor_down_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_conductor_down_pb->setIcon(icon);

        gridLayout->addWidget(move_conductor_down_pb, 3, 1, 1, 1);

        del_conductor_pb = new QToolButton(frame_5);
        del_conductor_pb->setObjectName("del_conductor_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/del_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_conductor_pb->setIcon(icon1);

        gridLayout->addWidget(del_conductor_pb, 1, 1, 1, 1);

        connectivity_table = new QTableWidget(frame_5);
        if (connectivity_table->columnCount() < 3)
            connectivity_table->setColumnCount(3);
        connectivity_table->setObjectName("connectivity_table");
        connectivity_table->setEditTriggers(QAbstractItemView::AllEditTriggers);
        connectivity_table->setAlternatingRowColors(true);
        connectivity_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        connectivity_table->setColumnCount(3);

        gridLayout->addWidget(connectivity_table, 0, 0, 5, 1);

        add_conductor_pb = new QToolButton(frame_5);
        add_conductor_pb->setObjectName("add_conductor_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_conductor_pb->setIcon(icon2);

        gridLayout->addWidget(add_conductor_pb, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 1, 1, 1);

        move_conductor_up_pb = new QToolButton(frame_5);
        move_conductor_up_pb->setObjectName("move_conductor_up_pb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_conductor_up_pb->setIcon(icon3);

        gridLayout->addWidget(move_conductor_up_pb, 2, 1, 1, 1);


        vboxLayout1->addWidget(frame_5);

        splitter->addWidget(frame_6);
        frame_4 = new QFrame(splitter);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame_4);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_3);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        symbol_help_label = new QLabel(frame_3);
        symbol_help_label->setObjectName("symbol_help_label");

        hboxLayout1->addWidget(symbol_help_label);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        vboxLayout2->addWidget(frame_3);

        frame = new QFrame(frame_4);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName("gridLayout1");
        move_symbol_down_pb = new QToolButton(frame);
        move_symbol_down_pb->setObjectName("move_symbol_down_pb");
        move_symbol_down_pb->setIcon(icon);

        gridLayout1->addWidget(move_symbol_down_pb, 3, 1, 1, 1);

        del_symbol_pb = new QToolButton(frame);
        del_symbol_pb->setObjectName("del_symbol_pb");
        del_symbol_pb->setIcon(icon1);

        gridLayout1->addWidget(del_symbol_pb, 1, 1, 1, 1);

        symbol_table = new QTableWidget(frame);
        if (symbol_table->columnCount() < 2)
            symbol_table->setColumnCount(2);
        symbol_table->setObjectName("symbol_table");
        symbol_table->setEditTriggers(QAbstractItemView::AllEditTriggers);
        symbol_table->setAlternatingRowColors(true);
        symbol_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        symbol_table->setColumnCount(2);

        gridLayout1->addWidget(symbol_table, 0, 0, 5, 1);

        add_symbol_pb = new QToolButton(frame);
        add_symbol_pb->setObjectName("add_symbol_pb");
        add_symbol_pb->setIcon(icon2);

        gridLayout1->addWidget(add_symbol_pb, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem3, 4, 1, 1, 1);

        move_symbol_up_pb = new QToolButton(frame);
        move_symbol_up_pb->setObjectName("move_symbol_up_pb");
        move_symbol_up_pb->setIcon(icon3);

        gridLayout1->addWidget(move_symbol_up_pb, 2, 1, 1, 1);


        vboxLayout2->addWidget(frame);

        splitter->addWidget(frame_4);

        vboxLayout->addWidget(splitter);


        retranslateUi(NetTracerConnectivityEditor);

        QMetaObject::connectSlotsByName(NetTracerConnectivityEditor);
    } // setupUi

    void retranslateUi(QWidget *NetTracerConnectivityEditor)
    {
        NetTracerConnectivityEditor->setWindowTitle(QCoreApplication::translate("NetTracerConnectivityEditor", "Form", nullptr));
        help_label->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "<html>Connectivity (<a href=\"int:/about/connectivity.xml\">See here for details</a>)</html>", nullptr));
        move_conductor_down_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
        del_conductor_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        del_conductor_pb->setShortcut(QCoreApplication::translate("NetTracerConnectivityEditor", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        add_conductor_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        add_conductor_pb->setShortcut(QCoreApplication::translate("NetTracerConnectivityEditor", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        move_conductor_up_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
        symbol_help_label->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "<html>Computed and symbolic layers (<a href=\"int:/about/symbolic_layers.xml\">See here for details</a>)</html>", nullptr));
        move_symbol_down_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
        del_symbol_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        del_symbol_pb->setShortcut(QCoreApplication::translate("NetTracerConnectivityEditor", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        add_symbol_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        add_symbol_pb->setShortcut(QCoreApplication::translate("NetTracerConnectivityEditor", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        move_symbol_up_pb->setText(QCoreApplication::translate("NetTracerConnectivityEditor", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetTracerConnectivityEditor: public Ui_NetTracerConnectivityEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTRACERCONNECTIVITYEDITOR_H
