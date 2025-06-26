/********************************************************************************
** Form generated from reading UI file 'FillDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILLDIALOG_H
#define UI_FILLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_FillDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *button_box;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *_13;
    QSpacerItem *spacerItem;
    QFrame *frame_5;
    QVBoxLayout *_14;
    QComboBox *fill_area_cbx;
    QSpacerItem *spacerItem1;
    QFrame *frame_6;
    QVBoxLayout *_18;
    QFrame *frame_7;
    QHBoxLayout *_19;
    QLabel *label_37;
    QLineEdit *distance_le;
    QLabel *label_38;
    QStackedWidget *fill_area_stack;
    QWidget *page_4;
    QWidget *page_5;
    QGridLayout *_15;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    lay::LayerSelectionComboBox *cb_layer;
    QWidget *page_6;
    QGridLayout *_16;
    QGroupBox *grp_box1_2;
    QGridLayout *_17;
    QLabel *label_31;
    QLabel *label_34;
    QLineEdit *le_x2;
    QLabel *label_36;
    QLineEdit *le_y1;
    QLabel *label_35;
    QLineEdit *le_y2;
    QLabel *label_32;
    QLineEdit *le_x1;
    QLabel *label_33;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLineEdit *exclude_le;
    QLabel *label_40;
    QLabel *label_39;
    QComboBox *layer_spec_cbx;
    QSpacerItem *spacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QGridLayout *_20;
    QLabel *label_41;
    QLabel *label_54;
    QSpacerItem *spacerItem4;
    lay::LayerSelectionComboBox *fc_boundary_layer;
    QLineEdit *fill_cell_le;
    QLabel *label_42;
    QLabel *label_53;
    QLabel *label_52;
    QLabel *label_55;
    QLineEdit *fill_margin_le;
    QSpacerItem *spacerItem5;
    QFrame *frame_8;
    QGridLayout *gridLayout_3;
    QLineEdit *row_le;
    QLabel *label_47;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_43;
    QLabel *label_44;
    QLineEdit *column_le;
    QToolButton *choose_fc_pb;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_4;
    QVBoxLayout *_21;
    QCheckBox *enhanced_cb;
    QGroupBox *second_order_fill_cb;
    QGridLayout *_22;
    QLabel *label_60;
    QLineEdit *fill_cell_2nd_le;
    QLineEdit *fill2_margin_le;
    QToolButton *choose_fc_2nd_pb;
    QSpacerItem *spacerItem6;
    QLabel *label_57;
    QLabel *label_59;
    QLabel *label_58;
    QLabel *label_56;
    QFrame *frame_9;
    QGridLayout *gridLayout_4;
    QLabel *label_64;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_66;
    QLineEdit *row_2nd_le;
    QLabel *label_61;
    QLineEdit *column_2nd_le;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *FillDialog)
    {
        if (FillDialog->objectName().isEmpty())
            FillDialog->setObjectName("FillDialog");
        FillDialog->resize(691, 437);
        gridLayout = new QGridLayout(FillDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        button_box = new QDialogButtonBox(FillDialog);
        button_box->setObjectName("button_box");
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box, 1, 1, 1, 1);

        tabWidget = new QTabWidget(FillDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(tab);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        _13 = new QGridLayout(frame);
        _13->setSpacing(6);
        _13->setObjectName("_13");
        _13->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _13->addItem(spacerItem, 0, 1, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        _14 = new QVBoxLayout(frame_5);
        _14->setSpacing(6);
        _14->setObjectName("_14");
        _14->setContentsMargins(0, 0, 0, 0);
        fill_area_cbx = new QComboBox(frame_5);
        fill_area_cbx->addItem(QString());
        fill_area_cbx->addItem(QString());
        fill_area_cbx->addItem(QString());
        fill_area_cbx->addItem(QString());
        fill_area_cbx->addItem(QString());
        fill_area_cbx->setObjectName("fill_area_cbx");

        _14->addWidget(fill_area_cbx);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _14->addItem(spacerItem1);


        _13->addWidget(frame_5, 0, 0, 1, 1);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        _18 = new QVBoxLayout(frame_6);
        _18->setSpacing(6);
        _18->setObjectName("_18");
        _18->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        _19 = new QHBoxLayout(frame_7);
        _19->setSpacing(6);
        _19->setObjectName("_19");
        _19->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(frame_7);
        label_37->setObjectName("label_37");

        _19->addWidget(label_37);

        distance_le = new QLineEdit(frame_7);
        distance_le->setObjectName("distance_le");
        sizePolicy.setHeightForWidth(distance_le->sizePolicy().hasHeightForWidth());
        distance_le->setSizePolicy(sizePolicy);

        _19->addWidget(distance_le);

        label_38 = new QLabel(frame_7);
        label_38->setObjectName("label_38");

        _19->addWidget(label_38);


        _18->addWidget(frame_7);


        _13->addWidget(frame_6, 2, 0, 1, 3);

        fill_area_stack = new QStackedWidget(frame);
        fill_area_stack->setObjectName("fill_area_stack");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fill_area_stack->sizePolicy().hasHeightForWidth());
        fill_area_stack->setSizePolicy(sizePolicy2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        fill_area_stack->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        _15 = new QGridLayout(page_5);
        _15->setSpacing(6);
        _15->setObjectName("_15");
        _15->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(241, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _15->addItem(spacerItem2, 1, 0, 1, 2);

        spacerItem3 = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _15->addItem(spacerItem3, 0, 1, 1, 1);

        cb_layer = new lay::LayerSelectionComboBox(page_5);
        cb_layer->setObjectName("cb_layer");
        cb_layer->setEnabled(true);
        cb_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _15->addWidget(cb_layer, 0, 0, 1, 1);

        fill_area_stack->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        _16 = new QGridLayout(page_6);
        _16->setSpacing(6);
        _16->setObjectName("_16");
        _16->setContentsMargins(0, 0, 0, 0);
        grp_box1_2 = new QGroupBox(page_6);
        grp_box1_2->setObjectName("grp_box1_2");
        grp_box1_2->setEnabled(true);
        _17 = new QGridLayout(grp_box1_2);
        _17->setSpacing(6);
        _17->setObjectName("_17");
        _17->setContentsMargins(9, 9, 9, 9);
        label_31 = new QLabel(grp_box1_2);
        label_31->setObjectName("label_31");

        _17->addWidget(label_31, 1, 3, 1, 1);

        label_34 = new QLabel(grp_box1_2);
        label_34->setObjectName("label_34");

        _17->addWidget(label_34, 0, 0, 1, 1);

        le_x2 = new QLineEdit(grp_box1_2);
        le_x2->setObjectName("le_x2");

        _17->addWidget(le_x2, 1, 2, 1, 1);

        label_36 = new QLabel(grp_box1_2);
        label_36->setObjectName("label_36");

        _17->addWidget(label_36, 0, 3, 1, 1);

        le_y1 = new QLineEdit(grp_box1_2);
        le_y1->setObjectName("le_y1");

        _17->addWidget(le_y1, 0, 4, 1, 1);

        label_35 = new QLabel(grp_box1_2);
        label_35->setObjectName("label_35");

        _17->addWidget(label_35, 0, 1, 1, 1);

        le_y2 = new QLineEdit(grp_box1_2);
        le_y2->setObjectName("le_y2");

        _17->addWidget(le_y2, 1, 4, 1, 1);

        label_32 = new QLabel(grp_box1_2);
        label_32->setObjectName("label_32");

        _17->addWidget(label_32, 1, 0, 1, 1);

        le_x1 = new QLineEdit(grp_box1_2);
        le_x1->setObjectName("le_x1");

        _17->addWidget(le_x1, 0, 2, 1, 1);

        label_33 = new QLabel(grp_box1_2);
        label_33->setObjectName("label_33");

        _17->addWidget(label_33, 1, 1, 1, 1);


        _16->addWidget(grp_box1_2, 0, 0, 1, 1);

        fill_area_stack->addWidget(page_6);

        _13->addWidget(fill_area_stack, 0, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _13->addItem(verticalSpacer_5, 1, 0, 1, 3);


        verticalLayout->addWidget(frame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        exclude_le = new QLineEdit(tab_2);
        exclude_le->setObjectName("exclude_le");
        sizePolicy.setHeightForWidth(exclude_le->sizePolicy().hasHeightForWidth());
        exclude_le->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(exclude_le, 0, 3, 1, 1);

        label_40 = new QLabel(tab_2);
        label_40->setObjectName("label_40");

        gridLayout_2->addWidget(label_40, 0, 4, 1, 1);

        label_39 = new QLabel(tab_2);
        label_39->setObjectName("label_39");

        gridLayout_2->addWidget(label_39, 0, 2, 1, 1);

        layer_spec_cbx = new QComboBox(tab_2);
        layer_spec_cbx->addItem(QString());
        layer_spec_cbx->addItem(QString());
        layer_spec_cbx->addItem(QString());
        layer_spec_cbx->addItem(QString());
        layer_spec_cbx->setObjectName("layer_spec_cbx");

        gridLayout_2->addWidget(layer_spec_cbx, 0, 0, 1, 1);

        spacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 309, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName("frame_2");
        _20 = new QGridLayout(frame_2);
        _20->setSpacing(6);
        _20->setObjectName("_20");
        _20->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(frame_2);
        label_41->setObjectName("label_41");

        _20->addWidget(label_41, 1, 2, 1, 1);

        label_54 = new QLabel(frame_2);
        label_54->setObjectName("label_54");

        _20->addWidget(label_54, 1, 0, 1, 1);

        spacerItem4 = new QSpacerItem(171, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _20->addItem(spacerItem4, 2, 3, 1, 2);

        fc_boundary_layer = new lay::LayerSelectionComboBox(frame_2);
        fc_boundary_layer->setObjectName("fc_boundary_layer");
        sizePolicy1.setHeightForWidth(fc_boundary_layer->sizePolicy().hasHeightForWidth());
        fc_boundary_layer->setSizePolicy(sizePolicy1);
        fc_boundary_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _20->addWidget(fc_boundary_layer, 2, 1, 1, 1);

        fill_cell_le = new QLineEdit(frame_2);
        fill_cell_le->setObjectName("fill_cell_le");

        _20->addWidget(fill_cell_le, 0, 1, 1, 3);

        label_42 = new QLabel(frame_2);
        label_42->setObjectName("label_42");

        _20->addWidget(label_42, 2, 2, 1, 1);

        label_53 = new QLabel(frame_2);
        label_53->setObjectName("label_53");
        label_53->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        _20->addWidget(label_53, 3, 0, 1, 1);

        label_52 = new QLabel(frame_2);
        label_52->setObjectName("label_52");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy3);

        _20->addWidget(label_52, 2, 0, 1, 1);

        label_55 = new QLabel(frame_2);
        label_55->setObjectName("label_55");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy4);

        _20->addWidget(label_55, 0, 0, 1, 1);

        fill_margin_le = new QLineEdit(frame_2);
        fill_margin_le->setObjectName("fill_margin_le");
        sizePolicy.setHeightForWidth(fill_margin_le->sizePolicy().hasHeightForWidth());
        fill_margin_le->setSizePolicy(sizePolicy);

        _20->addWidget(fill_margin_le, 1, 1, 1, 1);

        spacerItem5 = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _20->addItem(spacerItem5, 1, 3, 1, 2);

        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_8);
        gridLayout_3->setObjectName("gridLayout_3");
        row_le = new QLineEdit(frame_8);
        row_le->setObjectName("row_le");

        gridLayout_3->addWidget(row_le, 0, 1, 1, 1);

        label_47 = new QLabel(frame_8);
        label_47->setObjectName("label_47");

        gridLayout_3->addWidget(label_47, 0, 0, 1, 1);

        label_49 = new QLabel(frame_8);
        label_49->setObjectName("label_49");

        gridLayout_3->addWidget(label_49, 0, 2, 1, 1);

        label_50 = new QLabel(frame_8);
        label_50->setObjectName("label_50");

        gridLayout_3->addWidget(label_50, 0, 5, 1, 1);

        label_43 = new QLabel(frame_8);
        label_43->setObjectName("label_43");

        gridLayout_3->addWidget(label_43, 0, 3, 1, 1);

        label_44 = new QLabel(frame_8);
        label_44->setObjectName("label_44");
        label_44->setWordWrap(true);

        gridLayout_3->addWidget(label_44, 1, 0, 1, 7);

        column_le = new QLineEdit(frame_8);
        column_le->setObjectName("column_le");

        gridLayout_3->addWidget(column_le, 0, 4, 1, 1);


        _20->addWidget(frame_8, 3, 1, 1, 4);

        choose_fc_pb = new QToolButton(frame_2);
        choose_fc_pb->setObjectName("choose_fc_pb");

        _20->addWidget(choose_fc_pb, 0, 4, 1, 1);


        verticalLayout_2->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName("frame_4");
        _21 = new QVBoxLayout(frame_4);
        _21->setSpacing(6);
        _21->setObjectName("_21");
        _21->setContentsMargins(0, 0, 0, 0);
        enhanced_cb = new QCheckBox(frame_4);
        enhanced_cb->setObjectName("enhanced_cb");

        _21->addWidget(enhanced_cb);

        second_order_fill_cb = new QGroupBox(frame_4);
        second_order_fill_cb->setObjectName("second_order_fill_cb");
        second_order_fill_cb->setCheckable(true);
        second_order_fill_cb->setChecked(false);
        _22 = new QGridLayout(second_order_fill_cb);
        _22->setSpacing(6);
        _22->setObjectName("_22");
        _22->setContentsMargins(9, 9, 9, 9);
        label_60 = new QLabel(second_order_fill_cb);
        label_60->setObjectName("label_60");

        _22->addWidget(label_60, 1, 2, 1, 1);

        fill_cell_2nd_le = new QLineEdit(second_order_fill_cb);
        fill_cell_2nd_le->setObjectName("fill_cell_2nd_le");

        _22->addWidget(fill_cell_2nd_le, 0, 1, 1, 3);

        fill2_margin_le = new QLineEdit(second_order_fill_cb);
        fill2_margin_le->setObjectName("fill2_margin_le");
        sizePolicy.setHeightForWidth(fill2_margin_le->sizePolicy().hasHeightForWidth());
        fill2_margin_le->setSizePolicy(sizePolicy);

        _22->addWidget(fill2_margin_le, 1, 1, 1, 1);

        choose_fc_2nd_pb = new QToolButton(second_order_fill_cb);
        choose_fc_2nd_pb->setObjectName("choose_fc_2nd_pb");

        _22->addWidget(choose_fc_2nd_pb, 0, 4, 1, 1);

        spacerItem6 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _22->addItem(spacerItem6, 1, 3, 1, 1);

        label_57 = new QLabel(second_order_fill_cb);
        label_57->setObjectName("label_57");

        _22->addWidget(label_57, 1, 0, 1, 1);

        label_59 = new QLabel(second_order_fill_cb);
        label_59->setObjectName("label_59");
        sizePolicy4.setHeightForWidth(label_59->sizePolicy().hasHeightForWidth());
        label_59->setSizePolicy(sizePolicy4);

        _22->addWidget(label_59, 0, 0, 1, 1);

        label_58 = new QLabel(second_order_fill_cb);
        label_58->setObjectName("label_58");
        label_58->setWordWrap(true);

        _22->addWidget(label_58, 3, 0, 1, 5);

        label_56 = new QLabel(second_order_fill_cb);
        label_56->setObjectName("label_56");
        label_56->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        _22->addWidget(label_56, 2, 0, 1, 1);

        frame_9 = new QFrame(second_order_fill_cb);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_9);
        gridLayout_4->setObjectName("gridLayout_4");
        label_64 = new QLabel(frame_9);
        label_64->setObjectName("label_64");

        gridLayout_4->addWidget(label_64, 0, 0, 1, 1);

        label_67 = new QLabel(frame_9);
        label_67->setObjectName("label_67");

        gridLayout_4->addWidget(label_67, 0, 2, 1, 1);

        label_68 = new QLabel(frame_9);
        label_68->setObjectName("label_68");

        gridLayout_4->addWidget(label_68, 0, 5, 1, 1);

        label_66 = new QLabel(frame_9);
        label_66->setObjectName("label_66");
        label_66->setWordWrap(true);

        gridLayout_4->addWidget(label_66, 1, 0, 1, 7);

        row_2nd_le = new QLineEdit(frame_9);
        row_2nd_le->setObjectName("row_2nd_le");

        gridLayout_4->addWidget(row_2nd_le, 0, 1, 1, 1);

        label_61 = new QLabel(frame_9);
        label_61->setObjectName("label_61");

        gridLayout_4->addWidget(label_61, 0, 3, 1, 1);

        column_2nd_le = new QLineEdit(frame_9);
        column_2nd_le->setObjectName("column_2nd_le");

        gridLayout_4->addWidget(column_2nd_le, 0, 4, 1, 1);


        _22->addWidget(frame_9, 2, 1, 1, 4);


        _21->addWidget(second_order_fill_cb);


        verticalLayout_3->addWidget(frame_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        QWidget::setTabOrder(tabWidget, fill_area_cbx);
        QWidget::setTabOrder(fill_area_cbx, cb_layer);
        QWidget::setTabOrder(cb_layer, le_x1);
        QWidget::setTabOrder(le_x1, le_y1);
        QWidget::setTabOrder(le_y1, le_x2);
        QWidget::setTabOrder(le_x2, le_y2);
        QWidget::setTabOrder(le_y2, distance_le);
        QWidget::setTabOrder(distance_le, layer_spec_cbx);
        QWidget::setTabOrder(layer_spec_cbx, exclude_le);
        QWidget::setTabOrder(exclude_le, fill_cell_le);
        QWidget::setTabOrder(fill_cell_le, choose_fc_pb);
        QWidget::setTabOrder(choose_fc_pb, fill_margin_le);
        QWidget::setTabOrder(fill_margin_le, fc_boundary_layer);
        QWidget::setTabOrder(fc_boundary_layer, row_le);
        QWidget::setTabOrder(row_le, column_le);
        QWidget::setTabOrder(column_le, enhanced_cb);
        QWidget::setTabOrder(enhanced_cb, second_order_fill_cb);
        QWidget::setTabOrder(second_order_fill_cb, fill_cell_2nd_le);
        QWidget::setTabOrder(fill_cell_2nd_le, choose_fc_2nd_pb);
        QWidget::setTabOrder(choose_fc_2nd_pb, fill2_margin_le);
        QWidget::setTabOrder(fill2_margin_le, row_2nd_le);
        QWidget::setTabOrder(row_2nd_le, column_2nd_le);

        retranslateUi(FillDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, FillDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, FillDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);
        fill_area_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FillDialog);
    } // setupUi

    void retranslateUi(QDialog *FillDialog)
    {
        FillDialog->setWindowTitle(QCoreApplication::translate("FillDialog", "Fill Tool", nullptr));
        fill_area_cbx->setItemText(0, QCoreApplication::translate("FillDialog", "All (whole cell)", nullptr));
        fill_area_cbx->setItemText(1, QCoreApplication::translate("FillDialog", "Shapes on layer ...", nullptr));
        fill_area_cbx->setItemText(2, QCoreApplication::translate("FillDialog", "Selected shapes", nullptr));
        fill_area_cbx->setItemText(3, QCoreApplication::translate("FillDialog", "Single box with ...", nullptr));
        fill_area_cbx->setItemText(4, QCoreApplication::translate("FillDialog", "Ruler bounding boxes", nullptr));

#if QT_CONFIG(tooltip)
        fill_area_cbx->setToolTip(QCoreApplication::translate("FillDialog", "Select how the region to fill is specified.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_37->setText(QCoreApplication::translate("FillDialog", "Keep distance to border of fill area of", nullptr));
#if QT_CONFIG(tooltip)
        distance_le->setToolTip(QCoreApplication::translate("FillDialog", "Leave empty for no distance. Otherwise enter a distance in micron (can be anisotropic in the form \"dx,dy\")", nullptr));
#endif // QT_CONFIG(tooltip)
        label_38->setText(QCoreApplication::translate("FillDialog", "\302\265m", nullptr));
        grp_box1_2->setTitle(QCoreApplication::translate("FillDialog", "Box Boundaries", nullptr));
        label_31->setText(QCoreApplication::translate("FillDialog", "y =", nullptr));
        label_34->setText(QCoreApplication::translate("FillDialog", "1st corner", nullptr));
        label_36->setText(QCoreApplication::translate("FillDialog", "y =", nullptr));
        label_35->setText(QCoreApplication::translate("FillDialog", "x =", nullptr));
        label_32->setText(QCoreApplication::translate("FillDialog", "2nd corner", nullptr));
        label_33->setText(QCoreApplication::translate("FillDialog", "x =", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FillDialog", "Fill Area", nullptr));
#if QT_CONFIG(tooltip)
        exclude_le->setToolTip(QCoreApplication::translate("FillDialog", "Leave empty for no distance. Otherwise enter a distance in micron (can be anisotropic in the form \"dx,dy\")", nullptr));
#endif // QT_CONFIG(tooltip)
        label_40->setText(QCoreApplication::translate("FillDialog", "\302\265m", nullptr));
        label_39->setText(QCoreApplication::translate("FillDialog", "Spacing around exclude areas", nullptr));
        layer_spec_cbx->setItemText(0, QCoreApplication::translate("FillDialog", "All layers", nullptr));
        layer_spec_cbx->setItemText(1, QCoreApplication::translate("FillDialog", "All visible layers", nullptr));
        layer_spec_cbx->setItemText(2, QCoreApplication::translate("FillDialog", "Selected layers", nullptr));
        layer_spec_cbx->setItemText(3, QCoreApplication::translate("FillDialog", "No exclude", nullptr));

#if QT_CONFIG(tooltip)
        layer_spec_cbx->setToolTip(QCoreApplication::translate("FillDialog", "The fill will not be generated over the areas specified by these layers", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FillDialog", "Exclude Areas", nullptr));
        label_41->setText(QCoreApplication::translate("FillDialog", "\302\265m (keep distance between fill cells unless stitched)", nullptr));
        label_54->setText(QCoreApplication::translate("FillDialog", "Fill cell margin   ", nullptr));
#if QT_CONFIG(tooltip)
        fc_boundary_layer->setToolTip(QCoreApplication::translate("FillDialog", "This layer defines the borders of the fill cell. The fill cells will be stiched seamlessly at this border", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fill_cell_le->setToolTip(QCoreApplication::translate("FillDialog", "Select the cell which will be used as tiling cell for the fill area", nullptr));
#endif // QT_CONFIG(tooltip)
        label_42->setText(QCoreApplication::translate("FillDialog", "(for aligning the fill cell and default tile raster)", nullptr));
        label_53->setText(QCoreApplication::translate("FillDialog", "Step vectors", nullptr));
        label_52->setText(QCoreApplication::translate("FillDialog", "Boundary layer   ", nullptr));
        label_55->setText(QCoreApplication::translate("FillDialog", "Fill cell         ", nullptr));
#if QT_CONFIG(tooltip)
        fill_margin_le->setToolTip(QCoreApplication::translate("FillDialog", "Leave empty for no distance. Otherwise enter a distance in micron (can be anisotropic in the form \"dx,dy\")", nullptr));
#endif // QT_CONFIG(tooltip)
        label_47->setText(QCoreApplication::translate("FillDialog", "Row", nullptr));
        label_49->setText(QCoreApplication::translate("FillDialog", "(dx, dy in \302\265m)   ", nullptr));
        label_50->setText(QCoreApplication::translate("FillDialog", "(dx, dy in \302\265m)", nullptr));
        label_43->setText(QCoreApplication::translate("FillDialog", "Column", nullptr));
        label_44->setText(QCoreApplication::translate("FillDialog", "By default, the step vectors are given by the bounding box width (row dx) and height (column dy) of the fill cell or the boundary layer - if one is given.", nullptr));
        choose_fc_pb->setText(QCoreApplication::translate("FillDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("FillDialog", "Fill Cell", nullptr));
        enhanced_cb->setText(QCoreApplication::translate("FillDialog", "Enhanced fill (leave fixed raster to enhance fill of small regions)", nullptr));
        second_order_fill_cb->setTitle(QCoreApplication::translate("FillDialog", "Second-order fill cell for remaining regions", nullptr));
        label_60->setText(QCoreApplication::translate("FillDialog", "\302\265m (keep distance between fill cells unless stitched)", nullptr));
#if QT_CONFIG(tooltip)
        fill_cell_2nd_le->setToolTip(QCoreApplication::translate("FillDialog", "Specify the fill cell for the secondary fill analogous to the primary fill cell", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fill2_margin_le->setToolTip(QCoreApplication::translate("FillDialog", "Leave empty for no distance. Otherwise enter a distance in micron (can be anisotropic in the form \"dx,dy\")", nullptr));
#endif // QT_CONFIG(tooltip)
        choose_fc_2nd_pb->setText(QCoreApplication::translate("FillDialog", "...", nullptr));
        label_57->setText(QCoreApplication::translate("FillDialog", "Fill cell margin   ", nullptr));
        label_59->setText(QCoreApplication::translate("FillDialog", "Fill cell         ", nullptr));
        label_58->setText(QCoreApplication::translate("FillDialog", "The second order fill cell is used to fill space remaining from the first fill step. Thus, the second order fill cell must be smaller than the first order fill cell. The boundary layer must be the same for the second order fill cell.", nullptr));
        label_56->setText(QCoreApplication::translate("FillDialog", "Step vectors", nullptr));
        label_64->setText(QCoreApplication::translate("FillDialog", "Row", nullptr));
        label_67->setText(QCoreApplication::translate("FillDialog", "(dx, dy in \302\265m)   ", nullptr));
        label_68->setText(QCoreApplication::translate("FillDialog", "(dx, dy in \302\265m)   ", nullptr));
        label_66->setText(QCoreApplication::translate("FillDialog", "By default, the step vectors are given by the bounding box width (row dx) and height (column dy) of the fill cell or the boundary layer - if one is given.", nullptr));
        label_61->setText(QCoreApplication::translate("FillDialog", "Column", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("FillDialog", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FillDialog: public Ui_FillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLDIALOG_H
