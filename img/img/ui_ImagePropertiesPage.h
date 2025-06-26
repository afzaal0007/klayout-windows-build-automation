/********************************************************************************
** Form generated from reading UI file 'ImagePropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPROPERTIESPAGE_H
#define UI_IMAGEPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "imgWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_ImagePropertiesPage
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *browse_pb;
    QLabel *label_12;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QLabel *label_22;
    QLineEdit *persp_tx_le;
    QLabel *label_25;
    QLineEdit *shear_le;
    QLabel *label_38;
    QLineEdit *x_offset_le;
    QLineEdit *height_le;
    QLabel *label_43;
    QLineEdit *y_offset_le;
    QLineEdit *width_le;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_41;
    QLabel *label_24;
    QLabel *label_29;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_28;
    QLabel *label_27;
    QLabel *label_39;
    QCheckBox *mirror_cbx;
    QLabel *label_21;
    QLineEdit *angle_le;
    QLabel *label_40;
    QSpacerItem *spacerItem;
    QLabel *label_26;
    QLabel *label_30;
    QSpacerItem *spacerItem1;
    QLineEdit *persp_ty_le;
    QSpacerItem *spacerItem2;
    QLabel *label_42;
    QLabel *label_44;
    QPushButton *define_landmarks_pb;
    QLabel *label_45;
    QLabel *label_18;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem3;
    QLabel *file_name_lbl;
    QSpacerItem *spacerItem4;
    QPushButton *save_pb;
    QLabel *file_info_lbl;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_6;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QLineEdit *from_le;
    QLabel *label_3;
    QLineEdit *to_le;
    QSpacerItem *spacerItem5;
    QTabWidget *data_mapping_tab_widget;
    QWidget *false_color_tab;
    QVBoxLayout *vboxLayout2;
    img::ColorBar *false_color_control;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout2;
    QLabel *label_37;
    QLineEdit *value_le;
    QSpacerItem *spacerItem6;
    QLabel *label_36;
    img::TwoColorWidget *colors;
    QWidget *tab;
    QGridLayout *gridLayout2;
    QSpinBox *brightness_sb;
    QLabel *label_9;
    QLabel *label_14;
    QSpacerItem *spacerItem7;
    QSlider *gamma_slider;
    QLabel *label_6;
    QLabel *label_11;
    QSlider *contrast_slider;
    QSlider *brightness_slider;
    QLabel *label_7;
    QSpinBox *contrast_sb;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *spacerItem8;
    QDoubleSpinBox *gamma_sb;
    QWidget *tab_2;
    QGridLayout *gridLayout3;
    QDoubleSpinBox *r_sb;
    QLabel *label_31;
    QLabel *label_32;
    QSpacerItem *spacerItem9;
    QSlider *b_slider;
    QLabel *label_19;
    QLabel *label_34;
    QLabel *label_16;
    QSlider *g_slider;
    QSlider *r_slider;
    QLabel *label_33;
    QLabel *label_15;
    QLabel *label_17;
    QDoubleSpinBox *g_sb;
    QDoubleSpinBox *b_sb;
    QLabel *label_35;
    QSpacerItem *spacerItem10;
    QFrame *frame_5;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem11;
    QPushButton *reset_pb;
    QSpacerItem *spacerItem12;

    void setupUi(QWidget *ImagePropertiesPage)
    {
        if (ImagePropertiesPage->objectName().isEmpty())
            ImagePropertiesPage->setObjectName("ImagePropertiesPage");
        ImagePropertiesPage->resize(607, 642);
        vboxLayout = new QVBoxLayout(ImagePropertiesPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(ImagePropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        browse_pb = new QPushButton(frame);
        browse_pb->setObjectName("browse_pb");

        gridLayout->addWidget(browse_pb, 1, 2, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 0, 0, 1, 3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frame_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");

        gridLayout1->addWidget(label_22, 1, 4, 1, 1);

        persp_tx_le = new QLineEdit(frame_2);
        persp_tx_le->setObjectName("persp_tx_le");

        gridLayout1->addWidget(persp_tx_le, 5, 2, 1, 1);

        label_25 = new QLabel(frame_2);
        label_25->setObjectName("label_25");
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_25, 2, 1, 1, 1);

        shear_le = new QLineEdit(frame_2);
        shear_le->setObjectName("shear_le");

        gridLayout1->addWidget(shear_le, 4, 2, 1, 1);

        label_38 = new QLabel(frame_2);
        label_38->setObjectName("label_38");

        gridLayout1->addWidget(label_38, 5, 0, 1, 1);

        x_offset_le = new QLineEdit(frame_2);
        x_offset_le->setObjectName("x_offset_le");

        gridLayout1->addWidget(x_offset_le, 2, 2, 1, 1);

        height_le = new QLineEdit(frame_2);
        height_le->setObjectName("height_le");

        gridLayout1->addWidget(height_le, 1, 5, 1, 1);

        label_43 = new QLabel(frame_2);
        label_43->setObjectName("label_43");

        gridLayout1->addWidget(label_43, 5, 6, 1, 1);

        y_offset_le = new QLineEdit(frame_2);
        y_offset_le->setObjectName("y_offset_le");

        gridLayout1->addWidget(y_offset_le, 2, 5, 1, 1);

        width_le = new QLineEdit(frame_2);
        width_le->setObjectName("width_le");

        gridLayout1->addWidget(width_le, 1, 2, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 4, 0, 1, 2);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");

        gridLayout1->addWidget(label_13, 1, 0, 1, 1);

        label_41 = new QLabel(frame_2);
        label_41->setObjectName("label_41");

        gridLayout1->addWidget(label_41, 5, 3, 1, 1);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName("label_24");

        gridLayout1->addWidget(label_24, 2, 6, 1, 1);

        label_29 = new QLabel(frame_2);
        label_29->setObjectName("label_29");

        gridLayout1->addWidget(label_29, 3, 0, 1, 2);

        label_23 = new QLabel(frame_2);
        label_23->setObjectName("label_23");

        gridLayout1->addWidget(label_23, 1, 6, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_20, 1, 1, 1, 1);

        label_28 = new QLabel(frame_2);
        label_28->setObjectName("label_28");

        gridLayout1->addWidget(label_28, 2, 3, 1, 1);

        label_27 = new QLabel(frame_2);
        label_27->setObjectName("label_27");

        gridLayout1->addWidget(label_27, 2, 0, 1, 1);

        label_39 = new QLabel(frame_2);
        label_39->setObjectName("label_39");

        gridLayout1->addWidget(label_39, 5, 1, 1, 1);

        mirror_cbx = new QCheckBox(frame_2);
        mirror_cbx->setObjectName("mirror_cbx");

        gridLayout1->addWidget(mirror_cbx, 3, 5, 1, 2);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");

        gridLayout1->addWidget(label_21, 1, 3, 1, 1);

        angle_le = new QLineEdit(frame_2);
        angle_le->setObjectName("angle_le");

        gridLayout1->addWidget(angle_le, 3, 2, 1, 1);

        label_40 = new QLabel(frame_2);
        label_40->setObjectName("label_40");

        gridLayout1->addWidget(label_40, 4, 3, 1, 1);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 6, 0, 1, 7);

        label_26 = new QLabel(frame_2);
        label_26->setObjectName("label_26");

        gridLayout1->addWidget(label_26, 2, 4, 1, 1);

        label_30 = new QLabel(frame_2);
        label_30->setObjectName("label_30");

        gridLayout1->addWidget(label_30, 3, 3, 1, 1);

        spacerItem1 = new QSpacerItem(507, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem1, 0, 0, 1, 7);

        persp_ty_le = new QLineEdit(frame_2);
        persp_ty_le->setObjectName("persp_ty_le");

        gridLayout1->addWidget(persp_ty_le, 5, 5, 1, 1);

        spacerItem2 = new QSpacerItem(507, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem2, 8, 0, 1, 7);

        label_42 = new QLabel(frame_2);
        label_42->setObjectName("label_42");

        gridLayout1->addWidget(label_42, 5, 4, 1, 1);

        label_44 = new QLabel(frame_2);
        label_44->setObjectName("label_44");

        gridLayout1->addWidget(label_44, 7, 0, 1, 2);

        define_landmarks_pb = new QPushButton(frame_2);
        define_landmarks_pb->setObjectName("define_landmarks_pb");

        gridLayout1->addWidget(define_landmarks_pb, 7, 2, 1, 1);

        label_45 = new QLabel(frame_2);
        label_45->setObjectName("label_45");

        gridLayout1->addWidget(label_45, 7, 3, 1, 4);


        gridLayout->addWidget(frame_2, 4, 0, 1, 3);

        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");
        label_18->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        file_name_lbl = new QLabel(frame_3);
        file_name_lbl->setObjectName("file_name_lbl");
        sizePolicy1.setHeightForWidth(file_name_lbl->sizePolicy().hasHeightForWidth());
        file_name_lbl->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(file_name_lbl);

        spacerItem4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        gridLayout->addWidget(frame_3, 1, 1, 1, 1);

        save_pb = new QPushButton(frame);
        save_pb->setObjectName("save_pb");

        gridLayout->addWidget(save_pb, 2, 2, 1, 1);

        file_info_lbl = new QLabel(frame);
        file_info_lbl->setObjectName("file_info_lbl");

        gridLayout->addWidget(file_info_lbl, 2, 1, 1, 1);


        vboxLayout->addWidget(frame);

        groupBox = new QGroupBox(ImagePropertiesPage);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame_6 = new QFrame(groupBox);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_6);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_6);
        label->setObjectName("label");

        hboxLayout1->addWidget(label);

        from_le = new QLineEdit(frame_6);
        from_le->setObjectName("from_le");

        hboxLayout1->addWidget(from_le);

        label_3 = new QLabel(frame_6);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(label_3);

        to_le = new QLineEdit(frame_6);
        to_le->setObjectName("to_le");

        hboxLayout1->addWidget(to_le);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        vboxLayout1->addWidget(frame_6);

        data_mapping_tab_widget = new QTabWidget(groupBox);
        data_mapping_tab_widget->setObjectName("data_mapping_tab_widget");
        false_color_tab = new QWidget();
        false_color_tab->setObjectName("false_color_tab");
        vboxLayout2 = new QVBoxLayout(false_color_tab);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        false_color_control = new img::ColorBar(false_color_tab);
        false_color_control->setObjectName("false_color_control");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(false_color_control->sizePolicy().hasHeightForWidth());
        false_color_control->setSizePolicy(sizePolicy2);
        false_color_control->setContextMenuPolicy(Qt::ActionsContextMenu);

        vboxLayout2->addWidget(false_color_control);

        frame_4 = new QFrame(false_color_tab);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_4);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(frame_4);
        label_37->setObjectName("label_37");

        hboxLayout2->addWidget(label_37);

        value_le = new QLineEdit(frame_4);
        value_le->setObjectName("value_le");
        sizePolicy.setHeightForWidth(value_le->sizePolicy().hasHeightForWidth());
        value_le->setSizePolicy(sizePolicy);

        hboxLayout2->addWidget(value_le);

        spacerItem6 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        label_36 = new QLabel(frame_4);
        label_36->setObjectName("label_36");

        hboxLayout2->addWidget(label_36);

        colors = new img::TwoColorWidget(frame_4);
        colors->setObjectName("colors");
        colors->setFrameShape(QFrame::NoFrame);
        colors->setFrameShadow(QFrame::Raised);

        hboxLayout2->addWidget(colors);


        vboxLayout2->addWidget(frame_4);

        data_mapping_tab_widget->addTab(false_color_tab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout2 = new QGridLayout(tab);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        brightness_sb = new QSpinBox(tab);
        brightness_sb->setObjectName("brightness_sb");
        brightness_sb->setMinimum(-100);
        brightness_sb->setMaximum(100);
        brightness_sb->setSingleStep(1);

        gridLayout2->addWidget(brightness_sb, 0, 6, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");

        gridLayout2->addWidget(label_9, 1, 4, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");

        gridLayout2->addWidget(label_14, 2, 4, 1, 1);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem7, 1, 1, 1, 1);

        gamma_slider = new QSlider(tab);
        gamma_slider->setObjectName("gamma_slider");
        gamma_slider->setMaximum(100);
        gamma_slider->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(gamma_slider, 2, 3, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");

        gridLayout2->addWidget(label_6, 0, 4, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(label_11, 2, 2, 1, 1);

        contrast_slider = new QSlider(tab);
        contrast_slider->setObjectName("contrast_slider");
        contrast_slider->setMinimum(-100);
        contrast_slider->setMaximum(100);
        contrast_slider->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(contrast_slider, 1, 3, 1, 1);

        brightness_slider = new QSlider(tab);
        brightness_slider->setObjectName("brightness_slider");
        brightness_slider->setMinimum(-100);
        brightness_slider->setMaximum(100);
        brightness_slider->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(brightness_slider, 0, 3, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");

        gridLayout2->addWidget(label_7, 1, 0, 1, 1);

        contrast_sb = new QSpinBox(tab);
        contrast_sb->setObjectName("contrast_sb");
        contrast_sb->setMinimum(-100);
        contrast_sb->setMaximum(100);

        gridLayout2->addWidget(contrast_sb, 1, 6, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(label_8, 1, 2, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");

        gridLayout2->addWidget(label_10, 2, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(label_5, 0, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        gridLayout2->addWidget(label_4, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem8, 1, 5, 1, 1);

        gamma_sb = new QDoubleSpinBox(tab);
        gamma_sb->setObjectName("gamma_sb");
        gamma_sb->setMinimum(0.000000000000000);
        gamma_sb->setMaximum(3.000000000000000);
        gamma_sb->setSingleStep(0.010000000000000);

        gridLayout2->addWidget(gamma_sb, 2, 6, 1, 1);

        data_mapping_tab_widget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout3 = new QGridLayout(tab_2);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        r_sb = new QDoubleSpinBox(tab_2);
        r_sb->setObjectName("r_sb");
        r_sb->setMaximum(2.000000000000000);
        r_sb->setSingleStep(0.010000000000000);

        gridLayout3->addWidget(r_sb, 0, 6, 1, 1);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName("label_31");

        gridLayout3->addWidget(label_31, 1, 2, 1, 1);

        label_32 = new QLabel(tab_2);
        label_32->setObjectName("label_32");

        gridLayout3->addWidget(label_32, 1, 4, 1, 1);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem9, 1, 1, 1, 1);

        b_slider = new QSlider(tab_2);
        b_slider->setObjectName("b_slider");
        b_slider->setMaximum(100);
        b_slider->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(b_slider, 2, 3, 1, 1);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName("label_19");

        gridLayout3->addWidget(label_19, 1, 0, 1, 1);

        label_34 = new QLabel(tab_2);
        label_34->setObjectName("label_34");

        gridLayout3->addWidget(label_34, 2, 2, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");

        gridLayout3->addWidget(label_16, 0, 2, 1, 1);

        g_slider = new QSlider(tab_2);
        g_slider->setObjectName("g_slider");
        g_slider->setMaximum(100);
        g_slider->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(g_slider, 1, 3, 1, 1);

        r_slider = new QSlider(tab_2);
        r_slider->setObjectName("r_slider");
        r_slider->setMaximum(100);
        r_slider->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(r_slider, 0, 3, 1, 1);

        label_33 = new QLabel(tab_2);
        label_33->setObjectName("label_33");

        gridLayout3->addWidget(label_33, 2, 0, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");

        gridLayout3->addWidget(label_15, 0, 0, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName("label_17");

        gridLayout3->addWidget(label_17, 0, 4, 1, 1);

        g_sb = new QDoubleSpinBox(tab_2);
        g_sb->setObjectName("g_sb");
        g_sb->setMaximum(2.000000000000000);
        g_sb->setSingleStep(0.010000000000000);

        gridLayout3->addWidget(g_sb, 1, 6, 1, 1);

        b_sb = new QDoubleSpinBox(tab_2);
        b_sb->setObjectName("b_sb");
        b_sb->setMaximum(2.000000000000000);
        b_sb->setSingleStep(0.010000000000000);

        gridLayout3->addWidget(b_sb, 2, 6, 1, 1);

        label_35 = new QLabel(tab_2);
        label_35->setObjectName("label_35");

        gridLayout3->addWidget(label_35, 2, 4, 1, 1);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem10, 1, 5, 1, 1);

        data_mapping_tab_widget->addTab(tab_2, QString());

        vboxLayout1->addWidget(data_mapping_tab_widget);

        frame_5 = new QFrame(groupBox);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frame_5);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName("hboxLayout3");
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem11);

        reset_pb = new QPushButton(frame_5);
        reset_pb->setObjectName("reset_pb");

        hboxLayout3->addWidget(reset_pb);


        vboxLayout1->addWidget(frame_5);


        vboxLayout->addWidget(groupBox);

        spacerItem12 = new QSpacerItem(524, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem12);

        QWidget::setTabOrder(width_le, height_le);
        QWidget::setTabOrder(height_le, x_offset_le);
        QWidget::setTabOrder(x_offset_le, y_offset_le);
        QWidget::setTabOrder(y_offset_le, angle_le);
        QWidget::setTabOrder(angle_le, mirror_cbx);
        QWidget::setTabOrder(mirror_cbx, shear_le);
        QWidget::setTabOrder(shear_le, persp_tx_le);
        QWidget::setTabOrder(persp_tx_le, persp_ty_le);
        QWidget::setTabOrder(persp_ty_le, from_le);
        QWidget::setTabOrder(from_le, to_le);
        QWidget::setTabOrder(to_le, data_mapping_tab_widget);
        QWidget::setTabOrder(data_mapping_tab_widget, r_slider);
        QWidget::setTabOrder(r_slider, r_sb);
        QWidget::setTabOrder(r_sb, g_slider);
        QWidget::setTabOrder(g_slider, g_sb);
        QWidget::setTabOrder(g_sb, b_slider);
        QWidget::setTabOrder(b_slider, b_sb);
        QWidget::setTabOrder(b_sb, reset_pb);
        QWidget::setTabOrder(reset_pb, contrast_sb);
        QWidget::setTabOrder(contrast_sb, gamma_sb);
        QWidget::setTabOrder(gamma_sb, contrast_slider);
        QWidget::setTabOrder(contrast_slider, brightness_sb);
        QWidget::setTabOrder(brightness_sb, value_le);
        QWidget::setTabOrder(value_le, browse_pb);
        QWidget::setTabOrder(browse_pb, gamma_slider);
        QWidget::setTabOrder(gamma_slider, brightness_slider);

        retranslateUi(ImagePropertiesPage);

        data_mapping_tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ImagePropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *ImagePropertiesPage)
    {
        ImagePropertiesPage->setWindowTitle(QCoreApplication::translate("ImagePropertiesPage", "Form", nullptr));
        browse_pb->setText(QCoreApplication::translate("ImagePropertiesPage", "Browse", nullptr));
        label_12->setText(QCoreApplication::translate("ImagePropertiesPage", "Image Properties", nullptr));
        label_22->setText(QCoreApplication::translate("ImagePropertiesPage", "h = ", nullptr));
        label_25->setText(QCoreApplication::translate("ImagePropertiesPage", "x = ", nullptr));
        label_38->setText(QCoreApplication::translate("ImagePropertiesPage", "Perspective  ", nullptr));
        label_43->setText(QCoreApplication::translate("ImagePropertiesPage", "degree", nullptr));
        label_2->setText(QCoreApplication::translate("ImagePropertiesPage", "Shear angle", nullptr));
        label_13->setText(QCoreApplication::translate("ImagePropertiesPage", "Pixel Size    ", nullptr));
        label_41->setText(QCoreApplication::translate("ImagePropertiesPage", "degree", nullptr));
        label_24->setText(QCoreApplication::translate("ImagePropertiesPage", "micron", nullptr));
        label_29->setText(QCoreApplication::translate("ImagePropertiesPage", "Rotation angle", nullptr));
        label_23->setText(QCoreApplication::translate("ImagePropertiesPage", "micron", nullptr));
        label_20->setText(QCoreApplication::translate("ImagePropertiesPage", "w = ", nullptr));
        label_28->setText(QCoreApplication::translate("ImagePropertiesPage", "micron   ", nullptr));
        label_27->setText(QCoreApplication::translate("ImagePropertiesPage", "Center", nullptr));
        label_39->setText(QCoreApplication::translate("ImagePropertiesPage", "x =", nullptr));
        mirror_cbx->setText(QCoreApplication::translate("ImagePropertiesPage", "Mirrored (at X-axis)", nullptr));
        label_21->setText(QCoreApplication::translate("ImagePropertiesPage", "micron   ", nullptr));
        label_40->setText(QCoreApplication::translate("ImagePropertiesPage", "degree", nullptr));
        label_26->setText(QCoreApplication::translate("ImagePropertiesPage", "y = ", nullptr));
        label_30->setText(QCoreApplication::translate("ImagePropertiesPage", "degree", nullptr));
        label_42->setText(QCoreApplication::translate("ImagePropertiesPage", "y =", nullptr));
        label_44->setText(QCoreApplication::translate("ImagePropertiesPage", "Landmarks", nullptr));
        define_landmarks_pb->setText(QCoreApplication::translate("ImagePropertiesPage", "Define", nullptr));
        label_45->setText(QCoreApplication::translate("ImagePropertiesPage", "(use them to align the image with the layout)", nullptr));
        label_18->setText(QCoreApplication::translate("ImagePropertiesPage", "File    ", nullptr));
        file_name_lbl->setText(QCoreApplication::translate("ImagePropertiesPage", "<Filename>", nullptr));
        save_pb->setText(QCoreApplication::translate("ImagePropertiesPage", "Save As ...", nullptr));
        file_info_lbl->setText(QCoreApplication::translate("ImagePropertiesPage", "<File info>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImagePropertiesPage", "Data To Display", nullptr));
        label->setText(QCoreApplication::translate("ImagePropertiesPage", "Pixel value range   ", nullptr));
        label_3->setText(QCoreApplication::translate("ImagePropertiesPage", "... to", nullptr));
#if QT_CONFIG(tooltip)
        false_color_control->setToolTip(QCoreApplication::translate("ImagePropertiesPage", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Double-click to create a new node.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Press \"Delete\" to delete the selected node.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_37->setText(QCoreApplication::translate("ImagePropertiesPage", "Value", nullptr));
        label_36->setText(QCoreApplication::translate("ImagePropertiesPage", "Color", nullptr));
        data_mapping_tab_widget->setTabText(data_mapping_tab_widget->indexOf(false_color_tab), QCoreApplication::translate("ImagePropertiesPage", "Color Mapping", nullptr));
        label_9->setText(QCoreApplication::translate("ImagePropertiesPage", "100%", nullptr));
        label_14->setText(QCoreApplication::translate("ImagePropertiesPage", "3.0", nullptr));
        label_6->setText(QCoreApplication::translate("ImagePropertiesPage", "100%", nullptr));
        label_11->setText(QCoreApplication::translate("ImagePropertiesPage", "0.3", nullptr));
        label_7->setText(QCoreApplication::translate("ImagePropertiesPage", "Contrast", nullptr));
        label_8->setText(QCoreApplication::translate("ImagePropertiesPage", "-100%", nullptr));
        label_10->setText(QCoreApplication::translate("ImagePropertiesPage", "Gamma", nullptr));
        label_5->setText(QCoreApplication::translate("ImagePropertiesPage", "-100%", nullptr));
        label_4->setText(QCoreApplication::translate("ImagePropertiesPage", "Brightness", nullptr));
        data_mapping_tab_widget->setTabText(data_mapping_tab_widget->indexOf(tab), QCoreApplication::translate("ImagePropertiesPage", "Brightness / Contrast", nullptr));
        label_31->setText(QCoreApplication::translate("ImagePropertiesPage", "0", nullptr));
        label_32->setText(QCoreApplication::translate("ImagePropertiesPage", "x 2.0", nullptr));
        label_19->setText(QCoreApplication::translate("ImagePropertiesPage", "Green", nullptr));
        label_34->setText(QCoreApplication::translate("ImagePropertiesPage", "0", nullptr));
        label_16->setText(QCoreApplication::translate("ImagePropertiesPage", "0", nullptr));
        label_33->setText(QCoreApplication::translate("ImagePropertiesPage", "Blue", nullptr));
        label_15->setText(QCoreApplication::translate("ImagePropertiesPage", "Red", nullptr));
        label_17->setText(QCoreApplication::translate("ImagePropertiesPage", "x 2.0", nullptr));
        label_35->setText(QCoreApplication::translate("ImagePropertiesPage", "x 2.0", nullptr));
        data_mapping_tab_widget->setTabText(data_mapping_tab_widget->indexOf(tab_2), QCoreApplication::translate("ImagePropertiesPage", "RGB Channels", nullptr));
        reset_pb->setText(QCoreApplication::translate("ImagePropertiesPage", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImagePropertiesPage: public Ui_ImagePropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPROPERTIESPAGE_H
