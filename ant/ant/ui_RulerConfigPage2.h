/********************************************************************************
** Form generated from reading UI file 'RulerConfigPage2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULERCONFIGPAGE2_H
#define UI_RULERCONFIGPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_RulerConfigPage2
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    lay::ColorButton *ruler_color_pb;
    QSpacerItem *spacerItem;
    QCheckBox *halo_cb;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QLineEdit *num_rulers_edit;
    QLabel *label;
    QLabel *textLabel3_2;
    QLabel *textLabel1_2_3;

    void setupUi(QFrame *RulerConfigPage2)
    {
        if (RulerConfigPage2->objectName().isEmpty())
            RulerConfigPage2->setObjectName("RulerConfigPage2");
        RulerConfigPage2->resize(556, 132);
        vboxLayout = new QVBoxLayout(RulerConfigPage2);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(RulerConfigPage2);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        ruler_color_pb = new lay::ColorButton(frame_2);
        ruler_color_pb->setObjectName("ruler_color_pb");

        hboxLayout->addWidget(ruler_color_pb);

        spacerItem = new QSpacerItem(16, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        halo_cb = new QCheckBox(frame_2);
        halo_cb->setObjectName("halo_cb");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(halo_cb->sizePolicy().hasHeightForWidth());
        halo_cb->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(halo_cb);


        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        num_rulers_edit = new QLineEdit(frame);
        num_rulers_edit->setObjectName("num_rulers_edit");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(num_rulers_edit->sizePolicy().hasHeightForWidth());
        num_rulers_edit->setSizePolicy(sizePolicy2);
        num_rulers_edit->setMinimumSize(QSize(0, 0));

        hboxLayout1->addWidget(num_rulers_edit);

        label = new QLabel(frame);
        label->setObjectName("label");

        hboxLayout1->addWidget(label);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        textLabel3_2 = new QLabel(groupBox);
        textLabel3_2->setObjectName("textLabel3_2");

        gridLayout->addWidget(textLabel3_2, 0, 0, 1, 1);

        textLabel1_2_3 = new QLabel(groupBox);
        textLabel1_2_3->setObjectName("textLabel1_2_3");

        gridLayout->addWidget(textLabel1_2_3, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(ruler_color_pb, halo_cb);
        QWidget::setTabOrder(halo_cb, num_rulers_edit);

        retranslateUi(RulerConfigPage2);

        QMetaObject::connectSlotsByName(RulerConfigPage2);
    } // setupUi

    void retranslateUi(QFrame *RulerConfigPage2)
    {
        RulerConfigPage2->setWindowTitle(QCoreApplication::translate("RulerConfigPage2", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RulerConfigPage2", "Appearance", nullptr));
#if QT_CONFIG(tooltip)
        ruler_color_pb->setToolTip(QCoreApplication::translate("RulerConfigPage2", "The color in which the rulers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        ruler_color_pb->setText(QString());
        halo_cb->setText(QCoreApplication::translate("RulerConfigPage2", "With halo", nullptr));
#if QT_CONFIG(tooltip)
        num_rulers_edit->setToolTip(QCoreApplication::translate("RulerConfigPage2", "If set, no markers are created than the specified number - older markers are deleted", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RulerConfigPage2", "Leave empty for unlimited", nullptr));
        textLabel3_2->setText(QCoreApplication::translate("RulerConfigPage2", "Color", nullptr));
        textLabel1_2_3->setText(QCoreApplication::translate("RulerConfigPage2", "Limit number of annotations to  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RulerConfigPage2: public Ui_RulerConfigPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULERCONFIGPAGE2_H
