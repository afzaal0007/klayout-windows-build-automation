/********************************************************************************
** Form generated from reading UI file 'GridNetConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRIDNETCONFIGPAGE_H
#define UI_GRIDNETCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GridNetConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *grid_group;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *show_ruler;
    QComboBox *style1_cbx;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QPushButton *grid_axis_color_pb;
    QLabel *label_5;
    QFrame *line_2;
    QPushButton *grid_net_color_pb;
    QLabel *label_8;
    QPushButton *grid_ruler_color_pb;
    QLabel *label_9;
    QPushButton *grid_grid_color_pb;
    QLabel *Close_style;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QComboBox *style0_cbx;
    QLabel *label_6;
    QLabel *label;
    QComboBox *style2_cbx;
    QFrame *line_3;
    QSpinBox *grid_density_sb;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QFrame *GridNetConfigPage)
    {
        if (GridNetConfigPage->objectName().isEmpty())
            GridNetConfigPage->setObjectName("GridNetConfigPage");
        GridNetConfigPage->resize(483, 361);
        vboxLayout = new QVBoxLayout(GridNetConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        grid_group = new QGroupBox(GridNetConfigPage);
        grid_group->setObjectName("grid_group");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grid_group->sizePolicy().hasHeightForWidth());
        grid_group->setSizePolicy(sizePolicy);
        grid_group->setCheckable(true);
        gridLayout = new QGridLayout(grid_group);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_2 = new QLabel(grid_group);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        show_ruler = new QCheckBox(grid_group);
        show_ruler->setObjectName("show_ruler");

        gridLayout->addWidget(show_ruler, 10, 2, 1, 2);

        style1_cbx = new QComboBox(grid_group);
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->addItem(QString());
        style1_cbx->setObjectName("style1_cbx");

        gridLayout->addWidget(style1_cbx, 2, 2, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 4, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        line = new QFrame(grid_group);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 5);

        grid_axis_color_pb = new QPushButton(grid_group);
        grid_axis_color_pb->setObjectName("grid_axis_color_pb");

        gridLayout->addWidget(grid_axis_color_pb, 8, 2, 1, 1);

        label_5 = new QLabel(grid_group);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        line_2 = new QFrame(grid_group);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 6, 0, 1, 5);

        grid_net_color_pb = new QPushButton(grid_group);
        grid_net_color_pb->setObjectName("grid_net_color_pb");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grid_net_color_pb->sizePolicy().hasHeightForWidth());
        grid_net_color_pb->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(grid_net_color_pb, 0, 2, 1, 1);

        label_8 = new QLabel(grid_group);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        grid_ruler_color_pb = new QPushButton(grid_group);
        grid_ruler_color_pb->setObjectName("grid_ruler_color_pb");

        gridLayout->addWidget(grid_ruler_color_pb, 11, 2, 1, 1);

        label_9 = new QLabel(grid_group);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        grid_grid_color_pb = new QPushButton(grid_group);
        grid_grid_color_pb->setObjectName("grid_grid_color_pb");

        gridLayout->addWidget(grid_grid_color_pb, 4, 2, 1, 1);

        Close_style = new QLabel(grid_group);
        Close_style->setObjectName("Close_style");
        Close_style->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Close_style, 2, 1, 1, 1);

        label_3 = new QLabel(grid_group);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        label_7 = new QLabel(grid_group);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 11, 1, 1, 1);

        label_4 = new QLabel(grid_group);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 7, 1, 1, 1);

        style0_cbx = new QComboBox(grid_group);
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->addItem(QString());
        style0_cbx->setObjectName("style0_cbx");

        gridLayout->addWidget(style0_cbx, 7, 2, 1, 2);

        label_6 = new QLabel(grid_group);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 8, 1, 1, 1);

        label = new QLabel(grid_group);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 4, 1, 1, 1);

        style2_cbx = new QComboBox(grid_group);
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->addItem(QString());
        style2_cbx->setObjectName("style2_cbx");

        gridLayout->addWidget(style2_cbx, 3, 2, 1, 2);

        line_3 = new QFrame(grid_group);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 9, 0, 1, 5);

        grid_density_sb = new QSpinBox(grid_group);
        grid_density_sb->setObjectName("grid_density_sb");
        grid_density_sb->setMinimum(1);

        gridLayout->addWidget(grid_density_sb, 5, 2, 1, 1);

        label_10 = new QLabel(grid_group);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 5, 1, 1, 1);

        label_11 = new QLabel(grid_group);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 5, 3, 1, 2);


        vboxLayout->addWidget(grid_group);


        retranslateUi(GridNetConfigPage);

        QMetaObject::connectSlotsByName(GridNetConfigPage);
    } // setupUi

    void retranslateUi(QFrame *GridNetConfigPage)
    {
        GridNetConfigPage->setWindowTitle(QCoreApplication::translate("GridNetConfigPage", "Settings", nullptr));
        grid_group->setTitle(QCoreApplication::translate("GridNetConfigPage", "Show background decoration", nullptr));
        label_2->setText(QCoreApplication::translate("GridNetConfigPage", "Far style", nullptr));
        show_ruler->setText(QCoreApplication::translate("GridNetConfigPage", "Show ruler", nullptr));
        style1_cbx->setItemText(0, QCoreApplication::translate("GridNetConfigPage", "Invisible", nullptr));
        style1_cbx->setItemText(1, QCoreApplication::translate("GridNetConfigPage", "Dots", nullptr));
        style1_cbx->setItemText(2, QCoreApplication::translate("GridNetConfigPage", "Dotted lines", nullptr));
        style1_cbx->setItemText(3, QCoreApplication::translate("GridNetConfigPage", "Light dotted lines", nullptr));
        style1_cbx->setItemText(4, QCoreApplication::translate("GridNetConfigPage", "Dotted lines, ten dots per division ", nullptr));
        style1_cbx->setItemText(5, QCoreApplication::translate("GridNetConfigPage", "Crosses", nullptr));
        style1_cbx->setItemText(6, QCoreApplication::translate("GridNetConfigPage", "Lines", nullptr));
        style1_cbx->setItemText(7, QCoreApplication::translate("GridNetConfigPage", "Lines with ticks, ten ticks per division", nullptr));
        style1_cbx->setItemText(8, QCoreApplication::translate("GridNetConfigPage", "Checkerboard", nullptr));

        grid_axis_color_pb->setText(QString());
        label_5->setText(QCoreApplication::translate("GridNetConfigPage", "Grid   ", nullptr));
        grid_net_color_pb->setText(QString());
        label_8->setText(QCoreApplication::translate("GridNetConfigPage", "Ruler", nullptr));
        grid_ruler_color_pb->setText(QString());
        label_9->setText(QCoreApplication::translate("GridNetConfigPage", "Axis", nullptr));
        grid_grid_color_pb->setText(QString());
        Close_style->setText(QCoreApplication::translate("GridNetConfigPage", "Close style", nullptr));
        label_3->setText(QCoreApplication::translate("GridNetConfigPage", "Color (all)", nullptr));
        label_7->setText(QCoreApplication::translate("GridNetConfigPage", "Color", nullptr));
        label_4->setText(QCoreApplication::translate("GridNetConfigPage", "Style", nullptr));
        style0_cbx->setItemText(0, QCoreApplication::translate("GridNetConfigPage", "Invisible", nullptr));
        style0_cbx->setItemText(1, QCoreApplication::translate("GridNetConfigPage", "Dots", nullptr));
        style0_cbx->setItemText(2, QCoreApplication::translate("GridNetConfigPage", "Dotted lines", nullptr));
        style0_cbx->setItemText(3, QCoreApplication::translate("GridNetConfigPage", "Light dotted lines", nullptr));
        style0_cbx->setItemText(4, QCoreApplication::translate("GridNetConfigPage", "Dotted lines, ten dots per division ", nullptr));
        style0_cbx->setItemText(5, QCoreApplication::translate("GridNetConfigPage", "Crosses", nullptr));
        style0_cbx->setItemText(6, QCoreApplication::translate("GridNetConfigPage", "Lines", nullptr));
        style0_cbx->setItemText(7, QCoreApplication::translate("GridNetConfigPage", "Lines with ticks, ten ticks per division", nullptr));

        label_6->setText(QCoreApplication::translate("GridNetConfigPage", "Color", nullptr));
        label->setText(QCoreApplication::translate("GridNetConfigPage", "Color", nullptr));
        style2_cbx->setItemText(0, QCoreApplication::translate("GridNetConfigPage", "Invisible", nullptr));
        style2_cbx->setItemText(1, QCoreApplication::translate("GridNetConfigPage", "Dots", nullptr));
        style2_cbx->setItemText(2, QCoreApplication::translate("GridNetConfigPage", "Dotted lines", nullptr));
        style2_cbx->setItemText(3, QCoreApplication::translate("GridNetConfigPage", "Light dotted lines", nullptr));
        style2_cbx->setItemText(4, QCoreApplication::translate("GridNetConfigPage", "Dotted lines, ten dots per division ", nullptr));
        style2_cbx->setItemText(5, QCoreApplication::translate("GridNetConfigPage", "Crosses", nullptr));
        style2_cbx->setItemText(6, QCoreApplication::translate("GridNetConfigPage", "Lines", nullptr));
        style2_cbx->setItemText(7, QCoreApplication::translate("GridNetConfigPage", "Lines with ticks, ten ticks per division", nullptr));
        style2_cbx->setItemText(8, QCoreApplication::translate("GridNetConfigPage", "Checkerboard", nullptr));

        label_10->setText(QCoreApplication::translate("GridNetConfigPage", "Min. spacing", nullptr));
        label_11->setText(QCoreApplication::translate("GridNetConfigPage", "(Font height units)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GridNetConfigPage: public Ui_GridNetConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRIDNETCONFIGPAGE_H
