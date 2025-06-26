/********************************************************************************
** Form generated from reading UI file 'EditLineStylesForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLINESTYLESFORM_H
#define UI_EDITLINESTYLESFORM_H

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
#include "layEditLineStyleWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditLineStylesForm
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
    QListWidget *style_items;
    QToolButton *up_button;
    QFrame *frame;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *verticalSpacer_2;
    lay::EditLineStyleWidget *editor;
    QSpacerItem *verticalSpacer;
    QFrame *toolbar;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QSpinBox *w_spin_box;
    QSpacerItem *spacerItem3;
    QToolButton *clear_button;
    QToolButton *invert_button;
    QToolButton *fliph_button;
    QToolButton *sleft_button;
    QToolButton *sright_button;
    QSpacerItem *spacerItem4;
    QFrame *line;
    QFrame *frame5;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem5;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *EditLineStylesForm)
    {
        if (EditLineStylesForm->objectName().isEmpty())
            EditLineStylesForm->setObjectName("EditLineStylesForm");
        EditLineStylesForm->resize(737, 427);
        vboxLayout = new QVBoxLayout(EditLineStylesForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(EditLineStylesForm);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(label);

        frame5_2 = new QFrame(EditLineStylesForm);
        frame5_2->setObjectName("frame5_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame5_2->sizePolicy().hasHeightForWidth());
        frame5_2->setSizePolicy(sizePolicy1);
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

        spacerItem1 = new QSpacerItem(46, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        style_items = new QListWidget(frame_2);
        style_items->setObjectName("style_items");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(style_items->sizePolicy().hasHeightForWidth());
        style_items->setSizePolicy(sizePolicy2);
        style_items->setAcceptDrops(true);
        style_items->setProperty("showDropIndicator", QVariant(false));
        style_items->setDragEnabled(false);
        style_items->setAlternatingRowColors(false);
        style_items->setSelectionMode(QAbstractItemView::SingleSelection);
        style_items->setIconSize(QSize(36, 26));
        style_items->setMovement(QListView::Static);
        style_items->setViewMode(QListView::ListMode);

        gridLayout1->addWidget(style_items, 0, 0, 1, 3);

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
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(verticalSpacer_2);

        editor = new lay::EditLineStyleWidget(frame);
        editor->setObjectName("editor");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy3);

        vboxLayout2->addWidget(editor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(verticalSpacer);

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
        w_spin_box->setMinimum(0);
        w_spin_box->setMaximum(32);

        hboxLayout->addWidget(w_spin_box);

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
        icon3.addFile(QString::fromUtf8(":/invert.png"), QSize(), QIcon::Normal, QIcon::Off);
        invert_button->setIcon(icon3);

        hboxLayout->addWidget(invert_button);

        fliph_button = new QToolButton(toolbar);
        fliph_button->setObjectName("fliph_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fliph.png"), QSize(), QIcon::Normal, QIcon::Off);
        fliph_button->setIcon(icon4);

        hboxLayout->addWidget(fliph_button);

        sleft_button = new QToolButton(toolbar);
        sleft_button->setObjectName("sleft_button");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/left_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sleft_button->setIcon(icon5);

        hboxLayout->addWidget(sleft_button);

        sright_button = new QToolButton(toolbar);
        sright_button->setObjectName("sright_button");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/right_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sright_button->setIcon(icon6);

        hboxLayout->addWidget(sright_button);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        vboxLayout2->addWidget(toolbar);


        gridLayout->addWidget(frame, 0, 1, 2, 1);


        vboxLayout->addWidget(frame5_2);

        line = new QFrame(EditLineStylesForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame5 = new QFrame(EditLineStylesForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame5);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem5 = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout1->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout1->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(EditLineStylesForm);
        QObject::connect(ok_button, &QPushButton::clicked, EditLineStylesForm, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, EditLineStylesForm, qOverload<>(&QDialog::reject));

        ok_button->setDefault(true);
        cancel_button->setDefault(true);


        QMetaObject::connectSlotsByName(EditLineStylesForm);
    } // setupUi

    void retranslateUi(QDialog *EditLineStylesForm)
    {
        EditLineStylesForm->setWindowTitle(QCoreApplication::translate("EditLineStylesForm", "Edit Stipple Pattern", nullptr));
        label->setText(QCoreApplication::translate("EditLineStylesForm", "Double-click to edit style name", nullptr));
        delete_button->setText(QCoreApplication::translate("EditLineStylesForm", "Delete", nullptr));
        new_button->setText(QCoreApplication::translate("EditLineStylesForm", "New", nullptr));
        clone_button->setText(QCoreApplication::translate("EditLineStylesForm", "Clone", nullptr));
        undo_button->setText(QCoreApplication::translate("EditLineStylesForm", "Undo", nullptr));
        redo_button->setText(QCoreApplication::translate("EditLineStylesForm", "Redo", nullptr));
        up_button->setText(QCoreApplication::translate("EditLineStylesForm", "...", nullptr));
        label_2->setText(QCoreApplication::translate("EditLineStylesForm", "W", nullptr));
        clear_button->setText(QCoreApplication::translate("EditLineStylesForm", "Clear", nullptr));
        fliph_button->setText(QCoreApplication::translate("EditLineStylesForm", "Flip h.", nullptr));
        sleft_button->setText(QCoreApplication::translate("EditLineStylesForm", "Left", nullptr));
        sright_button->setText(QCoreApplication::translate("EditLineStylesForm", "Right", nullptr));
        ok_button->setText(QCoreApplication::translate("EditLineStylesForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("EditLineStylesForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditLineStylesForm: public Ui_EditLineStylesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLINESTYLESFORM_H
