/********************************************************************************
** Form generated from reading UI file 'LEFDEFTechnologyComponentEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFDEFTECHNOLOGYCOMPONENTEDITOR_H
#define UI_LEFDEFTECHNOLOGYCOMPONENTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_LEFDEFTechnologyComponentEditor
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *read_lef_with_def;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *macro_resolution_mode;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_29;
    QFrame *frame_2;
    QVBoxLayout *_2;
    QFrame *lef_files_frame;
    QGridLayout *_3;
    QSpacerItem *spacerItem;
    QListWidget *lef_files;
    QToolButton *move_lef_files_down;
    QToolButton *del_lef_files;
    QToolButton *add_lef_file;
    QToolButton *move_lef_files_up;
    QFrame *frame_8;
    QGridLayout *gridLayout_6;
    QLabel *label_31;
    QListWidget *macro_layout_files;
    QToolButton *add_macro_layout_file;
    QToolButton *del_macro_layout_files;
    QToolButton *move_macro_layout_files_up;
    QToolButton *move_macro_layout_files_down;
    QSpacerItem *spacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QLabel *label_21;
    QCheckBox *separate_groups;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *dbu;
    QLabel *label_4;
    QLabel *label_22;
    QLabel *label_33;
    QCheckBox *joined_paths;
    QLineEdit *prefix_via_cellname;
    QFrame *frame_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QCheckBox *produce_net_names;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *inst_prop_name;
    QFrame *line;
    QLineEdit *placement_blockage_layer;
    QLabel *label_18;
    QLineEdit *region_layer;
    QLabel *help_label;
    QLineEdit *net_prop_name;
    QLabel *label_20;
    QLineEdit *pin_prop_name;
    QLabel *label_19;
    QCheckBox *produce_placement_blockages;
    QLabel *label_9;
    QLabel *label_2;
    QCheckBox *produce_inst_names;
    QLabel *label_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_26;
    QLineEdit *outline_layer;
    QCheckBox *produce_regions;
    QCheckBox *produce_pin_names;
    QCheckBox *produce_outlines;
    QLabel *label_10;
    QLabel *help_label2;
    QTabWidget *layer_map_mode;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QToolButton *browse_mapfile;
    QLineEdit *mapfile_path;
    QLabel *label_25;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QLineEdit *datatype_special_routing;
    QLineEdit *suffix_pins;
    QLabel *lbl1;
    QCheckBox *produce_routing;
    QLabel *label_17;
    QCheckBox *produce_special_routing;
    QLabel *label_13;
    QLineEdit *datatype_pins;
    QLineEdit *datatype_lef_pins;
    QLabel *label_23;
    QLabel *label_14;
    QLineEdit *datatype_blockages;
    QLineEdit *datatype_fills;
    QLabel *label_12;
    QLabel *label_24;
    QFrame *line_3;
    QLabel *label_30;
    QCheckBox *produce_fills;
    QCheckBox *produce_via_geometry;
    QCheckBox *produce_obstructions;
    QLabel *label_16;
    QCheckBox *produce_pins;
    QLineEdit *suffix_fills;
    QLineEdit *suffix_obstructions;
    QLineEdit *datatype_obstructions;
    QLabel *label_27;
    QLineEdit *datatype_routing;
    QLabel *lbl1_2;
    QLineEdit *suffix_special_routing;
    QLineEdit *datatype_via_geometry;
    QLabel *label_15;
    QLineEdit *suffix_routing;
    QLineEdit *datatype_labels;
    QLineEdit *suffix_via_geometry;
    QCheckBox *produce_lef_pins;
    QLineEdit *suffix_lef_pins;
    QLineEdit *suffix_blockages;
    QLineEdit *suffix_labels;
    QLabel *label_3;
    QCheckBox *produce_blockages;
    QCheckBox *produce_labels;
    QCheckBox *produce_lef_labels;
    QLabel *label_32;
    QLineEdit *suffix_lef_labels;
    QLineEdit *datatype_lef_labels;
    QLabel *label_28;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *read_all_cbx;
    lay::LayerMappingWidget *layer_map;
    QFrame *line_2;

    void setupUi(QWidget *LEFDEFTechnologyComponentEditor)
    {
        if (LEFDEFTechnologyComponentEditor->objectName().isEmpty())
            LEFDEFTechnologyComponentEditor->setObjectName("LEFDEFTechnologyComponentEditor");
        LEFDEFTechnologyComponentEditor->resize(664, 868);
        vboxLayout = new QVBoxLayout(LEFDEFTechnologyComponentEditor);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(LEFDEFTechnologyComponentEditor);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        read_lef_with_def = new QCheckBox(tab_3);
        read_lef_with_def->setObjectName("read_lef_with_def");

        verticalLayout_3->addWidget(read_lef_with_def);

        frame_7 = new QFrame(tab_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_7);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        macro_resolution_mode = new QComboBox(frame_7);
        macro_resolution_mode->addItem(QString());
        macro_resolution_mode->addItem(QString());
        macro_resolution_mode->addItem(QString());
        macro_resolution_mode->setObjectName("macro_resolution_mode");

        horizontalLayout_2->addWidget(macro_resolution_mode);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(frame_7);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_29 = new QLabel(tab_3);
        label_29->setObjectName("label_29");

        verticalLayout_3->addWidget(label_29);

        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 0));
        _2 = new QVBoxLayout(frame_2);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        lef_files_frame = new QFrame(frame_2);
        lef_files_frame->setObjectName("lef_files_frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lef_files_frame->sizePolicy().hasHeightForWidth());
        lef_files_frame->setSizePolicy(sizePolicy);
        lef_files_frame->setMinimumSize(QSize(16, 120));
        lef_files_frame->setMaximumSize(QSize(16777215, 16777215));
        lef_files_frame->setFrameShape(QFrame::NoFrame);
        lef_files_frame->setFrameShadow(QFrame::Raised);
        _3 = new QGridLayout(lef_files_frame);
        _3->setSpacing(6);
        _3->setObjectName("_3");
        _3->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _3->addItem(spacerItem, 4, 1, 1, 1);

        lef_files = new QListWidget(lef_files_frame);
        lef_files->setObjectName("lef_files");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lef_files->sizePolicy().hasHeightForWidth());
        lef_files->setSizePolicy(sizePolicy1);
        lef_files->setSelectionMode(QAbstractItemView::ExtendedSelection);

        _3->addWidget(lef_files, 0, 0, 5, 1);

        move_lef_files_down = new QToolButton(lef_files_frame);
        move_lef_files_down->setObjectName("move_lef_files_down");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lef_files_down->setIcon(icon);

        _3->addWidget(move_lef_files_down, 3, 1, 1, 1);

        del_lef_files = new QToolButton(lef_files_frame);
        del_lef_files->setObjectName("del_lef_files");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_lef_files->setIcon(icon1);

        _3->addWidget(del_lef_files, 1, 1, 1, 1);

        add_lef_file = new QToolButton(lef_files_frame);
        add_lef_file->setObjectName("add_lef_file");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_lef_file->setIcon(icon2);

        _3->addWidget(add_lef_file, 0, 1, 1, 1);

        move_lef_files_up = new QToolButton(lef_files_frame);
        move_lef_files_up->setObjectName("move_lef_files_up");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lef_files_up->setIcon(icon3);

        _3->addWidget(move_lef_files_up, 2, 1, 1, 1);


        _2->addWidget(lef_files_frame);


        verticalLayout_3->addWidget(frame_2);

        frame_8 = new QFrame(tab_3);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_8);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(frame_8);
        label_31->setObjectName("label_31");

        gridLayout_6->addWidget(label_31, 0, 0, 1, 2);

        macro_layout_files = new QListWidget(frame_8);
        macro_layout_files->setObjectName("macro_layout_files");
        sizePolicy1.setHeightForWidth(macro_layout_files->sizePolicy().hasHeightForWidth());
        macro_layout_files->setSizePolicy(sizePolicy1);
        macro_layout_files->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_6->addWidget(macro_layout_files, 1, 0, 5, 1);

        add_macro_layout_file = new QToolButton(frame_8);
        add_macro_layout_file->setObjectName("add_macro_layout_file");
        add_macro_layout_file->setIcon(icon2);

        gridLayout_6->addWidget(add_macro_layout_file, 1, 1, 1, 1);

        del_macro_layout_files = new QToolButton(frame_8);
        del_macro_layout_files->setObjectName("del_macro_layout_files");
        del_macro_layout_files->setIcon(icon1);

        gridLayout_6->addWidget(del_macro_layout_files, 2, 1, 1, 1);

        move_macro_layout_files_up = new QToolButton(frame_8);
        move_macro_layout_files_up->setObjectName("move_macro_layout_files_up");
        move_macro_layout_files_up->setIcon(icon3);

        gridLayout_6->addWidget(move_macro_layout_files_up, 3, 1, 1, 1);

        move_macro_layout_files_down = new QToolButton(frame_8);
        move_macro_layout_files_down->setObjectName("move_macro_layout_files_down");
        move_macro_layout_files_down->setIcon(icon);

        gridLayout_6->addWidget(move_macro_layout_files_down, 4, 1, 1, 1);

        spacer = new QSpacerItem(20, 196, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(spacer, 5, 1, 1, 1);


        verticalLayout_3->addWidget(frame_8);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName("frame_4");
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(frame_4);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 3, 0, 1, 1);

        separate_groups = new QCheckBox(frame_4);
        separate_groups->setObjectName("separate_groups");

        gridLayout->addWidget(separate_groups, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 4, 1);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame_3, 4, 1, 1, 3);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        dbu = new QLineEdit(frame_4);
        dbu->setObjectName("dbu");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dbu->sizePolicy().hasHeightForWidth());
        dbu->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(dbu, 0, 1, 1, 1);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_22 = new QLabel(frame_4);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 1, 0, 1, 1);

        label_33 = new QLabel(frame_4);
        label_33->setObjectName("label_33");

        gridLayout->addWidget(label_33, 2, 0, 1, 1);

        joined_paths = new QCheckBox(frame_4);
        joined_paths->setObjectName("joined_paths");

        gridLayout->addWidget(joined_paths, 2, 1, 1, 2);

        prefix_via_cellname = new QLineEdit(frame_4);
        prefix_via_cellname->setObjectName("prefix_via_cellname");
        sizePolicy2.setHeightForWidth(prefix_via_cellname->sizePolicy().hasHeightForWidth());
        prefix_via_cellname->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(prefix_via_cellname, 3, 1, 1, 2);


        verticalLayout_4->addWidget(frame_4);

        frame_6 = new QFrame(tab_4);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(frame_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFlat(true);
        gridLayout1 = new QGridLayout(groupBox_3);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 4, 9, 4);
        produce_net_names = new QCheckBox(groupBox_3);
        produce_net_names->setObjectName("produce_net_names");
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        produce_net_names->setFont(font);

        gridLayout1->addWidget(produce_net_names, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_11, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_8, 0, 2, 1, 2);

        inst_prop_name = new QLineEdit(groupBox_3);
        inst_prop_name->setObjectName("inst_prop_name");
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(inst_prop_name->sizePolicy().hasHeightForWidth());
        inst_prop_name->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(inst_prop_name, 2, 2, 1, 2);

        line = new QFrame(groupBox_3);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 0, 4, 8, 1);

        placement_blockage_layer = new QLineEdit(groupBox_3);
        placement_blockage_layer->setObjectName("placement_blockage_layer");
        sizePolicy4.setHeightForWidth(placement_blockage_layer->sizePolicy().hasHeightForWidth());
        placement_blockage_layer->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(placement_blockage_layer, 2, 7, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName("label_18");
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_18, 2, 1, 1, 1);

        region_layer = new QLineEdit(groupBox_3);
        region_layer->setObjectName("region_layer");
        sizePolicy4.setHeightForWidth(region_layer->sizePolicy().hasHeightForWidth());
        region_layer->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(region_layer, 3, 7, 1, 1);

        help_label = new QLabel(groupBox_3);
        help_label->setObjectName("help_label");
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(help_label->sizePolicy().hasHeightForWidth());
        help_label->setSizePolicy(sizePolicy5);
        help_label->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout1->addWidget(help_label, 4, 0, 1, 4);

        net_prop_name = new QLineEdit(groupBox_3);
        net_prop_name->setObjectName("net_prop_name");
        sizePolicy4.setHeightForWidth(net_prop_name->sizePolicy().hasHeightForWidth());
        net_prop_name->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(net_prop_name, 1, 2, 1, 2);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName("label_20");
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_20, 3, 1, 1, 1);

        pin_prop_name = new QLineEdit(groupBox_3);
        pin_prop_name->setObjectName("pin_prop_name");
        sizePolicy4.setHeightForWidth(pin_prop_name->sizePolicy().hasHeightForWidth());
        pin_prop_name->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(pin_prop_name, 3, 2, 1, 2);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_19, 3, 6, 1, 1);

        produce_placement_blockages = new QCheckBox(groupBox_3);
        produce_placement_blockages->setObjectName("produce_placement_blockages");
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(produce_placement_blockages->sizePolicy().hasHeightForWidth());
        produce_placement_blockages->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(produce_placement_blockages, 2, 5, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_9, 1, 6, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_2->setFont(font1);

        gridLayout1->addWidget(label_2, 0, 0, 1, 2);

        produce_inst_names = new QCheckBox(groupBox_3);
        produce_inst_names->setObjectName("produce_inst_names");

        gridLayout1->addWidget(produce_inst_names, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout1->addWidget(label_7, 0, 7, 1, 1);

        frame = new QFrame(groupBox_3);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(frame);
        label_26->setObjectName("label_26");
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_26);


        gridLayout1->addWidget(frame, 0, 5, 1, 2);

        outline_layer = new QLineEdit(groupBox_3);
        outline_layer->setObjectName("outline_layer");
        sizePolicy4.setHeightForWidth(outline_layer->sizePolicy().hasHeightForWidth());
        outline_layer->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(outline_layer, 1, 7, 1, 1);

        produce_regions = new QCheckBox(groupBox_3);
        produce_regions->setObjectName("produce_regions");
        sizePolicy6.setHeightForWidth(produce_regions->sizePolicy().hasHeightForWidth());
        produce_regions->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(produce_regions, 3, 5, 1, 1);

        produce_pin_names = new QCheckBox(groupBox_3);
        produce_pin_names->setObjectName("produce_pin_names");

        gridLayout1->addWidget(produce_pin_names, 3, 0, 1, 1);

        produce_outlines = new QCheckBox(groupBox_3);
        produce_outlines->setObjectName("produce_outlines");
        sizePolicy6.setHeightForWidth(produce_outlines->sizePolicy().hasHeightForWidth());
        produce_outlines->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(produce_outlines, 1, 5, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_10, 2, 6, 1, 1);

        help_label2 = new QLabel(groupBox_3);
        help_label2->setObjectName("help_label2");
        sizePolicy5.setHeightForWidth(help_label2->sizePolicy().hasHeightForWidth());
        help_label2->setSizePolicy(sizePolicy5);
        help_label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(help_label2, 4, 5, 1, 3);


        verticalLayout_5->addWidget(groupBox_3);

        layer_map_mode = new QTabWidget(tab_5);
        layer_map_mode->setObjectName("layer_map_mode");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName("gridLayout_4");
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        browse_mapfile = new QToolButton(tab);
        browse_mapfile->setObjectName("browse_mapfile");
        browse_mapfile->setAutoRaise(false);

        gridLayout_4->addWidget(browse_mapfile, 0, 2, 1, 1);

        mapfile_path = new QLineEdit(tab);
        mapfile_path->setObjectName("mapfile_path");

        gridLayout_4->addWidget(mapfile_path, 0, 1, 1, 1);

        label_25 = new QLabel(tab);
        label_25->setObjectName("label_25");
        label_25->setWordWrap(true);

        gridLayout_4->addWidget(label_25, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 278, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 3);

        layer_map_mode->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 582));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(frame_5);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        datatype_special_routing = new QLineEdit(frame_5);
        datatype_special_routing->setObjectName("datatype_special_routing");
        sizePolicy4.setHeightForWidth(datatype_special_routing->sizePolicy().hasHeightForWidth());
        datatype_special_routing->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_special_routing, 2, 8, 1, 1);

        suffix_pins = new QLineEdit(frame_5);
        suffix_pins->setObjectName("suffix_pins");
        sizePolicy4.setHeightForWidth(suffix_pins->sizePolicy().hasHeightForWidth());
        suffix_pins->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_pins, 2, 2, 1, 1);

        lbl1 = new QLabel(frame_5);
        lbl1->setObjectName("lbl1");

        gridLayout_3->addWidget(lbl1, 0, 2, 1, 1);

        produce_routing = new QCheckBox(frame_5);
        produce_routing->setObjectName("produce_routing");

        gridLayout_3->addWidget(produce_routing, 1, 5, 1, 1);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_17, 5, 6, 1, 1);

        produce_special_routing = new QCheckBox(frame_5);
        produce_special_routing->setObjectName("produce_special_routing");

        gridLayout_3->addWidget(produce_special_routing, 2, 5, 1, 1);

        label_13 = new QLabel(frame_5);
        label_13->setObjectName("label_13");
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_13, 2, 1, 1, 1);

        datatype_pins = new QLineEdit(frame_5);
        datatype_pins->setObjectName("datatype_pins");
        sizePolicy4.setHeightForWidth(datatype_pins->sizePolicy().hasHeightForWidth());
        datatype_pins->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_pins, 2, 3, 1, 1);

        datatype_lef_pins = new QLineEdit(frame_5);
        datatype_lef_pins->setObjectName("datatype_lef_pins");
        sizePolicy4.setHeightForWidth(datatype_lef_pins->sizePolicy().hasHeightForWidth());
        datatype_lef_pins->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_lef_pins, 3, 3, 1, 1);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_23, 1, 6, 1, 1);

        label_14 = new QLabel(frame_5);
        label_14->setObjectName("label_14");
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_14, 3, 1, 1, 1);

        datatype_blockages = new QLineEdit(frame_5);
        datatype_blockages->setObjectName("datatype_blockages");
        sizePolicy4.setHeightForWidth(datatype_blockages->sizePolicy().hasHeightForWidth());
        datatype_blockages->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_blockages, 5, 8, 1, 1);

        datatype_fills = new QLineEdit(frame_5);
        datatype_fills->setObjectName("datatype_fills");
        sizePolicy4.setHeightForWidth(datatype_fills->sizePolicy().hasHeightForWidth());
        datatype_fills->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_fills, 4, 3, 1, 1);

        label_12 = new QLabel(frame_5);
        label_12->setObjectName("label_12");
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_12, 1, 1, 1, 1);

        label_24 = new QLabel(frame_5);
        label_24->setObjectName("label_24");
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_24, 3, 6, 1, 1);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 0, 4, 6, 1);

        label_30 = new QLabel(frame_5);
        label_30->setObjectName("label_30");
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_30, 4, 1, 1, 1);

        produce_fills = new QCheckBox(frame_5);
        produce_fills->setObjectName("produce_fills");

        gridLayout_3->addWidget(produce_fills, 4, 0, 1, 1);

        produce_via_geometry = new QCheckBox(frame_5);
        produce_via_geometry->setObjectName("produce_via_geometry");

        gridLayout_3->addWidget(produce_via_geometry, 1, 0, 1, 1);

        produce_obstructions = new QCheckBox(frame_5);
        produce_obstructions->setObjectName("produce_obstructions");

        gridLayout_3->addWidget(produce_obstructions, 5, 0, 1, 1);

        label_16 = new QLabel(frame_5);
        label_16->setObjectName("label_16");
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_16, 2, 6, 1, 1);

        produce_pins = new QCheckBox(frame_5);
        produce_pins->setObjectName("produce_pins");

        gridLayout_3->addWidget(produce_pins, 2, 0, 1, 1);

        suffix_fills = new QLineEdit(frame_5);
        suffix_fills->setObjectName("suffix_fills");
        sizePolicy4.setHeightForWidth(suffix_fills->sizePolicy().hasHeightForWidth());
        suffix_fills->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_fills, 4, 2, 1, 1);

        suffix_obstructions = new QLineEdit(frame_5);
        suffix_obstructions->setObjectName("suffix_obstructions");
        sizePolicy4.setHeightForWidth(suffix_obstructions->sizePolicy().hasHeightForWidth());
        suffix_obstructions->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_obstructions, 5, 2, 1, 1);

        datatype_obstructions = new QLineEdit(frame_5);
        datatype_obstructions->setObjectName("datatype_obstructions");
        sizePolicy4.setHeightForWidth(datatype_obstructions->sizePolicy().hasHeightForWidth());
        datatype_obstructions->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_obstructions, 5, 3, 1, 1);

        label_27 = new QLabel(frame_5);
        label_27->setObjectName("label_27");

        gridLayout_3->addWidget(label_27, 0, 8, 1, 1);

        datatype_routing = new QLineEdit(frame_5);
        datatype_routing->setObjectName("datatype_routing");
        sizePolicy4.setHeightForWidth(datatype_routing->sizePolicy().hasHeightForWidth());
        datatype_routing->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_routing, 1, 8, 1, 1);

        lbl1_2 = new QLabel(frame_5);
        lbl1_2->setObjectName("lbl1_2");

        gridLayout_3->addWidget(lbl1_2, 0, 7, 1, 1);

        suffix_special_routing = new QLineEdit(frame_5);
        suffix_special_routing->setObjectName("suffix_special_routing");
        sizePolicy4.setHeightForWidth(suffix_special_routing->sizePolicy().hasHeightForWidth());
        suffix_special_routing->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_special_routing, 2, 7, 1, 1);

        datatype_via_geometry = new QLineEdit(frame_5);
        datatype_via_geometry->setObjectName("datatype_via_geometry");
        sizePolicy4.setHeightForWidth(datatype_via_geometry->sizePolicy().hasHeightForWidth());
        datatype_via_geometry->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_via_geometry, 1, 3, 1, 1);

        label_15 = new QLabel(frame_5);
        label_15->setObjectName("label_15");
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_15, 5, 1, 1, 1);

        suffix_routing = new QLineEdit(frame_5);
        suffix_routing->setObjectName("suffix_routing");
        sizePolicy4.setHeightForWidth(suffix_routing->sizePolicy().hasHeightForWidth());
        suffix_routing->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_routing, 1, 7, 1, 1);

        datatype_labels = new QLineEdit(frame_5);
        datatype_labels->setObjectName("datatype_labels");
        sizePolicy4.setHeightForWidth(datatype_labels->sizePolicy().hasHeightForWidth());
        datatype_labels->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(datatype_labels, 3, 8, 1, 1);

        suffix_via_geometry = new QLineEdit(frame_5);
        suffix_via_geometry->setObjectName("suffix_via_geometry");
        sizePolicy4.setHeightForWidth(suffix_via_geometry->sizePolicy().hasHeightForWidth());
        suffix_via_geometry->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_via_geometry, 1, 2, 1, 1);

        produce_lef_pins = new QCheckBox(frame_5);
        produce_lef_pins->setObjectName("produce_lef_pins");

        gridLayout_3->addWidget(produce_lef_pins, 3, 0, 1, 1);

        suffix_lef_pins = new QLineEdit(frame_5);
        suffix_lef_pins->setObjectName("suffix_lef_pins");
        sizePolicy4.setHeightForWidth(suffix_lef_pins->sizePolicy().hasHeightForWidth());
        suffix_lef_pins->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_lef_pins, 3, 2, 1, 1);

        suffix_blockages = new QLineEdit(frame_5);
        suffix_blockages->setObjectName("suffix_blockages");
        sizePolicy4.setHeightForWidth(suffix_blockages->sizePolicy().hasHeightForWidth());
        suffix_blockages->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_blockages, 5, 7, 1, 1);

        suffix_labels = new QLineEdit(frame_5);
        suffix_labels->setObjectName("suffix_labels");
        sizePolicy4.setHeightForWidth(suffix_labels->sizePolicy().hasHeightForWidth());
        suffix_labels->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(suffix_labels, 3, 7, 1, 1);

        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 0, 3, 1, 1);

        produce_blockages = new QCheckBox(frame_5);
        produce_blockages->setObjectName("produce_blockages");

        gridLayout_3->addWidget(produce_blockages, 5, 5, 1, 1);

        produce_labels = new QCheckBox(frame_5);
        produce_labels->setObjectName("produce_labels");

        gridLayout_3->addWidget(produce_labels, 3, 5, 1, 1);

        produce_lef_labels = new QCheckBox(frame_5);
        produce_lef_labels->setObjectName("produce_lef_labels");

        gridLayout_3->addWidget(produce_lef_labels, 4, 5, 1, 1);

        label_32 = new QLabel(frame_5);
        label_32->setObjectName("label_32");
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout_3->addWidget(label_32, 4, 6, 1, 1);

        suffix_lef_labels = new QLineEdit(frame_5);
        suffix_lef_labels->setObjectName("suffix_lef_labels");

        gridLayout_3->addWidget(suffix_lef_labels, 4, 7, 1, 1);

        datatype_lef_labels = new QLineEdit(frame_5);
        datatype_lef_labels->setObjectName("datatype_lef_labels");

        gridLayout_3->addWidget(datatype_lef_labels, 4, 8, 1, 1);


        verticalLayout_2->addWidget(frame_5);

        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName("label_28");
        label_28->setWordWrap(true);

        verticalLayout_2->addWidget(label_28);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy8);
        groupBox->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(9, 4, 9, 4);
        read_all_cbx = new QCheckBox(groupBox);
        read_all_cbx->setObjectName("read_all_cbx");

        gridLayout_2->addWidget(read_all_cbx, 0, 0, 1, 1);

        layer_map = new lay::LayerMappingWidget(groupBox);
        layer_map->setObjectName("layer_map");
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(1);
        sizePolicy9.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy9);
        layer_map->setMinimumSize(QSize(16, 0));
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(layer_map, 2, 0, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        layer_map_mode->addTab(tab_2, QString());

        verticalLayout_5->addWidget(layer_map_mode);

        tabWidget->addTab(tab_5, QString());

        vboxLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, read_lef_with_def);
        QWidget::setTabOrder(read_lef_with_def, lef_files);
        QWidget::setTabOrder(lef_files, add_lef_file);
        QWidget::setTabOrder(add_lef_file, del_lef_files);
        QWidget::setTabOrder(del_lef_files, move_lef_files_up);
        QWidget::setTabOrder(move_lef_files_up, move_lef_files_down);
        QWidget::setTabOrder(move_lef_files_down, dbu);
        QWidget::setTabOrder(dbu, separate_groups);
        QWidget::setTabOrder(separate_groups, joined_paths);
        QWidget::setTabOrder(joined_paths, prefix_via_cellname);
        QWidget::setTabOrder(prefix_via_cellname, produce_net_names);
        QWidget::setTabOrder(produce_net_names, net_prop_name);
        QWidget::setTabOrder(net_prop_name, produce_inst_names);
        QWidget::setTabOrder(produce_inst_names, inst_prop_name);
        QWidget::setTabOrder(inst_prop_name, produce_pin_names);
        QWidget::setTabOrder(produce_pin_names, pin_prop_name);
        QWidget::setTabOrder(pin_prop_name, produce_outlines);
        QWidget::setTabOrder(produce_outlines, outline_layer);
        QWidget::setTabOrder(outline_layer, produce_placement_blockages);
        QWidget::setTabOrder(produce_placement_blockages, placement_blockage_layer);
        QWidget::setTabOrder(placement_blockage_layer, produce_regions);
        QWidget::setTabOrder(produce_regions, region_layer);
        QWidget::setTabOrder(region_layer, layer_map_mode);
        QWidget::setTabOrder(layer_map_mode, mapfile_path);
        QWidget::setTabOrder(mapfile_path, browse_mapfile);
        QWidget::setTabOrder(browse_mapfile, scrollArea);
        QWidget::setTabOrder(scrollArea, produce_via_geometry);
        QWidget::setTabOrder(produce_via_geometry, suffix_via_geometry);
        QWidget::setTabOrder(suffix_via_geometry, datatype_via_geometry);
        QWidget::setTabOrder(datatype_via_geometry, produce_pins);
        QWidget::setTabOrder(produce_pins, suffix_pins);
        QWidget::setTabOrder(suffix_pins, datatype_pins);
        QWidget::setTabOrder(datatype_pins, produce_lef_pins);
        QWidget::setTabOrder(produce_lef_pins, suffix_lef_pins);
        QWidget::setTabOrder(suffix_lef_pins, datatype_lef_pins);
        QWidget::setTabOrder(datatype_lef_pins, produce_fills);
        QWidget::setTabOrder(produce_fills, suffix_fills);
        QWidget::setTabOrder(suffix_fills, datatype_fills);
        QWidget::setTabOrder(datatype_fills, produce_obstructions);
        QWidget::setTabOrder(produce_obstructions, suffix_obstructions);
        QWidget::setTabOrder(suffix_obstructions, datatype_obstructions);
        QWidget::setTabOrder(datatype_obstructions, produce_routing);
        QWidget::setTabOrder(produce_routing, suffix_routing);
        QWidget::setTabOrder(suffix_routing, datatype_routing);
        QWidget::setTabOrder(datatype_routing, produce_special_routing);
        QWidget::setTabOrder(produce_special_routing, suffix_special_routing);
        QWidget::setTabOrder(suffix_special_routing, datatype_special_routing);
        QWidget::setTabOrder(datatype_special_routing, produce_labels);
        QWidget::setTabOrder(produce_labels, suffix_labels);
        QWidget::setTabOrder(suffix_labels, datatype_labels);
        QWidget::setTabOrder(datatype_labels, read_all_cbx);

        retranslateUi(LEFDEFTechnologyComponentEditor);

        tabWidget->setCurrentIndex(0);
        layer_map_mode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LEFDEFTechnologyComponentEditor);
    } // setupUi

    void retranslateUi(QWidget *LEFDEFTechnologyComponentEditor)
    {
        LEFDEFTechnologyComponentEditor->setWindowTitle(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Form", nullptr));
#if QT_CONFIG(tooltip)
        LEFDEFTechnologyComponentEditor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        read_lef_with_def->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "for DEF: also read all LEF files in the same directory than the DEF file", nullptr));
        label->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "LEF macro geometry", nullptr));
        macro_resolution_mode->setItemText(0, QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Produce LEF geometry or use macro layout files for LEF FOREIGN", nullptr));
        macro_resolution_mode->setItemText(1, QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Always produce LEF geometry and ignore LEF FOREIGN", nullptr));
        macro_resolution_mode->setItemText(2, QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Always use macro layout files (assume LEF FOREIGN)", nullptr));

        label_29->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Additional LEF files", nullptr));
#if QT_CONFIG(tooltip)
        move_lef_files_down->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Move selected files down", nullptr));
#endif // QT_CONFIG(tooltip)
        move_lef_files_down->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        del_lef_files->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Delete selected files", nullptr));
#endif // QT_CONFIG(tooltip)
        del_lef_files->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        add_lef_file->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Add LEF file", nullptr));
#endif // QT_CONFIG(tooltip)
        add_lef_file->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        move_lef_files_up->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Move selected files up", nullptr));
#endif // QT_CONFIG(tooltip)
        move_lef_files_up->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
        label_31->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Macro Layout Files\n"
"(used instead of LEF geometry if requested, resolution priority follows order)", nullptr));
#if QT_CONFIG(tooltip)
        add_macro_layout_file->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Add LEF file", nullptr));
#endif // QT_CONFIG(tooltip)
        add_macro_layout_file->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        del_macro_layout_files->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Delete selected files", nullptr));
#endif // QT_CONFIG(tooltip)
        del_macro_layout_files->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        move_macro_layout_files_up->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Move selected files up", nullptr));
#endif // QT_CONFIG(tooltip)
        move_macro_layout_files_up->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        move_macro_layout_files_down->setToolTip(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Move selected files down", nullptr));
#endif // QT_CONFIG(tooltip)
        move_macro_layout_files_down->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "LEF+Macro Files", nullptr));
        label_21->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Via cell name prefix", nullptr));
        separate_groups->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Produce a parent cell per group", nullptr));
        label_5->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "\302\265m", nullptr));
        label_4->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layout DBU", nullptr));
        label_22->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Groups", nullptr));
        label_33->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Join paths", nullptr));
        joined_paths->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Produce multi-segment wire paths", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Options", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Global Production Rules (specify what objects to produce and on what layers)", nullptr));
        produce_net_names->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Net names", nullptr));
        label_11->setText(QString());
        label_8->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "As properties with name ...", nullptr));
        label_18->setText(QString());
        help_label->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "<html><body>(<a href=\"int:/about/variant_notation.xml\">See here for the name notation</a>)</body></html>", nullptr));
        label_20->setText(QString());
        label_19->setText(QString());
        produce_placement_blockages->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Blockages (2*)", nullptr));
        label_9->setText(QString());
        label_2->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Produce ...", nullptr));
        produce_inst_names->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Inst names", nullptr));
        label_7->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "On layer with spec ...", nullptr));
        label_26->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Produce ...", nullptr));
        produce_regions->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Regions (2*)", nullptr));
        produce_pin_names->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Pin names", nullptr));
        produce_outlines->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Die area (2*)", nullptr));
        label_10->setText(QString());
        help_label2->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "<html><body>(<a href=\"int:/about/layer_specs.xml\">See here for the layer specification</a>)</body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layer map file", nullptr));
        browse_mapfile->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "...", nullptr));
        label_25->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "If a layer map file is given, pattern based rules are ignored.\n"
"If used inside a technology, the file will be looked up relative to the technology's base path.\n"
"Otherwise it's looked up relative to the LEF or DEF file.\n"
"\n"
"(2*) Die area, Blockage and Region layers in map file will have priority over global production rules above.", nullptr));
        layer_map_mode->setTabText(layer_map_mode->indexOf(tab), QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layer Map File", nullptr));
        lbl1->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layer name\n"
"suffix ...", nullptr));
        produce_routing->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Routing (*)", nullptr));
        label_17->setText(QString());
        produce_special_routing->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Special routing (*)", nullptr));
        label_13->setText(QString());
        label_23->setText(QString());
        label_14->setText(QString());
        label_12->setText(QString());
        label_24->setText(QString());
        label_30->setText(QString());
        produce_fills->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Fills (*)", nullptr));
        produce_via_geometry->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Via geometry (*)", nullptr));
        produce_obstructions->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Obstructions", nullptr));
        label_16->setText(QString());
        produce_pins->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "DEF Pins (*)", nullptr));
        label_27->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "GDS data-\n"
"type ...", nullptr));
        lbl1_2->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layer name\n"
"suffix ...", nullptr));
        label_15->setText(QString());
        produce_lef_pins->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "LEF Pins (*)", nullptr));
        label_3->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "GDS data-\n"
"type ...", nullptr));
        produce_blockages->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Blockages", nullptr));
        produce_labels->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "DEF pin labels", nullptr));
        produce_lef_labels->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "LEF pin labels", nullptr));
        label_32->setText(QString());
        label_28->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "(*) Separate suffixes or datatypes can be given for different masks, using the following notation:\n"
"\"x,1:y,2:z ...\" (which will use x by default, y for MASK 1, z for MASK 2 etc.)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Layer Mapping (filter/modify layers, assign GDS layer/datatypes)", nullptr));
        read_all_cbx->setText(QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Read all layers (additionally to the ones in the mapping table)", nullptr));
        layer_map_mode->setTabText(layer_map_mode->indexOf(tab_2), QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Pattern Based Layer Production Rules", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("LEFDEFTechnologyComponentEditor", "Production", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LEFDEFTechnologyComponentEditor: public Ui_LEFDEFTechnologyComponentEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFDEFTECHNOLOGYCOMPONENTEDITOR_H
