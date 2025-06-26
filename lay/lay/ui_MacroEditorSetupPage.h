/********************************************************************************
** Form generated from reading UI file 'MacroEditorSetupPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROEDITORSETUPPAGE_H
#define UI_MACROEDITORSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_MacroEditorSetupPage
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QCheckBox *watch_files;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *tab_width;
    QSpinBox *indent;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLabel *label_8;
    QFontComboBox *font_sel;
    QSpacerItem *spacerItem2;
    QLabel *label_10;
    QSpinBox *font_size;
    QLabel *label_9;
    QSplitter *splitter;
    QListWidget *styles_list;
    QFrame *frame;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem3;
    QCheckBox *strikeout_cb;
    QCheckBox *underline_cb;
    QCheckBox *italic_cb;
    QCheckBox *bold_cb;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QLabel *label_6;
    QLabel *label_5;
    lay::ColorButton *background_color_button;
    lay::ColorButton *text_color_button;
    QLabel *label_7;
    QWidget *tab_3;
    QVBoxLayout *vboxLayout2;
    QCheckBox *save_all_cb;
    QGroupBox *stop_on_exception;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QPushButton *clear_el;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *exception_list;
    QSpacerItem *spacerItem6;

    void setupUi(QWidget *MacroEditorSetupPage)
    {
        if (MacroEditorSetupPage->objectName().isEmpty())
            MacroEditorSetupPage->setObjectName("MacroEditorSetupPage");
        MacroEditorSetupPage->resize(583, 455);
        vboxLayout = new QVBoxLayout(MacroEditorSetupPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(MacroEditorSetupPage);
        tabWidget->setObjectName("tabWidget");
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName("gridLayout");
        watch_files = new QCheckBox(tab_4);
        watch_files->setObjectName("watch_files");

        gridLayout->addWidget(watch_files, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 334, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 3, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 1, 2, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        tab_width = new QSpinBox(tab);
        tab_width->setObjectName("tab_width");
        tab_width->setMinimum(1);

        gridLayout1->addWidget(tab_width, 0, 1, 1, 1);

        indent = new QSpinBox(tab);
        indent->setObjectName("indent");
        indent->setMinimum(1);

        gridLayout1->addWidget(indent, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        vboxLayout1 = new QVBoxLayout(tab_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        hboxLayout->addWidget(label_8);

        font_sel = new QFontComboBox(frame_2);
        font_sel->setObjectName("font_sel");

        hboxLayout->addWidget(font_sel);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        hboxLayout->addWidget(label_10);

        font_size = new QSpinBox(frame_2);
        font_size->setObjectName("font_size");
        font_size->setMinimum(1);

        hboxLayout->addWidget(font_size);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");

        hboxLayout->addWidget(label_9);


        vboxLayout1->addWidget(frame_2);

        splitter = new QSplitter(tab_2);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        styles_list = new QListWidget(splitter);
        styles_list->setObjectName("styles_list");
        splitter->addWidget(styles_list);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem3, 7, 1, 1, 1);

        strikeout_cb = new QCheckBox(frame);
        strikeout_cb->setObjectName("strikeout_cb");
        QFont font;
        font.setStrikeOut(true);
        strikeout_cb->setFont(font);
        strikeout_cb->setTristate(true);

        gridLayout2->addWidget(strikeout_cb, 5, 1, 1, 2);

        underline_cb = new QCheckBox(frame);
        underline_cb->setObjectName("underline_cb");
        QFont font1;
        font1.setUnderline(true);
        underline_cb->setFont(font1);
        underline_cb->setTristate(true);

        gridLayout2->addWidget(underline_cb, 4, 1, 1, 2);

        italic_cb = new QCheckBox(frame);
        italic_cb->setObjectName("italic_cb");
        QFont font2;
        font2.setItalic(true);
        italic_cb->setFont(font2);
        italic_cb->setTristate(true);

        gridLayout2->addWidget(italic_cb, 3, 1, 1, 2);

        bold_cb = new QCheckBox(frame);
        bold_cb->setObjectName("bold_cb");
        QFont font3;
        font3.setBold(true);
        bold_cb->setFont(font3);
        bold_cb->setTristate(true);

        gridLayout2->addWidget(bold_cb, 2, 1, 1, 2);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem4, 1, 2, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem5, 0, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout2->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout2->addWidget(label_5, 0, 0, 1, 1);

        background_color_button = new lay::ColorButton(frame);
        background_color_button->setObjectName("background_color_button");

        gridLayout2->addWidget(background_color_button, 1, 1, 1, 1);

        text_color_button = new lay::ColorButton(frame);
        text_color_button->setObjectName("text_color_button");

        gridLayout2->addWidget(text_color_button, 0, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout2->addWidget(label_7, 2, 0, 1, 1);

        splitter->addWidget(frame);

        vboxLayout1->addWidget(splitter);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        vboxLayout2 = new QVBoxLayout(tab_3);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        save_all_cb = new QCheckBox(tab_3);
        save_all_cb->setObjectName("save_all_cb");

        vboxLayout2->addWidget(save_all_cb);

        stop_on_exception = new QGroupBox(tab_3);
        stop_on_exception->setObjectName("stop_on_exception");
        stop_on_exception->setCheckable(true);
        stop_on_exception->setChecked(false);
        gridLayout_3 = new QGridLayout(stop_on_exception);
        gridLayout_3->setObjectName("gridLayout_3");
        label_11 = new QLabel(stop_on_exception);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);

        clear_el = new QPushButton(stop_on_exception);
        clear_el->setObjectName("clear_el");

        gridLayout_3->addWidget(clear_el, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        exception_list = new QListWidget(stop_on_exception);
        exception_list->setObjectName("exception_list");
        exception_list->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_3->addWidget(exception_list, 1, 1, 1, 3);


        vboxLayout2->addWidget(stop_on_exception);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem6);

        tabWidget->addTab(tab_3, QString());

        vboxLayout->addWidget(tabWidget);


        retranslateUi(MacroEditorSetupPage);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MacroEditorSetupPage);
    } // setupUi

    void retranslateUi(QWidget *MacroEditorSetupPage)
    {
        MacroEditorSetupPage->setWindowTitle(QCoreApplication::translate("MacroEditorSetupPage", "Macro Development Setup", nullptr));
        watch_files->setText(QCoreApplication::translate("MacroEditorSetupPage", "Check macros for updates and ask whether to refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MacroEditorSetupPage", "General", nullptr));
        label_4->setText(QCoreApplication::translate("MacroEditorSetupPage", "characters", nullptr));
        label_3->setText(QCoreApplication::translate("MacroEditorSetupPage", "characters", nullptr));
        label_2->setText(QCoreApplication::translate("MacroEditorSetupPage", "Indent", nullptr));
        label->setText(QCoreApplication::translate("MacroEditorSetupPage", "Tab character width", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MacroEditorSetupPage", "Formatting", nullptr));
        label_8->setText(QCoreApplication::translate("MacroEditorSetupPage", "Font", nullptr));
        label_10->setText(QCoreApplication::translate("MacroEditorSetupPage", "Size", nullptr));
        label_9->setText(QCoreApplication::translate("MacroEditorSetupPage", "points", nullptr));
        strikeout_cb->setText(QCoreApplication::translate("MacroEditorSetupPage", "Strikeout", nullptr));
        underline_cb->setText(QCoreApplication::translate("MacroEditorSetupPage", "Underline", nullptr));
        italic_cb->setText(QCoreApplication::translate("MacroEditorSetupPage", "Italic font", nullptr));
        bold_cb->setText(QCoreApplication::translate("MacroEditorSetupPage", "Bold font", nullptr));
        label_6->setText(QCoreApplication::translate("MacroEditorSetupPage", "Background color", nullptr));
        label_5->setText(QCoreApplication::translate("MacroEditorSetupPage", "Text color", nullptr));
        background_color_button->setText(QString());
        text_color_button->setText(QString());
        label_7->setText(QCoreApplication::translate("MacroEditorSetupPage", "Styles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MacroEditorSetupPage", "Colors and fonts", nullptr));
        save_all_cb->setText(QCoreApplication::translate("MacroEditorSetupPage", "Always save all files before running a macro", nullptr));
        stop_on_exception->setTitle(QCoreApplication::translate("MacroEditorSetupPage", "As&k whether to stop in debugger on exception", nullptr));
        label_11->setText(QCoreApplication::translate("MacroEditorSetupPage", "Don't stop inside these files:", nullptr));
        clear_el->setText(QCoreApplication::translate("MacroEditorSetupPage", "Clear List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MacroEditorSetupPage", "Debugging", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroEditorSetupPage: public Ui_MacroEditorSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROEDITORSETUPPAGE_H
