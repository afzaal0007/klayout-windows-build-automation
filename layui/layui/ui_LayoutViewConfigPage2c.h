/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage2c.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE2C_H
#define UI_LAYOUTVIEWCONFIGPAGE2C_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage2c
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *vs_lbl;
    QLabel *label;
    lay::ColorButton *color_pb;
    QLabel *textLabel1_2;
    QLabel *label_5;
    QSpinBox *lw_spinbx;
    QSpacerItem *spacerItem;
    lay::DitherPatternSelectionButton *stipple_pb;
    QLabel *textLabel2;
    QSpinBox *vs_spinbx;
    QLabel *textLabel3_2;
    QSpacerItem *spacerItem1;
    QCheckBox *halo_cb;
    QLabel *label_9;
    lay::LineStyleSelectionButton *line_style_pb;
    QSpacerItem *spacerItem2;
    QGroupBox *transient_mode_gb;
    QGridLayout *gridLayout_2;
    QLabel *textLabel3_3;
    lay::ColorButton *transient_color_pb;
    QSpacerItem *spacer_2;
    QLabel *textLabel1_3;
    QSpinBox *transient_lw_spinbx;
    QLabel *textLabel2_2;
    QSpacerItem *spacer;
    QLabel *label_8;
    lay::DitherPatternSelectionButton *transient_stipple_pb;
    QLabel *vs_lbl_2;
    QSpinBox *transient_vs_spinbx;
    QLabel *label_7;
    QCheckBox *transient_halo_cb;
    lay::LineStyleSelectionButton *transient_line_style_pb;
    QLabel *label_10;
    QCheckBox *text_point_mode_cb;
    QCheckBox *sel_inside_pcells_cb;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpinBox *search_range_spinbx;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *search_range_box_spinbx;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QFrame *LayoutViewConfigPage2c)
    {
        if (LayoutViewConfigPage2c->objectName().isEmpty())
            LayoutViewConfigPage2c->setObjectName("LayoutViewConfigPage2c");
        LayoutViewConfigPage2c->resize(648, 497);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage2c);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(LayoutViewConfigPage2c);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        vs_lbl = new QLabel(groupBox_2);
        vs_lbl->setObjectName("vs_lbl");

        gridLayout->addWidget(vs_lbl, 1, 3, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        color_pb = new lay::ColorButton(groupBox_2);
        color_pb->setObjectName("color_pb");

        gridLayout->addWidget(color_pb, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBox_2);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        lw_spinbx = new QSpinBox(groupBox_2);
        lw_spinbx->setObjectName("lw_spinbx");

        gridLayout->addWidget(lw_spinbx, 0, 4, 1, 1);

        spacerItem = new QSpacerItem(41, 31, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        stipple_pb = new lay::DitherPatternSelectionButton(groupBox_2);
        stipple_pb->setObjectName("stipple_pb");

        gridLayout->addWidget(stipple_pb, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupBox_2);
        textLabel2->setObjectName("textLabel2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel2, 0, 5, 1, 1);

        vs_spinbx = new QSpinBox(groupBox_2);
        vs_spinbx->setObjectName("vs_spinbx");

        gridLayout->addWidget(vs_spinbx, 1, 4, 1, 1);

        textLabel3_2 = new QLabel(groupBox_2);
        textLabel3_2->setObjectName("textLabel3_2");

        gridLayout->addWidget(textLabel3_2, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(71, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 6, 1, 1);

        halo_cb = new QCheckBox(groupBox_2);
        halo_cb->setObjectName("halo_cb");

        gridLayout->addWidget(halo_cb, 2, 3, 1, 4);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        line_style_pb = new lay::LineStyleSelectionButton(groupBox_2);
        line_style_pb->setObjectName("line_style_pb");

        gridLayout->addWidget(line_style_pb, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(561, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem2);

        transient_mode_gb = new QGroupBox(LayoutViewConfigPage2c);
        transient_mode_gb->setObjectName("transient_mode_gb");
        transient_mode_gb->setCheckable(true);
        transient_mode_gb->setChecked(false);
        gridLayout_2 = new QGridLayout(transient_mode_gb);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        textLabel3_3 = new QLabel(transient_mode_gb);
        textLabel3_3->setObjectName("textLabel3_3");

        gridLayout_2->addWidget(textLabel3_3, 0, 0, 1, 1);

        transient_color_pb = new lay::ColorButton(transient_mode_gb);
        transient_color_pb->setObjectName("transient_color_pb");

        gridLayout_2->addWidget(transient_color_pb, 0, 1, 1, 1);

        spacer_2 = new QSpacerItem(41, 31, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacer_2, 0, 2, 1, 1);

        textLabel1_3 = new QLabel(transient_mode_gb);
        textLabel1_3->setObjectName("textLabel1_3");

        gridLayout_2->addWidget(textLabel1_3, 0, 3, 1, 1);

        transient_lw_spinbx = new QSpinBox(transient_mode_gb);
        transient_lw_spinbx->setObjectName("transient_lw_spinbx");

        gridLayout_2->addWidget(transient_lw_spinbx, 0, 4, 1, 1);

        textLabel2_2 = new QLabel(transient_mode_gb);
        textLabel2_2->setObjectName("textLabel2_2");
        sizePolicy.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel2_2, 0, 5, 1, 1);

        spacer = new QSpacerItem(241, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacer, 0, 6, 1, 1);

        label_8 = new QLabel(transient_mode_gb);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        transient_stipple_pb = new lay::DitherPatternSelectionButton(transient_mode_gb);
        transient_stipple_pb->setObjectName("transient_stipple_pb");

        gridLayout_2->addWidget(transient_stipple_pb, 1, 1, 1, 1);

        vs_lbl_2 = new QLabel(transient_mode_gb);
        vs_lbl_2->setObjectName("vs_lbl_2");

        gridLayout_2->addWidget(vs_lbl_2, 1, 3, 1, 1);

        transient_vs_spinbx = new QSpinBox(transient_mode_gb);
        transient_vs_spinbx->setObjectName("transient_vs_spinbx");

        gridLayout_2->addWidget(transient_vs_spinbx, 1, 4, 1, 1);

        label_7 = new QLabel(transient_mode_gb);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 5, 1, 1);

        transient_halo_cb = new QCheckBox(transient_mode_gb);
        transient_halo_cb->setObjectName("transient_halo_cb");

        gridLayout_2->addWidget(transient_halo_cb, 2, 3, 1, 4);

        transient_line_style_pb = new lay::LineStyleSelectionButton(transient_mode_gb);
        transient_line_style_pb->setObjectName("transient_line_style_pb");

        gridLayout_2->addWidget(transient_line_style_pb, 2, 1, 1, 1);

        label_10 = new QLabel(transient_mode_gb);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);


        vboxLayout->addWidget(transient_mode_gb);

        text_point_mode_cb = new QCheckBox(LayoutViewConfigPage2c);
        text_point_mode_cb->setObjectName("text_point_mode_cb");

        vboxLayout->addWidget(text_point_mode_cb);

        sel_inside_pcells_cb = new QCheckBox(LayoutViewConfigPage2c);
        sel_inside_pcells_cb->setObjectName("sel_inside_pcells_cb");

        vboxLayout->addWidget(sel_inside_pcells_cb);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer);

        frame = new QFrame(LayoutViewConfigPage2c);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 0, 3, 1, 1);

        search_range_spinbx = new QSpinBox(frame);
        search_range_spinbx->setObjectName("search_range_spinbx");
        search_range_spinbx->setMaximum(9999);

        gridLayout1->addWidget(search_range_spinbx, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        search_range_box_spinbx = new QSpinBox(frame);
        search_range_box_spinbx->setObjectName("search_range_box_spinbx");
        search_range_box_spinbx->setMaximum(9999);

        gridLayout1->addWidget(search_range_box_spinbx, 1, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 1, 2, 1, 1);


        vboxLayout->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_2);

        QWidget::setTabOrder(color_pb, lw_spinbx);
        QWidget::setTabOrder(lw_spinbx, vs_spinbx);

        retranslateUi(LayoutViewConfigPage2c);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage2c);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage2c)
    {
        LayoutViewConfigPage2c->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage2c", "Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LayoutViewConfigPage2c", "How the selection is shown", nullptr));
        vs_lbl->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Vertex size", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker fill", nullptr));
#if QT_CONFIG(tooltip)
        color_pb->setToolTip(QCoreApplication::translate("LayoutViewConfigPage2c", "The color in which the rulers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        color_pb->setText(QString());
        textLabel1_2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Line width", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
        stipple_pb->setText(QString());
        textLabel2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
        textLabel3_2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker color", nullptr));
        halo_cb->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "With halo", nullptr));
        label_9->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker line style", nullptr));
        line_style_pb->setText(QString());
        transient_mode_gb->setTitle(QCoreApplication::translate("LayoutViewConfigPage2c", "Transient mode (tracking of selectable objects under the mouse)", nullptr));
        textLabel3_3->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker color", nullptr));
#if QT_CONFIG(tooltip)
        transient_color_pb->setToolTip(QCoreApplication::translate("LayoutViewConfigPage2c", "The color in which the rulers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        transient_color_pb->setText(QString());
        textLabel1_3->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Line width", nullptr));
        textLabel2_2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
        label_8->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker fill", nullptr));
        transient_stipple_pb->setText(QString());
        vs_lbl_2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Vertex size", nullptr));
        label_7->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
        transient_halo_cb->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "With halo", nullptr));
        transient_line_style_pb->setText(QString());
        label_10->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Marker line style", nullptr));
        text_point_mode_cb->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Texts are points (active area is origin)", nullptr));
        sel_inside_pcells_cb->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "PCell content is selectable (Caution: PCell recomputation may conflict with edits)", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Capture range to mouse cursor (single click)", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "Capture range to mouse cursor (box)", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutViewConfigPage2c", "pixel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage2c: public Ui_LayoutViewConfigPage2c {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE2C_H
