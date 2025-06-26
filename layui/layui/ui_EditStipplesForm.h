/********************************************************************************
** Form generated from reading UI file 'EditStipplesForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTIPPLESFORM_H
#define UI_EDITSTIPPLESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "layEditStippleWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditStipplesForm
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QFrame *frame5_2;
    QGridLayout *gridLayout;
    QFrame *frame6;
    QVBoxLayout *vboxLayout1;
    QPushButton *delete_button;
    QPushButton *new_button;
    QPushButton *clone_button;
    QSpacerItem *spacerItem;
    QPushButton *undo_button;
    QPushButton *redo_button;
    QSpacerItem *spacerItem1;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem2;
    QToolButton *down_button;
    QListWidget *stipple_items;
    QToolButton *up_button;
    QFrame *frame;
    QVBoxLayout *vboxLayout2;
    lay::EditStippleWidget *editor;
    QFrame *toolbar;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QSpinBox *w_spin_box;
    QLabel *label_3;
    QSpinBox *h_spin_box;
    QSpacerItem *spacerItem3;
    QToolButton *clear_button;
    QToolButton *invert_button;
    QToolButton *fliph_button;
    QToolButton *flipv_button;
    QToolButton *rotate_button;
    QToolButton *sup_button;
    QToolButton *sleft_button;
    QToolButton *sright_button;
    QToolButton *sdown_button;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QFrame *line;
    QFrame *frame5;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem6;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *EditStipplesForm)
    {
        if (EditStipplesForm->objectName().isEmpty())
            EditStipplesForm->setObjectName("EditStipplesForm");
        EditStipplesForm->resize(737, 427);
        vboxLayout = new QVBoxLayout(EditStipplesForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(EditStipplesForm);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(label);

        frame5_2 = new QFrame(EditStipplesForm);
        frame5_2->setObjectName("frame5_2");
        frame5_2->setFrameShape(QFrame::NoFrame);
        frame5_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame5_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame6 = new QFrame(frame5_2);
        frame6->setObjectName("frame6");
        frame6->setFrameShape(QFrame::NoFrame);
        frame6->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame6);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        delete_button = new QPushButton(frame6);
        delete_button->setObjectName("delete_button");

        vboxLayout1->addWidget(delete_button);

        new_button = new QPushButton(frame6);
        new_button->setObjectName("new_button");

        vboxLayout1->addWidget(new_button);

        clone_button = new QPushButton(frame6);
        clone_button->setObjectName("clone_button");

        vboxLayout1->addWidget(clone_button);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem);

        undo_button = new QPushButton(frame6);
        undo_button->setObjectName("undo_button");

        vboxLayout1->addWidget(undo_button);

        redo_button = new QPushButton(frame6);
        redo_button->setObjectName("redo_button");

        vboxLayout1->addWidget(redo_button);

        spacerItem1 = new QSpacerItem(46, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        gridLayout->addWidget(frame6, 0, 2, 2, 1);

        frame_2 = new QFrame(frame5_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 0, 1, 1);

        down_button = new QToolButton(frame_2);
        down_button->setObjectName("down_button");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        down_button->setIcon(icon);

        gridLayout1->addWidget(down_button, 1, 1, 1, 1);

        stipple_items = new QListWidget(frame_2);
        stipple_items->setObjectName("stipple_items");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stipple_items->sizePolicy().hasHeightForWidth());
        stipple_items->setSizePolicy(sizePolicy1);
        stipple_items->setAcceptDrops(true);
        stipple_items->setProperty("showDropIndicator", QVariant(false));
        stipple_items->setDragEnabled(false);
        stipple_items->setAlternatingRowColors(false);
        stipple_items->setSelectionMode(QAbstractItemView::SingleSelection);
        stipple_items->setIconSize(QSize(34, 36));
        stipple_items->setMovement(QListView::Static);
        stipple_items->setViewMode(QListView::ListMode);

        gridLayout1->addWidget(stipple_items, 0, 0, 1, 3);

        up_button = new QToolButton(frame_2);
        up_button->setObjectName("up_button");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        up_button->setIcon(icon1);

        gridLayout1->addWidget(up_button, 1, 2, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 2, 1);

        frame = new QFrame(frame5_2);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(2, 2, 2, 2);
        editor = new lay::EditStippleWidget(frame);
        editor->setObjectName("editor");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy2);

        vboxLayout2->addWidget(editor);

        toolbar = new QFrame(frame);
        toolbar->setObjectName("toolbar");
        hboxLayout = new QHBoxLayout(toolbar);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(toolbar);
        label_2->setObjectName("label_2");

        hboxLayout->addWidget(label_2);

        w_spin_box = new QSpinBox(toolbar);
        w_spin_box->setObjectName("w_spin_box");
        w_spin_box->setMinimum(1);
        w_spin_box->setMaximum(32);

        hboxLayout->addWidget(w_spin_box);

        label_3 = new QLabel(toolbar);
        label_3->setObjectName("label_3");

        hboxLayout->addWidget(label_3);

        h_spin_box = new QSpinBox(toolbar);
        h_spin_box->setObjectName("h_spin_box");
        h_spin_box->setMinimum(1);
        h_spin_box->setMaximum(32);

        hboxLayout->addWidget(h_spin_box);

        spacerItem3 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        clear_button = new QToolButton(toolbar);
        clear_button->setObjectName("clear_button");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_button->setIcon(icon2);
        clear_button->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(clear_button);

        invert_button = new QToolButton(toolbar);
        invert_button->setObjectName("invert_button");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/invert_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        invert_button->setIcon(icon3);

        hboxLayout->addWidget(invert_button);

        fliph_button = new QToolButton(toolbar);
        fliph_button->setObjectName("fliph_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fliph_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fliph_button->setIcon(icon4);

        hboxLayout->addWidget(fliph_button);

        flipv_button = new QToolButton(toolbar);
        flipv_button->setObjectName("flipv_button");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/flipv_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        flipv_button->setIcon(icon5);

        hboxLayout->addWidget(flipv_button);

        rotate_button = new QToolButton(toolbar);
        rotate_button->setObjectName("rotate_button");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rotate_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotate_button->setIcon(icon6);

        hboxLayout->addWidget(rotate_button);

        sup_button = new QToolButton(toolbar);
        sup_button->setObjectName("sup_button");
        sup_button->setIcon(icon1);

        hboxLayout->addWidget(sup_button);

        sleft_button = new QToolButton(toolbar);
        sleft_button->setObjectName("sleft_button");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/left_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sleft_button->setIcon(icon7);

        hboxLayout->addWidget(sleft_button);

        sright_button = new QToolButton(toolbar);
        sright_button->setObjectName("sright_button");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/right_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sright_button->setIcon(icon8);

        hboxLayout->addWidget(sright_button);

        sdown_button = new QToolButton(toolbar);
        sdown_button->setObjectName("sdown_button");
        sdown_button->setIcon(icon);

        hboxLayout->addWidget(sdown_button);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        vboxLayout2->addWidget(toolbar);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        spacerItem5 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem5, 1, 1, 1, 1);


        vboxLayout->addWidget(frame5_2);

        line = new QFrame(EditStipplesForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame5 = new QFrame(EditStipplesForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame5);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem6 = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem6);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout1->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout1->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(EditStipplesForm);
        QObject::connect(ok_button, &QPushButton::clicked, EditStipplesForm, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, EditStipplesForm, qOverload<>(&QDialog::reject));

        ok_button->setDefault(true);
        cancel_button->setDefault(true);


        QMetaObject::connectSlotsByName(EditStipplesForm);
    } // setupUi

    void retranslateUi(QDialog *EditStipplesForm)
    {
        EditStipplesForm->setWindowTitle(QCoreApplication::translate("EditStipplesForm", "Edit Stipple Pattern", nullptr));
        label->setText(QCoreApplication::translate("EditStipplesForm", "Double-click to edit stipple name", nullptr));
        delete_button->setText(QCoreApplication::translate("EditStipplesForm", "Delete", nullptr));
        new_button->setText(QCoreApplication::translate("EditStipplesForm", "New", nullptr));
        clone_button->setText(QCoreApplication::translate("EditStipplesForm", "Clone", nullptr));
        undo_button->setText(QCoreApplication::translate("EditStipplesForm", "Undo", nullptr));
        redo_button->setText(QCoreApplication::translate("EditStipplesForm", "Redo", nullptr));
        up_button->setText(QCoreApplication::translate("EditStipplesForm", "...", nullptr));
        label_2->setText(QCoreApplication::translate("EditStipplesForm", "W", nullptr));
        label_3->setText(QCoreApplication::translate("EditStipplesForm", "H", nullptr));
        clear_button->setText(QCoreApplication::translate("EditStipplesForm", "Clear", nullptr));
        fliph_button->setText(QCoreApplication::translate("EditStipplesForm", "Flip h.", nullptr));
        flipv_button->setText(QCoreApplication::translate("EditStipplesForm", "Flip v.", nullptr));
        rotate_button->setText(QCoreApplication::translate("EditStipplesForm", "Rotate", nullptr));
        sup_button->setText(QCoreApplication::translate("EditStipplesForm", "Up", nullptr));
        sleft_button->setText(QCoreApplication::translate("EditStipplesForm", "Left", nullptr));
        sright_button->setText(QCoreApplication::translate("EditStipplesForm", "Right", nullptr));
        sdown_button->setText(QCoreApplication::translate("EditStipplesForm", "Down", nullptr));
        ok_button->setText(QCoreApplication::translate("EditStipplesForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("EditStipplesForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStipplesForm: public Ui_EditStipplesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTIPPLESFORM_H
