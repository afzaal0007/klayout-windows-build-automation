/********************************************************************************
** Form generated from reading UI file 'NetlistBrowserConfigPage2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETLISTBROWSERCONFIGPAGE2_H
#define UI_NETLISTBROWSERCONFIGPAGE2_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_NetlistBrowserConfigPage2
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    QFrame *frame_2;
    QGridLayout *_2;
    QLabel *label_8;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacerItem1;
    lay::ColorButton *color_pb;
    QLabel *label_9;
    QCheckBox *brightness_cb;
    QSpinBox *brightness_sb;
    QLabel *brightness_label;
    QSpacerItem *spacerItem2;
    QLabel *label_3;
    QFrame *frame_3;
    QHBoxLayout *_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacerItem3;
    QCheckBox *cycle_colors_cb;
    QToolButton *cc0;
    QToolButton *cc1;
    QToolButton *cc5;
    QToolButton *cc6;
    QToolButton *cc3;
    QToolButton *cc7;
    QToolButton *cc4;
    QToolButton *cc2;
    QSpacerItem *spacerItem4;
    QFrame *frame;
    QGridLayout *_4;
    QLabel *vs_lbl;
    QLabel *textLabel1_4;
    QLabel *label_5;
    QSpacerItem *spacerItem5;
    QLineEdit *vs_le;
    QLineEdit *lw_le;
    QSpacerItem *spacerItem6;
    lay::DitherPatternSelectionButton *stipple_pb;
    QLabel *label;
    QCheckBox *halo_cb;
    QLabel *label_7;
    QLabel *textLabel2_2;
    QSpacerItem *spacerItem7;

    void setupUi(QFrame *NetlistBrowserConfigPage2)
    {
        if (NetlistBrowserConfigPage2->objectName().isEmpty())
            NetlistBrowserConfigPage2->setObjectName("NetlistBrowserConfigPage2");
        NetlistBrowserConfigPage2->resize(649, 351);
        verticalLayout = new QVBoxLayout(NetlistBrowserConfigPage2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(NetlistBrowserConfigPage2);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(false);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(556, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        _2 = new QGridLayout(frame_2);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        _2->addWidget(label_8, 3, 0, 1, 4);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);

        color_pb = new lay::ColorButton(frame_4);
        color_pb->setObjectName("color_pb");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(color_pb->sizePolicy().hasHeightForWidth());
        color_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(color_pb);

        label_9 = new QLabel(frame_4);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);

        brightness_cb = new QCheckBox(frame_4);
        brightness_cb->setObjectName("brightness_cb");

        horizontalLayout->addWidget(brightness_cb);

        brightness_sb = new QSpinBox(frame_4);
        brightness_sb->setObjectName("brightness_sb");
        brightness_sb->setMinimum(-100);
        brightness_sb->setMaximum(100);
        brightness_sb->setSingleStep(10);

        horizontalLayout->addWidget(brightness_sb);

        brightness_label = new QLabel(frame_4);
        brightness_label->setObjectName("brightness_label");

        horizontalLayout->addWidget(brightness_label);

        spacerItem2 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem2);


        _2->addWidget(frame_4, 1, 0, 1, 4);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        _2->addWidget(label_3, 0, 0, 1, 4);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        _3 = new QHBoxLayout(frame_3);
        _3->setSpacing(6);
        _3->setContentsMargins(11, 11, 11, 11);
        _3->setObjectName("_3");
        _3->setContentsMargins(0, 0, 0, 0);

        _2->addWidget(frame_3, 5, 1, 1, 3);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem3);

        cycle_colors_cb = new QCheckBox(frame_5);
        cycle_colors_cb->setObjectName("cycle_colors_cb");

        horizontalLayout_2->addWidget(cycle_colors_cb);

        cc0 = new QToolButton(frame_5);
        cc0->setObjectName("cc0");

        horizontalLayout_2->addWidget(cc0);

        cc1 = new QToolButton(frame_5);
        cc1->setObjectName("cc1");

        horizontalLayout_2->addWidget(cc1);

        cc5 = new QToolButton(frame_5);
        cc5->setObjectName("cc5");

        horizontalLayout_2->addWidget(cc5);

        cc6 = new QToolButton(frame_5);
        cc6->setObjectName("cc6");

        horizontalLayout_2->addWidget(cc6);

        cc3 = new QToolButton(frame_5);
        cc3->setObjectName("cc3");

        horizontalLayout_2->addWidget(cc3);

        cc7 = new QToolButton(frame_5);
        cc7->setObjectName("cc7");

        horizontalLayout_2->addWidget(cc7);

        cc4 = new QToolButton(frame_5);
        cc4->setObjectName("cc4");

        horizontalLayout_2->addWidget(cc4);

        cc2 = new QToolButton(frame_5);
        cc2->setObjectName("cc2");

        horizontalLayout_2->addWidget(cc2);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem4);


        _2->addWidget(frame_5, 4, 0, 1, 4);


        gridLayout->addWidget(frame_2, 3, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        _4 = new QGridLayout(frame);
        _4->setSpacing(6);
        _4->setContentsMargins(11, 11, 11, 11);
        _4->setObjectName("_4");
        _4->setContentsMargins(0, 0, 0, 0);
        vs_lbl = new QLabel(frame);
        vs_lbl->setObjectName("vs_lbl");

        _4->addWidget(vs_lbl, 2, 3, 1, 1);

        textLabel1_4 = new QLabel(frame);
        textLabel1_4->setObjectName("textLabel1_4");

        _4->addWidget(textLabel1_4, 0, 3, 2, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        _4->addWidget(label_5, 2, 5, 1, 1);

        spacerItem5 = new QSpacerItem(71, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem5, 0, 6, 3, 1);

        vs_le = new QLineEdit(frame);
        vs_le->setObjectName("vs_le");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vs_le->sizePolicy().hasHeightForWidth());
        vs_le->setSizePolicy(sizePolicy1);

        _4->addWidget(vs_le, 2, 4, 1, 1);

        lw_le = new QLineEdit(frame);
        lw_le->setObjectName("lw_le");
        sizePolicy1.setHeightForWidth(lw_le->sizePolicy().hasHeightForWidth());
        lw_le->setSizePolicy(sizePolicy1);

        _4->addWidget(lw_le, 0, 4, 2, 1);

        spacerItem6 = new QSpacerItem(590, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _4->addItem(spacerItem6, 3, 0, 1, 7);

        stipple_pb = new lay::DitherPatternSelectionButton(frame);
        stipple_pb->setObjectName("stipple_pb");

        _4->addWidget(stipple_pb, 0, 1, 2, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        _4->addWidget(label, 0, 0, 2, 1);

        halo_cb = new QCheckBox(frame);
        halo_cb->setObjectName("halo_cb");
        halo_cb->setTristate(false);

        _4->addWidget(halo_cb, 2, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        _4->addWidget(label_7, 2, 0, 1, 1);

        textLabel2_2 = new QLabel(frame);
        textLabel2_2->setObjectName("textLabel2_2");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy2);

        _4->addWidget(textLabel2_2, 0, 5, 2, 1);

        spacerItem7 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _4->addItem(spacerItem7, 0, 2, 3, 1);


        gridLayout->addWidget(frame, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(NetlistBrowserConfigPage2);
        QObject::connect(brightness_cb, &QCheckBox::clicked, brightness_sb, &QSpinBox::setEnabled);
        QObject::connect(brightness_cb, &QCheckBox::clicked, brightness_label, &QLabel::setEnabled);

        QMetaObject::connectSlotsByName(NetlistBrowserConfigPage2);
    } // setupUi

    void retranslateUi(QFrame *NetlistBrowserConfigPage2)
    {
        NetlistBrowserConfigPage2->setWindowTitle(QCoreApplication::translate("NetlistBrowserConfigPage2", "Netlist Browser", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NetlistBrowserConfigPage2", "Marker Appearance", nullptr));
        label_6->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Nets, circuits and devices are highlighted using the given styles.\n"
"Nets can be highlighted using the drawing colors for original layers with a higher or lower\n"
"intensity, drawn with the highlight color or auto-colored with a cycling color from the palette.\n"
"Non-net objects are drawn using the highlight color.", nullptr));
        label_8->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Net auto-coloring", nullptr));
#if QT_CONFIG(tooltip)
        color_pb->setToolTip(QCoreApplication::translate("NetlistBrowserConfigPage2", "The color in which the rulers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        color_pb->setText(QString());
        label_9->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "or", nullptr));
        brightness_cb->setText(QString());
        brightness_label->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "% intensity increase (for net shapes on original layers)", nullptr));
        label_3->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Highlight color", nullptr));
        cycle_colors_cb->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Auto-color with palette", nullptr));
        cc0->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc1->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc5->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc6->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc3->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc7->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc4->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        cc2->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "...", nullptr));
        vs_lbl->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Vertex size", nullptr));
        textLabel1_4->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Line width", nullptr));
        label_5->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "pixel", nullptr));
        stipple_pb->setText(QString());
        label->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Stipple ", nullptr));
        halo_cb->setText(QString());
        label_7->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "Halo", nullptr));
        textLabel2_2->setText(QCoreApplication::translate("NetlistBrowserConfigPage2", "pixel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetlistBrowserConfigPage2: public Ui_NetlistBrowserConfigPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLISTBROWSERCONFIGPAGE2_H
