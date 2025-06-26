/********************************************************************************
** Form generated from reading UI file 'SaltManagerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALTMANAGERDIALOG_H
#define UI_SALTMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "laySaltGrainDetailsTextWidget.h"
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_SaltManagerDialog
{
public:
    QAction *actionNew;
    QAction *actionDelete;
    QAction *actionUnmarkAllNew;
    QAction *actionShowMarkedOnlyNew;
    QAction *actionRefresh;
    QAction *actionShowMarkedOnlyUpdate;
    QAction *actionUnmarkAllUpdate;
    QAction *actionMarkNew;
    QAction *actionUnmarkNew;
    QAction *actionMarkForUpdate;
    QAction *actionUnmarkForUpdate;
    QAction *actionCreatePackage;
    QAction *actionMarkAllUpdate;
    QAction *actionMarkAllNew;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *mode_tab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QSplitter *splitter_new;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mark_new_button;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    lay::DecoratedLineEdit *search_new_edit;
    QFrame *frame;
    QVBoxLayout *verticalLayout_8;
    QListView *salt_mine_view_new;
    QFrame *details_new_frame;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QCheckBox *detailed_view;
    QToolButton *toolButton;
    lay::SaltGrainDetailsTextWidget *details_new_text;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *apply_new_button;
    QLabel *apply_label_new;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_update;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *mark_update_button;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    lay::DecoratedLineEdit *search_update_edit;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_12;
    QListView *salt_mine_view_update;
    QFrame *details_update_frame;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QCheckBox *detailed_view2;
    QToolButton *toolButton_2;
    lay::SaltGrainDetailsTextWidget *details_update_text;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *apply_update_button;
    QLabel *apply_label_update;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    lay::DecoratedLineEdit *search_installed_edit;
    QStackedWidget *list_stack;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QListView *salt_view;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *details_frame;
    QGridLayout *gridLayout;
    lay::SaltGrainDetailsTextWidget *details_text;
    QLabel *label;
    QToolButton *edit_button;
    QCheckBox *detailed_view3;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *delete_button;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *create_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaltManagerDialog)
    {
        if (SaltManagerDialog->objectName().isEmpty())
            SaltManagerDialog->setObjectName("SaltManagerDialog");
        SaltManagerDialog->resize(692, 440);
        actionNew = new QAction(SaltManagerDialog);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionDelete = new QAction(SaltManagerDialog);
        actionDelete->setObjectName("actionDelete");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon1);
        actionUnmarkAllNew = new QAction(SaltManagerDialog);
        actionUnmarkAllNew->setObjectName("actionUnmarkAllNew");
        actionShowMarkedOnlyNew = new QAction(SaltManagerDialog);
        actionShowMarkedOnlyNew->setObjectName("actionShowMarkedOnlyNew");
        actionRefresh = new QAction(SaltManagerDialog);
        actionRefresh->setObjectName("actionRefresh");
        actionShowMarkedOnlyUpdate = new QAction(SaltManagerDialog);
        actionShowMarkedOnlyUpdate->setObjectName("actionShowMarkedOnlyUpdate");
        actionUnmarkAllUpdate = new QAction(SaltManagerDialog);
        actionUnmarkAllUpdate->setObjectName("actionUnmarkAllUpdate");
        actionMarkNew = new QAction(SaltManagerDialog);
        actionMarkNew->setObjectName("actionMarkNew");
        actionUnmarkNew = new QAction(SaltManagerDialog);
        actionUnmarkNew->setObjectName("actionUnmarkNew");
        actionMarkForUpdate = new QAction(SaltManagerDialog);
        actionMarkForUpdate->setObjectName("actionMarkForUpdate");
        actionUnmarkForUpdate = new QAction(SaltManagerDialog);
        actionUnmarkForUpdate->setObjectName("actionUnmarkForUpdate");
        actionCreatePackage = new QAction(SaltManagerDialog);
        actionCreatePackage->setObjectName("actionCreatePackage");
        actionCreatePackage->setIcon(icon);
        actionMarkAllUpdate = new QAction(SaltManagerDialog);
        actionMarkAllUpdate->setObjectName("actionMarkAllUpdate");
        actionMarkAllNew = new QAction(SaltManagerDialog);
        actionMarkAllNew->setObjectName("actionMarkAllNew");
        verticalLayout_2 = new QVBoxLayout(SaltManagerDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        mode_tab = new QTabWidget(SaltManagerDialog);
        mode_tab->setObjectName("mode_tab");
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        splitter_new = new QSplitter(tab_2);
        splitter_new->setObjectName("splitter_new");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(splitter_new->sizePolicy().hasHeightForWidth());
        splitter_new->setSizePolicy(sizePolicy);
        splitter_new->setOrientation(Qt::Horizontal);
        splitter_new->setChildrenCollapsible(false);
        layoutWidget_2 = new QWidget(splitter_new);
        layoutWidget_2->setObjectName("layoutWidget_2");
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 4, 0);
        frame_5 = new QFrame(layoutWidget_2);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mark_new_button = new QToolButton(frame_5);
        mark_new_button->setObjectName("mark_new_button");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/marked_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        mark_new_button->setIcon(icon2);
        mark_new_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(mark_new_button);

        horizontalSpacer_3 = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/find_16px@2x.png")));

        horizontalLayout_3->addWidget(label_5);

        search_new_edit = new lay::DecoratedLineEdit(frame_5);
        search_new_edit->setObjectName("search_new_edit");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search_new_edit->sizePolicy().hasHeightForWidth());
        search_new_edit->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(search_new_edit);


        verticalLayout_7->addWidget(frame_5);

        frame = new QFrame(layoutWidget_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        salt_mine_view_new = new QListView(frame);
        salt_mine_view_new->setObjectName("salt_mine_view_new");
        salt_mine_view_new->setFocusPolicy(Qt::WheelFocus);
        salt_mine_view_new->setAlternatingRowColors(true);
        salt_mine_view_new->setSelectionMode(QAbstractItemView::ExtendedSelection);
        salt_mine_view_new->setIconSize(QSize(64, 64));
        salt_mine_view_new->setSelectionRectVisible(false);

        verticalLayout_8->addWidget(salt_mine_view_new);


        verticalLayout_7->addWidget(frame);

        splitter_new->addWidget(layoutWidget_2);
        details_new_frame = new QFrame(splitter_new);
        details_new_frame->setObjectName("details_new_frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(details_new_frame->sizePolicy().hasHeightForWidth());
        details_new_frame->setSizePolicy(sizePolicy2);
        details_new_frame->setFrameShape(QFrame::NoFrame);
        details_new_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(details_new_frame);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(4, 0, 0, 0);
        frame_4 = new QFrame(details_new_frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        detailed_view = new QCheckBox(frame_4);
        detailed_view->setObjectName("detailed_view");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(detailed_view->sizePolicy().hasHeightForWidth());
        detailed_view->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(detailed_view);

        toolButton = new QToolButton(frame_4);
        toolButton->setObjectName("toolButton");
        toolButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/empty_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon3);
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout_10->addWidget(frame_4);

        details_new_text = new lay::SaltGrainDetailsTextWidget(details_new_frame);
        details_new_text->setObjectName("details_new_text");
        details_new_text->setOpenExternalLinks(true);

        verticalLayout_10->addWidget(details_new_text);

        splitter_new->addWidget(details_new_frame);

        verticalLayout_9->addWidget(splitter_new);

        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        apply_new_button = new QPushButton(frame_6);
        apply_new_button->setObjectName("apply_new_button");
        apply_new_button->setAutoDefault(false);
        apply_new_button->setFlat(false);

        horizontalLayout_4->addWidget(apply_new_button);

        apply_label_new = new QLabel(frame_6);
        apply_label_new->setObjectName("apply_label_new");

        horizontalLayout_4->addWidget(apply_label_new);

        horizontalSpacer_2 = new QSpacerItem(563, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_9->addWidget(frame_6);

        mode_tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_14 = new QVBoxLayout(tab_3);
        verticalLayout_14->setObjectName("verticalLayout_14");
        splitter_update = new QSplitter(tab_3);
        splitter_update->setObjectName("splitter_update");
        sizePolicy.setHeightForWidth(splitter_update->sizePolicy().hasHeightForWidth());
        splitter_update->setSizePolicy(sizePolicy);
        splitter_update->setOrientation(Qt::Horizontal);
        splitter_update->setChildrenCollapsible(false);
        layoutWidget_3 = new QWidget(splitter_update);
        layoutWidget_3->setObjectName("layoutWidget_3");
        verticalLayout_11 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 4, 0);
        frame_7 = new QFrame(layoutWidget_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mark_update_button = new QToolButton(frame_7);
        mark_update_button->setObjectName("mark_update_button");
        mark_update_button->setIcon(icon2);
        mark_update_button->setAutoRaise(true);

        horizontalLayout_5->addWidget(mark_update_button);

        horizontalSpacer_4 = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_8 = new QLabel(frame_7);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/find_16px@2x.png")));

        horizontalLayout_5->addWidget(label_8);

        search_update_edit = new lay::DecoratedLineEdit(frame_7);
        search_update_edit->setObjectName("search_update_edit");
        sizePolicy1.setHeightForWidth(search_update_edit->sizePolicy().hasHeightForWidth());
        search_update_edit->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(search_update_edit);


        verticalLayout_11->addWidget(frame_7);

        frame_8 = new QFrame(layoutWidget_3);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_8);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        salt_mine_view_update = new QListView(frame_8);
        salt_mine_view_update->setObjectName("salt_mine_view_update");
        salt_mine_view_update->setFocusPolicy(Qt::WheelFocus);
        salt_mine_view_update->setAlternatingRowColors(true);
        salt_mine_view_update->setSelectionMode(QAbstractItemView::ExtendedSelection);
        salt_mine_view_update->setIconSize(QSize(64, 64));
        salt_mine_view_update->setSelectionRectVisible(false);

        verticalLayout_12->addWidget(salt_mine_view_update);


        verticalLayout_11->addWidget(frame_8);

        splitter_update->addWidget(layoutWidget_3);
        details_update_frame = new QFrame(splitter_update);
        details_update_frame->setObjectName("details_update_frame");
        sizePolicy2.setHeightForWidth(details_update_frame->sizePolicy().hasHeightForWidth());
        details_update_frame->setSizePolicy(sizePolicy2);
        details_update_frame->setFrameShape(QFrame::NoFrame);
        details_update_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(details_update_frame);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(4, 0, 0, 0);
        frame_9 = new QFrame(details_update_frame);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_9);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setFont(font);

        horizontalLayout_6->addWidget(label_9);

        detailed_view2 = new QCheckBox(frame_9);
        detailed_view2->setObjectName("detailed_view2");

        horizontalLayout_6->addWidget(detailed_view2);

        toolButton_2 = new QToolButton(frame_9);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setEnabled(false);
        toolButton_2->setIcon(icon3);
        toolButton_2->setAutoRaise(true);

        horizontalLayout_6->addWidget(toolButton_2);


        verticalLayout_13->addWidget(frame_9);

        details_update_text = new lay::SaltGrainDetailsTextWidget(details_update_frame);
        details_update_text->setObjectName("details_update_text");
        details_update_text->setOpenExternalLinks(true);

        verticalLayout_13->addWidget(details_update_text);

        splitter_update->addWidget(details_update_frame);

        verticalLayout_14->addWidget(splitter_update);

        frame_10 = new QFrame(tab_3);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        apply_update_button = new QPushButton(frame_10);
        apply_update_button->setObjectName("apply_update_button");
        apply_update_button->setAutoDefault(false);
        apply_update_button->setFlat(false);

        horizontalLayout_7->addWidget(apply_update_button);

        apply_label_update = new QLabel(frame_10);
        apply_label_update->setObjectName("apply_label_update");

        horizontalLayout_7->addWidget(apply_label_update);

        horizontalSpacer_5 = new QSpacerItem(563, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_14->addWidget(frame_10);

        mode_tab->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(tab);
        splitter->setObjectName("splitter");
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 4, 0);
        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(50, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/find_16px@2x.png")));

        horizontalLayout->addWidget(label_7);

        search_installed_edit = new lay::DecoratedLineEdit(frame_2);
        search_installed_edit->setObjectName("search_installed_edit");
        sizePolicy1.setHeightForWidth(search_installed_edit->sizePolicy().hasHeightForWidth());
        search_installed_edit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(search_installed_edit);


        verticalLayout->addWidget(frame_2);

        list_stack = new QStackedWidget(layoutWidget);
        list_stack->setObjectName("list_stack");
        sizePolicy4.setHeightForWidth(list_stack->sizePolicy().hasHeightForWidth());
        list_stack->setSizePolicy(sizePolicy4);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        salt_view = new QListView(page);
        salt_view->setObjectName("salt_view");
        salt_view->setFocusPolicy(Qt::WheelFocus);
        salt_view->setAlternatingRowColors(true);
        salt_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        salt_view->setIconSize(QSize(64, 64));
        salt_view->setSelectionRectVisible(false);

        verticalLayout_4->addWidget(salt_view);

        list_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 334, 213));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/salt@2x.png")));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(false);

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);


        verticalLayout_5->addWidget(frame_3);

        list_stack->addWidget(page_2);

        verticalLayout->addWidget(list_stack);

        splitter->addWidget(layoutWidget);
        details_frame = new QFrame(splitter);
        details_frame->setObjectName("details_frame");
        sizePolicy2.setHeightForWidth(details_frame->sizePolicy().hasHeightForWidth());
        details_frame->setSizePolicy(sizePolicy2);
        details_frame->setFrameShape(QFrame::NoFrame);
        details_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(details_frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(4, 0, 0, 0);
        details_text = new lay::SaltGrainDetailsTextWidget(details_frame);
        details_text->setObjectName("details_text");
        details_text->setOpenExternalLinks(true);

        gridLayout->addWidget(details_text, 1, 0, 1, 3);

        label = new QLabel(details_frame);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        edit_button = new QToolButton(details_frame);
        edit_button->setObjectName("edit_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/edit_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_button->setIcon(icon4);
        edit_button->setAutoRaise(true);

        gridLayout->addWidget(edit_button, 0, 2, 1, 1);

        detailed_view3 = new QCheckBox(details_frame);
        detailed_view3->setObjectName("detailed_view3");

        gridLayout->addWidget(detailed_view3, 0, 1, 1, 1);

        splitter->addWidget(details_frame);

        verticalLayout_3->addWidget(splitter);

        frame_11 = new QFrame(tab);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::NoFrame);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        delete_button = new QPushButton(frame_11);
        delete_button->setObjectName("delete_button");
        delete_button->setFocusPolicy(Qt::NoFocus);
        delete_button->setIcon(icon1);

        horizontalLayout_8->addWidget(delete_button);

        horizontalSpacer_6 = new QSpacerItem(540, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        create_button = new QPushButton(frame_11);
        create_button->setObjectName("create_button");
        create_button->setIcon(icon);
        create_button->setAutoDefault(false);

        horizontalLayout_8->addWidget(create_button);


        verticalLayout_3->addWidget(frame_11);

        mode_tab->addTab(tab, QString());

        verticalLayout_2->addWidget(mode_tab);

        buttonBox = new QDialogButtonBox(SaltManagerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(mode_tab, mark_new_button);
        QWidget::setTabOrder(mark_new_button, search_new_edit);
        QWidget::setTabOrder(search_new_edit, salt_mine_view_new);
        QWidget::setTabOrder(salt_mine_view_new, detailed_view);
        QWidget::setTabOrder(detailed_view, toolButton);
        QWidget::setTabOrder(toolButton, details_new_text);
        QWidget::setTabOrder(details_new_text, mark_update_button);
        QWidget::setTabOrder(mark_update_button, search_update_edit);
        QWidget::setTabOrder(search_update_edit, salt_mine_view_update);
        QWidget::setTabOrder(salt_mine_view_update, detailed_view2);
        QWidget::setTabOrder(detailed_view2, toolButton_2);
        QWidget::setTabOrder(toolButton_2, details_update_text);
        QWidget::setTabOrder(details_update_text, search_installed_edit);
        QWidget::setTabOrder(search_installed_edit, salt_view);
        QWidget::setTabOrder(salt_view, detailed_view3);
        QWidget::setTabOrder(detailed_view3, edit_button);
        QWidget::setTabOrder(edit_button, details_text);
        QWidget::setTabOrder(details_text, create_button);
        QWidget::setTabOrder(create_button, apply_new_button);
        QWidget::setTabOrder(apply_new_button, apply_update_button);
        QWidget::setTabOrder(apply_update_button, scrollArea);

        retranslateUi(SaltManagerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SaltManagerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(detailed_view, SIGNAL(clicked(bool)), details_new_text, SLOT(show_detailed_view(bool)));
        QObject::connect(detailed_view2, SIGNAL(clicked(bool)), details_update_text, SLOT(show_detailed_view(bool)));
        QObject::connect(detailed_view3, SIGNAL(clicked(bool)), details_text, SLOT(show_detailed_view(bool)));

        mode_tab->setCurrentIndex(2);
        list_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SaltManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *SaltManagerDialog)
    {
        SaltManagerDialog->setWindowTitle(QCoreApplication::translate("SaltManagerDialog", "Salt Package Manager", nullptr));
        actionNew->setText(QCoreApplication::translate("SaltManagerDialog", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("SaltManagerDialog", "New package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("SaltManagerDialog", "Remove Package", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Remove package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUnmarkAllNew->setText(QCoreApplication::translate("SaltManagerDialog", "Unmark all", nullptr));
        actionShowMarkedOnlyNew->setText(QCoreApplication::translate("SaltManagerDialog", "Show marked only", nullptr));
        actionRefresh->setText(QCoreApplication::translate("SaltManagerDialog", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        actionRefresh->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Reload package repository", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowMarkedOnlyUpdate->setText(QCoreApplication::translate("SaltManagerDialog", "Show marked only", nullptr));
        actionUnmarkAllUpdate->setText(QCoreApplication::translate("SaltManagerDialog", "Unmark all", nullptr));
        actionMarkNew->setText(QCoreApplication::translate("SaltManagerDialog", "Mark for Installation", nullptr));
        actionUnmarkNew->setText(QCoreApplication::translate("SaltManagerDialog", "Unmark", nullptr));
        actionMarkForUpdate->setText(QCoreApplication::translate("SaltManagerDialog", "Mark for update", nullptr));
        actionUnmarkForUpdate->setText(QCoreApplication::translate("SaltManagerDialog", "Unmark", nullptr));
        actionCreatePackage->setText(QCoreApplication::translate("SaltManagerDialog", "Create (edit) package", nullptr));
        actionMarkAllUpdate->setText(QCoreApplication::translate("SaltManagerDialog", "Mark all", nullptr));
        actionMarkAllNew->setText(QCoreApplication::translate("SaltManagerDialog", "Mark all", nullptr));
#if QT_CONFIG(tooltip)
        mark_new_button->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Mark or unmark for installation", nullptr));
#endif // QT_CONFIG(tooltip)
        mark_new_button->setText(QCoreApplication::translate("SaltManagerDialog", "Mark", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("SaltManagerDialog", "Details", nullptr));
        detailed_view->setText(QCoreApplication::translate("SaltManagerDialog", "More details", nullptr));
        toolButton->setText(QCoreApplication::translate("SaltManagerDialog", "...", nullptr));
        apply_new_button->setText(QCoreApplication::translate("SaltManagerDialog", "Apply", nullptr));
        apply_label_new->setText(QCoreApplication::translate("SaltManagerDialog", "Set in code", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_2), QCoreApplication::translate("SaltManagerDialog", "Install New Packages", nullptr));
#if QT_CONFIG(tooltip)
        mark_update_button->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Mark or unmark for installation", nullptr));
#endif // QT_CONFIG(tooltip)
        mark_update_button->setText(QCoreApplication::translate("SaltManagerDialog", "Mark", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("SaltManagerDialog", "Details", nullptr));
        detailed_view2->setText(QCoreApplication::translate("SaltManagerDialog", "More details", nullptr));
        toolButton_2->setText(QCoreApplication::translate("SaltManagerDialog", "...", nullptr));
        apply_update_button->setText(QCoreApplication::translate("SaltManagerDialog", "Apply", nullptr));
        apply_label_update->setText(QCoreApplication::translate("SaltManagerDialog", "Set in code", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_3), QCoreApplication::translate("SaltManagerDialog", "Update Packages", nullptr));
        label_7->setText(QString());
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("SaltManagerDialog", "<h1>Salt Package Manager</h1>", nullptr));
        label_2->setText(QCoreApplication::translate("SaltManagerDialog", "<html><body><h4>No packages are installed currently.</h4><p>Use<br/>\n"
"<table>\n"
"  <tr><td>The \"Install New Packages\" tab to install a package<br/>from an external repository</td></tr>\n"
"  <tr></tr>\n"
"  <tr><td>The <a href=\":add\"><img src=\":/add_16px@2x.png\"></a> button to create a new package</td></tr>\n"
"</table>\n"
"</body></html>", nullptr));
        label->setText(QCoreApplication::translate("SaltManagerDialog", "Details", nullptr));
#if QT_CONFIG(tooltip)
        edit_button->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Edit Package Details", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_button->setText(QCoreApplication::translate("SaltManagerDialog", "Edit", nullptr));
        detailed_view3->setText(QCoreApplication::translate("SaltManagerDialog", "More details", nullptr));
#if QT_CONFIG(tooltip)
        delete_button->setToolTip(QCoreApplication::translate("SaltManagerDialog", "Uninstall Package", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_button->setText(QCoreApplication::translate("SaltManagerDialog", "Remove Package", nullptr));
        create_button->setText(QCoreApplication::translate("SaltManagerDialog", "Create (Edit) Package", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab), QCoreApplication::translate("SaltManagerDialog", "Current Packages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaltManagerDialog: public Ui_SaltManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALTMANAGERDIALOG_H
