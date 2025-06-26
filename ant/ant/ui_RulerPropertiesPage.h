/********************************************************************************
** Form generated from reading UI file 'RulerPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULERPROPERTIESPAGE_H
#define UI_RULERPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RulerPropertiesPage
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QLineEdit *fmt_le;
    QLineEdit *fmt_x_le;
    QLabel *label_13;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *fmt_y_le;
    QLabel *label_26;
    QLabel *label_18;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QComboBox *main_xalign;
    QSpacerItem *horizontalSpacer;
    QLabel *label_20;
    QComboBox *main_yalign;
    QComboBox *main_position;
    QLabel *label_19;
    QLabel *label_21;
    QComboBox *outline_cb;
    QComboBox *style_cb;
    QLabel *help_label;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_22;
    QComboBox *xlabel_xalign;
    QLabel *label_23;
    QComboBox *xlabel_yalign;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_28;
    QComboBox *ylabel_xalign;
    QLabel *label_27;
    QComboBox *ylabel_yalign;
    QLabel *label_25;
    QTabWidget *segments_tab;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *label_31;
    QLabel *label_30;
    QLineEdit *x0;
    QLabel *label_29;
    QLineEdit *y0;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *dx;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *x1;
    QLineEdit *y1;
    QLineEdit *y2;
    QLabel *label_2;
    QLineEdit *x2;
    QLabel *label_6;
    QLineEdit *dd;
    QFrame *line;
    QLabel *label_5;
    QLineEdit *dy;
    QSpacerItem *verticalSpacer_6;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *swap_points;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_24;
    QToolButton *p1_to_layout;
    QToolButton *p2_to_layout;
    QToolButton *both_to_layout;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTreeWidget *point_list;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *points_edit;

    void setupUi(QWidget *RulerPropertiesPage)
    {
        if (RulerPropertiesPage->objectName().isEmpty())
            RulerPropertiesPage->setObjectName("RulerPropertiesPage");
        RulerPropertiesPage->resize(669, 621);
        gridLayout_2 = new QGridLayout(RulerPropertiesPage);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(RulerPropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 4);

        fmt_le = new QLineEdit(frame);
        fmt_le->setObjectName("fmt_le");

        gridLayout->addWidget(fmt_le, 1, 2, 1, 2);

        fmt_x_le = new QLineEdit(frame);
        fmt_x_le->setObjectName("fmt_x_le");

        gridLayout->addWidget(fmt_x_le, 4, 2, 1, 2);

        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 7, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 9, 0, 1, 4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 0));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame_5, 14, 2, 1, 2);

        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 10, 0, 1, 2);

        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 11, 0, 1, 2);

        fmt_y_le = new QLineEdit(frame);
        fmt_y_le->setObjectName("fmt_y_le");

        gridLayout->addWidget(fmt_y_le, 7, 2, 1, 2);

        label_26 = new QLabel(frame);
        label_26->setObjectName("label_26");

        gridLayout->addWidget(label_26, 8, 0, 1, 1);

        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame_2);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        main_xalign = new QComboBox(frame_2);
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->addItem(QString());
        main_xalign->setObjectName("main_xalign");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_xalign->sizePolicy().hasHeightForWidth());
        main_xalign->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(main_xalign, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");

        gridLayout1->addWidget(label_20, 1, 3, 1, 1);

        main_yalign = new QComboBox(frame_2);
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->addItem(QString());
        main_yalign->setObjectName("main_yalign");
        sizePolicy.setHeightForWidth(main_yalign->sizePolicy().hasHeightForWidth());
        main_yalign->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(main_yalign, 1, 6, 1, 1);

        main_position = new QComboBox(frame_2);
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->addItem(QString());
        main_position->setObjectName("main_position");
        main_position->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout1->addWidget(main_position, 1, 1, 1, 1);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");

        gridLayout1->addWidget(label_19, 1, 0, 1, 1);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");

        gridLayout1->addWidget(label_21, 1, 5, 1, 1);


        gridLayout->addWidget(frame_2, 2, 2, 1, 2);

        outline_cb = new QComboBox(frame);
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

        gridLayout->addWidget(outline_cb, 11, 2, 1, 2);

        style_cb = new QComboBox(frame);
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->addItem(QString());
        style_cb->setObjectName("style_cb");

        gridLayout->addWidget(style_cb, 10, 2, 1, 2);

        help_label = new QLabel(frame);
        help_label->setObjectName("help_label");

        gridLayout->addWidget(help_label, 12, 2, 1, 2);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 0, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 13, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 4);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame_7, 16, 2, 1, 2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_22 = new QLabel(frame_3);
        label_22->setObjectName("label_22");

        horizontalLayout->addWidget(label_22);

        xlabel_xalign = new QComboBox(frame_3);
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->addItem(QString());
        xlabel_xalign->setObjectName("xlabel_xalign");
        sizePolicy.setHeightForWidth(xlabel_xalign->sizePolicy().hasHeightForWidth());
        xlabel_xalign->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(xlabel_xalign);

        label_23 = new QLabel(frame_3);
        label_23->setObjectName("label_23");

        horizontalLayout->addWidget(label_23);

        xlabel_yalign = new QComboBox(frame_3);
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->addItem(QString());
        xlabel_yalign->setObjectName("xlabel_yalign");
        sizePolicy.setHeightForWidth(xlabel_yalign->sizePolicy().hasHeightForWidth());
        xlabel_yalign->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(xlabel_yalign);


        gridLayout->addWidget(frame_3, 5, 2, 1, 2);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_28 = new QLabel(frame_4);
        label_28->setObjectName("label_28");

        horizontalLayout_2->addWidget(label_28);

        ylabel_xalign = new QComboBox(frame_4);
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->addItem(QString());
        ylabel_xalign->setObjectName("ylabel_xalign");
        sizePolicy.setHeightForWidth(ylabel_xalign->sizePolicy().hasHeightForWidth());
        ylabel_xalign->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(ylabel_xalign);

        label_27 = new QLabel(frame_4);
        label_27->setObjectName("label_27");

        horizontalLayout_2->addWidget(label_27);

        ylabel_yalign = new QComboBox(frame_4);
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->addItem(QString());
        ylabel_yalign->setObjectName("ylabel_yalign");
        sizePolicy.setHeightForWidth(ylabel_yalign->sizePolicy().hasHeightForWidth());
        ylabel_yalign->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(ylabel_yalign);


        gridLayout->addWidget(frame_4, 8, 2, 1, 2);

        label_25 = new QLabel(frame);
        label_25->setObjectName("label_25");

        gridLayout->addWidget(label_25, 5, 0, 1, 1);

        segments_tab = new QTabWidget(frame);
        segments_tab->setObjectName("segments_tab");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(segments_tab->sizePolicy().hasHeightForWidth());
        segments_tab->setSizePolicy(sizePolicy2);
        segments_tab->setMinimumSize(QSize(0, 100));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_31 = new QLabel(tab_3);
        label_31->setObjectName("label_31");

        gridLayout_4->addWidget(label_31, 0, 0, 1, 1);

        label_30 = new QLabel(tab_3);
        label_30->setObjectName("label_30");

        gridLayout_4->addWidget(label_30, 0, 1, 1, 1);

        x0 = new QLineEdit(tab_3);
        x0->setObjectName("x0");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(x0->sizePolicy().hasHeightForWidth());
        x0->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(x0, 0, 2, 1, 1);

        label_29 = new QLabel(tab_3);
        label_29->setObjectName("label_29");

        gridLayout_4->addWidget(label_29, 0, 3, 1, 1);

        y0 = new QLineEdit(tab_3);
        y0->setObjectName("y0");
        sizePolicy3.setHeightForWidth(y0->sizePolicy().hasHeightForWidth());
        y0->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(y0, 0, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(558, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 1, 0, 1, 5);

        segments_tab->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName("gridLayout_3");
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 5, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 1, 3, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");

        gridLayout_3->addWidget(label_10, 4, 3, 1, 1);

        dx = new QLineEdit(tab);
        dx->setObjectName("dx");
        sizePolicy3.setHeightForWidth(dx->sizePolicy().hasHeightForWidth());
        dx->setSizePolicy(sizePolicy3);
        dx->setReadOnly(true);

        gridLayout_3->addWidget(dx, 4, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 5, 0, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 4, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        x1 = new QLineEdit(tab);
        x1->setObjectName("x1");
        sizePolicy3.setHeightForWidth(x1->sizePolicy().hasHeightForWidth());
        x1->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(x1, 0, 2, 1, 1);

        y1 = new QLineEdit(tab);
        y1->setObjectName("y1");
        sizePolicy3.setHeightForWidth(y1->sizePolicy().hasHeightForWidth());
        y1->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(y1, 0, 4, 1, 1);

        y2 = new QLineEdit(tab);
        y2->setObjectName("y2");
        sizePolicy3.setHeightForWidth(y2->sizePolicy().hasHeightForWidth());
        y2->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(y2, 1, 4, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        x2 = new QLineEdit(tab);
        x2->setObjectName("x2");
        sizePolicy3.setHeightForWidth(x2->sizePolicy().hasHeightForWidth());
        x2->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(x2, 1, 2, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 1, 1, 1, 1);

        dd = new QLineEdit(tab);
        dd->setObjectName("dd");
        sizePolicy3.setHeightForWidth(dd->sizePolicy().hasHeightForWidth());
        dd->setSizePolicy(sizePolicy3);
        dd->setReadOnly(true);

        gridLayout_3->addWidget(dd, 5, 2, 1, 1);

        line = new QFrame(tab);
        line->setObjectName("line");
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 3, 0, 1, 5);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        dy = new QLineEdit(tab);
        dy->setObjectName("dy");
        sizePolicy3.setHeightForWidth(dy->sizePolicy().hasHeightForWidth());
        dy->setSizePolicy(sizePolicy3);
        dy->setReadOnly(true);

        gridLayout_3->addWidget(dy, 4, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 6, 0, 1, 5);

        frame_6 = new QFrame(tab);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(0, 30));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        swap_points = new QToolButton(frame_6);
        swap_points->setObjectName("swap_points");

        horizontalLayout_5->addWidget(swap_points);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_24 = new QLabel(frame_6);
        label_24->setObjectName("label_24");

        horizontalLayout_5->addWidget(label_24);

        p1_to_layout = new QToolButton(frame_6);
        p1_to_layout->setObjectName("p1_to_layout");
        p1_to_layout->setAutoRaise(false);

        horizontalLayout_5->addWidget(p1_to_layout);

        p2_to_layout = new QToolButton(frame_6);
        p2_to_layout->setObjectName("p2_to_layout");
        p2_to_layout->setAutoRaise(false);

        horizontalLayout_5->addWidget(p2_to_layout);

        both_to_layout = new QToolButton(frame_6);
        both_to_layout->setObjectName("both_to_layout");
        both_to_layout->setAutoRaise(false);

        horizontalLayout_5->addWidget(both_to_layout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_3->addWidget(frame_6, 2, 2, 1, 3);

        segments_tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        point_list = new QTreeWidget(tab_2);
        point_list->setObjectName("point_list");
        point_list->setRootIsDecorated(false);
        point_list->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(point_list);

        segments_tab->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        points_edit = new QTextEdit(tab_4);
        points_edit->setObjectName("points_edit");
        points_edit->setAcceptRichText(false);

        verticalLayout_2->addWidget(points_edit);

        segments_tab->addTab(tab_4, QString());

        gridLayout->addWidget(segments_tab, 14, 0, 3, 4);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(fmt_le, main_position);
        QWidget::setTabOrder(main_position, main_xalign);
        QWidget::setTabOrder(main_xalign, main_yalign);
        QWidget::setTabOrder(main_yalign, fmt_x_le);
        QWidget::setTabOrder(fmt_x_le, xlabel_xalign);
        QWidget::setTabOrder(xlabel_xalign, xlabel_yalign);
        QWidget::setTabOrder(xlabel_yalign, fmt_y_le);
        QWidget::setTabOrder(fmt_y_le, ylabel_xalign);
        QWidget::setTabOrder(ylabel_xalign, ylabel_yalign);
        QWidget::setTabOrder(ylabel_yalign, style_cb);
        QWidget::setTabOrder(style_cb, outline_cb);
        QWidget::setTabOrder(outline_cb, segments_tab);
        QWidget::setTabOrder(segments_tab, x0);
        QWidget::setTabOrder(x0, y0);
        QWidget::setTabOrder(y0, x1);
        QWidget::setTabOrder(x1, y1);
        QWidget::setTabOrder(y1, x2);
        QWidget::setTabOrder(x2, y2);
        QWidget::setTabOrder(y2, swap_points);
        QWidget::setTabOrder(swap_points, p1_to_layout);
        QWidget::setTabOrder(p1_to_layout, p2_to_layout);
        QWidget::setTabOrder(p2_to_layout, both_to_layout);
        QWidget::setTabOrder(both_to_layout, dx);
        QWidget::setTabOrder(dx, dy);
        QWidget::setTabOrder(dy, dd);
        QWidget::setTabOrder(dd, point_list);
        QWidget::setTabOrder(point_list, points_edit);

        retranslateUi(RulerPropertiesPage);

        segments_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RulerPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *RulerPropertiesPage)
    {
        RulerPropertiesPage->setWindowTitle(QCoreApplication::translate("RulerPropertiesPage", "Form", nullptr));
        label_14->setText(QCoreApplication::translate("RulerPropertiesPage", "X label format", nullptr));
        label_13->setText(QCoreApplication::translate("RulerPropertiesPage", "Label format", nullptr));
        label_15->setText(QCoreApplication::translate("RulerPropertiesPage", "Y label format", nullptr));
        label_16->setText(QCoreApplication::translate("RulerPropertiesPage", "Style", nullptr));
        label_17->setText(QCoreApplication::translate("RulerPropertiesPage", "Outline", nullptr));
        label_26->setText(QCoreApplication::translate("RulerPropertiesPage", "   ... position", nullptr));
        label_18->setText(QCoreApplication::translate("RulerPropertiesPage", "   ... position", nullptr));
        main_xalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        main_xalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "H. center", nullptr));
        main_xalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Left", nullptr));
        main_xalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Right", nullptr));

        label_20->setText(QCoreApplication::translate("RulerPropertiesPage", "H", nullptr));
        main_yalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        main_yalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "V. center", nullptr));
        main_yalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Bottom", nullptr));
        main_yalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Top", nullptr));

        main_position->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        main_position->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "At first point", nullptr));
        main_position->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "At second point", nullptr));
        main_position->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "At center", nullptr));

        label_19->setText(QCoreApplication::translate("RulerPropertiesPage", "P", nullptr));
        label_21->setText(QCoreApplication::translate("RulerPropertiesPage", "V", nullptr));
        outline_cb->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Diagonal", nullptr));
        outline_cb->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "Horizonal and vertical (in this order)", nullptr));
        outline_cb->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Diagonal plus horizonal and vertical (triangle)", nullptr));
        outline_cb->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Vertical and horizonal (in this order)", nullptr));
        outline_cb->setItemText(4, QCoreApplication::translate("RulerPropertiesPage", "Diagonal plus vertical and horizontal (triangle)", nullptr));
        outline_cb->setItemText(5, QCoreApplication::translate("RulerPropertiesPage", "Box", nullptr));
        outline_cb->setItemText(6, QCoreApplication::translate("RulerPropertiesPage", "Ellipse", nullptr));
        outline_cb->setItemText(7, QCoreApplication::translate("RulerPropertiesPage", "Angle measurement", nullptr));
        outline_cb->setItemText(8, QCoreApplication::translate("RulerPropertiesPage", "Radius measurement", nullptr));

        style_cb->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Ruler", nullptr));
        style_cb->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "Arrow at end", nullptr));
        style_cb->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Arrow at start", nullptr));
        style_cb->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Arrow at both ends", nullptr));
        style_cb->setItemText(4, QCoreApplication::translate("RulerPropertiesPage", "Plain line", nullptr));
        style_cb->setItemText(5, QCoreApplication::translate("RulerPropertiesPage", "Cross at end", nullptr));
        style_cb->setItemText(6, QCoreApplication::translate("RulerPropertiesPage", "Cross at start", nullptr));
        style_cb->setItemText(7, QCoreApplication::translate("RulerPropertiesPage", "Cross at both ends", nullptr));

        help_label->setText(QCoreApplication::translate("RulerPropertiesPage", "<html>(See <a href=\"int:/manual/ruler_properties.xml\">here</a> for a description of the properties)</html>", nullptr));
        label_12->setText(QCoreApplication::translate("RulerPropertiesPage", "Ruler Properties", nullptr));
        label_22->setText(QCoreApplication::translate("RulerPropertiesPage", "H", nullptr));
        xlabel_xalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        xlabel_xalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "H. center", nullptr));
        xlabel_xalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Left", nullptr));
        xlabel_xalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Right", nullptr));

        label_23->setText(QCoreApplication::translate("RulerPropertiesPage", "V", nullptr));
        xlabel_yalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        xlabel_yalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "V. center", nullptr));
        xlabel_yalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Bottom", nullptr));
        xlabel_yalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Top", nullptr));

        label_28->setText(QCoreApplication::translate("RulerPropertiesPage", "H", nullptr));
        ylabel_xalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        ylabel_xalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "H. center", nullptr));
        ylabel_xalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Left", nullptr));
        ylabel_xalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Right", nullptr));

        label_27->setText(QCoreApplication::translate("RulerPropertiesPage", "V", nullptr));
        ylabel_yalign->setItemText(0, QCoreApplication::translate("RulerPropertiesPage", "Auto", nullptr));
        ylabel_yalign->setItemText(1, QCoreApplication::translate("RulerPropertiesPage", "V. center", nullptr));
        ylabel_yalign->setItemText(2, QCoreApplication::translate("RulerPropertiesPage", "Bottom", nullptr));
        ylabel_yalign->setItemText(3, QCoreApplication::translate("RulerPropertiesPage", "Top", nullptr));

        label_25->setText(QCoreApplication::translate("RulerPropertiesPage", "   ... position", nullptr));
        label_31->setText(QCoreApplication::translate("RulerPropertiesPage", "First point (x/y)", nullptr));
        label_30->setText(QCoreApplication::translate("RulerPropertiesPage", "x = ", nullptr));
        label_29->setText(QCoreApplication::translate("RulerPropertiesPage", "y = ", nullptr));
        segments_tab->setTabText(segments_tab->indexOf(tab_3), QCoreApplication::translate("RulerPropertiesPage", "Single", nullptr));
        label_7->setText(QCoreApplication::translate("RulerPropertiesPage", "y = ", nullptr));
        label->setText(QCoreApplication::translate("RulerPropertiesPage", "First point (x/y)", nullptr));
        label_11->setText(QCoreApplication::translate("RulerPropertiesPage", "d = ", nullptr));
        label_8->setText(QCoreApplication::translate("RulerPropertiesPage", "y = ", nullptr));
        label_10->setText(QCoreApplication::translate("RulerPropertiesPage", "y = ", nullptr));
        label_4->setText(QCoreApplication::translate("RulerPropertiesPage", "Length", nullptr));
        label_9->setText(QCoreApplication::translate("RulerPropertiesPage", "x = ", nullptr));
        label_3->setText(QCoreApplication::translate("RulerPropertiesPage", "Delta (x/y)", nullptr));
        label_2->setText(QCoreApplication::translate("RulerPropertiesPage", "Second point (x/y)    ", nullptr));
        label_6->setText(QCoreApplication::translate("RulerPropertiesPage", "x = ", nullptr));
        label_5->setText(QCoreApplication::translate("RulerPropertiesPage", "x = ", nullptr));
        swap_points->setText(QCoreApplication::translate("RulerPropertiesPage", "Swap points", nullptr));
        label_24->setText(QCoreApplication::translate("RulerPropertiesPage", "Snap to layout", nullptr));
        p1_to_layout->setText(QCoreApplication::translate("RulerPropertiesPage", "P1", nullptr));
        p2_to_layout->setText(QCoreApplication::translate("RulerPropertiesPage", "P2", nullptr));
        both_to_layout->setText(QCoreApplication::translate("RulerPropertiesPage", "Both (auto-measure)", nullptr));
        segments_tab->setTabText(segments_tab->indexOf(tab), QCoreApplication::translate("RulerPropertiesPage", "Line", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = point_list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RulerPropertiesPage", "y", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RulerPropertiesPage", "x", nullptr));
        segments_tab->setTabText(segments_tab->indexOf(tab_2), QCoreApplication::translate("RulerPropertiesPage", "Multi-Segment", nullptr));
        segments_tab->setTabText(segments_tab->indexOf(tab_4), QCoreApplication::translate("RulerPropertiesPage", "Text edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RulerPropertiesPage: public Ui_RulerPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULERPROPERTIESPAGE_H
