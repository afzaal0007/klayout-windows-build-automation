/********************************************************************************
** Form generated from reading UI file 'NetlistBrowserPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETLISTBROWSERPAGE_H
#define UI_NETLISTBROWSERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_NetlistBrowserPage
{
public:
    QAction *actionUseRegularExpressions;
    QAction *actionCaseSensitive;
    QAction *actionExportAll;
    QAction *actionExportSelected;
    QAction *actionUnselectAll;
    QHBoxLayout *hboxLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *backward;
    QToolButton *forward;
    QToolButton *info_button;
    QToolButton *rerun_button;
    QSpacerItem *horizontalSpacer;
    lay::DecoratedLineEdit *find_text;
    QToolButton *find_button;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *mode_tab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTreeView *nl_hierarchy_tree;
    QTreeView *nl_directory_tree;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter_3;
    QTreeView *sch_hierarchy_tree;
    QTreeView *sch_directory_tree;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QSplitter *splitter_4;
    QTreeView *xref_hierarchy_tree;
    QTreeView *xref_directory_tree;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QTreeView *log_view;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *info_label;

    void setupUi(QFrame *NetlistBrowserPage)
    {
        if (NetlistBrowserPage->objectName().isEmpty())
            NetlistBrowserPage->setObjectName("NetlistBrowserPage");
        NetlistBrowserPage->resize(650, 570);
        actionUseRegularExpressions = new QAction(NetlistBrowserPage);
        actionUseRegularExpressions->setObjectName("actionUseRegularExpressions");
        actionUseRegularExpressions->setCheckable(true);
        actionCaseSensitive = new QAction(NetlistBrowserPage);
        actionCaseSensitive->setObjectName("actionCaseSensitive");
        actionCaseSensitive->setCheckable(true);
        actionExportAll = new QAction(NetlistBrowserPage);
        actionExportAll->setObjectName("actionExportAll");
        actionExportSelected = new QAction(NetlistBrowserPage);
        actionExportSelected->setObjectName("actionExportSelected");
        actionUnselectAll = new QAction(NetlistBrowserPage);
        actionUnselectAll->setObjectName("actionUnselectAll");
        hboxLayout = new QHBoxLayout(NetlistBrowserPage);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(NetlistBrowserPage);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        backward = new QToolButton(frame_4);
        backward->setObjectName("backward");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        backward->setIcon(icon);
        backward->setAutoRaise(true);

        horizontalLayout_3->addWidget(backward);

        forward = new QToolButton(frame_4);
        forward->setObjectName("forward");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/forward_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon1);
        forward->setAutoRaise(true);

        horizontalLayout_3->addWidget(forward);

        info_button = new QToolButton(frame_4);
        info_button->setObjectName("info_button");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/info_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        info_button->setIcon(icon2);
        info_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(info_button);

        rerun_button = new QToolButton(frame_4);
        rerun_button->setObjectName("rerun_button");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/run_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rerun_button->setIcon(icon3);
        rerun_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(rerun_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        find_text = new lay::DecoratedLineEdit(frame_4);
        find_text->setObjectName("find_text");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(find_text->sizePolicy().hasHeightForWidth());
        find_text->setSizePolicy(sizePolicy1);
        find_text->setMinimumSize(QSize(0, 0));
        find_text->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(find_text);

        find_button = new QToolButton(frame_4);
        find_button->setObjectName("find_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/find_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_button->setIcon(icon4);
        find_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(find_button);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_4);

        mode_tab = new QTabWidget(frame);
        mode_tab->setObjectName("mode_tab");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        nl_hierarchy_tree = new QTreeView(splitter);
        nl_hierarchy_tree->setObjectName("nl_hierarchy_tree");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nl_hierarchy_tree->sizePolicy().hasHeightForWidth());
        nl_hierarchy_tree->setSizePolicy(sizePolicy3);
        splitter->addWidget(nl_hierarchy_tree);
        nl_hierarchy_tree->header()->setDefaultSectionSize(100);
        nl_directory_tree = new QTreeView(splitter);
        nl_directory_tree->setObjectName("nl_directory_tree");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(nl_directory_tree->sizePolicy().hasHeightForWidth());
        nl_directory_tree->setSizePolicy(sizePolicy4);
        nl_directory_tree->setBaseSize(QSize(0, 0));
        nl_directory_tree->setContextMenuPolicy(Qt::ActionsContextMenu);
        nl_directory_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        nl_directory_tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        nl_directory_tree->setUniformRowHeights(true);
        nl_directory_tree->setSortingEnabled(true);
        nl_directory_tree->setAllColumnsShowFocus(true);
        splitter->addWidget(nl_directory_tree);
        nl_directory_tree->header()->setVisible(false);
        nl_directory_tree->header()->setCascadingSectionResizes(false);
        nl_directory_tree->header()->setProperty("showSortIndicator", QVariant(false));
        nl_directory_tree->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(splitter);


        verticalLayout_2->addWidget(frame_2);

        mode_tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName("frame_5");
        sizePolicy2.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy2);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(frame_5);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        sch_hierarchy_tree = new QTreeView(splitter_3);
        sch_hierarchy_tree->setObjectName("sch_hierarchy_tree");
        sizePolicy3.setHeightForWidth(sch_hierarchy_tree->sizePolicy().hasHeightForWidth());
        sch_hierarchy_tree->setSizePolicy(sizePolicy3);
        splitter_3->addWidget(sch_hierarchy_tree);
        sch_hierarchy_tree->header()->setDefaultSectionSize(100);
        sch_directory_tree = new QTreeView(splitter_3);
        sch_directory_tree->setObjectName("sch_directory_tree");
        sizePolicy4.setHeightForWidth(sch_directory_tree->sizePolicy().hasHeightForWidth());
        sch_directory_tree->setSizePolicy(sizePolicy4);
        sch_directory_tree->setBaseSize(QSize(0, 0));
        sch_directory_tree->setContextMenuPolicy(Qt::ActionsContextMenu);
        sch_directory_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        sch_directory_tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        sch_directory_tree->setUniformRowHeights(true);
        sch_directory_tree->setSortingEnabled(true);
        sch_directory_tree->setAllColumnsShowFocus(true);
        splitter_3->addWidget(sch_directory_tree);
        sch_directory_tree->header()->setVisible(false);
        sch_directory_tree->header()->setCascadingSectionResizes(false);
        sch_directory_tree->header()->setProperty("showSortIndicator", QVariant(false));
        sch_directory_tree->header()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(splitter_3);


        verticalLayout_3->addWidget(frame_5);

        mode_tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        frame_6 = new QFrame(tab_3);
        frame_6->setObjectName("frame_6");
        sizePolicy2.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy2);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(frame_6);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        xref_hierarchy_tree = new QTreeView(splitter_4);
        xref_hierarchy_tree->setObjectName("xref_hierarchy_tree");
        sizePolicy3.setHeightForWidth(xref_hierarchy_tree->sizePolicy().hasHeightForWidth());
        xref_hierarchy_tree->setSizePolicy(sizePolicy3);
        splitter_4->addWidget(xref_hierarchy_tree);
        xref_hierarchy_tree->header()->setDefaultSectionSize(100);
        xref_directory_tree = new QTreeView(splitter_4);
        xref_directory_tree->setObjectName("xref_directory_tree");
        sizePolicy4.setHeightForWidth(xref_directory_tree->sizePolicy().hasHeightForWidth());
        xref_directory_tree->setSizePolicy(sizePolicy4);
        xref_directory_tree->setBaseSize(QSize(0, 0));
        xref_directory_tree->setContextMenuPolicy(Qt::ActionsContextMenu);
        xref_directory_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        xref_directory_tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        xref_directory_tree->setUniformRowHeights(true);
        xref_directory_tree->setSortingEnabled(true);
        xref_directory_tree->setAllColumnsShowFocus(true);
        splitter_4->addWidget(xref_directory_tree);
        xref_directory_tree->header()->setVisible(false);
        xref_directory_tree->header()->setCascadingSectionResizes(false);
        xref_directory_tree->header()->setProperty("showSortIndicator", QVariant(false));
        xref_directory_tree->header()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(splitter_4);


        verticalLayout_4->addWidget(frame_6);

        mode_tab->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        log_view = new QTreeView(tab_4);
        log_view->setObjectName("log_view");
        log_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        log_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        log_view->setHeaderHidden(true);
        log_view->header()->setVisible(false);

        verticalLayout_5->addWidget(log_view);

        mode_tab->addTab(tab_4, QString());

        verticalLayout->addWidget(mode_tab);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        info_label = new QLabel(frame_3);
        info_label->setObjectName("info_label");

        horizontalLayout_2->addWidget(info_label);


        verticalLayout->addWidget(frame_3);


        hboxLayout->addWidget(frame);

        QWidget::setTabOrder(backward, forward);
        QWidget::setTabOrder(forward, info_button);
        QWidget::setTabOrder(info_button, find_text);
        QWidget::setTabOrder(find_text, find_button);

        retranslateUi(NetlistBrowserPage);

        mode_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NetlistBrowserPage);
    } // setupUi

    void retranslateUi(QFrame *NetlistBrowserPage)
    {
        NetlistBrowserPage->setWindowTitle(QCoreApplication::translate("NetlistBrowserPage", "Form", nullptr));
        actionUseRegularExpressions->setText(QCoreApplication::translate("NetlistBrowserPage", "Use Regular Expressions", nullptr));
        actionCaseSensitive->setText(QCoreApplication::translate("NetlistBrowserPage", "Case Sensitive", nullptr));
        actionExportAll->setText(QCoreApplication::translate("NetlistBrowserPage", "Export All", nullptr));
        actionExportSelected->setText(QCoreApplication::translate("NetlistBrowserPage", "Export Selected Nets", nullptr));
        actionUnselectAll->setText(QCoreApplication::translate("NetlistBrowserPage", "Unselect All", nullptr));
#if QT_CONFIG(shortcut)
        actionUnselectAll->setShortcut(QCoreApplication::translate("NetlistBrowserPage", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        backward->setText(QCoreApplication::translate("NetlistBrowserPage", "...", nullptr));
        forward->setText(QCoreApplication::translate("NetlistBrowserPage", "...", nullptr));
#if QT_CONFIG(tooltip)
        info_button->setToolTip(QCoreApplication::translate("NetlistBrowserPage", "Show more information about nets", nullptr));
#endif // QT_CONFIG(tooltip)
        info_button->setText(QCoreApplication::translate("NetlistBrowserPage", "...", nullptr));
        rerun_button->setText(QCoreApplication::translate("NetlistBrowserPage", "...", nullptr));
#if QT_CONFIG(shortcut)
        rerun_button->setShortcut(QCoreApplication::translate("NetlistBrowserPage", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        find_button->setToolTip(QCoreApplication::translate("NetlistBrowserPage", "Find in netlist", nullptr));
#endif // QT_CONFIG(tooltip)
        find_button->setText(QCoreApplication::translate("NetlistBrowserPage", "...", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab), QCoreApplication::translate("NetlistBrowserPage", "Netlist", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_2), QCoreApplication::translate("NetlistBrowserPage", "Schematic", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_3), QCoreApplication::translate("NetlistBrowserPage", "Cross Reference", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_4), QCoreApplication::translate("NetlistBrowserPage", "Log", nullptr));
        info_label->setText(QCoreApplication::translate("NetlistBrowserPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetlistBrowserPage: public Ui_NetlistBrowserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLISTBROWSERPAGE_H
