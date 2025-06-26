/********************************************************************************
** Form generated from reading UI file 'NetTracerConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTRACERCONFIGPAGE_H
#define UI_NETTRACERCONFIGPAGE_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_NetTracerConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *label_9;
    QLabel *label_4;
    QSpacerItem *spacerItem3;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QToolButton *cc0;
    QToolButton *cc1;
    QToolButton *cc2;
    QToolButton *cc3;
    QToolButton *cc4;
    QToolButton *cc5;
    QToolButton *cc6;
    QToolButton *cc7;
    QSpacerItem *spacerItem4;
    QCheckBox *cycle_colors_cb;
    QLabel *label_8;
    QSpinBox *brightness_sb;
    lay::ColorButton *color_pb;
    QFrame *frame;
    QGridLayout *gridLayout2;
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
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem8;
    QComboBox *cbx_window;
    QLineEdit *le_max_markers;
    QLabel *textLabel1_2;
    QLabel *textLabel2;
    QLineEdit *le_window;
    QSpacerItem *spacerItem9;
    QLabel *label_2;

    void setupUi(QFrame *NetTracerConfigPage)
    {
        if (NetTracerConfigPage->objectName().isEmpty())
            NetTracerConfigPage->setObjectName("NetTracerConfigPage");
        NetTracerConfigPage->resize(699, 554);
        vboxLayout = new QVBoxLayout(NetTracerConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(NetTracerConfigPage);
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
        gridLayout1 = new QGridLayout(frame_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 0, 0, 1, 6);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 3, 0, 1, 1);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 0, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label_9, 1, 2, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 1, 4, 1, 1);

        spacerItem3 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 5, 1, 1);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        cc0 = new QToolButton(frame_3);
        cc0->setObjectName("cc0");

        hboxLayout->addWidget(cc0);

        cc1 = new QToolButton(frame_3);
        cc1->setObjectName("cc1");

        hboxLayout->addWidget(cc1);

        cc2 = new QToolButton(frame_3);
        cc2->setObjectName("cc2");

        hboxLayout->addWidget(cc2);

        cc3 = new QToolButton(frame_3);
        cc3->setObjectName("cc3");

        hboxLayout->addWidget(cc3);

        cc4 = new QToolButton(frame_3);
        cc4->setObjectName("cc4");

        hboxLayout->addWidget(cc4);

        cc5 = new QToolButton(frame_3);
        cc5->setObjectName("cc5");

        hboxLayout->addWidget(cc5);

        cc6 = new QToolButton(frame_3);
        cc6->setObjectName("cc6");

        hboxLayout->addWidget(cc6);

        cc7 = new QToolButton(frame_3);
        cc7->setObjectName("cc7");

        hboxLayout->addWidget(cc7);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        gridLayout1->addWidget(frame_3, 3, 3, 1, 3);

        cycle_colors_cb = new QCheckBox(frame_2);
        cycle_colors_cb->setObjectName("cycle_colors_cb");

        gridLayout1->addWidget(cycle_colors_cb, 3, 1, 1, 2);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        gridLayout1->addWidget(label_8, 2, 0, 1, 6);

        brightness_sb = new QSpinBox(frame_2);
        brightness_sb->setObjectName("brightness_sb");
        brightness_sb->setMinimum(-100);
        brightness_sb->setMaximum(100);
        brightness_sb->setSingleStep(10);

        gridLayout1->addWidget(brightness_sb, 1, 3, 1, 1);

        color_pb = new lay::ColorButton(frame_2);
        color_pb->setObjectName("color_pb");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(color_pb->sizePolicy().hasHeightForWidth());
        color_pb->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(color_pb, 1, 1, 1, 1);


        gridLayout->addWidget(frame_2, 3, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        vs_lbl = new QLabel(frame);
        vs_lbl->setObjectName("vs_lbl");

        gridLayout2->addWidget(vs_lbl, 2, 3, 1, 1);

        textLabel1_4 = new QLabel(frame);
        textLabel1_4->setObjectName("textLabel1_4");

        gridLayout2->addWidget(textLabel1_4, 0, 3, 2, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout2->addWidget(label_5, 2, 5, 1, 1);

        spacerItem5 = new QSpacerItem(71, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem5, 0, 6, 3, 1);

        vs_le = new QLineEdit(frame);
        vs_le->setObjectName("vs_le");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vs_le->sizePolicy().hasHeightForWidth());
        vs_le->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(vs_le, 2, 4, 1, 1);

        lw_le = new QLineEdit(frame);
        lw_le->setObjectName("lw_le");
        sizePolicy1.setHeightForWidth(lw_le->sizePolicy().hasHeightForWidth());
        lw_le->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(lw_le, 0, 4, 2, 1);

        spacerItem6 = new QSpacerItem(590, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout2->addItem(spacerItem6, 3, 0, 1, 7);

        stipple_pb = new lay::DitherPatternSelectionButton(frame);
        stipple_pb->setObjectName("stipple_pb");

        gridLayout2->addWidget(stipple_pb, 0, 1, 2, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout2->addWidget(label, 0, 0, 2, 1);

        halo_cb = new QCheckBox(frame);
        halo_cb->setObjectName("halo_cb");
        halo_cb->setTristate(true);

        gridLayout2->addWidget(halo_cb, 2, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout2->addWidget(label_7, 2, 0, 1, 1);

        textLabel2_2 = new QLabel(frame);
        textLabel2_2->setObjectName("textLabel2_2");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(textLabel2_2, 0, 5, 2, 1);

        spacerItem7 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem7, 0, 2, 3, 1);


        gridLayout->addWidget(frame, 2, 0, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(NetTracerConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout3 = new QGridLayout(groupBox);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        spacerItem8 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem8, 0, 2, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout3->addWidget(cbx_window, 0, 1, 1, 1);

        le_max_markers = new QLineEdit(groupBox);
        le_max_markers->setObjectName("le_max_markers");
        sizePolicy1.setHeightForWidth(le_max_markers->sizePolicy().hasHeightForWidth());
        le_max_markers->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(le_max_markers, 1, 3, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout3->addWidget(textLabel1_2, 0, 0, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName("textLabel2");

        gridLayout3->addWidget(textLabel2, 0, 4, 1, 1);

        le_window = new QLineEdit(groupBox);
        le_window->setObjectName("le_window");
        le_window->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_window->sizePolicy().hasHeightForWidth());
        le_window->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(le_window, 0, 3, 1, 1);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem9, 0, 5, 2, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout3->addWidget(label_2, 1, 0, 1, 3);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(brightness_sb, color_pb);
        QWidget::setTabOrder(color_pb, lw_le);
        QWidget::setTabOrder(lw_le, stipple_pb);
        QWidget::setTabOrder(stipple_pb, vs_le);
        QWidget::setTabOrder(vs_le, halo_cb);
        QWidget::setTabOrder(halo_cb, cbx_window);
        QWidget::setTabOrder(cbx_window, le_window);
        QWidget::setTabOrder(le_window, le_max_markers);

        retranslateUi(NetTracerConfigPage);

        QMetaObject::connectSlotsByName(NetTracerConfigPage);
    } // setupUi

    void retranslateUi(QFrame *NetTracerConfigPage)
    {
        NetTracerConfigPage->setWindowTitle(QCoreApplication::translate("NetTracerConfigPage", "Net Tracer Config Page", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NetTracerConfigPage", "Net Appearance", nullptr));
        label_6->setText(QCoreApplication::translate("NetTracerConfigPage", "By default, the original layer's style is used for the highlighted net. \n"
"This style can be overridden by specifying a color, stipple, line width etc. \n"
"Leave those fields empty to use the original style. \n"
"With \"original color\", the color intensity adjustment allows increasing or decreasing the \n"
"brightness of the color used.", nullptr));
        label_3->setText(QCoreApplication::translate("NetTracerConfigPage", "Net highlighting", nullptr));
        label_9->setText(QCoreApplication::translate("NetTracerConfigPage", "or", nullptr));
        label_4->setText(QCoreApplication::translate("NetTracerConfigPage", "% intensity increase", nullptr));
        cc0->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc1->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc2->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc3->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc4->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc5->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc6->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cc7->setText(QCoreApplication::translate("NetTracerConfigPage", "...", nullptr));
        cycle_colors_cb->setText(QCoreApplication::translate("NetTracerConfigPage", "Auto-color with palette", nullptr));
        label_8->setText(QCoreApplication::translate("NetTracerConfigPage", "Net coloring", nullptr));
#if QT_CONFIG(tooltip)
        color_pb->setToolTip(QCoreApplication::translate("NetTracerConfigPage", "The color in which the rulers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        color_pb->setText(QString());
        vs_lbl->setText(QCoreApplication::translate("NetTracerConfigPage", "Vertex size", nullptr));
        textLabel1_4->setText(QCoreApplication::translate("NetTracerConfigPage", "Line width", nullptr));
        label_5->setText(QCoreApplication::translate("NetTracerConfigPage", "pixel", nullptr));
        stipple_pb->setText(QString());
        label->setText(QCoreApplication::translate("NetTracerConfigPage", "Stipple ", nullptr));
        halo_cb->setText(QString());
        label_7->setText(QCoreApplication::translate("NetTracerConfigPage", "Halo", nullptr));
        textLabel2_2->setText(QCoreApplication::translate("NetTracerConfigPage", "pixel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NetTracerConfigPage", "Net Browser", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("NetTracerConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("NetTracerConfigPage", "Fit net with margin ..", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("NetTracerConfigPage", "Center net", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("NetTracerConfigPage", "Center net with size ..", nullptr));

        textLabel1_2->setText(QCoreApplication::translate("NetTracerConfigPage", "Window      ", nullptr));
        textLabel2->setText(QCoreApplication::translate("NetTracerConfigPage", "\302\265m", nullptr));
        label_2->setText(QCoreApplication::translate("NetTracerConfigPage", "Maximum number of shapes highlighted", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetTracerConfigPage: public Ui_NetTracerConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTRACERCONFIGPAGE_H
