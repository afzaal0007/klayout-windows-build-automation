/********************************************************************************
** Form generated from reading UI file 'InstPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTPROPERTIESPAGE_H
#define UI_INSTPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_InstPropertiesPage
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QLabel *label_12;
    QLabel *info_lbl;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QLineEdit *cell_name_le;
    QToolButton *browse_pb;
    QLabel *label_18;
    lay::LibrarySelectionComboBox *lib_cbx;
    QSpacerItem *spacerItem;
    QTabWidget *param_tab_widget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *cw_le;
    QLabel *label_21;
    QLineEdit *ch_le;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *mirror_cbx;
    QLabel *label;
    QLabel *label_17;
    QLineEdit *mag_le;
    QLineEdit *angle_le;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *pos_x_le;
    QLineEdit *pos_y_le;
    QSpacerItem *horizontalSpacer;
    QGroupBox *array_grp;
    QGridLayout *gridLayout1;
    QLineEdit *columns_le;
    QLineEdit *column_y_le;
    QLabel *label_14;
    QLineEdit *column_x_le;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_9;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *row_y_le;
    QFrame *ortho_warning_frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QLabel *label_13;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *row_x_le;
    QLabel *label_8;
    QLabel *label_16;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *rows_le;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLabel *inst_lbl;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *spacerItem1;
    QWidget *pcell_tab;
    QCheckBox *dbu_cb;
    QCheckBox *abs_cb;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem3;
    QPushButton *prop_pb;
    QPushButton *sel_pb;
    QPushButton *inst_pb;

    void setupUi(QWidget *InstPropertiesPage)
    {
        if (InstPropertiesPage->objectName().isEmpty())
            InstPropertiesPage->setObjectName("InstPropertiesPage");
        InstPropertiesPage->resize(666, 649);
        vboxLayout = new QVBoxLayout(InstPropertiesPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_3 = new QFrame(InstPropertiesPage);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        hboxLayout->addWidget(label_12);

        info_lbl = new QLabel(frame_3);
        info_lbl->setObjectName("info_lbl");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(info_lbl->sizePolicy().hasHeightForWidth());
        info_lbl->setSizePolicy(sizePolicy);
        info_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(info_lbl);


        vboxLayout->addWidget(frame_3);

        frame_4 = new QFrame(InstPropertiesPage);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_4);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");

        hboxLayout1->addWidget(label_3);

        cell_name_le = new QLineEdit(frame_4);
        cell_name_le->setObjectName("cell_name_le");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cell_name_le->sizePolicy().hasHeightForWidth());
        cell_name_le->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(cell_name_le);

        browse_pb = new QToolButton(frame_4);
        browse_pb->setObjectName("browse_pb");

        hboxLayout1->addWidget(browse_pb);

        label_18 = new QLabel(frame_4);
        label_18->setObjectName("label_18");

        hboxLayout1->addWidget(label_18);

        lib_cbx = new lay::LibrarySelectionComboBox(frame_4);
        lib_cbx->setObjectName("lib_cbx");
        sizePolicy1.setHeightForWidth(lib_cbx->sizePolicy().hasHeightForWidth());
        lib_cbx->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(lib_cbx);


        vboxLayout->addWidget(frame_4);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        param_tab_widget = new QTabWidget(InstPropertiesPage);
        param_tab_widget->setObjectName("param_tab_widget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(param_tab_widget->sizePolicy().hasHeightForWidth());
        param_tab_widget->setSizePolicy(sizePolicy2);
        tab = new QWidget();
        tab->setObjectName("tab");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy3);
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");

        horizontalLayout->addWidget(label_19);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");

        horizontalLayout->addWidget(label_20);

        cw_le = new QLineEdit(frame_2);
        cw_le->setObjectName("cw_le");
        sizePolicy.setHeightForWidth(cw_le->sizePolicy().hasHeightForWidth());
        cw_le->setSizePolicy(sizePolicy);
        cw_le->setFrame(true);
        cw_le->setReadOnly(true);

        horizontalLayout->addWidget(cw_le);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");

        horizontalLayout->addWidget(label_21);

        ch_le = new QLineEdit(frame_2);
        ch_le->setObjectName("ch_le");
        sizePolicy.setHeightForWidth(ch_le->sizePolicy().hasHeightForWidth());
        ch_le->setSizePolicy(sizePolicy);
        ch_le->setReadOnly(true);

        horizontalLayout->addWidget(ch_le);

        horizontalSpacer_3 = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        vboxLayout1->addWidget(frame_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        mirror_cbx = new QCheckBox(groupBox);
        mirror_cbx->setObjectName("mirror_cbx");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mirror_cbx->sizePolicy().hasHeightForWidth());
        mirror_cbx->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mirror_cbx, 1, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        mag_le = new QLineEdit(groupBox);
        mag_le->setObjectName("mag_le");
        sizePolicy.setHeightForWidth(mag_le->sizePolicy().hasHeightForWidth());
        mag_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mag_le, 2, 2, 1, 1);

        angle_le = new QLineEdit(groupBox);
        angle_le->setObjectName("angle_le");
        sizePolicy.setHeightForWidth(angle_le->sizePolicy().hasHeightForWidth());
        angle_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(angle_le, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pos_x_le = new QLineEdit(groupBox);
        pos_x_le->setObjectName("pos_x_le");
        sizePolicy.setHeightForWidth(pos_x_le->sizePolicy().hasHeightForWidth());
        pos_x_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pos_x_le, 0, 2, 1, 1);

        pos_y_le = new QLineEdit(groupBox);
        pos_y_le->setObjectName("pos_y_le");
        sizePolicy.setHeightForWidth(pos_y_le->sizePolicy().hasHeightForWidth());
        pos_y_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pos_y_le, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);


        vboxLayout1->addWidget(groupBox);

        array_grp = new QGroupBox(tab);
        array_grp->setObjectName("array_grp");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(array_grp->sizePolicy().hasHeightForWidth());
        array_grp->setSizePolicy(sizePolicy5);
        array_grp->setCheckable(true);
        gridLayout1 = new QGridLayout(array_grp);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        columns_le = new QLineEdit(array_grp);
        columns_le->setObjectName("columns_le");
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(columns_le->sizePolicy().hasHeightForWidth());
        columns_le->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(columns_le, 2, 3, 1, 1);

        column_y_le = new QLineEdit(array_grp);
        column_y_le->setObjectName("column_y_le");
        sizePolicy6.setHeightForWidth(column_y_le->sizePolicy().hasHeightForWidth());
        column_y_le->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(column_y_le, 4, 5, 1, 1);

        label_14 = new QLabel(array_grp);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_14, 4, 1, 1, 2);

        column_x_le = new QLineEdit(array_grp);
        column_x_le->setObjectName("column_x_le");
        sizePolicy6.setHeightForWidth(column_x_le->sizePolicy().hasHeightForWidth());
        column_x_le->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(column_x_le, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(verticalSpacer, 3, 3, 1, 1);

        label_11 = new QLabel(array_grp);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_11, 5, 1, 1, 2);

        label_15 = new QLabel(array_grp);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_15, 4, 4, 1, 1);

        label_9 = new QLabel(array_grp);
        label_9->setObjectName("label_9");

        gridLayout1->addWidget(label_9, 5, 0, 1, 1);

        frame_8 = new QFrame(array_grp);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout1->addWidget(frame_8, 6, 5, 1, 1);

        frame_5 = new QFrame(array_grp);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        row_y_le = new QLineEdit(frame_5);
        row_y_le->setObjectName("row_y_le");
        sizePolicy6.setHeightForWidth(row_y_le->sizePolicy().hasHeightForWidth());
        row_y_le->setSizePolicy(sizePolicy6);

        verticalLayout->addWidget(row_y_le);


        gridLayout1->addWidget(frame_5, 5, 5, 1, 1);

        ortho_warning_frame = new QFrame(array_grp);
        ortho_warning_frame->setObjectName("ortho_warning_frame");
        ortho_warning_frame->setEnabled(false);
        ortho_warning_frame->setFrameShape(QFrame::NoFrame);
        ortho_warning_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(ortho_warning_frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_22 = new QLabel(ortho_warning_frame);
        label_22->setObjectName("label_22");
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy7);
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/warn_16px@2x.png")));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_22);

        label_13 = new QLabel(ortho_warning_frame);
        label_13->setObjectName("label_13");
        label_13->setWordWrap(true);

        horizontalLayout_2->addWidget(label_13);


        gridLayout1->addWidget(ortho_warning_frame, 7, 0, 1, 7);

        frame_7 = new QFrame(array_grp);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        row_x_le = new QLineEdit(frame_7);
        row_x_le->setObjectName("row_x_le");
        sizePolicy6.setHeightForWidth(row_x_le->sizePolicy().hasHeightForWidth());
        row_x_le->setSizePolicy(sizePolicy6);

        verticalLayout_3->addWidget(row_x_le);


        gridLayout1->addWidget(frame_7, 5, 3, 1, 1);

        label_8 = new QLabel(array_grp);
        label_8->setObjectName("label_8");

        gridLayout1->addWidget(label_8, 2, 4, 1, 1);

        label_16 = new QLabel(array_grp);
        label_16->setObjectName("label_16");

        gridLayout1->addWidget(label_16, 4, 0, 1, 1);

        frame_6 = new QFrame(array_grp);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout1->addWidget(frame_6, 6, 3, 1, 1);

        rows_le = new QLineEdit(array_grp);
        rows_le->setObjectName("rows_le");
        sizePolicy6.setHeightForWidth(rows_le->sizePolicy().hasHeightForWidth());
        rows_le->setSizePolicy(sizePolicy6);

        gridLayout1->addWidget(rows_le, 2, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_2, 5, 6, 1, 1);

        label_6 = new QLabel(array_grp);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_6, 2, 0, 1, 3);

        inst_lbl = new QLabel(array_grp);
        inst_lbl->setObjectName("inst_lbl");

        gridLayout1->addWidget(inst_lbl, 0, 0, 1, 6);

        label_10 = new QLabel(array_grp);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_10, 5, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(verticalSpacer_2, 1, 0, 1, 6);


        vboxLayout1->addWidget(array_grp);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        param_tab_widget->addTab(tab, QString());
        pcell_tab = new QWidget();
        pcell_tab->setObjectName("pcell_tab");
        param_tab_widget->addTab(pcell_tab, QString());

        vboxLayout->addWidget(param_tab_widget);

        dbu_cb = new QCheckBox(InstPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        vboxLayout->addWidget(dbu_cb);

        abs_cb = new QCheckBox(InstPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        vboxLayout->addWidget(abs_cb);

        spacerItem2 = new QSpacerItem(50, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        frame = new QFrame(InstPropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        prop_pb = new QPushButton(frame);
        prop_pb->setObjectName("prop_pb");

        hboxLayout2->addWidget(prop_pb);

        sel_pb = new QPushButton(frame);
        sel_pb->setObjectName("sel_pb");

        hboxLayout2->addWidget(sel_pb);

        inst_pb = new QPushButton(frame);
        inst_pb->setObjectName("inst_pb");

        hboxLayout2->addWidget(inst_pb);


        vboxLayout->addWidget(frame);

        QWidget::setTabOrder(cell_name_le, browse_pb);
        QWidget::setTabOrder(browse_pb, lib_cbx);
        QWidget::setTabOrder(lib_cbx, param_tab_widget);
        QWidget::setTabOrder(param_tab_widget, cw_le);
        QWidget::setTabOrder(cw_le, ch_le);
        QWidget::setTabOrder(ch_le, pos_x_le);
        QWidget::setTabOrder(pos_x_le, pos_y_le);
        QWidget::setTabOrder(pos_y_le, angle_le);
        QWidget::setTabOrder(angle_le, mirror_cbx);
        QWidget::setTabOrder(mirror_cbx, mag_le);
        QWidget::setTabOrder(mag_le, array_grp);
        QWidget::setTabOrder(array_grp, columns_le);
        QWidget::setTabOrder(columns_le, rows_le);
        QWidget::setTabOrder(rows_le, column_x_le);
        QWidget::setTabOrder(column_x_le, column_y_le);
        QWidget::setTabOrder(column_y_le, row_x_le);
        QWidget::setTabOrder(row_x_le, row_y_le);
        QWidget::setTabOrder(row_y_le, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, sel_pb);
        QWidget::setTabOrder(sel_pb, inst_pb);
        QWidget::setTabOrder(inst_pb, prop_pb);

        retranslateUi(InstPropertiesPage);

        param_tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InstPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *InstPropertiesPage)
    {
        InstPropertiesPage->setWindowTitle(QCoreApplication::translate("InstPropertiesPage", "Form", nullptr));
        label_12->setText(QCoreApplication::translate("InstPropertiesPage", "Instance Properties", nullptr));
        info_lbl->setText(QString());
        label_3->setText(QCoreApplication::translate("InstPropertiesPage", "Cell  ", nullptr));
        browse_pb->setText(QCoreApplication::translate("InstPropertiesPage", "...", nullptr));
        label_18->setText(QCoreApplication::translate("InstPropertiesPage", "  Library  ", nullptr));
        label_19->setText(QCoreApplication::translate("InstPropertiesPage", "Original cell dimensions      ", nullptr));
        label_20->setText(QCoreApplication::translate("InstPropertiesPage", "w =", nullptr));
        label_21->setText(QCoreApplication::translate("InstPropertiesPage", "h =", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InstPropertiesPage", "Position / Rotation / Scaling", nullptr));
        mirror_cbx->setText(QCoreApplication::translate("InstPropertiesPage", "Mirrored (at X-axis)", nullptr));
        label->setText(QCoreApplication::translate("InstPropertiesPage", "Position of cell origin", nullptr));
        label_17->setText(QCoreApplication::translate("InstPropertiesPage", "Scaling factor (magnification)", nullptr));
        label_5->setText(QCoreApplication::translate("InstPropertiesPage", "x = ", nullptr));
        label_7->setText(QCoreApplication::translate("InstPropertiesPage", "y = ", nullptr));
        label_2->setText(QCoreApplication::translate("InstPropertiesPage", "Rotation angle (degree)", nullptr));
        array_grp->setTitle(QCoreApplication::translate("InstPropertiesPage", "Array Instance", nullptr));
        label_14->setText(QCoreApplication::translate("InstPropertiesPage", "x =", nullptr));
        label_11->setText(QCoreApplication::translate("InstPropertiesPage", "x =", nullptr));
        label_15->setText(QCoreApplication::translate("InstPropertiesPage", "y =", nullptr));
        label_9->setText(QCoreApplication::translate("InstPropertiesPage", "  Row vector (x,y)", nullptr));
        label_22->setText(QString());
        label_13->setText(QCoreApplication::translate("InstPropertiesPage", "Although row and column vectors can be arbitrary combinations, some design systems and mask makers only accept arrays where row and column vectors are orthogonal and parallel to x and y axes.", nullptr));
        label_8->setText(QCoreApplication::translate("InstPropertiesPage", "Rows =", nullptr));
        label_16->setText(QCoreApplication::translate("InstPropertiesPage", "  Column vector (x,y)", nullptr));
        label_6->setText(QCoreApplication::translate("InstPropertiesPage", "Columns =", nullptr));
        inst_lbl->setText(QCoreApplication::translate("InstPropertiesPage", "This is instance [c,r] of array with", nullptr));
        label_10->setText(QCoreApplication::translate("InstPropertiesPage", "y =", nullptr));
        param_tab_widget->setTabText(param_tab_widget->indexOf(tab), QCoreApplication::translate("InstPropertiesPage", "Geometry", nullptr));
        param_tab_widget->setTabText(param_tab_widget->indexOf(pcell_tab), QCoreApplication::translate("InstPropertiesPage", "PCell parameters", nullptr));
        dbu_cb->setText(QCoreApplication::translate("InstPropertiesPage", "Coordinates in database units", nullptr));
        abs_cb->setText(QCoreApplication::translate("InstPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        prop_pb->setText(QCoreApplication::translate("InstPropertiesPage", "User Properties", nullptr));
        sel_pb->setText(QCoreApplication::translate("InstPropertiesPage", "Show Cell In Tree", nullptr));
        inst_pb->setText(QCoreApplication::translate("InstPropertiesPage", "Instantiation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstPropertiesPage: public Ui_InstPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTPROPERTIESPAGE_H
