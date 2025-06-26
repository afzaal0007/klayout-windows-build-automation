/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE1_H
#define UI_LAYOUTVIEWCONFIGPAGE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage1
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *ctx_hollow_cbx;
    QSpinBox *ctx_dimming_spinbx;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    lay::ColorButton *ctx_color_pb;
    QSpacerItem *spacerItem;
    QLabel *label_4;
    QGroupBox *cctx_grp;
    QGridLayout *gridLayout1;
    QCheckBox *cctx_hollow_cbx;
    QLabel *label_8;
    QLabel *label_7;
    QSpinBox *cctx_dimming_spinbx;
    QLabel *label_6;
    lay::ColorButton *cctx_color_pb;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QGroupBox *abstract_mode_grp;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem2;
    QLabel *label_10;
    QLineEdit *abstract_mode_width_le;
    QLabel *label_9;

    void setupUi(QFrame *LayoutViewConfigPage1)
    {
        if (LayoutViewConfigPage1->objectName().isEmpty())
            LayoutViewConfigPage1->setObjectName("LayoutViewConfigPage1");
        LayoutViewConfigPage1->resize(536, 347);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage1);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(LayoutViewConfigPage1);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        ctx_hollow_cbx = new QCheckBox(groupBox);
        ctx_hollow_cbx->setObjectName("ctx_hollow_cbx");

        gridLayout->addWidget(ctx_hollow_cbx, 2, 1, 1, 3);

        ctx_dimming_spinbx = new QSpinBox(groupBox);
        ctx_dimming_spinbx->setObjectName("ctx_dimming_spinbx");
        ctx_dimming_spinbx->setMaximum(100);
        ctx_dimming_spinbx->setSingleStep(10);

        gridLayout->addWidget(ctx_dimming_spinbx, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 2, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        ctx_color_pb = new lay::ColorButton(groupBox);
        ctx_color_pb->setObjectName("ctx_color_pb");
        ctx_color_pb->setAutoFillBackground(false);

        gridLayout->addWidget(ctx_color_pb, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        cctx_grp = new QGroupBox(LayoutViewConfigPage1);
        cctx_grp->setObjectName("cctx_grp");
        cctx_grp->setCheckable(true);
        cctx_grp->setChecked(true);
        gridLayout1 = new QGridLayout(cctx_grp);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        cctx_hollow_cbx = new QCheckBox(cctx_grp);
        cctx_hollow_cbx->setObjectName("cctx_hollow_cbx");

        gridLayout1->addWidget(cctx_hollow_cbx, 2, 1, 1, 3);

        label_8 = new QLabel(cctx_grp);
        label_8->setObjectName("label_8");

        gridLayout1->addWidget(label_8, 0, 2, 1, 2);

        label_7 = new QLabel(cctx_grp);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 1, 0, 1, 1);

        cctx_dimming_spinbx = new QSpinBox(cctx_grp);
        cctx_dimming_spinbx->setObjectName("cctx_dimming_spinbx");
        cctx_dimming_spinbx->setMaximum(100);
        cctx_dimming_spinbx->setSingleStep(10);

        gridLayout1->addWidget(cctx_dimming_spinbx, 1, 1, 1, 1);

        label_6 = new QLabel(cctx_grp);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 0, 0, 1, 1);

        cctx_color_pb = new lay::ColorButton(cctx_grp);
        cctx_color_pb->setObjectName("cctx_color_pb");
        cctx_color_pb->setAutoFillBackground(false);

        gridLayout1->addWidget(cctx_color_pb, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 3, 1, 1);

        label_5 = new QLabel(cctx_grp);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 1, 2, 1, 1);


        vboxLayout->addWidget(cctx_grp);

        abstract_mode_grp = new QGroupBox(LayoutViewConfigPage1);
        abstract_mode_grp->setObjectName("abstract_mode_grp");
        abstract_mode_grp->setCheckable(true);
        gridLayout2 = new QGridLayout(abstract_mode_grp);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName("gridLayout2");
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 1, 2, 1, 1);

        label_10 = new QLabel(abstract_mode_grp);
        label_10->setObjectName("label_10");

        gridLayout2->addWidget(label_10, 1, 1, 1, 1);

        abstract_mode_width_le = new QLineEdit(abstract_mode_grp);
        abstract_mode_width_le->setObjectName("abstract_mode_width_le");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(abstract_mode_width_le->sizePolicy().hasHeightForWidth());
        abstract_mode_width_le->setSizePolicy(sizePolicy);

        gridLayout2->addWidget(abstract_mode_width_le, 1, 0, 1, 1);

        label_9 = new QLabel(abstract_mode_grp);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        gridLayout2->addWidget(label_9, 0, 0, 1, 3);


        vboxLayout->addWidget(abstract_mode_grp);

        QWidget::setTabOrder(ctx_color_pb, ctx_dimming_spinbx);

        retranslateUi(LayoutViewConfigPage1);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage1);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage1)
    {
        LayoutViewConfigPage1->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage1", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage1", "How Context Layout (Above in Hierarchy) Is Shown", nullptr));
        ctx_hollow_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage1", "Hollow (no fill)", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage1", "(\"Automatic\" for normal colors)", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage1", ".. or in faded colors, dimmed by", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage1", "In this color ..", nullptr));
        ctx_color_pb->setText(QString());
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage1", "percent", nullptr));
        cctx_grp->setTitle(QCoreApplication::translate("LayoutViewConfigPage1", "How Child Cell Layout (Below in Hierarchy) Is Shown", nullptr));
        cctx_hollow_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage1", "Hollow (no fill)", nullptr));
        label_8->setText(QCoreApplication::translate("LayoutViewConfigPage1", "(\"Automatic\" for normal colors)", nullptr));
        label_7->setText(QCoreApplication::translate("LayoutViewConfigPage1", ".. or in faded colors, dimmed by", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutViewConfigPage1", "In this color ..", nullptr));
        cctx_color_pb->setText(QString());
        label_5->setText(QCoreApplication::translate("LayoutViewConfigPage1", "percent", nullptr));
        abstract_mode_grp->setTitle(QCoreApplication::translate("LayoutViewConfigPage1", "Abstract Mode", nullptr));
        label_10->setText(QCoreApplication::translate("LayoutViewConfigPage1", "micron", nullptr));
        label_9->setText(QCoreApplication::translate("LayoutViewConfigPage1", "Instead of drawing the whole child cell, just draw the shapes touching the border within that distance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage1: public Ui_LayoutViewConfigPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE1_H
