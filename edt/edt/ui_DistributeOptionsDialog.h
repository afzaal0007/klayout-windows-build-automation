/********************************************************************************
** Form generated from reading UI file 'DistributeOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTEOPTIONSDIALOG_H
#define UI_DISTRIBUTEOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DistributeOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *h_distribute;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *h_pitch;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_11;
    QLineEdit *h_space;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QGroupBox *v_distribute;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_18;
    QLineEdit *v_pitch;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_20;
    QLineEdit *v_space;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_22;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QRadioButton *h_none_rb;
    QSpacerItem *horizontalSpacer_14;
    QRadioButton *h_left_rb;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *h_center_rb;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *h_right_rb;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_23;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *v_none_rb;
    QSpacerItem *horizontalSpacer_15;
    QRadioButton *v_top_rb;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *v_center_rb;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *v_bottom_rb;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_17;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QRadioButton *visible_layers_rb;
    QRadioButton *all_layers_rb;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DistributeOptionsDialog)
    {
        if (DistributeOptionsDialog->objectName().isEmpty())
            DistributeOptionsDialog->setObjectName("DistributeOptionsDialog");
        DistributeOptionsDialog->resize(689, 574);
        verticalLayout = new QVBoxLayout(DistributeOptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        h_distribute = new QGroupBox(DistributeOptionsDialog);
        h_distribute->setObjectName("h_distribute");
        h_distribute->setCheckable(true);
        gridLayout_3 = new QGridLayout(h_distribute);
        gridLayout_3->setObjectName("gridLayout_3");
        label_9 = new QLabel(h_distribute);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        gridLayout_3->addWidget(label_9, 1, 0, 1, 2);

        frame = new QFrame(h_distribute);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        horizontalLayout->addWidget(label_10);

        h_pitch = new QLineEdit(frame);
        h_pitch->setObjectName("h_pitch");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(h_pitch->sizePolicy().hasHeightForWidth());
        h_pitch->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(h_pitch);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");

        horizontalLayout->addWidget(label_12);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        horizontalLayout->addWidget(label_11);

        h_space = new QLineEdit(frame);
        h_space->setObjectName("h_space");
        sizePolicy.setHeightForWidth(h_space->sizePolicy().hasHeightForWidth());
        h_space->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(h_space);

        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");

        horizontalLayout->addWidget(label_13);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addWidget(frame, 0, 0, 1, 2);


        verticalLayout->addWidget(h_distribute);

        v_distribute = new QGroupBox(DistributeOptionsDialog);
        v_distribute->setObjectName("v_distribute");
        v_distribute->setMinimumSize(QSize(0, 0));
        v_distribute->setCheckable(true);
        gridLayout_4 = new QGridLayout(v_distribute);
        gridLayout_4->setObjectName("gridLayout_4");
        frame_2 = new QFrame(v_distribute);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(frame_2);
        label_18->setObjectName("label_18");

        horizontalLayout_3->addWidget(label_18);

        v_pitch = new QLineEdit(frame_2);
        v_pitch->setObjectName("v_pitch");
        sizePolicy.setHeightForWidth(v_pitch->sizePolicy().hasHeightForWidth());
        v_pitch->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(v_pitch);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");

        horizontalLayout_3->addWidget(label_19);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");

        horizontalLayout_3->addWidget(label_20);

        v_space = new QLineEdit(frame_2);
        v_space->setObjectName("v_space");
        sizePolicy.setHeightForWidth(v_space->sizePolicy().hasHeightForWidth());
        v_space->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(v_space);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");

        horizontalLayout_3->addWidget(label_21);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);


        gridLayout_4->addWidget(frame_2, 0, 0, 1, 1);

        label_22 = new QLabel(v_distribute);
        label_22->setObjectName("label_22");
        label_22->setWordWrap(true);

        gridLayout_4->addWidget(label_22, 1, 0, 1, 1);


        verticalLayout->addWidget(v_distribute);

        groupBox_4 = new QGroupBox(DistributeOptionsDialog);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName("gridLayout_5");
        h_none_rb = new QRadioButton(groupBox_4);
        h_none_rb->setObjectName("h_none_rb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/align_none_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_none_rb->setIcon(icon);
        h_none_rb->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(h_none_rb, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 0, 1, 1, 1);

        h_left_rb = new QRadioButton(groupBox_4);
        h_left_rb->setObjectName("h_left_rb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/align_left_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_left_rb->setIcon(icon1);
        h_left_rb->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(h_left_rb, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        h_center_rb = new QRadioButton(groupBox_4);
        h_center_rb->setObjectName("h_center_rb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/align_hcenter_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_center_rb->setIcon(icon2);
        h_center_rb->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(h_center_rb, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 5, 1, 1);

        h_right_rb = new QRadioButton(groupBox_4);
        h_right_rb->setObjectName("h_right_rb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/align_right_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_right_rb->setIcon(icon3);
        h_right_rb->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(h_right_rb, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(245, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_23, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_7, 1, 4, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_8, 1, 6, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(DistributeOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        v_none_rb = new QRadioButton(groupBox);
        v_none_rb->setObjectName("v_none_rb");
        v_none_rb->setIcon(icon);
        v_none_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_none_rb, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 0, 1, 1, 1);

        v_top_rb = new QRadioButton(groupBox);
        v_top_rb->setObjectName("v_top_rb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/align_top_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_top_rb->setIcon(icon4);
        v_top_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_top_rb, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        v_center_rb = new QRadioButton(groupBox);
        v_center_rb->setObjectName("v_center_rb");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/align_vcenter_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_center_rb->setIcon(icon5);
        v_center_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_center_rb, 0, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 5, 1, 1);

        v_bottom_rb = new QRadioButton(groupBox);
        v_bottom_rb->setObjectName("v_bottom_rb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/align_bottom_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_bottom_rb->setIcon(icon6);
        v_bottom_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_bottom_rb, 0, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(245, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 7, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 1, 2, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 1, 4, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 1, 6, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(DistributeOptionsDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        visible_layers_rb = new QRadioButton(groupBox_3);
        visible_layers_rb->setObjectName("visible_layers_rb");

        gridLayout->addWidget(visible_layers_rb, 1, 0, 1, 1);

        all_layers_rb = new QRadioButton(groupBox_3);
        all_layers_rb->setObjectName("all_layers_rb");

        gridLayout->addWidget(all_layers_rb, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(488, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DistributeOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(all_layers_rb, visible_layers_rb);
        QWidget::setTabOrder(visible_layers_rb, buttonBox);

        retranslateUi(DistributeOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DistributeOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DistributeOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DistributeOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *DistributeOptionsDialog)
    {
        DistributeOptionsDialog->setWindowTitle(QCoreApplication::translate("DistributeOptionsDialog", "Distribution Options", nullptr));
        h_distribute->setTitle(QCoreApplication::translate("DistributeOptionsDialog", "Horizontal distribution", nullptr));
        label_9->setText(QCoreApplication::translate("DistributeOptionsDialog", "The pitch specifies the offset at which the objects are placed relative to each other. The space is the minimum distance between the objects.", nullptr));
        label_10->setText(QCoreApplication::translate("DistributeOptionsDialog", "Pitch", nullptr));
        label_12->setText(QCoreApplication::translate("DistributeOptionsDialog", "\302\265m", nullptr));
        label_11->setText(QCoreApplication::translate("DistributeOptionsDialog", "Space", nullptr));
        label_13->setText(QCoreApplication::translate("DistributeOptionsDialog", "\302\265m", nullptr));
        v_distribute->setTitle(QCoreApplication::translate("DistributeOptionsDialog", "Vertical distribution", nullptr));
        label_18->setText(QCoreApplication::translate("DistributeOptionsDialog", "Pitch", nullptr));
        label_19->setText(QCoreApplication::translate("DistributeOptionsDialog", "\302\265m", nullptr));
        label_20->setText(QCoreApplication::translate("DistributeOptionsDialog", "Space", nullptr));
        label_21->setText(QCoreApplication::translate("DistributeOptionsDialog", "\302\265m", nullptr));
        label_22->setText(QCoreApplication::translate("DistributeOptionsDialog", "The pitch specifies the offset at which the objects are placed relative to each other. The space is the minimum distance between the objects.", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DistributeOptionsDialog", "Horizonal alignment", nullptr));
        h_none_rb->setText(QString());
        h_left_rb->setText(QString());
        h_center_rb->setText(QString());
        h_right_rb->setText(QString());
        label_23->setText(QCoreApplication::translate("DistributeOptionsDialog", "none", nullptr));
        label_6->setText(QCoreApplication::translate("DistributeOptionsDialog", "left", nullptr));
        label_7->setText(QCoreApplication::translate("DistributeOptionsDialog", "center", nullptr));
        label_8->setText(QCoreApplication::translate("DistributeOptionsDialog", "right", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DistributeOptionsDialog", "Vertical alignment", nullptr));
        v_none_rb->setText(QString());
        v_top_rb->setText(QString());
        v_center_rb->setText(QString());
        v_bottom_rb->setText(QString());
        label_16->setText(QCoreApplication::translate("DistributeOptionsDialog", "none", nullptr));
        label_14->setText(QCoreApplication::translate("DistributeOptionsDialog", "top", nullptr));
        label_15->setText(QCoreApplication::translate("DistributeOptionsDialog", "center", nullptr));
        label_17->setText(QCoreApplication::translate("DistributeOptionsDialog", "bottom", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DistributeOptionsDialog", "For the computation of cell instance bounding boxes ...", nullptr));
        visible_layers_rb->setText(QCoreApplication::translate("DistributeOptionsDialog", "Use visible layers only", nullptr));
        all_layers_rb->setText(QCoreApplication::translate("DistributeOptionsDialog", "Use all layers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DistributeOptionsDialog: public Ui_DistributeOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTEOPTIONSDIALOG_H
