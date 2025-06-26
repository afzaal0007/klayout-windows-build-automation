/********************************************************************************
** Form generated from reading UI file 'EditorOptionsInst.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOROPTIONSINST_H
#define UI_EDITOROPTIONSINST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_EditorOptionsInst
{
public:
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *place_origin_cb;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_13;
    lay::LibrarySelectionComboBox *lib_cbx;
    QLabel *label_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *browse_pb;
    QLineEdit *cell_le;
    QSpacerItem *spacer;
    QGroupBox *groupBox;
    QGridLayout *_2;
    QLineEdit *scale_le;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *angle_le;
    QLabel *label_7;
    QLabel *label_3;
    QCheckBox *mirror_cbx;
    QLabel *label_17;
    QSpacerItem *spacer_2;
    QGroupBox *array_grp;
    QGridLayout *_3;
    QLineEdit *column_x_le;
    QLabel *label_15;
    QLineEdit *rows_le;
    QLabel *label_14;
    QLabel *label_12;
    QLineEdit *columns_le;
    QLineEdit *row_x_le;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *row_y_le;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *column_y_le;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *EditorOptionsInst)
    {
        if (EditorOptionsInst->objectName().isEmpty())
            EditorOptionsInst->setObjectName("EditorOptionsInst");
        EditorOptionsInst->resize(416, 496);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorOptionsInst->sizePolicy().hasHeightForWidth());
        EditorOptionsInst->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(EditorOptionsInst);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(EditorOptionsInst);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 402, 513));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        place_origin_cb = new QCheckBox(scrollAreaWidgetContents);
        place_origin_cb->setObjectName("place_origin_cb");

        gridLayout_2->addWidget(place_origin_cb, 2, 0, 1, 1);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        lib_cbx = new lay::LibrarySelectionComboBox(frame);
        lib_cbx->setObjectName("lib_cbx");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lib_cbx->sizePolicy().hasHeightForWidth());
        lib_cbx->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lib_cbx, 0, 1, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        browse_pb = new QToolButton(frame_2);
        browse_pb->setObjectName("browse_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/find_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        browse_pb->setIcon(icon);
        browse_pb->setAutoRaise(true);

        horizontalLayout->addWidget(browse_pb);

        cell_le = new QLineEdit(frame_2);
        cell_le->setObjectName("cell_le");
        sizePolicy1.setHeightForWidth(cell_le->sizePolicy().hasHeightForWidth());
        cell_le->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cell_le);


        gridLayout->addWidget(frame_2, 1, 1, 1, 2);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        spacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(spacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        _2 = new QGridLayout(groupBox);
        _2->setObjectName("_2");
        _2->setHorizontalSpacing(6);
        _2->setVerticalSpacing(2);
        _2->setContentsMargins(4, 4, 4, 4);
        scale_le = new QLineEdit(groupBox);
        scale_le->setObjectName("scale_le");
        sizePolicy1.setHeightForWidth(scale_le->sizePolicy().hasHeightForWidth());
        scale_le->setSizePolicy(sizePolicy1);

        _2->addWidget(scale_le, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        _2->addWidget(label_5, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        _2->addWidget(label, 0, 0, 1, 1);

        angle_le = new QLineEdit(groupBox);
        angle_le->setObjectName("angle_le");
        sizePolicy1.setHeightForWidth(angle_le->sizePolicy().hasHeightForWidth());
        angle_le->setSizePolicy(sizePolicy1);

        _2->addWidget(angle_le, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        _2->addWidget(label_7, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        _2->addWidget(label_3, 1, 0, 1, 1);

        mirror_cbx = new QCheckBox(groupBox);
        mirror_cbx->setObjectName("mirror_cbx");

        _2->addWidget(mirror_cbx, 2, 1, 1, 2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");

        _2->addWidget(label_17, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 4, 0, 1, 1);

        spacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer_2, 7, 0, 1, 1);

        array_grp = new QGroupBox(scrollAreaWidgetContents);
        array_grp->setObjectName("array_grp");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(array_grp->sizePolicy().hasHeightForWidth());
        array_grp->setSizePolicy(sizePolicy3);
        array_grp->setCheckable(true);
        _3 = new QGridLayout(array_grp);
        _3->setObjectName("_3");
        _3->setHorizontalSpacing(6);
        _3->setVerticalSpacing(2);
        _3->setContentsMargins(4, 4, 4, 4);
        column_x_le = new QLineEdit(array_grp);
        column_x_le->setObjectName("column_x_le");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(column_x_le->sizePolicy().hasHeightForWidth());
        column_x_le->setSizePolicy(sizePolicy4);

        _3->addWidget(column_x_le, 2, 2, 1, 1);

        label_15 = new QLabel(array_grp);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_15, 2, 3, 1, 1);

        rows_le = new QLineEdit(array_grp);
        rows_le->setObjectName("rows_le");
        sizePolicy4.setHeightForWidth(rows_le->sizePolicy().hasHeightForWidth());
        rows_le->setSizePolicy(sizePolicy4);
        rows_le->setMinimumSize(QSize(0, 0));

        _3->addWidget(rows_le, 0, 4, 1, 1);

        label_14 = new QLabel(array_grp);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_14, 2, 1, 1, 1);

        label_12 = new QLabel(array_grp);
        label_12->setObjectName("label_12");
        label_12->setWordWrap(true);

        _3->addWidget(label_12, 6, 0, 1, 6);

        columns_le = new QLineEdit(array_grp);
        columns_le->setObjectName("columns_le");
        sizePolicy4.setHeightForWidth(columns_le->sizePolicy().hasHeightForWidth());
        columns_le->setSizePolicy(sizePolicy4);

        _3->addWidget(columns_le, 0, 2, 1, 1);

        row_x_le = new QLineEdit(array_grp);
        row_x_le->setObjectName("row_x_le");
        sizePolicy4.setHeightForWidth(row_x_le->sizePolicy().hasHeightForWidth());
        row_x_le->setSizePolicy(sizePolicy4);

        _3->addWidget(row_x_le, 3, 2, 1, 1);

        label_9 = new QLabel(array_grp);
        label_9->setObjectName("label_9");

        _3->addWidget(label_9, 3, 0, 1, 1);

        label_6 = new QLabel(array_grp);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_6, 0, 3, 1, 1);

        row_y_le = new QLineEdit(array_grp);
        row_y_le->setObjectName("row_y_le");
        sizePolicy4.setHeightForWidth(row_y_le->sizePolicy().hasHeightForWidth());
        row_y_le->setSizePolicy(sizePolicy4);

        _3->addWidget(row_y_le, 3, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _3->addItem(verticalSpacer_2, 5, 0, 1, 1);

        label_16 = new QLabel(array_grp);
        label_16->setObjectName("label_16");

        _3->addWidget(label_16, 2, 0, 1, 1);

        label_8 = new QLabel(array_grp);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_8, 0, 0, 1, 2);

        label_10 = new QLabel(array_grp);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_10, 3, 3, 1, 1);

        label_11 = new QLabel(array_grp);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _3->addWidget(label_11, 3, 1, 1, 1);

        column_y_le = new QLineEdit(array_grp);
        column_y_le->setObjectName("column_y_le");
        sizePolicy4.setHeightForWidth(column_y_le->sizePolicy().hasHeightForWidth());
        column_y_le->setSizePolicy(sizePolicy4);

        _3->addWidget(column_y_le, 2, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _3->addItem(verticalSpacer_3, 1, 1, 1, 1);


        gridLayout_2->addWidget(array_grp, 6, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(mirror_cbx);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, lib_cbx);
        QWidget::setTabOrder(lib_cbx, browse_pb);
        QWidget::setTabOrder(browse_pb, cell_le);
        QWidget::setTabOrder(cell_le, place_origin_cb);
        QWidget::setTabOrder(place_origin_cb, scale_le);
        QWidget::setTabOrder(scale_le, angle_le);
        QWidget::setTabOrder(angle_le, mirror_cbx);
        QWidget::setTabOrder(mirror_cbx, array_grp);
        QWidget::setTabOrder(array_grp, columns_le);
        QWidget::setTabOrder(columns_le, rows_le);
        QWidget::setTabOrder(rows_le, column_x_le);
        QWidget::setTabOrder(column_x_le, column_y_le);
        QWidget::setTabOrder(column_y_le, row_x_le);
        QWidget::setTabOrder(row_x_le, row_y_le);

        retranslateUi(EditorOptionsInst);

        QMetaObject::connectSlotsByName(EditorOptionsInst);
    } // setupUi

    void retranslateUi(QWidget *EditorOptionsInst)
    {
        EditorOptionsInst->setWindowTitle(QCoreApplication::translate("EditorOptionsInst", "Form", nullptr));
        place_origin_cb->setText(QCoreApplication::translate("EditorOptionsInst", "Place origin of cell", nullptr));
        label_13->setText(QCoreApplication::translate("EditorOptionsInst", "Library", nullptr));
        label_2->setText(QCoreApplication::translate("EditorOptionsInst", "Cell  ", nullptr));
        browse_pb->setText(QCoreApplication::translate("EditorOptionsInst", "...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorOptionsInst", "Rotation / Scaling", nullptr));
        label_5->setText(QCoreApplication::translate("EditorOptionsInst", "Mirror   ", nullptr));
        label->setText(QCoreApplication::translate("EditorOptionsInst", "Scaling factor", nullptr));
        label_7->setText(QCoreApplication::translate("EditorOptionsInst", "degree", nullptr));
        label_3->setText(QCoreApplication::translate("EditorOptionsInst", "Rotation angle", nullptr));
        mirror_cbx->setText(QCoreApplication::translate("EditorOptionsInst", "(at X-axis before rotation)", nullptr));
        label_17->setText(QCoreApplication::translate("EditorOptionsInst", "(magnification)", nullptr));
        array_grp->setTitle(QCoreApplication::translate("EditorOptionsInst", "Array Instance", nullptr));
        label_15->setText(QCoreApplication::translate("EditorOptionsInst", "y =", nullptr));
        label_14->setText(QCoreApplication::translate("EditorOptionsInst", "x =", nullptr));
        label_12->setText(QCoreApplication::translate("EditorOptionsInst", "Warning: although row and column vectors can be arbitrary combination, some design systems only accept orthogonal (rectangular) arrays.", nullptr));
        label_9->setText(QCoreApplication::translate("EditorOptionsInst", "  Row vector", nullptr));
        label_6->setText(QCoreApplication::translate("EditorOptionsInst", "Rows =", nullptr));
        label_16->setText(QCoreApplication::translate("EditorOptionsInst", "  Column vector", nullptr));
        label_8->setText(QCoreApplication::translate("EditorOptionsInst", "Columns =", nullptr));
        label_10->setText(QCoreApplication::translate("EditorOptionsInst", "y =", nullptr));
        label_11->setText(QCoreApplication::translate("EditorOptionsInst", "x =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorOptionsInst: public Ui_EditorOptionsInst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOROPTIONSINST_H
