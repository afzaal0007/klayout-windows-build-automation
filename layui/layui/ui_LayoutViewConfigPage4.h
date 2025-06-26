/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE4_H
#define UI_LAYOUTVIEWCONFIGPAGE4_H

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

class Ui_LayoutViewConfigPage4
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QPushButton *undo_pb;
    QPushButton *redo_pb;
    QSpacerItem *spacerItem1;
    QPushButton *reset_pb;
    QSpacerItem *spacerItem2;
    QCheckBox *edit_order_cbx;
    QFrame *frame5_2;
    QGridLayout *gridLayout1;
    QToolButton *cb_1;
    QToolButton *cb_2;
    QToolButton *cb_3;
    QToolButton *cb_4;
    QToolButton *cb_5;
    QToolButton *cb_6;
    QToolButton *cb_12;
    QToolButton *cb_10;
    QToolButton *cb_8;
    QToolButton *cb_9;
    QToolButton *cb_11;
    QToolButton *cb_7;
    QToolButton *cb_15;
    QToolButton *cb_17;
    QToolButton *cb_13;
    QToolButton *cb_16;
    QToolButton *cb_18;
    QToolButton *cb_14;
    QToolButton *cb_21;
    QToolButton *cb_19;
    QToolButton *cb_23;
    QToolButton *cb_24;
    QToolButton *cb_20;
    QToolButton *cb_22;
    QToolButton *cb_27;
    QToolButton *cb_28;
    QToolButton *cb_30;
    QToolButton *cb_26;
    QToolButton *cb_29;
    QToolButton *cb_25;
    QToolButton *cb_33;
    QToolButton *cb_36;
    QToolButton *cb_34;
    QToolButton *cb_32;
    QToolButton *cb_35;
    QToolButton *cb_31;
    QToolButton *cb_39;
    QToolButton *cb_42;
    QToolButton *cb_40;
    QToolButton *cb_38;
    QToolButton *cb_41;
    QToolButton *cb_37;

    void setupUi(QFrame *LayoutViewConfigPage4)
    {
        if (LayoutViewConfigPage4->objectName().isEmpty())
            LayoutViewConfigPage4->setObjectName("LayoutViewConfigPage4");
        LayoutViewConfigPage4->resize(467, 331);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LayoutViewConfigPage4->sizePolicy().hasHeightForWidth());
        LayoutViewConfigPage4->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(LayoutViewConfigPage4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        frame = new QFrame(LayoutViewConfigPage4);
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

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        reset_pb = new QPushButton(frame);
        reset_pb->setObjectName("reset_pb");

        vboxLayout->addWidget(reset_pb);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

        edit_order_cbx = new QCheckBox(LayoutViewConfigPage4);
        edit_order_cbx->setObjectName("edit_order_cbx");

        gridLayout->addWidget(edit_order_cbx, 1, 0, 1, 3);

        frame5_2 = new QFrame(LayoutViewConfigPage4);
        frame5_2->setObjectName("frame5_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame5_2->sizePolicy().hasHeightForWidth());
        frame5_2->setSizePolicy(sizePolicy1);
        frame5_2->setFrameShape(QFrame::Panel);
        frame5_2->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(frame5_2);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName("gridLayout1");
        cb_1 = new QToolButton(frame5_2);
        cb_1->setObjectName("cb_1");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_1->sizePolicy().hasHeightForWidth());
        cb_1->setSizePolicy(sizePolicy2);
        cb_1->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_1, 0, 0, 1, 1);

        cb_2 = new QToolButton(frame5_2);
        cb_2->setObjectName("cb_2");
        cb_2->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_2, 2, 0, 1, 1);

        cb_3 = new QToolButton(frame5_2);
        cb_3->setObjectName("cb_3");
        cb_3->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_3, 4, 0, 1, 1);

        cb_4 = new QToolButton(frame5_2);
        cb_4->setObjectName("cb_4");
        cb_4->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_4, 6, 0, 1, 1);

        cb_5 = new QToolButton(frame5_2);
        cb_5->setObjectName("cb_5");
        cb_5->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_5, 8, 0, 1, 1);

        cb_6 = new QToolButton(frame5_2);
        cb_6->setObjectName("cb_6");
        cb_6->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_6, 10, 0, 1, 1);

        cb_12 = new QToolButton(frame5_2);
        cb_12->setObjectName("cb_12");
        cb_12->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_12, 10, 1, 1, 1);

        cb_10 = new QToolButton(frame5_2);
        cb_10->setObjectName("cb_10");
        cb_10->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_10, 6, 1, 1, 1);

        cb_8 = new QToolButton(frame5_2);
        cb_8->setObjectName("cb_8");
        cb_8->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_8, 2, 1, 1, 1);

        cb_9 = new QToolButton(frame5_2);
        cb_9->setObjectName("cb_9");
        cb_9->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_9, 4, 1, 1, 1);

        cb_11 = new QToolButton(frame5_2);
        cb_11->setObjectName("cb_11");
        cb_11->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_11, 8, 1, 1, 1);

        cb_7 = new QToolButton(frame5_2);
        cb_7->setObjectName("cb_7");
        cb_7->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_7, 0, 1, 1, 1);

        cb_15 = new QToolButton(frame5_2);
        cb_15->setObjectName("cb_15");
        cb_15->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_15, 4, 2, 1, 1);

        cb_17 = new QToolButton(frame5_2);
        cb_17->setObjectName("cb_17");
        cb_17->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_17, 8, 2, 1, 1);

        cb_13 = new QToolButton(frame5_2);
        cb_13->setObjectName("cb_13");
        cb_13->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_13, 0, 2, 1, 1);

        cb_16 = new QToolButton(frame5_2);
        cb_16->setObjectName("cb_16");
        cb_16->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_16, 6, 2, 1, 1);

        cb_18 = new QToolButton(frame5_2);
        cb_18->setObjectName("cb_18");
        cb_18->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_18, 10, 2, 1, 1);

        cb_14 = new QToolButton(frame5_2);
        cb_14->setObjectName("cb_14");
        cb_14->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_14, 2, 2, 1, 1);

        cb_21 = new QToolButton(frame5_2);
        cb_21->setObjectName("cb_21");
        cb_21->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_21, 4, 3, 1, 1);

        cb_19 = new QToolButton(frame5_2);
        cb_19->setObjectName("cb_19");
        cb_19->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_19, 0, 3, 1, 1);

        cb_23 = new QToolButton(frame5_2);
        cb_23->setObjectName("cb_23");
        cb_23->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_23, 8, 3, 1, 1);

        cb_24 = new QToolButton(frame5_2);
        cb_24->setObjectName("cb_24");
        cb_24->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_24, 10, 3, 1, 1);

        cb_20 = new QToolButton(frame5_2);
        cb_20->setObjectName("cb_20");
        cb_20->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_20, 2, 3, 1, 1);

        cb_22 = new QToolButton(frame5_2);
        cb_22->setObjectName("cb_22");
        cb_22->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_22, 6, 3, 1, 1);

        cb_27 = new QToolButton(frame5_2);
        cb_27->setObjectName("cb_27");
        cb_27->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_27, 4, 4, 1, 1);

        cb_28 = new QToolButton(frame5_2);
        cb_28->setObjectName("cb_28");
        cb_28->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_28, 6, 4, 1, 1);

        cb_30 = new QToolButton(frame5_2);
        cb_30->setObjectName("cb_30");
        cb_30->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_30, 10, 4, 1, 1);

        cb_26 = new QToolButton(frame5_2);
        cb_26->setObjectName("cb_26");
        cb_26->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_26, 2, 4, 1, 1);

        cb_29 = new QToolButton(frame5_2);
        cb_29->setObjectName("cb_29");
        cb_29->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_29, 8, 4, 1, 1);

        cb_25 = new QToolButton(frame5_2);
        cb_25->setObjectName("cb_25");
        cb_25->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_25, 0, 4, 1, 1);

        cb_33 = new QToolButton(frame5_2);
        cb_33->setObjectName("cb_33");
        cb_33->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_33, 4, 5, 1, 1);

        cb_36 = new QToolButton(frame5_2);
        cb_36->setObjectName("cb_36");
        cb_36->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_36, 10, 5, 1, 1);

        cb_34 = new QToolButton(frame5_2);
        cb_34->setObjectName("cb_34");
        cb_34->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_34, 6, 5, 1, 1);

        cb_32 = new QToolButton(frame5_2);
        cb_32->setObjectName("cb_32");
        cb_32->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_32, 2, 5, 1, 1);

        cb_35 = new QToolButton(frame5_2);
        cb_35->setObjectName("cb_35");
        cb_35->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_35, 8, 5, 1, 1);

        cb_31 = new QToolButton(frame5_2);
        cb_31->setObjectName("cb_31");
        cb_31->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_31, 0, 5, 1, 1);

        cb_39 = new QToolButton(frame5_2);
        cb_39->setObjectName("cb_39");
        cb_39->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_39, 4, 6, 1, 1);

        cb_42 = new QToolButton(frame5_2);
        cb_42->setObjectName("cb_42");
        cb_42->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_42, 10, 6, 1, 1);

        cb_40 = new QToolButton(frame5_2);
        cb_40->setObjectName("cb_40");
        cb_40->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_40, 6, 6, 1, 1);

        cb_38 = new QToolButton(frame5_2);
        cb_38->setObjectName("cb_38");
        cb_38->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_38, 2, 6, 1, 1);

        cb_41 = new QToolButton(frame5_2);
        cb_41->setObjectName("cb_41");
        cb_41->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_41, 8, 6, 1, 1);

        cb_37 = new QToolButton(frame5_2);
        cb_37->setObjectName("cb_37");
        cb_37->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_37, 0, 6, 1, 1);


        gridLayout->addWidget(frame5_2, 0, 0, 1, 1);

        QWidget::setTabOrder(cb_1, cb_7);
        QWidget::setTabOrder(cb_7, cb_13);
        QWidget::setTabOrder(cb_13, cb_19);
        QWidget::setTabOrder(cb_19, cb_25);
        QWidget::setTabOrder(cb_25, cb_31);
        QWidget::setTabOrder(cb_31, cb_37);
        QWidget::setTabOrder(cb_37, cb_2);
        QWidget::setTabOrder(cb_2, cb_8);
        QWidget::setTabOrder(cb_8, cb_14);
        QWidget::setTabOrder(cb_14, cb_20);
        QWidget::setTabOrder(cb_20, cb_26);
        QWidget::setTabOrder(cb_26, cb_32);
        QWidget::setTabOrder(cb_32, cb_38);
        QWidget::setTabOrder(cb_38, cb_3);
        QWidget::setTabOrder(cb_3, cb_9);
        QWidget::setTabOrder(cb_9, cb_15);
        QWidget::setTabOrder(cb_15, cb_21);
        QWidget::setTabOrder(cb_21, cb_27);
        QWidget::setTabOrder(cb_27, cb_33);
        QWidget::setTabOrder(cb_33, cb_39);
        QWidget::setTabOrder(cb_39, cb_4);
        QWidget::setTabOrder(cb_4, cb_10);
        QWidget::setTabOrder(cb_10, cb_16);
        QWidget::setTabOrder(cb_16, cb_22);
        QWidget::setTabOrder(cb_22, cb_28);
        QWidget::setTabOrder(cb_28, cb_34);
        QWidget::setTabOrder(cb_34, cb_40);
        QWidget::setTabOrder(cb_40, cb_5);
        QWidget::setTabOrder(cb_5, cb_11);
        QWidget::setTabOrder(cb_11, cb_17);
        QWidget::setTabOrder(cb_17, cb_23);
        QWidget::setTabOrder(cb_23, cb_29);
        QWidget::setTabOrder(cb_29, cb_35);
        QWidget::setTabOrder(cb_35, cb_41);
        QWidget::setTabOrder(cb_41, cb_6);
        QWidget::setTabOrder(cb_6, cb_12);
        QWidget::setTabOrder(cb_12, cb_18);
        QWidget::setTabOrder(cb_18, cb_24);
        QWidget::setTabOrder(cb_24, cb_30);
        QWidget::setTabOrder(cb_30, cb_36);
        QWidget::setTabOrder(cb_36, cb_42);
        QWidget::setTabOrder(cb_42, undo_pb);
        QWidget::setTabOrder(undo_pb, redo_pb);
        QWidget::setTabOrder(redo_pb, reset_pb);
        QWidget::setTabOrder(reset_pb, edit_order_cbx);

        retranslateUi(LayoutViewConfigPage4);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage4);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage4)
    {
        LayoutViewConfigPage4->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage4", "Edit Color Palette", nullptr));
        undo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage4", "Undo", nullptr));
        redo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage4", "Redo", nullptr));
        reset_pb->setText(QCoreApplication::translate("LayoutViewConfigPage4", "Reset", nullptr));
        edit_order_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage4", "Set assignment order (click on the color buttons to define order)", nullptr));
        cb_1->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_2->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_3->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_4->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_5->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_6->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_12->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_10->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_8->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_9->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_11->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_7->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_15->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_17->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_13->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_16->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_18->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_14->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_21->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_19->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_23->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_24->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_20->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_22->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_27->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_28->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_30->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_26->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_29->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_25->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_33->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_36->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_34->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_32->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_35->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_31->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_39->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_42->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_40->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_38->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_41->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
        cb_37->setText(QCoreApplication::translate("LayoutViewConfigPage4", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage4: public Ui_LayoutViewConfigPage4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE4_H
