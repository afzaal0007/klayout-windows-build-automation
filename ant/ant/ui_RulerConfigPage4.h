/********************************************************************************
** Form generated from reading UI file 'RulerConfigPage4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULERCONFIGPAGE4_H
#define UI_RULERCONFIGPAGE4_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RulerConfigPage4
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QToolButton *up_templ_pb;
    QToolButton *add_templ_pb;
    QToolButton *del_templ_pb;
    QToolButton *down_templ_pb;
    QLabel *label_4;
    QListWidget *template_list;
    QFrame *mode_cb;
    QGridLayout *gridLayout1;
    QLabel *label_5;
    QLineEdit *fmt_x_le;
    QLabel *label_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_28;
    QComboBox *ylabel_xalign;
    QLabel *label_27;
    QComboBox *ylabel_yalign;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_4;
    QGridLayout *gridLayout2;
    QComboBox *main_position;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer;
    QLabel *label_21;
    QComboBox *main_yalign;
    QComboBox *main_xalign;
    QLabel *label_20;
    QLabel *label_14;
    QLabel *help_label;
    QLineEdit *fmt_y_le;
    QLabel *label_13;
    QLabel *label_16;
    QComboBox *outline_cb;
    QLabel *label_17;
    QCheckBox *t_snap_cbx;
    QLineEdit *fmt_le;
    QLabel *label_15;
    QLabel *label;
    QComboBox *t_angle_cb;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_22;
    QComboBox *xlabel_xalign;
    QLabel *label_23;
    QComboBox *xlabel_yalign;
    QComboBox *style_cb;
    QLabel *label_3;
    QComboBox *t_mode_cb;
    QLabel *label_6;

    void setupUi(QFrame *RulerConfigPage4)
    {
        if (RulerConfigPage4->objectName().isEmpty())
            RulerConfigPage4->setObjectName("RulerConfigPage4");
        RulerConfigPage4->resize(745, 438);
        vboxLayout = new QVBoxLayout(RulerConfigPage4);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(RulerConfigPage4);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setSpacing(16);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        up_templ_pb = new QToolButton(frame_3);
        up_templ_pb->setObjectName("up_templ_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        up_templ_pb->setIcon(icon);

        gridLayout->addWidget(up_templ_pb, 2, 2, 1, 1);

        add_templ_pb = new QToolButton(frame_3);
        add_templ_pb->setObjectName("add_templ_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_templ_pb->setIcon(icon1);

        gridLayout->addWidget(add_templ_pb, 2, 0, 1, 1);

        del_templ_pb = new QToolButton(frame_3);
        del_templ_pb->setObjectName("del_templ_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/del_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_templ_pb->setIcon(icon2);

        gridLayout->addWidget(del_templ_pb, 2, 1, 1, 1);

        down_templ_pb = new QToolButton(frame_3);
        down_templ_pb->setObjectName("down_templ_pb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        down_templ_pb->setIcon(icon3);

        gridLayout->addWidget(down_templ_pb, 2, 3, 1, 1);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 4);

        template_list = new QListWidget(frame_3);
        template_list->setObjectName("template_list");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(template_list->sizePolicy().hasHeightForWidth());
        template_list->setSizePolicy(sizePolicy1);
        template_list->setAlternatingRowColors(false);
        template_list->setUniformItemSizes(true);

        gridLayout->addWidget(template_list, 0, 0, 1, 4);


        hboxLayout->addWidget(frame_3);

        mode_cb = new QFrame(groupBox);
        mode_cb->setObjectName("mode_cb");
        mode_cb->setFrameShape(QFrame::StyledPanel);
        mode_cb->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(mode_cb);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        label_5 = new QLabel(mode_cb);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 5, 0, 1, 1);

        fmt_x_le = new QLineEdit(mode_cb);
        fmt_x_le->setObjectName("fmt_x_le");

        gridLayout1->addWidget(fmt_x_le, 2, 1, 1, 1);

        label_2 = new QLabel(mode_cb);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 8, 0, 1, 1);

        frame_6 = new QFrame(mode_cb);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_28 = new QLabel(frame_6);
        label_28->setObjectName("label_28");

        horizontalLayout_3->addWidget(label_28);

        ylabel_xalign = new QComboBox(frame_6);
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->setObjectName("ylabel_xalign");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ylabel_xalign->sizePolicy().hasHeightForWidth());
        ylabel_xalign->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ylabel_xalign);

        label_27 = new QLabel(frame_6);
        label_27->setObjectName("label_27");

        horizontalLayout_3->addWidget(label_27);

        ylabel_yalign = new QComboBox(frame_6);
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->setObjectName("ylabel_yalign");
        sizePolicy2.setHeightForWidth(ylabel_yalign->sizePolicy().hasHeightForWidth());
        ylabel_yalign->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ylabel_yalign);


        gridLayout1->addWidget(frame_6, 5, 1, 1, 1);

        frame = new QFrame(mode_cb);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame_4);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        main_position = new QComboBox(frame_4);
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->setObjectName("main_position");
        sizePolicy2.setHeightForWidth(main_position->sizePolicy().hasHeightForWidth());
        main_position->setSizePolicy(sizePolicy2);
        main_position->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout2->addWidget(main_position, 1, 1, 1, 1);

        label_19 = new QLabel(frame_4);
        label_19->setObjectName("label_19");

        gridLayout2->addWidget(label_19, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_21 = new QLabel(frame_4);
        label_21->setObjectName("label_21");

        gridLayout2->addWidget(label_21, 1, 5, 1, 1);

        main_yalign = new QComboBox(frame_4);
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->setObjectName("main_yalign");
        sizePolicy2.setHeightForWidth(main_yalign->sizePolicy().hasHeightForWidth());
        main_yalign->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(main_yalign, 1, 6, 1, 1);

        main_xalign = new QComboBox(frame_4);
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->setObjectName("main_xalign");
        sizePolicy2.setHeightForWidth(main_xalign->sizePolicy().hasHeightForWidth());
        main_xalign->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(main_xalign, 1, 4, 1, 1);

        label_20 = new QLabel(frame_4);
        label_20->setObjectName("label_20");

        gridLayout2->addWidget(label_20, 1, 3, 1, 1);


        horizontalLayout->addWidget(frame_4);


        gridLayout1->addWidget(frame, 1, 1, 1, 1);

        label_14 = new QLabel(mode_cb);
        label_14->setObjectName("label_14");

        gridLayout1->addWidget(label_14, 2, 0, 1, 1);

        help_label = new QLabel(mode_cb);
        help_label->setObjectName("help_label");

        gridLayout1->addWidget(help_label, 11, 0, 1, 2);

        fmt_y_le = new QLineEdit(mode_cb);
        fmt_y_le->setObjectName("fmt_y_le");

        gridLayout1->addWidget(fmt_y_le, 4, 1, 1, 1);

        label_13 = new QLabel(mode_cb);
        label_13->setObjectName("label_13");

        gridLayout1->addWidget(label_13, 0, 0, 1, 1);

        label_16 = new QLabel(mode_cb);
        label_16->setObjectName("label_16");

        gridLayout1->addWidget(label_16, 6, 0, 1, 1);

        outline_cb = new QComboBox(mode_cb);
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->addItem(QString());
        outline_cb->setObjectName("outline_cb");

        gridLayout1->addWidget(outline_cb, 7, 1, 1, 1);

        label_17 = new QLabel(mode_cb);
        label_17->setObjectName("label_17");

        gridLayout1->addWidget(label_17, 7, 0, 1, 1);

        t_snap_cbx = new QCheckBox(mode_cb);
        t_snap_cbx->setObjectName("t_snap_cbx");

        gridLayout1->addWidget(t_snap_cbx, 10, 1, 1, 1);

        fmt_le = new QLineEdit(mode_cb);
        fmt_le->setObjectName("fmt_le");

        gridLayout1->addWidget(fmt_le, 0, 1, 1, 1);

        label_15 = new QLabel(mode_cb);
        label_15->setObjectName("label_15");

        gridLayout1->addWidget(label_15, 4, 0, 1, 1);

        label = new QLabel(mode_cb);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        t_angle_cb = new QComboBox(mode_cb);
        t_angle_cb->addItem(QString());
        t_angle_cb->addItem(QString());
        t_angle_cb->addItem(QString());
        t_angle_cb->addItem(QString());
        t_angle_cb->addItem(QString());
        t_angle_cb->addItem(QString());
        t_angle_cb->setObjectName("t_angle_cb");

        gridLayout1->addWidget(t_angle_cb, 8, 1, 1, 1);

        frame_5 = new QFrame(mode_cb);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_22 = new QLabel(frame_5);
        label_22->setObjectName("label_22");

        horizontalLayout_2->addWidget(label_22);

        xlabel_xalign = new QComboBox(frame_5);
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->setObjectName("xlabel_xalign");
        sizePolicy2.setHeightForWidth(xlabel_xalign->sizePolicy().hasHeightForWidth());
        xlabel_xalign->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(xlabel_xalign);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");

        horizontalLayout_2->addWidget(label_23);

        xlabel_yalign = new QComboBox(frame_5);
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->setObjectName("xlabel_yalign");
        sizePolicy2.setHeightForWidth(xlabel_yalign->sizePolicy().hasHeightForWidth());
        xlabel_yalign->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(xlabel_yalign);


        gridLayout1->addWidget(frame_5, 3, 1, 1, 1);

        style_cb = new QComboBox(mode_cb);
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->setObjectName("style_cb");

        gridLayout1->addWidget(style_cb, 6, 1, 1, 1);

        label_3 = new QLabel(mode_cb);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 3, 0, 1, 1);

        t_mode_cb = new QComboBox(mode_cb);
        t_mode_cb->addItem(QString());
        t_mode_cb->addItem(QString());
        t_mode_cb->addItem(QString());
        t_mode_cb->addItem(QString());
        t_mode_cb->addItem(QString());
        t_mode_cb->addItem(QString());
        t_mode_cb->setObjectName("t_mode_cb");

        gridLayout1->addWidget(t_mode_cb, 9, 1, 1, 1);

        label_6 = new QLabel(mode_cb);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 9, 0, 1, 1);


        hboxLayout->addWidget(mode_cb);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(template_list, add_templ_pb);
        QWidget::setTabOrder(add_templ_pb, del_templ_pb);
        QWidget::setTabOrder(del_templ_pb, up_templ_pb);
        QWidget::setTabOrder(up_templ_pb, down_templ_pb);
        QWidget::setTabOrder(down_templ_pb, fmt_le);
        QWidget::setTabOrder(fmt_le, fmt_x_le);
        QWidget::setTabOrder(fmt_x_le, fmt_y_le);
        QWidget::setTabOrder(fmt_y_le, style_cb);
        QWidget::setTabOrder(style_cb, outline_cb);
        QWidget::setTabOrder(outline_cb, t_angle_cb);
        QWidget::setTabOrder(t_angle_cb, t_snap_cbx);

        retranslateUi(RulerConfigPage4);

        QMetaObject::connectSlotsByName(RulerConfigPage4);
    } // setupUi

    void retranslateUi(QFrame *RulerConfigPage4)
    {
        RulerConfigPage4->setWindowTitle(QCoreApplication::translate("RulerConfigPage4", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RulerConfigPage4", "Ruler / annotation templates", nullptr));
#if QT_CONFIG(tooltip)
        up_templ_pb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Move selected template up in list", nullptr));
#endif // QT_CONFIG(tooltip)
        up_templ_pb->setText(QCoreApplication::translate("RulerConfigPage4", "...", nullptr));
#if QT_CONFIG(tooltip)
        add_templ_pb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Add a new template", nullptr));
#endif // QT_CONFIG(tooltip)
        add_templ_pb->setText(QCoreApplication::translate("RulerConfigPage4", "...", nullptr));
#if QT_CONFIG(tooltip)
        del_templ_pb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Delete selected template", nullptr));
#endif // QT_CONFIG(tooltip)
        del_templ_pb->setText(QCoreApplication::translate("RulerConfigPage4", "...", nullptr));
#if QT_CONFIG(tooltip)
        down_templ_pb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Move selected template down in list", nullptr));
#endif // QT_CONFIG(tooltip)
        down_templ_pb->setText(QCoreApplication::translate("RulerConfigPage4", "...", nullptr));
        label_4->setText(QCoreApplication::translate("RulerConfigPage4", "Double-click to rename", nullptr));
#if QT_CONFIG(tooltip)
        template_list->setToolTip(QCoreApplication::translate("RulerConfigPage4", "The template selected for editing", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("RulerConfigPage4", "   ... position", nullptr));
#if QT_CONFIG(tooltip)
        fmt_x_le->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Specify the x label format (applicable only for outline modes that have a horizontal component, i.e. box)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RulerConfigPage4", "Angle constraints", nullptr));
        label_28->setText(QCoreApplication::translate("RulerConfigPage4", "H", nullptr));
        ylabel_xalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        ylabel_xalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "H. center", nullptr));
        ylabel_xalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Left", nullptr));
        ylabel_xalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Right", nullptr));

        label_27->setText(QCoreApplication::translate("RulerConfigPage4", "V", nullptr));
        ylabel_yalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        ylabel_yalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "V. center", nullptr));
        ylabel_yalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Bottom", nullptr));
        ylabel_yalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Top", nullptr));

        main_position->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        main_position->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "At first point", nullptr));
        main_position->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "At second point", nullptr));
        main_position->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "At center", nullptr));

        label_19->setText(QCoreApplication::translate("RulerConfigPage4", "P", nullptr));
        label_21->setText(QCoreApplication::translate("RulerConfigPage4", "V", nullptr));
        main_yalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        main_yalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "V. center", nullptr));
        main_yalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Bottom", nullptr));
        main_yalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Top", nullptr));

        main_xalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        main_xalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "H. center", nullptr));
        main_xalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Left", nullptr));
        main_xalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Right", nullptr));

        label_20->setText(QCoreApplication::translate("RulerConfigPage4", "H", nullptr));
        label_14->setText(QCoreApplication::translate("RulerConfigPage4", "X label format", nullptr));
        help_label->setText(QCoreApplication::translate("RulerConfigPage4", "<html>(See <a href=\"int:/manual/ruler_properties.xml\">here</a> for a description of the properties)</html>", nullptr));
#if QT_CONFIG(tooltip)
        fmt_y_le->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Specify the y label format (applicable only for outline modes that have a vertical component, i.e. box)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("RulerConfigPage4", "Label format", nullptr));
        label_16->setText(QCoreApplication::translate("RulerConfigPage4", "Style", nullptr));
        outline_cb->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Diagonal", nullptr));
        outline_cb->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "Horizonal and vertical (in this order)", nullptr));
        outline_cb->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Diagonal plus horizonal and vertical (triangle)", nullptr));
        outline_cb->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Vertical and horizonal (in this order)", nullptr));
        outline_cb->setItemText(4, QCoreApplication::translate("RulerConfigPage4", "Diagonal plus vertical and horizontal (triangle)", nullptr));
        outline_cb->setItemText(5, QCoreApplication::translate("RulerConfigPage4", "Box marker", nullptr));
        outline_cb->setItemText(6, QCoreApplication::translate("RulerConfigPage4", "Ellipse", nullptr));
        outline_cb->setItemText(7, QCoreApplication::translate("RulerConfigPage4", "Angle measurement", nullptr));
        outline_cb->setItemText(8, QCoreApplication::translate("RulerConfigPage4", "Radius measurement", nullptr));

#if QT_CONFIG(tooltip)
        outline_cb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Specify outline mode of the ruler template", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("RulerConfigPage4", "Outline", nullptr));
#if QT_CONFIG(tooltip)
        t_snap_cbx->setToolTip(QCoreApplication::translate("RulerConfigPage4", "If checked, snap to edges or vertices of objects unless disabled above", nullptr));
#endif // QT_CONFIG(tooltip)
        t_snap_cbx->setText(QCoreApplication::translate("RulerConfigPage4", "Snap to objects", nullptr));
#if QT_CONFIG(tooltip)
        fmt_le->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Specify the main label format", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("RulerConfigPage4", "Y label format", nullptr));
        label->setText(QCoreApplication::translate("RulerConfigPage4", "   ... position", nullptr));
        t_angle_cb->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Any angle", nullptr));
        t_angle_cb->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "Diagonal", nullptr));
        t_angle_cb->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Orthogonal", nullptr));
        t_angle_cb->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Horizontal only", nullptr));
        t_angle_cb->setItemText(4, QCoreApplication::translate("RulerConfigPage4", "Vertical only", nullptr));
        t_angle_cb->setItemText(5, QCoreApplication::translate("RulerConfigPage4", "Use global setting", nullptr));

#if QT_CONFIG(tooltip)
        t_angle_cb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Override the global angle constraint setting for this type of rulers", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("RulerConfigPage4", "H", nullptr));
        xlabel_xalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        xlabel_xalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "H. center", nullptr));
        xlabel_xalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Left", nullptr));
        xlabel_xalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Right", nullptr));

        label_23->setText(QCoreApplication::translate("RulerConfigPage4", "V", nullptr));
        xlabel_yalign->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Auto", nullptr));
        xlabel_yalign->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "V. center", nullptr));
        xlabel_yalign->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Bottom", nullptr));
        xlabel_yalign->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Top", nullptr));

        style_cb->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Ruler", nullptr));
        style_cb->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "Arrow at end", nullptr));
        style_cb->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Arrow at start", nullptr));
        style_cb->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Arrow at both ends", nullptr));
        style_cb->setItemText(4, QCoreApplication::translate("RulerConfigPage4", "Plain line", nullptr));
        style_cb->setItemText(5, QCoreApplication::translate("RulerConfigPage4", "Cross at end", nullptr));
        style_cb->setItemText(6, QCoreApplication::translate("RulerConfigPage4", "Cross at start", nullptr));
        style_cb->setItemText(7, QCoreApplication::translate("RulerConfigPage4", "Cross at both ends", nullptr));

#if QT_CONFIG(tooltip)
        style_cb->setToolTip(QCoreApplication::translate("RulerConfigPage4", "Specify style of the ruler template", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("RulerConfigPage4", "   ... position", nullptr));
        t_mode_cb->setItemText(0, QCoreApplication::translate("RulerConfigPage4", "Normal", nullptr));
        t_mode_cb->setItemText(1, QCoreApplication::translate("RulerConfigPage4", "Single click (both points will be equal)", nullptr));
        t_mode_cb->setItemText(2, QCoreApplication::translate("RulerConfigPage4", "Auto measure (points will be set automatically)", nullptr));
        t_mode_cb->setItemText(3, QCoreApplication::translate("RulerConfigPage4", "Auto measure along edge (points will be set automatically)", nullptr));
        t_mode_cb->setItemText(4, QCoreApplication::translate("RulerConfigPage4", "Angle or radius measurement (three mouse clicks)", nullptr));
        t_mode_cb->setItemText(5, QCoreApplication::translate("RulerConfigPage4", "Multi-segment (finish with double click)", nullptr));

        label_6->setText(QCoreApplication::translate("RulerConfigPage4", "Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RulerConfigPage4: public Ui_RulerConfigPage4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULERCONFIGPAGE4_H
