/********************************************************************************
** Form generated from reading UI file 'MacroEditorDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROEDITORDIALOG_H
#define UI_MACROEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layMacroVariableView.h"
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_MacroEditorDialog
{
public:
    QAction *actionNewFolder;
    QAction *actionAddMacro;
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionImport;
    QAction *actionSaveAll;
    QAction *actionSave;
    QAction *actionAddLocation;
    QAction *actionRemoveLocation;
    QAction *actionRefresh;
    QAction *actionAddWatch;
    QAction *actionDeleteWatches;
    QAction *actionClearWatches;
    QAction *actionEditWatch;
    QAction *actionUseRegularExpressions;
    QAction *actionCaseSensitive;
    QAction *actionSaveAs;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QSplitter *mainHSplitter;
    QWidget *layoutWidget1;
    QVBoxLayout *vboxLayout1;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QToolButton *newFolderButton;
    QFrame *line_5;
    QToolButton *addButton;
    QToolButton *deleteButton;
    QToolButton *renameButton;
    QToolButton *importButton;
    QFrame *line_4;
    QToolButton *saveAllButton;
    QToolButton *saveButton;
    QSpacerItem *spacerItem;
    QTabWidget *treeTab;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout2;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    QToolButton *backwardButton;
    QToolButton *forwardButton;
    QFrame *line_6;
    QToolButton *closeButton;
    QFrame *closeButtonSeparator;
    QToolButton *runButton;
    QToolButton *runThisButton;
    QToolButton *stopButton;
    QToolButton *pauseButton;
    QFrame *line_7;
    QToolButton *breakpointButton;
    QToolButton *clearBreakpointsButton;
    QFrame *line_9;
    QToolButton *singleStepButton;
    QToolButton *nextStepButton;
    QFrame *line_8;
    QToolButton *dbgOn;
    QFrame *line_3;
    QToolButton *propertiesButton;
    QToolButton *setupButton;
    QSpacerItem *spacerItem1;
    lay::DecoratedLineEdit *searchEditBox;
    QToolButton *findNextButton;
    QToolButton *findPrevButton;
    QToolButton *replaceModeButton;
    QFrame *replaceFrame;
    QHBoxLayout *hboxLayout2;
    lay::DecoratedLineEdit *replaceText;
    QToolButton *replaceNextButton;
    QToolButton *replaceAllButton;
    QFrame *line_2;
    QToolButton *helpButton;
    QFrame *frame_6;
    QHBoxLayout *hboxLayout3;
    QSplitter *splitter_7;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QFrame *runtimeFrame;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem2;
    QFrame *frame_7;
    QVBoxLayout *vboxLayout3;
    QSplitter *splitter_2;
    QFrame *callStackFrame;
    QVBoxLayout *vboxLayout4;
    QLabel *label;
    QListWidget *callStack;
    QFrame *variableListFrame;
    QVBoxLayout *vboxLayout5;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *allVariables;
    lay::MacroVariableView *variableList;
    QFrame *watchListFrame;
    QVBoxLayout *vboxLayout6;
    QLabel *label_6;
    QTreeWidget *watchList;
    QFrame *frame_8;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout7;
    QHBoxLayout *hboxLayout5;
    QLabel *label_3;
    QSpacerItem *spacerItem3;
    QFrame *langSelFrame;
    QHBoxLayout *hboxLayout6;
    QRadioButton *rubyLangSel;
    QRadioButton *pythonLangSel;
    QSpacerItem *spacerItem4;
    QToolButton *clear_button;
    QSpacerItem *spacerItem5;
    QFrame *console_text_frame;
    QComboBox *input_field;

    void setupUi(QDialog *MacroEditorDialog)
    {
        if (MacroEditorDialog->objectName().isEmpty())
            MacroEditorDialog->setObjectName("MacroEditorDialog");
        MacroEditorDialog->resize(1008, 761);
        actionNewFolder = new QAction(MacroEditorDialog);
        actionNewFolder->setObjectName("actionNewFolder");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new_folder_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFolder->setIcon(icon);
        actionAddMacro = new QAction(MacroEditorDialog);
        actionAddMacro->setObjectName("actionAddMacro");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddMacro->setIcon(icon1);
        actionDelete = new QAction(MacroEditorDialog);
        actionDelete->setObjectName("actionDelete");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon2);
        actionRename = new QAction(MacroEditorDialog);
        actionRename->setObjectName("actionRename");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rename_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename->setIcon(icon3);
        actionImport = new QAction(MacroEditorDialog);
        actionImport->setObjectName("actionImport");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/import_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon4);
        actionSaveAll = new QAction(MacroEditorDialog);
        actionSaveAll->setObjectName("actionSaveAll");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/save_all_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAll->setIcon(icon5);
        actionSave = new QAction(MacroEditorDialog);
        actionSave->setObjectName("actionSave");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/save_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionAddLocation = new QAction(MacroEditorDialog);
        actionAddLocation->setObjectName("actionAddLocation");
        actionRemoveLocation = new QAction(MacroEditorDialog);
        actionRemoveLocation->setObjectName("actionRemoveLocation");
        actionRefresh = new QAction(MacroEditorDialog);
        actionRefresh->setObjectName("actionRefresh");
        actionAddWatch = new QAction(MacroEditorDialog);
        actionAddWatch->setObjectName("actionAddWatch");
        actionDeleteWatches = new QAction(MacroEditorDialog);
        actionDeleteWatches->setObjectName("actionDeleteWatches");
        actionClearWatches = new QAction(MacroEditorDialog);
        actionClearWatches->setObjectName("actionClearWatches");
        actionEditWatch = new QAction(MacroEditorDialog);
        actionEditWatch->setObjectName("actionEditWatch");
        actionUseRegularExpressions = new QAction(MacroEditorDialog);
        actionUseRegularExpressions->setObjectName("actionUseRegularExpressions");
        actionUseRegularExpressions->setCheckable(true);
        actionCaseSensitive = new QAction(MacroEditorDialog);
        actionCaseSensitive->setObjectName("actionCaseSensitive");
        actionCaseSensitive->setCheckable(true);
        actionSaveAs = new QAction(MacroEditorDialog);
        actionSaveAs->setObjectName("actionSaveAs");
        vboxLayout = new QVBoxLayout(MacroEditorDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        splitter = new QSplitter(MacroEditorDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        mainHSplitter = new QSplitter(splitter);
        mainHSplitter->setObjectName("mainHSplitter");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mainHSplitter->sizePolicy().hasHeightForWidth());
        mainHSplitter->setSizePolicy(sizePolicy);
        mainHSplitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(mainHSplitter);
        layoutWidget1->setObjectName("layoutWidget1");
        vboxLayout1 = new QVBoxLayout(layoutWidget1);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget1);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(2);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        newFolderButton = new QToolButton(frame);
        newFolderButton->setObjectName("newFolderButton");
        newFolderButton->setIcon(icon);
        newFolderButton->setAutoRaise(true);

        hboxLayout->addWidget(newFolderButton);

        line_5 = new QFrame(frame);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_5);

        addButton = new QToolButton(frame);
        addButton->setObjectName("addButton");
        addButton->setIcon(icon1);
        addButton->setAutoRaise(true);

        hboxLayout->addWidget(addButton);

        deleteButton = new QToolButton(frame);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setIcon(icon2);
        deleteButton->setAutoRaise(true);

        hboxLayout->addWidget(deleteButton);

        renameButton = new QToolButton(frame);
        renameButton->setObjectName("renameButton");
        renameButton->setIcon(icon3);
        renameButton->setAutoRaise(true);

        hboxLayout->addWidget(renameButton);

        importButton = new QToolButton(frame);
        importButton->setObjectName("importButton");
        importButton->setIcon(icon4);
        importButton->setAutoRaise(true);

        hboxLayout->addWidget(importButton);

        line_4 = new QFrame(frame);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_4);

        saveAllButton = new QToolButton(frame);
        saveAllButton->setObjectName("saveAllButton");
        saveAllButton->setIcon(icon5);
        saveAllButton->setAutoRaise(true);

        hboxLayout->addWidget(saveAllButton);

        saveButton = new QToolButton(frame);
        saveButton->setObjectName("saveButton");
        saveButton->setIcon(icon6);
        saveButton->setAutoRaise(true);

        hboxLayout->addWidget(saveButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addWidget(frame);

        treeTab = new QTabWidget(layoutWidget1);
        treeTab->setObjectName("treeTab");
        tab = new QWidget();
        tab->setObjectName("tab");
        treeTab->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        treeTab->addTab(tab_3, QString());

        vboxLayout1->addWidget(treeTab);

        mainHSplitter->addWidget(layoutWidget1);
        layoutWidget = new QWidget(mainHSplitter);
        layoutWidget->setObjectName("layoutWidget");
        vboxLayout2 = new QVBoxLayout(layoutWidget);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(2);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        backwardButton = new QToolButton(frame_2);
        backwardButton->setObjectName("backwardButton");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/back_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        backwardButton->setIcon(icon7);
        backwardButton->setAutoRaise(true);

        hboxLayout1->addWidget(backwardButton);

        forwardButton = new QToolButton(frame_2);
        forwardButton->setObjectName("forwardButton");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/forward_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        forwardButton->setIcon(icon8);
        forwardButton->setAutoRaise(true);

        hboxLayout1->addWidget(forwardButton);

        line_6 = new QFrame(frame_2);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_6);

        closeButton = new QToolButton(frame_2);
        closeButton->setObjectName("closeButton");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/del_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon9);
        closeButton->setAutoRaise(true);

        hboxLayout1->addWidget(closeButton);

        closeButtonSeparator = new QFrame(frame_2);
        closeButtonSeparator->setObjectName("closeButtonSeparator");
        closeButtonSeparator->setFrameShape(QFrame::VLine);
        closeButtonSeparator->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(closeButtonSeparator);

        runButton = new QToolButton(frame_2);
        runButton->setObjectName("runButton");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/run_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        runButton->setIcon(icon10);
        runButton->setAutoRaise(true);

        hboxLayout1->addWidget(runButton);

        runThisButton = new QToolButton(frame_2);
        runThisButton->setObjectName("runThisButton");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/runthis_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        runThisButton->setIcon(icon11);
        runThisButton->setAutoRaise(true);

        hboxLayout1->addWidget(runThisButton);

        stopButton = new QToolButton(frame_2);
        stopButton->setObjectName("stopButton");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/stop_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon12);
        stopButton->setAutoRaise(true);

        hboxLayout1->addWidget(stopButton);

        pauseButton = new QToolButton(frame_2);
        pauseButton->setObjectName("pauseButton");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/pause_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon13);
        pauseButton->setAutoRaise(true);

        hboxLayout1->addWidget(pauseButton);

        line_7 = new QFrame(frame_2);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_7);

        breakpointButton = new QToolButton(frame_2);
        breakpointButton->setObjectName("breakpointButton");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/breakpoint_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        breakpointButton->setIcon(icon14);
        breakpointButton->setAutoRaise(true);

        hboxLayout1->addWidget(breakpointButton);

        clearBreakpointsButton = new QToolButton(frame_2);
        clearBreakpointsButton->setObjectName("clearBreakpointsButton");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/clearbreakpoints_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearBreakpointsButton->setIcon(icon15);
        clearBreakpointsButton->setAutoRaise(true);

        hboxLayout1->addWidget(clearBreakpointsButton);

        line_9 = new QFrame(frame_2);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_9);

        singleStepButton = new QToolButton(frame_2);
        singleStepButton->setObjectName("singleStepButton");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/singlestep_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        singleStepButton->setIcon(icon16);
        singleStepButton->setAutoRaise(true);

        hboxLayout1->addWidget(singleStepButton);

        nextStepButton = new QToolButton(frame_2);
        nextStepButton->setObjectName("nextStepButton");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/nextstep_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextStepButton->setIcon(icon17);
        nextStepButton->setAutoRaise(true);

        hboxLayout1->addWidget(nextStepButton);

        line_8 = new QFrame(frame_2);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_8);

        dbgOn = new QToolButton(frame_2);
        dbgOn->setObjectName("dbgOn");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/debug_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        dbgOn->setIcon(icon18);
        dbgOn->setCheckable(true);
        dbgOn->setAutoRaise(true);

        hboxLayout1->addWidget(dbgOn);

        line_3 = new QFrame(frame_2);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_3);

        propertiesButton = new QToolButton(frame_2);
        propertiesButton->setObjectName("propertiesButton");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/properties_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        propertiesButton->setIcon(icon19);
        propertiesButton->setAutoRaise(true);

        hboxLayout1->addWidget(propertiesButton);

        setupButton = new QToolButton(frame_2);
        setupButton->setObjectName("setupButton");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/setup_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        setupButton->setIcon(icon20);
        setupButton->setAutoRaise(true);

        hboxLayout1->addWidget(setupButton);

        spacerItem1 = new QSpacerItem(40, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        searchEditBox = new lay::DecoratedLineEdit(frame_2);
        searchEditBox->setObjectName("searchEditBox");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchEditBox->sizePolicy().hasHeightForWidth());
        searchEditBox->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(searchEditBox);

        findNextButton = new QToolButton(frame_2);
        findNextButton->setObjectName("findNextButton");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/find_next_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        findNextButton->setIcon(icon21);
        findNextButton->setAutoRaise(true);

        hboxLayout1->addWidget(findNextButton);

        findPrevButton = new QToolButton(frame_2);
        findPrevButton->setObjectName("findPrevButton");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/find_prev_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        findPrevButton->setIcon(icon22);
        findPrevButton->setAutoRaise(true);

        hboxLayout1->addWidget(findPrevButton);

        replaceModeButton = new QToolButton(frame_2);
        replaceModeButton->setObjectName("replaceModeButton");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(replaceModeButton->sizePolicy().hasHeightForWidth());
        replaceModeButton->setSizePolicy(sizePolicy4);
        replaceModeButton->setMinimumSize(QSize(16, 8));
        replaceModeButton->setIconSize(QSize(8, 8));
        replaceModeButton->setAutoRaise(true);
        replaceModeButton->setArrowType(Qt::RightArrow);

        hboxLayout1->addWidget(replaceModeButton);

        replaceFrame = new QFrame(frame_2);
        replaceFrame->setObjectName("replaceFrame");
        replaceFrame->setFrameShape(QFrame::NoFrame);
        replaceFrame->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(replaceFrame);
        hboxLayout2->setSpacing(2);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        replaceText = new lay::DecoratedLineEdit(replaceFrame);
        replaceText->setObjectName("replaceText");
        sizePolicy3.setHeightForWidth(replaceText->sizePolicy().hasHeightForWidth());
        replaceText->setSizePolicy(sizePolicy3);

        hboxLayout2->addWidget(replaceText);

        replaceNextButton = new QToolButton(replaceFrame);
        replaceNextButton->setObjectName("replaceNextButton");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/replace_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        replaceNextButton->setIcon(icon23);
        replaceNextButton->setAutoRaise(true);

        hboxLayout2->addWidget(replaceNextButton);

        replaceAllButton = new QToolButton(replaceFrame);
        replaceAllButton->setObjectName("replaceAllButton");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/replace_all_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        replaceAllButton->setIcon(icon24);
        replaceAllButton->setAutoRaise(true);

        hboxLayout2->addWidget(replaceAllButton);


        hboxLayout1->addWidget(replaceFrame);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_2);

        helpButton = new QToolButton(frame_2);
        helpButton->setObjectName("helpButton");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/help_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon25);
        helpButton->setCheckable(false);
        helpButton->setAutoRaise(true);

        hboxLayout1->addWidget(helpButton);


        vboxLayout2->addWidget(frame_2);

        frame_6 = new QFrame(layoutWidget);
        frame_6->setObjectName("frame_6");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(2);
        sizePolicy5.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy5);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frame_6);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName("hboxLayout3");
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        splitter_7 = new QSplitter(frame_6);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Horizontal);
        splitter_7->setChildrenCollapsible(false);
        tabWidget = new QTabWidget(splitter_7);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy6);
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        splitter_7->addWidget(tabWidget);

        hboxLayout3->addWidget(splitter_7);


        vboxLayout2->addWidget(frame_6);

        mainHSplitter->addWidget(layoutWidget);
        splitter->addWidget(mainHSplitter);
        runtimeFrame = new QFrame(splitter);
        runtimeFrame->setObjectName("runtimeFrame");
        sizePolicy1.setHeightForWidth(runtimeFrame->sizePolicy().hasHeightForWidth());
        runtimeFrame->setSizePolicy(sizePolicy1);
        runtimeFrame->setFrameShape(QFrame::NoFrame);
        runtimeFrame->setFrameShadow(QFrame::Raised);
        hboxLayout4 = new QHBoxLayout(runtimeFrame);
        hboxLayout4->setSpacing(0);
        hboxLayout4->setObjectName("hboxLayout4");
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(0, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hboxLayout4->addItem(spacerItem2);

        frame_7 = new QFrame(runtimeFrame);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(400, 16));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        vboxLayout3 = new QVBoxLayout(frame_7);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName("vboxLayout3");
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(frame_7);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        callStackFrame = new QFrame(splitter_2);
        callStackFrame->setObjectName("callStackFrame");
        callStackFrame->setFrameShape(QFrame::NoFrame);
        callStackFrame->setFrameShadow(QFrame::Raised);
        vboxLayout4 = new QVBoxLayout(callStackFrame);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName("vboxLayout4");
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(callStackFrame);
        label->setObjectName("label");

        vboxLayout4->addWidget(label);

        callStack = new QListWidget(callStackFrame);
        callStack->setObjectName("callStack");
        callStack->setAlternatingRowColors(false);

        vboxLayout4->addWidget(callStack);

        splitter_2->addWidget(callStackFrame);
        variableListFrame = new QFrame(splitter_2);
        variableListFrame->setObjectName("variableListFrame");
        variableListFrame->setFrameShape(QFrame::NoFrame);
        variableListFrame->setFrameShadow(QFrame::Raised);
        vboxLayout5 = new QVBoxLayout(variableListFrame);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName("vboxLayout5");
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(variableListFrame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        allVariables = new QCheckBox(frame_4);
        allVariables->setObjectName("allVariables");
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(allVariables->sizePolicy().hasHeightForWidth());
        allVariables->setSizePolicy(sizePolicy7);

        horizontalLayout->addWidget(allVariables);


        vboxLayout5->addWidget(frame_4);

        variableList = new lay::MacroVariableView(variableListFrame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        variableList->setHeaderItem(__qtreewidgetitem);
        variableList->setObjectName("variableList");
        variableList->setAlternatingRowColors(true);
        variableList->setUniformRowHeights(true);
        variableList->setAllColumnsShowFocus(true);

        vboxLayout5->addWidget(variableList);

        splitter_2->addWidget(variableListFrame);
        watchListFrame = new QFrame(splitter_2);
        watchListFrame->setObjectName("watchListFrame");
        watchListFrame->setFrameShape(QFrame::NoFrame);
        watchListFrame->setFrameShadow(QFrame::Raised);
        vboxLayout6 = new QVBoxLayout(watchListFrame);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName("vboxLayout6");
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(watchListFrame);
        label_6->setObjectName("label_6");

        vboxLayout6->addWidget(label_6);

        watchList = new QTreeWidget(watchListFrame);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("Expression"));
        watchList->setHeaderItem(__qtreewidgetitem1);
        watchList->setObjectName("watchList");
        watchList->setAlternatingRowColors(true);
        watchList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        watchList->setRootIsDecorated(false);
        watchList->setUniformRowHeights(true);
        watchList->setAllColumnsShowFocus(true);

        vboxLayout6->addWidget(watchList);

        splitter_2->addWidget(watchListFrame);

        vboxLayout3->addWidget(splitter_2);


        hboxLayout4->addWidget(frame_7);

        frame_8 = new QFrame(runtimeFrame);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        hboxLayout4->addWidget(frame_8);

        splitter->addWidget(runtimeFrame);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName("frame_3");
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout7 = new QVBoxLayout(frame_3);
        vboxLayout7->setSpacing(0);
        vboxLayout7->setObjectName("vboxLayout7");
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName("hboxLayout5");
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");

        hboxLayout5->addWidget(label_3);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem3);

        langSelFrame = new QFrame(frame_3);
        langSelFrame->setObjectName("langSelFrame");
        langSelFrame->setFrameShape(QFrame::NoFrame);
        langSelFrame->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(langSelFrame);
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName("hboxLayout6");
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        rubyLangSel = new QRadioButton(langSelFrame);
        rubyLangSel->setObjectName("rubyLangSel");
        rubyLangSel->setChecked(true);

        hboxLayout6->addWidget(rubyLangSel);

        pythonLangSel = new QRadioButton(langSelFrame);
        pythonLangSel->setObjectName("pythonLangSel");

        hboxLayout6->addWidget(pythonLangSel);


        hboxLayout5->addWidget(langSelFrame);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);

        clear_button = new QToolButton(frame_3);
        clear_button->setObjectName("clear_button");

        hboxLayout5->addWidget(clear_button);


        vboxLayout7->addLayout(hboxLayout5);

        spacerItem5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout7->addItem(spacerItem5);

        console_text_frame = new QFrame(frame_3);
        console_text_frame->setObjectName("console_text_frame");
        console_text_frame->setFrameShape(QFrame::NoFrame);
        console_text_frame->setFrameShadow(QFrame::Raised);

        vboxLayout7->addWidget(console_text_frame);

        input_field = new QComboBox(frame_3);
        input_field->setObjectName("input_field");
        input_field->setEditable(true);
        input_field->setFrame(false);

        vboxLayout7->addWidget(input_field);

        splitter->addWidget(frame_3);

        vboxLayout->addWidget(splitter);


        retranslateUi(MacroEditorDialog);

        QMetaObject::connectSlotsByName(MacroEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *MacroEditorDialog)
    {
        MacroEditorDialog->setWindowTitle(QCoreApplication::translate("MacroEditorDialog", "Macro Development", nullptr));
        actionNewFolder->setText(QCoreApplication::translate("MacroEditorDialog", "New Folder", nullptr));
        actionAddMacro->setText(QCoreApplication::translate("MacroEditorDialog", "New", nullptr));
        actionDelete->setText(QCoreApplication::translate("MacroEditorDialog", "Delete", nullptr));
        actionRename->setText(QCoreApplication::translate("MacroEditorDialog", "Rename", nullptr));
        actionImport->setText(QCoreApplication::translate("MacroEditorDialog", "Import", nullptr));
        actionSaveAll->setText(QCoreApplication::translate("MacroEditorDialog", "Save All", nullptr));
        actionSave->setText(QCoreApplication::translate("MacroEditorDialog", "Save", nullptr));
        actionAddLocation->setText(QCoreApplication::translate("MacroEditorDialog", "Add Location", nullptr));
        actionRemoveLocation->setText(QCoreApplication::translate("MacroEditorDialog", "Remove Location", nullptr));
        actionRefresh->setText(QCoreApplication::translate("MacroEditorDialog", "Refresh", nullptr));
        actionAddWatch->setText(QCoreApplication::translate("MacroEditorDialog", "Add Watch", nullptr));
#if QT_CONFIG(tooltip)
        actionAddWatch->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Add watch expression", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteWatches->setText(QCoreApplication::translate("MacroEditorDialog", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteWatches->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Remove selected watches", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClearWatches->setText(QCoreApplication::translate("MacroEditorDialog", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionClearWatches->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Clear all watch expressions", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditWatch->setText(QCoreApplication::translate("MacroEditorDialog", "Edit Watch", nullptr));
        actionUseRegularExpressions->setText(QCoreApplication::translate("MacroEditorDialog", "Use Regular Expressions", nullptr));
        actionCaseSensitive->setText(QCoreApplication::translate("MacroEditorDialog", "Case Sensitive", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MacroEditorDialog", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Save As", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        newFolderButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "New folder", nullptr));
#endif // QT_CONFIG(tooltip)
        newFolderButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "New", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        renameButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Rename", nullptr));
#endif // QT_CONFIG(tooltip)
        renameButton->setText(QCoreApplication::translate("MacroEditorDialog", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        importButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Import file", nullptr));
#endif // QT_CONFIG(tooltip)
        importButton->setText(QCoreApplication::translate("MacroEditorDialog", "Import", nullptr));
#if QT_CONFIG(tooltip)
        saveAllButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Save all files (Ctrl+Shift+S)", nullptr));
#endif // QT_CONFIG(tooltip)
        saveAllButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        saveAllButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Save current file (Ctrl+S)", nullptr));
#endif // QT_CONFIG(tooltip)
        saveButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        saveButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        treeTab->setTabText(treeTab->indexOf(tab), QCoreApplication::translate("MacroEditorDialog", "Tab 1", nullptr));
        treeTab->setTabText(treeTab->indexOf(tab_3), QCoreApplication::translate("MacroEditorDialog", "Tab 2", nullptr));
        backwardButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
        forwardButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Close tab", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("MacroEditorDialog", "close", nullptr));
#if QT_CONFIG(tooltip)
        runButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Run current script (F5)", nullptr));
#endif // QT_CONFIG(tooltip)
        runButton->setText(QCoreApplication::translate("MacroEditorDialog", "run", nullptr));
#if QT_CONFIG(shortcut)
        runButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        runThisButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Run script from the current tab (Shift+F5)", nullptr));
#endif // QT_CONFIG(tooltip)
        runThisButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        runThisButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        stopButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Stop script", nullptr));
#endif // QT_CONFIG(tooltip)
        stopButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        pauseButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Pause script (Ctrl+F5)", nullptr));
#endif // QT_CONFIG(tooltip)
        pauseButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        pauseButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        breakpointButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Set breakpoint (F9)", nullptr));
#endif // QT_CONFIG(tooltip)
        breakpointButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        breakpointButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        clearBreakpointsButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Clear all breakpoints (Ctrl+Shift+F9)", nullptr));
#endif // QT_CONFIG(tooltip)
        clearBreakpointsButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        clearBreakpointsButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+Shift+F9", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        singleStepButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Step into procedure (F11)", nullptr));
#endif // QT_CONFIG(tooltip)
        singleStepButton->setText(QCoreApplication::translate("MacroEditorDialog", "S", nullptr));
#if QT_CONFIG(shortcut)
        singleStepButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        nextStepButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Step over procedure or block (F10)", nullptr));
#endif // QT_CONFIG(tooltip)
        nextStepButton->setText(QCoreApplication::translate("MacroEditorDialog", "N", nullptr));
#if QT_CONFIG(shortcut)
        nextStepButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        dbgOn->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Enable or disable debugging", nullptr));
#endif // QT_CONFIG(tooltip)
        dbgOn->setText(QCoreApplication::translate("MacroEditorDialog", "DBG", nullptr));
#if QT_CONFIG(tooltip)
        propertiesButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Edit properties of macro", nullptr));
#endif // QT_CONFIG(tooltip)
        propertiesButton->setText(QCoreApplication::translate("MacroEditorDialog", "P", nullptr));
#if QT_CONFIG(tooltip)
        setupButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Setup colors, formats, debugger", nullptr));
#endif // QT_CONFIG(tooltip)
        setupButton->setText(QCoreApplication::translate("MacroEditorDialog", "prop", nullptr));
#if QT_CONFIG(tooltip)
        findNextButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Find next (Ctrl+F)", nullptr));
#endif // QT_CONFIG(tooltip)
        findNextButton->setText(QCoreApplication::translate("MacroEditorDialog", "N", nullptr));
#if QT_CONFIG(shortcut)
        findNextButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        findPrevButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        findPrevButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        replaceModeButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Show replace mode", nullptr));
#endif // QT_CONFIG(tooltip)
        replaceModeButton->setText(QCoreApplication::translate("MacroEditorDialog", "...", nullptr));
#if QT_CONFIG(shortcut)
        replaceModeButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        replaceNextButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Replace and find next (Ctrl+R)", nullptr));
#endif // QT_CONFIG(tooltip)
        replaceNextButton->setText(QCoreApplication::translate("MacroEditorDialog", "RN", nullptr));
#if QT_CONFIG(shortcut)
        replaceNextButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        replaceAllButton->setToolTip(QCoreApplication::translate("MacroEditorDialog", "Replace all (Ctrl+Shift+R)", nullptr));
#endif // QT_CONFIG(tooltip)
        replaceAllButton->setText(QCoreApplication::translate("MacroEditorDialog", "All", nullptr));
#if QT_CONFIG(shortcut)
        replaceAllButton->setShortcut(QCoreApplication::translate("MacroEditorDialog", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        helpButton->setText(QCoreApplication::translate("MacroEditorDialog", "Help", nullptr));
#if QT_CONFIG(shortcut)
        helpButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MacroEditorDialog", "Nothing selected", nullptr));
        label->setText(QCoreApplication::translate("MacroEditorDialog", "Call stack", nullptr));
        label_5->setText(QCoreApplication::translate("MacroEditorDialog", "Local variables", nullptr));
        allVariables->setText(QCoreApplication::translate("MacroEditorDialog", "All", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = variableList->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MacroEditorDialog", "Value", nullptr));
        label_6->setText(QCoreApplication::translate("MacroEditorDialog", "Watch list", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = watchList->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MacroEditorDialog", "Value", nullptr));
        label_3->setText(QCoreApplication::translate("MacroEditorDialog", "Console", nullptr));
        rubyLangSel->setText(QCoreApplication::translate("MacroEditorDialog", "R&uby", nullptr));
        pythonLangSel->setText(QCoreApplication::translate("MacroEditorDialog", "P&ython", nullptr));
        clear_button->setText(QCoreApplication::translate("MacroEditorDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroEditorDialog: public Ui_MacroEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROEDITORDIALOG_H
