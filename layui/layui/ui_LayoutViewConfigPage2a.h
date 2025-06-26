/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage2a.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE2A_H
#define UI_LAYOUTVIEWCONFIGPAGE2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage2a
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *cell_group;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QComboBox *cell_font_cb;
    QSpacerItem *spacerItem;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    lay::ColorButton *cell_box_color_pb;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QHBoxLayout *hboxLayout2;
    QLineEdit *cell_min_size_for_label_edit;
    QLabel *textLabel2_2;
    QSpacerItem *spacerItem2;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_3;
    QLabel *textLabel3;
    QSpacerItem *spacerItem3;
    QCheckBox *cell_xform_text_cbx;
    QGroupBox *pcell_gs_group;
    QGridLayout *gridLayout1;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *pcell_gs_vs;
    QSpinBox *pcell_gs_lw;
    QLabel *label_3;
    QLabel *label_2;
    lay::ColorButton *pcell_gs_color_pb;
    QLabel *label;

    void setupUi(QFrame *LayoutViewConfigPage2a)
    {
        if (LayoutViewConfigPage2a->objectName().isEmpty())
            LayoutViewConfigPage2a->setObjectName("LayoutViewConfigPage2a");
        LayoutViewConfigPage2a->resize(631, 320);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage2a);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        cell_group = new QGroupBox(LayoutViewConfigPage2a);
        cell_group->setObjectName("cell_group");
        cell_group->setCheckable(true);
        gridLayout = new QGridLayout(cell_group);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        frame_3 = new QFrame(cell_group);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        cell_font_cb = new QComboBox(frame_3);
        cell_font_cb->setObjectName("cell_font_cb");

        hboxLayout->addWidget(cell_font_cb);

        spacerItem = new QSpacerItem(141, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addWidget(frame_3, 1, 1, 1, 1);

        frame_2 = new QFrame(cell_group);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        cell_box_color_pb = new lay::ColorButton(frame_2);
        cell_box_color_pb->setObjectName("cell_box_color_pb");

        hboxLayout1->addWidget(cell_box_color_pb);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout->addWidget(frame_2, 2, 1, 1, 1);

        frame = new QFrame(cell_group);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName("hboxLayout2");
        cell_min_size_for_label_edit = new QLineEdit(frame);
        cell_min_size_for_label_edit->setObjectName("cell_min_size_for_label_edit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cell_min_size_for_label_edit->sizePolicy().hasHeightForWidth());
        cell_min_size_for_label_edit->setSizePolicy(sizePolicy);
        cell_min_size_for_label_edit->setMinimumSize(QSize(0, 0));

        hboxLayout2->addWidget(cell_min_size_for_label_edit);

        textLabel2_2 = new QLabel(frame);
        textLabel2_2->setObjectName("textLabel2_2");
        sizePolicy.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy);

        hboxLayout2->addWidget(textLabel2_2);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        textLabel1_2_2 = new QLabel(cell_group);
        textLabel1_2_2->setObjectName("textLabel1_2_2");

        gridLayout->addWidget(textLabel1_2_2, 0, 0, 1, 1);

        textLabel1_3 = new QLabel(cell_group);
        textLabel1_3->setObjectName("textLabel1_3");

        gridLayout->addWidget(textLabel1_3, 1, 0, 1, 1);

        textLabel3 = new QLabel(cell_group);
        textLabel3->setObjectName("textLabel3");

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        spacerItem3 = new QSpacerItem(561, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem3, 3, 0, 1, 2);

        cell_xform_text_cbx = new QCheckBox(cell_group);
        cell_xform_text_cbx->setObjectName("cell_xform_text_cbx");

        gridLayout->addWidget(cell_xform_text_cbx, 4, 0, 1, 2);


        vboxLayout->addWidget(cell_group);

        pcell_gs_group = new QGroupBox(LayoutViewConfigPage2a);
        pcell_gs_group->setObjectName("pcell_gs_group");
        pcell_gs_group->setCheckable(true);
        gridLayout1 = new QGridLayout(pcell_gs_group);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        label_5 = new QLabel(pcell_gs_group);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label_5, 2, 2, 1, 1);

        label_4 = new QLabel(pcell_gs_group);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label_4, 1, 2, 1, 1);

        pcell_gs_vs = new QSpinBox(pcell_gs_group);
        pcell_gs_vs->setObjectName("pcell_gs_vs");
        pcell_gs_vs->setMaximum(16);

        gridLayout1->addWidget(pcell_gs_vs, 2, 1, 1, 1);

        pcell_gs_lw = new QSpinBox(pcell_gs_group);
        pcell_gs_lw->setObjectName("pcell_gs_lw");
        pcell_gs_lw->setMaximum(16);

        gridLayout1->addWidget(pcell_gs_lw, 1, 1, 1, 1);

        label_3 = new QLabel(pcell_gs_group);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(pcell_gs_group);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        pcell_gs_color_pb = new lay::ColorButton(pcell_gs_group);
        pcell_gs_color_pb->setObjectName("pcell_gs_color_pb");
        sizePolicy.setHeightForWidth(pcell_gs_color_pb->sizePolicy().hasHeightForWidth());
        pcell_gs_color_pb->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(pcell_gs_color_pb, 0, 1, 1, 1);

        label = new QLabel(pcell_gs_group);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 0, 0, 1, 1);


        vboxLayout->addWidget(pcell_gs_group);

        QWidget::setTabOrder(cell_group, cell_min_size_for_label_edit);
        QWidget::setTabOrder(cell_min_size_for_label_edit, cell_font_cb);
        QWidget::setTabOrder(cell_font_cb, cell_xform_text_cbx);
        QWidget::setTabOrder(cell_xform_text_cbx, cell_box_color_pb);

        retranslateUi(LayoutViewConfigPage2a);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage2a);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage2a)
    {
        LayoutViewConfigPage2a->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage2a", "Settings", nullptr));
        cell_group->setTitle(QCoreApplication::translate("LayoutViewConfigPage2a", "Show cell boxes", nullptr));
        cell_box_color_pb->setText(QString());
        textLabel2_2->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "pixel", nullptr));
        textLabel1_2_2->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Minimum size for label", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Label font", nullptr));
        textLabel3->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Cell box color", nullptr));
        cell_xform_text_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Transform text with cell instance (not available for \"Default\" font)", nullptr));
        pcell_gs_group->setTitle(QCoreApplication::translate("LayoutViewConfigPage2a", "Show PCell guiding and error shapes", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "pixels", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "pixels", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Guiding shape vertex size  ", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Guiding shape line width", nullptr));
        pcell_gs_color_pb->setText(QString());
        label->setText(QCoreApplication::translate("LayoutViewConfigPage2a", "Guiding shape color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage2a: public Ui_LayoutViewConfigPage2a {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE2A_H
