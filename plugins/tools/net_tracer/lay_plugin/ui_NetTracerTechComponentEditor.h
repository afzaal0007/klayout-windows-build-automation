/********************************************************************************
** Form generated from reading UI file 'NetTracerTechComponentEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTRACERTECHCOMPONENTEDITOR_H
#define UI_NETTRACERTECHCOMPONENTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layNetTracerConnectivityEditor.h"

QT_BEGIN_NAMESPACE

class Ui_NetTracerTechComponentEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QToolButton *move_down_pb;
    QToolButton *add_pb;
    QFrame *frame_2;
    QTreeWidget *stack_tree;
    QToolButton *del_pb;
    QToolButton *move_up_pb;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QToolButton *clone_pb;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    lay::NetTracerConnectivityEditor *connectivity_editor_widget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NetTracerTechComponentEditor)
    {
        if (NetTracerTechComponentEditor->objectName().isEmpty())
            NetTracerTechComponentEditor->setObjectName("NetTracerTechComponentEditor");
        NetTracerTechComponentEditor->resize(572, 449);
        verticalLayout_2 = new QVBoxLayout(NetTracerTechComponentEditor);
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter = new QSplitter(NetTracerTechComponentEditor);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        frame_5 = new QFrame(splitter);
        frame_5->setObjectName("frame_5");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        move_down_pb = new QToolButton(frame_5);
        move_down_pb->setObjectName("move_down_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_down_pb->setIcon(icon);

        gridLayout->addWidget(move_down_pb, 4, 5, 1, 1);

        add_pb = new QToolButton(frame_5);
        add_pb->setObjectName("add_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pb->setIcon(icon1);

        gridLayout->addWidget(add_pb, 4, 0, 1, 2);

        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 2, 1, 1, 6);

        stack_tree = new QTreeWidget(frame_5);
        stack_tree->setObjectName("stack_tree");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(stack_tree->sizePolicy().hasHeightForWidth());
        stack_tree->setSizePolicy(sizePolicy1);
        stack_tree->setContextMenuPolicy(Qt::ActionsContextMenu);
        stack_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        stack_tree->setRootIsDecorated(false);
        stack_tree->setAllColumnsShowFocus(true);

        gridLayout->addWidget(stack_tree, 1, 0, 2, 7);

        del_pb = new QToolButton(frame_5);
        del_pb->setObjectName("del_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/del_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_pb->setIcon(icon2);

        gridLayout->addWidget(del_pb, 4, 3, 1, 1);

        move_up_pb = new QToolButton(frame_5);
        move_up_pb->setObjectName("move_up_pb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_up_pb->setIcon(icon3);

        gridLayout->addWidget(move_up_pb, 4, 4, 1, 1);

        label = new QLabel(frame_5);
        label->setObjectName("label");
        QFont font;
        font.setItalic(true);
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 7);

        horizontalSpacer = new QSpacerItem(157, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 6, 1, 1);

        label_2 = new QLabel(frame_5);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 7);

        clone_pb = new QToolButton(frame_5);
        clone_pb->setObjectName("clone_pb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/clone_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        clone_pb->setIcon(icon4);

        gridLayout->addWidget(clone_pb, 4, 2, 1, 1);

        splitter->addWidget(frame_5);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        connectivity_editor_widget = new lay::NetTracerConnectivityEditor(frame);
        connectivity_editor_widget->setObjectName("connectivity_editor_widget");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(connectivity_editor_widget->sizePolicy().hasHeightForWidth());
        connectivity_editor_widget->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(connectivity_editor_widget);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(frame);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(NetTracerTechComponentEditor);

        QMetaObject::connectSlotsByName(NetTracerTechComponentEditor);
    } // setupUi

    void retranslateUi(QWidget *NetTracerTechComponentEditor)
    {
        NetTracerTechComponentEditor->setWindowTitle(QCoreApplication::translate("NetTracerTechComponentEditor", "Form", nullptr));
#if QT_CONFIG(tooltip)
        move_down_pb->setToolTip(QCoreApplication::translate("NetTracerTechComponentEditor", "Move selected stacks up", nullptr));
#endif // QT_CONFIG(tooltip)
        move_down_pb->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        add_pb->setToolTip(QCoreApplication::translate("NetTracerTechComponentEditor", "Add new stack", nullptr));
#endif // QT_CONFIG(tooltip)
        add_pb->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        add_pb->setShortcut(QCoreApplication::translate("NetTracerTechComponentEditor", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        QTreeWidgetItem *___qtreewidgetitem = stack_tree->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("NetTracerTechComponentEditor", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("NetTracerTechComponentEditor", "Name", nullptr));
#if QT_CONFIG(tooltip)
        del_pb->setToolTip(QCoreApplication::translate("NetTracerTechComponentEditor", "Remove selected stacks", nullptr));
#endif // QT_CONFIG(tooltip)
        del_pb->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "...", nullptr));
#if QT_CONFIG(shortcut)
        del_pb->setShortcut(QCoreApplication::translate("NetTracerTechComponentEditor", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        move_up_pb->setToolTip(QCoreApplication::translate("NetTracerTechComponentEditor", "Move selected stacks down", nullptr));
#endif // QT_CONFIG(tooltip)
        move_up_pb->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "...", nullptr));
        label->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "Double-click to edit text", nullptr));
        label_2->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "Technology Stacks", nullptr));
#if QT_CONFIG(tooltip)
        clone_pb->setToolTip(QCoreApplication::translate("NetTracerTechComponentEditor", "Clone current stack", nullptr));
#endif // QT_CONFIG(tooltip)
        clone_pb->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "...", nullptr));
        label_3->setText(QCoreApplication::translate("NetTracerTechComponentEditor", "Connectivity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetTracerTechComponentEditor: public Ui_NetTracerTechComponentEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTRACERTECHCOMPONENTEDITOR_H
