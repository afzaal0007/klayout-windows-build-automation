/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage6.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE6_H
#define UI_LAYOUTVIEWCONFIGPAGE6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage6
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QCheckBox *stipple_offset_cbx;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QPushButton *undo_pb;
    QPushButton *redo_pb;
    QSpacerItem *spacerItem2;
    QPushButton *reset_pb;
    QSpacerItem *spacerItem3;
    QFrame *frame5_2;
    QGridLayout *gridLayout1;
    QToolButton *cb_4;
    QToolButton *cb_12;
    QToolButton *cb_11;
    QToolButton *cb_1;
    QToolButton *cb_6;
    QToolButton *cb_5;
    QToolButton *cb_9;
    QToolButton *cb_2;
    QToolButton *cb_3;
    QToolButton *cb_13;
    QToolButton *cb_10;
    QToolButton *cb_7;
    QToolButton *cb_14;
    QToolButton *cb_8;
    QToolButton *cb_15;
    QToolButton *cb_16;
    QCheckBox *edit_order_cbx;

    void setupUi(QFrame *LayoutViewConfigPage6)
    {
        if (LayoutViewConfigPage6->objectName().isEmpty())
            LayoutViewConfigPage6->setObjectName("LayoutViewConfigPage6");
        LayoutViewConfigPage6->resize(467, 253);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LayoutViewConfigPage6->sizePolicy().hasHeightForWidth());
        LayoutViewConfigPage6->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(LayoutViewConfigPage6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(451, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 2, 0, 1, 4);

        stipple_offset_cbx = new QCheckBox(LayoutViewConfigPage6);
        stipple_offset_cbx->setObjectName("stipple_offset_cbx");

        gridLayout->addWidget(stipple_offset_cbx, 3, 0, 1, 4);

        spacerItem1 = new QSpacerItem(161, 151, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 1, 1, 1);

        frame = new QFrame(LayoutViewConfigPage6);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName("vboxLayout");
        undo_pb = new QPushButton(frame);
        undo_pb->setObjectName("undo_pb");

        vboxLayout->addWidget(undo_pb);

        redo_pb = new QPushButton(frame);
        redo_pb->setObjectName("redo_pb");

        vboxLayout->addWidget(redo_pb);

        spacerItem2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem2);

        reset_pb = new QPushButton(frame);
        reset_pb->setObjectName("reset_pb");

        vboxLayout->addWidget(reset_pb);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

        frame5_2 = new QFrame(LayoutViewConfigPage6);
        frame5_2->setObjectName("frame5_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame5_2->sizePolicy().hasHeightForWidth());
        frame5_2->setSizePolicy(sizePolicy1);
        frame5_2->setFrameShape(QFrame::Panel);
        frame5_2->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(frame5_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        cb_4 = new QToolButton(frame5_2);
        cb_4->setObjectName("cb_4");
        cb_4->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_4, 0, 3, 1, 1);

        cb_12 = new QToolButton(frame5_2);
        cb_12->setObjectName("cb_12");
        cb_12->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_12, 2, 3, 1, 1);

        cb_11 = new QToolButton(frame5_2);
        cb_11->setObjectName("cb_11");
        cb_11->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_11, 2, 2, 1, 1);

        cb_1 = new QToolButton(frame5_2);
        cb_1->setObjectName("cb_1");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_1->sizePolicy().hasHeightForWidth());
        cb_1->setSizePolicy(sizePolicy2);
        cb_1->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_1, 0, 0, 1, 1);

        cb_6 = new QToolButton(frame5_2);
        cb_6->setObjectName("cb_6");
        cb_6->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_6, 1, 1, 1, 1);

        cb_5 = new QToolButton(frame5_2);
        cb_5->setObjectName("cb_5");
        cb_5->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_5, 1, 0, 1, 1);

        cb_9 = new QToolButton(frame5_2);
        cb_9->setObjectName("cb_9");
        cb_9->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_9, 2, 0, 1, 1);

        cb_2 = new QToolButton(frame5_2);
        cb_2->setObjectName("cb_2");
        cb_2->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_2, 0, 1, 1, 1);

        cb_3 = new QToolButton(frame5_2);
        cb_3->setObjectName("cb_3");
        cb_3->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_3, 0, 2, 1, 1);

        cb_13 = new QToolButton(frame5_2);
        cb_13->setObjectName("cb_13");
        cb_13->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_13, 3, 0, 1, 1);

        cb_10 = new QToolButton(frame5_2);
        cb_10->setObjectName("cb_10");
        cb_10->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_10, 2, 1, 1, 1);

        cb_7 = new QToolButton(frame5_2);
        cb_7->setObjectName("cb_7");
        cb_7->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_7, 1, 2, 1, 1);

        cb_14 = new QToolButton(frame5_2);
        cb_14->setObjectName("cb_14");
        cb_14->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_14, 3, 1, 1, 1);

        cb_8 = new QToolButton(frame5_2);
        cb_8->setObjectName("cb_8");
        cb_8->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_8, 1, 3, 1, 1);

        cb_15 = new QToolButton(frame5_2);
        cb_15->setObjectName("cb_15");
        cb_15->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_15, 3, 2, 1, 1);

        cb_16 = new QToolButton(frame5_2);
        cb_16->setObjectName("cb_16");
        cb_16->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_16, 3, 3, 1, 1);


        gridLayout->addWidget(frame5_2, 0, 0, 1, 1);

        edit_order_cbx = new QCheckBox(LayoutViewConfigPage6);
        edit_order_cbx->setObjectName("edit_order_cbx");

        gridLayout->addWidget(edit_order_cbx, 1, 0, 1, 3);

        QWidget::setTabOrder(cb_1, cb_5);
        QWidget::setTabOrder(cb_5, cb_9);
        QWidget::setTabOrder(cb_9, cb_13);
        QWidget::setTabOrder(cb_13, cb_2);
        QWidget::setTabOrder(cb_2, cb_6);
        QWidget::setTabOrder(cb_6, cb_10);
        QWidget::setTabOrder(cb_10, cb_14);
        QWidget::setTabOrder(cb_14, cb_3);
        QWidget::setTabOrder(cb_3, cb_7);
        QWidget::setTabOrder(cb_7, cb_11);
        QWidget::setTabOrder(cb_11, cb_15);
        QWidget::setTabOrder(cb_15, cb_4);
        QWidget::setTabOrder(cb_4, cb_8);
        QWidget::setTabOrder(cb_8, cb_12);
        QWidget::setTabOrder(cb_12, cb_16);
        QWidget::setTabOrder(cb_16, undo_pb);
        QWidget::setTabOrder(undo_pb, redo_pb);
        QWidget::setTabOrder(redo_pb, reset_pb);
        QWidget::setTabOrder(reset_pb, edit_order_cbx);

        retranslateUi(LayoutViewConfigPage6);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage6);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage6)
    {
        LayoutViewConfigPage6->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage6", "Edit Stipple Palette", nullptr));
        stipple_offset_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage6", "Offset stipple pattern individually per layer", nullptr));
        undo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6", "Undo", nullptr));
        redo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6", "Redo", nullptr));
        reset_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6", "Reset", nullptr));
        cb_4->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_12->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_11->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_1->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_6->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_5->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_9->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_2->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_3->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_13->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_10->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_7->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_14->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_8->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_15->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        cb_16->setText(QCoreApplication::translate("LayoutViewConfigPage6", "...", nullptr));
        edit_order_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage6", "Set assignment order (click on the stipple buttons to define order)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage6: public Ui_LayoutViewConfigPage6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE6_H
