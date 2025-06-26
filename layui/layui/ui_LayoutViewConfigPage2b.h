/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage2b.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE2B_H
#define UI_LAYOUTVIEWCONFIGPAGE2B_H

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
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage2b
{
public:
    QGridLayout *gridLayout;
    QGroupBox *text_group;
    QGridLayout *gridLayout1;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QLineEdit *text_def_size_edit;
    QLabel *textLabel2_2_2;
    QSpacerItem *spacerItem;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    lay::ColorButton *text_color_pb;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QHBoxLayout *hboxLayout2;
    QComboBox *text_font_cb;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QCheckBox *text_apply_trans_cbx;
    QCheckBox *show_properties_cbx;
    QLabel *textLabel3_3;
    QLabel *textLabel1_2_2_2;
    QLabel *textLabel1_3_2;

    void setupUi(QFrame *LayoutViewConfigPage2b)
    {
        if (LayoutViewConfigPage2b->objectName().isEmpty())
            LayoutViewConfigPage2b->setObjectName("LayoutViewConfigPage2b");
        LayoutViewConfigPage2b->resize(617, 276);
        gridLayout = new QGridLayout(LayoutViewConfigPage2b);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        text_group = new QGroupBox(LayoutViewConfigPage2b);
        text_group->setObjectName("text_group");
        text_group->setCheckable(true);
        gridLayout1 = new QGridLayout(text_group);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        frame_3 = new QFrame(text_group);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        text_def_size_edit = new QLineEdit(frame_3);
        text_def_size_edit->setObjectName("text_def_size_edit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text_def_size_edit->sizePolicy().hasHeightForWidth());
        text_def_size_edit->setSizePolicy(sizePolicy);
        text_def_size_edit->setMinimumSize(QSize(0, 0));

        hboxLayout->addWidget(text_def_size_edit);

        textLabel2_2_2 = new QLabel(frame_3);
        textLabel2_2_2->setObjectName("textLabel2_2_2");
        sizePolicy.setHeightForWidth(textLabel2_2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2_2->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(textLabel2_2_2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout1->addWidget(frame_3, 2, 1, 1, 1);

        frame_2 = new QFrame(text_group);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        text_color_pb = new lay::ColorButton(frame_2);
        text_color_pb->setObjectName("text_color_pb");

        hboxLayout1->addWidget(text_color_pb);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout1->addWidget(frame_2, 1, 1, 1, 1);

        frame = new QFrame(text_group);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName("hboxLayout2");
        text_font_cb = new QComboBox(frame);
        text_font_cb->setObjectName("text_font_cb");

        hboxLayout2->addWidget(text_font_cb);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        gridLayout1->addWidget(frame, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(561, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem3, 3, 0, 1, 2);

        text_apply_trans_cbx = new QCheckBox(text_group);
        text_apply_trans_cbx->setObjectName("text_apply_trans_cbx");

        gridLayout1->addWidget(text_apply_trans_cbx, 4, 0, 1, 2);

        show_properties_cbx = new QCheckBox(text_group);
        show_properties_cbx->setObjectName("show_properties_cbx");

        gridLayout1->addWidget(show_properties_cbx, 6, 0, 1, 2);

        textLabel3_3 = new QLabel(text_group);
        textLabel3_3->setObjectName("textLabel3_3");

        gridLayout1->addWidget(textLabel3_3, 1, 0, 1, 1);

        textLabel1_2_2_2 = new QLabel(text_group);
        textLabel1_2_2_2->setObjectName("textLabel1_2_2_2");

        gridLayout1->addWidget(textLabel1_2_2_2, 2, 0, 1, 1);

        textLabel1_3_2 = new QLabel(text_group);
        textLabel1_3_2->setObjectName("textLabel1_3_2");

        gridLayout1->addWidget(textLabel1_3_2, 0, 0, 1, 1);


        gridLayout->addWidget(text_group, 0, 0, 1, 1);

        QWidget::setTabOrder(text_group, text_font_cb);
        QWidget::setTabOrder(text_font_cb, text_apply_trans_cbx);
        QWidget::setTabOrder(text_apply_trans_cbx, text_def_size_edit);
        QWidget::setTabOrder(text_def_size_edit, text_color_pb);
        QWidget::setTabOrder(text_color_pb, show_properties_cbx);

        retranslateUi(LayoutViewConfigPage2b);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage2b);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage2b)
    {
        LayoutViewConfigPage2b->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage2b", "Settings", nullptr));
        text_group->setTitle(QCoreApplication::translate("LayoutViewConfigPage2b", "Show texts or properties", nullptr));
        textLabel2_2_2->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "micron", nullptr));
        text_color_pb->setText(QString());
        text_apply_trans_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "Apply text scaling and rotation (not available for \"Default\" font)", nullptr));
        show_properties_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "Show properties also", nullptr));
        textLabel3_3->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "Color", nullptr));
        textLabel1_2_2_2->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "Standard text size", nullptr));
        textLabel1_3_2->setText(QCoreApplication::translate("LayoutViewConfigPage2b", "Text font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage2b: public Ui_LayoutViewConfigPage2b {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE2B_H
