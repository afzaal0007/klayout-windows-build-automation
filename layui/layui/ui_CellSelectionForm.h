/********************************************************************************
** Form generated from reading UI file 'CellSelectionForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLSELECTIONFORM_H
#define UI_CELLSELECTIONFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_CellSelectionForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame8;
    QGridLayout *gridLayout;
    QFrame *tools_frame;
    QHBoxLayout *hboxLayout;
    QPushButton *pb_hide;
    QPushButton *pb_show;
    QSpacerItem *spacerItem;
    QTreeView *lv_cells;
    QFrame *frame_6;
    QGridLayout *gridLayout1;
    QToolButton *tb_set_child;
    QSpacerItem *spacerItem1;
    QTreeView *lv_children;
    QLabel *textLabel2;
    QLabel *label_5;
    QSpacerItem *spacerItem2;
    QFrame *frame_4;
    QGridLayout *gridLayout2;
    QLabel *layout_lbl;
    QLabel *label_2;
    lay::DecoratedLineEdit *le_cell_name;
    QToolButton *find_next;
    QComboBox *cb_views;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_8;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_5;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem3;
    QToolButton *tb_set_parent;
    QTreeView *lv_parents;
    QLabel *textLabel1;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *spacerItem4;
    QFrame *line_4;
    QFrame *frame5;
    QHBoxLayout *hboxLayout1;
    QPushButton *apply_button;
    QSpacerItem *spacerItem5;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *CellSelectionForm)
    {
        if (CellSelectionForm->objectName().isEmpty())
            CellSelectionForm->setObjectName("CellSelectionForm");
        CellSelectionForm->resize(593, 612);
        vboxLayout = new QVBoxLayout(CellSelectionForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame8 = new QFrame(CellSelectionForm);
        frame8->setObjectName("frame8");
        frame8->setFrameShape(QFrame::NoFrame);
        frame8->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame8);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tools_frame = new QFrame(frame8);
        tools_frame->setObjectName("tools_frame");
        tools_frame->setFrameShape(QFrame::NoFrame);
        tools_frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(tools_frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        pb_hide = new QPushButton(tools_frame);
        pb_hide->setObjectName("pb_hide");

        hboxLayout->addWidget(pb_hide);

        pb_show = new QPushButton(tools_frame);
        pb_show->setObjectName("pb_show");

        hboxLayout->addWidget(pb_show);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addWidget(tools_frame, 5, 0, 1, 1);

        lv_cells = new QTreeView(frame8);
        lv_cells->setObjectName("lv_cells");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(lv_cells->sizePolicy().hasHeightForWidth());
        lv_cells->setSizePolicy(sizePolicy);
        lv_cells->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lv_cells->setUniformRowHeights(true);

        gridLayout->addWidget(lv_cells, 3, 0, 2, 1);

        frame_6 = new QFrame(frame8);
        frame_6->setObjectName("frame_6");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame_6);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        tb_set_child = new QToolButton(frame_6);
        tb_set_child->setObjectName("tb_set_child");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tb_set_child->sizePolicy().hasHeightForWidth());
        tb_set_child->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(tb_set_child, 2, 2, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 2, 1, 1, 1);

        lv_children = new QTreeView(frame_6);
        lv_children->setObjectName("lv_children");
        sizePolicy.setHeightForWidth(lv_children->sizePolicy().hasHeightForWidth());
        lv_children->setSizePolicy(sizePolicy);
        lv_children->setUniformRowHeights(true);

        gridLayout1->addWidget(lv_children, 1, 1, 1, 2);

        textLabel2 = new QLabel(frame_6);
        textLabel2->setObjectName("textLabel2");

        gridLayout1->addWidget(textLabel2, 0, 1, 1, 1);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout1->addWidget(label_5, 0, 0, 1, 1);


        gridLayout->addWidget(frame_6, 4, 2, 2, 1);

        spacerItem2 = new QSpacerItem(451, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 1, 0, 1, 3);

        frame_4 = new QFrame(frame8);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame_4);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        layout_lbl = new QLabel(frame_4);
        layout_lbl->setObjectName("layout_lbl");

        gridLayout2->addWidget(layout_lbl, 0, 0, 1, 1);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        le_cell_name = new lay::DecoratedLineEdit(frame_4);
        le_cell_name->setObjectName("le_cell_name");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(le_cell_name->sizePolicy().hasHeightForWidth());
        le_cell_name->setSizePolicy(sizePolicy3);

        gridLayout2->addWidget(le_cell_name, 1, 1, 1, 1);

        find_next = new QToolButton(frame_4);
        find_next->setObjectName("find_next");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/find_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_next->setIcon(icon);
        find_next->setAutoRaise(true);

        gridLayout2->addWidget(find_next, 1, 2, 1, 1);

        cb_views = new QComboBox(frame_4);
        cb_views->setObjectName("cb_views");
        sizePolicy3.setHeightForWidth(cb_views->sizePolicy().hasHeightForWidth());
        cb_views->setSizePolicy(sizePolicy3);

        gridLayout2->addWidget(cb_views, 0, 1, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer, 1, 3, 1, 2);


        gridLayout->addWidget(frame_4, 0, 0, 1, 3);

        frame_8 = new QFrame(frame8);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_8);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame_8, 4, 1, 2, 1);

        frame_5 = new QFrame(frame8);
        frame_5->setObjectName("frame_5");
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(frame_5);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 2, 1, 1, 1);

        tb_set_parent = new QToolButton(frame_5);
        tb_set_parent->setObjectName("tb_set_parent");
        sizePolicy2.setHeightForWidth(tb_set_parent->sizePolicy().hasHeightForWidth());
        tb_set_parent->setSizePolicy(sizePolicy2);

        gridLayout3->addWidget(tb_set_parent, 2, 2, 1, 1);

        lv_parents = new QTreeView(frame_5);
        lv_parents->setObjectName("lv_parents");
        sizePolicy.setHeightForWidth(lv_parents->sizePolicy().hasHeightForWidth());
        lv_parents->setSizePolicy(sizePolicy);
        lv_parents->setUniformRowHeights(true);

        gridLayout3->addWidget(lv_parents, 1, 1, 1, 2);

        textLabel1 = new QLabel(frame_5);
        textLabel1->setObjectName("textLabel1");

        gridLayout3->addWidget(textLabel1, 0, 1, 1, 2);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout3->addWidget(label_4, 0, 0, 1, 1);


        gridLayout->addWidget(frame_5, 3, 2, 1, 1);

        label_3 = new QLabel(frame8);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 3);


        vboxLayout->addWidget(frame8);

        spacerItem4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem4);

        line_4 = new QFrame(CellSelectionForm);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_4);

        frame5 = new QFrame(CellSelectionForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame5);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        apply_button = new QPushButton(frame5);
        apply_button->setObjectName("apply_button");

        hboxLayout1->addWidget(apply_button);

        spacerItem5 = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout1->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout1->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(CellSelectionForm);

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(CellSelectionForm);
    } // setupUi

    void retranslateUi(QDialog *CellSelectionForm)
    {
        CellSelectionForm->setWindowTitle(QCoreApplication::translate("CellSelectionForm", "Select Cell", nullptr));
        pb_hide->setText(QCoreApplication::translate("CellSelectionForm", "Hide Cell", nullptr));
        pb_show->setText(QCoreApplication::translate("CellSelectionForm", "Show Cell", nullptr));
        tb_set_child->setText(QCoreApplication::translate("CellSelectionForm", "Select", nullptr));
        textLabel2->setText(QCoreApplication::translate("CellSelectionForm", "Children", nullptr));
        label_5->setText(QString());
        layout_lbl->setText(QCoreApplication::translate("CellSelectionForm", "Layout", nullptr));
        label_2->setText(QCoreApplication::translate("CellSelectionForm", "Search", nullptr));
#if QT_CONFIG(tooltip)
        find_next->setToolTip(QCoreApplication::translate("CellSelectionForm", "Find Next", nullptr));
#endif // QT_CONFIG(tooltip)
        find_next->setText(QCoreApplication::translate("CellSelectionForm", "...", nullptr));
        tb_set_parent->setText(QCoreApplication::translate("CellSelectionForm", "Select", nullptr));
        textLabel1->setText(QCoreApplication::translate("CellSelectionForm", "Parents", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("CellSelectionForm", "Cell list", nullptr));
        apply_button->setText(QCoreApplication::translate("CellSelectionForm", "Show In Tree", nullptr));
        ok_button->setText(QCoreApplication::translate("CellSelectionForm", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("CellSelectionForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CellSelectionForm: public Ui_CellSelectionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLSELECTIONFORM_H
