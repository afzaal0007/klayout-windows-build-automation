/********************************************************************************
** Form generated from reading UI file 'ClipDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPDIALOG_H
#define UI_CLIPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_ClipDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QLabel *label_13;
    QLineEdit *le_cell_name;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QRadioButton *rb_box2;
    QSpacerItem *spacerItem1;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout2;
    QRadioButton *rb_box1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QRadioButton *rb_shapes;
    QGroupBox *grp_box1;
    QGridLayout *gridLayout1;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_y2;
    QLineEdit *le_x2;
    QLineEdit *le_y1;
    QLineEdit *le_x1;
    QGroupBox *grp_box2;
    QGridLayout *gridLayout2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *le_h;
    QLineEdit *le_w;
    QLineEdit *le_y;
    QLineEdit *le_x;
    QRadioButton *rb_rulers;
    lay::LayerSelectionComboBox *cb_layer;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *ClipDialog)
    {
        if (ClipDialog->objectName().isEmpty())
            ClipDialog->setObjectName("ClipDialog");
        ClipDialog->resize(641, 421);
        vboxLayout = new QVBoxLayout(ClipDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        frame_3 = new QFrame(ClipDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");

        hboxLayout->addWidget(label_13);

        le_cell_name = new QLineEdit(frame_3);
        le_cell_name->setObjectName("le_cell_name");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_cell_name->sizePolicy().hasHeightForWidth());
        le_cell_name->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(le_cell_name);


        vboxLayout->addWidget(frame_3);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        groupBox = new QGroupBox(ClipDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        rb_box2 = new QRadioButton(frame);
        rb_box2->setObjectName("rb_box2");
        rb_box2->setAutoExclusive(false);

        vboxLayout1->addWidget(rb_box2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        gridLayout->addWidget(frame, 2, 0, 1, 1);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame_2);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        rb_box1 = new QRadioButton(frame_2);
        rb_box1->setObjectName("rb_box1");
        rb_box1->setChecked(true);
        rb_box1->setAutoExclusive(false);

        vboxLayout2->addWidget(rb_box1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 2, 1, 1);

        rb_shapes = new QRadioButton(groupBox);
        rb_shapes->setObjectName("rb_shapes");
        rb_shapes->setAutoExclusive(false);

        gridLayout->addWidget(rb_shapes, 0, 0, 1, 1);

        grp_box1 = new QGroupBox(groupBox);
        grp_box1->setObjectName("grp_box1");
        gridLayout1 = new QGridLayout(grp_box1);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName("gridLayout1");
        label_6 = new QLabel(grp_box1);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 1, 3, 1, 1);

        label_5 = new QLabel(grp_box1);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(grp_box1);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 1, 1, 1, 1);

        label_3 = new QLabel(grp_box1);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(grp_box1);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(grp_box1);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 0, 3, 1, 1);

        le_y2 = new QLineEdit(grp_box1);
        le_y2->setObjectName("le_y2");

        gridLayout1->addWidget(le_y2, 1, 4, 1, 1);

        le_x2 = new QLineEdit(grp_box1);
        le_x2->setObjectName("le_x2");

        gridLayout1->addWidget(le_x2, 1, 2, 1, 1);

        le_y1 = new QLineEdit(grp_box1);
        le_y1->setObjectName("le_y1");

        gridLayout1->addWidget(le_y1, 0, 4, 1, 1);

        le_x1 = new QLineEdit(grp_box1);
        le_x1->setObjectName("le_x1");

        gridLayout1->addWidget(le_x1, 0, 2, 1, 1);


        gridLayout->addWidget(grp_box1, 1, 1, 1, 2);

        grp_box2 = new QGroupBox(groupBox);
        grp_box2->setObjectName("grp_box2");
        gridLayout2 = new QGridLayout(grp_box2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName("gridLayout2");
        label_7 = new QLabel(grp_box2);
        label_7->setObjectName("label_7");

        gridLayout2->addWidget(label_7, 1, 3, 1, 1);

        label_8 = new QLabel(grp_box2);
        label_8->setObjectName("label_8");

        gridLayout2->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(grp_box2);
        label_9->setObjectName("label_9");

        gridLayout2->addWidget(label_9, 1, 1, 1, 1);

        label_10 = new QLabel(grp_box2);
        label_10->setObjectName("label_10");

        gridLayout2->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(grp_box2);
        label_11->setObjectName("label_11");

        gridLayout2->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(grp_box2);
        label_12->setObjectName("label_12");

        gridLayout2->addWidget(label_12, 0, 3, 1, 1);

        le_h = new QLineEdit(grp_box2);
        le_h->setObjectName("le_h");

        gridLayout2->addWidget(le_h, 1, 4, 1, 1);

        le_w = new QLineEdit(grp_box2);
        le_w->setObjectName("le_w");

        gridLayout2->addWidget(le_w, 1, 2, 1, 1);

        le_y = new QLineEdit(grp_box2);
        le_y->setObjectName("le_y");

        gridLayout2->addWidget(le_y, 0, 4, 1, 1);

        le_x = new QLineEdit(grp_box2);
        le_x->setObjectName("le_x");

        gridLayout2->addWidget(le_x, 0, 2, 1, 1);


        gridLayout->addWidget(grp_box2, 2, 1, 1, 2);

        rb_rulers = new QRadioButton(groupBox);
        rb_rulers->setObjectName("rb_rulers");
        rb_rulers->setAutoExclusive(false);

        gridLayout->addWidget(rb_rulers, 3, 0, 1, 2);

        cb_layer = new lay::LayerSelectionComboBox(groupBox);
        cb_layer->setObjectName("cb_layer");
        cb_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(cb_layer, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        button_box = new QDialogButtonBox(ClipDialog);
        button_box->setObjectName("button_box");
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(button_box);

        QWidget::setTabOrder(le_cell_name, rb_shapes);
        QWidget::setTabOrder(rb_shapes, rb_box1);
        QWidget::setTabOrder(rb_box1, rb_box2);
        QWidget::setTabOrder(rb_box2, rb_rulers);
        QWidget::setTabOrder(rb_rulers, cb_layer);
        QWidget::setTabOrder(cb_layer, le_x1);
        QWidget::setTabOrder(le_x1, le_y1);
        QWidget::setTabOrder(le_y1, le_x2);
        QWidget::setTabOrder(le_x2, le_y2);
        QWidget::setTabOrder(le_y2, le_x);
        QWidget::setTabOrder(le_x, le_y);
        QWidget::setTabOrder(le_y, le_w);
        QWidget::setTabOrder(le_w, le_h);
        QWidget::setTabOrder(le_h, button_box);

        retranslateUi(ClipDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, ClipDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, ClipDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClipDialog);
    } // setupUi

    void retranslateUi(QDialog *ClipDialog)
    {
        ClipDialog->setWindowTitle(QCoreApplication::translate("ClipDialog", "Clip Tool", nullptr));
        label_13->setText(QCoreApplication::translate("ClipDialog", "Clip result cell name", nullptr));
        le_cell_name->setText(QCoreApplication::translate("ClipDialog", "CLIP", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClipDialog", "Clip Box Specification", nullptr));
        rb_box2->setText(QCoreApplication::translate("ClipDialog", "Single box with ...", nullptr));
        rb_box1->setText(QCoreApplication::translate("ClipDialog", "Single box with ...", nullptr));
        rb_shapes->setText(QCoreApplication::translate("ClipDialog", "Shapes on layer (multi clip)", nullptr));
        grp_box1->setTitle(QCoreApplication::translate("ClipDialog", "Box Boundaries", nullptr));
        label_6->setText(QCoreApplication::translate("ClipDialog", "y =", nullptr));
        label_5->setText(QCoreApplication::translate("ClipDialog", "2nd corner", nullptr));
        label_4->setText(QCoreApplication::translate("ClipDialog", "x =", nullptr));
        label_3->setText(QCoreApplication::translate("ClipDialog", "1st corner", nullptr));
        label->setText(QCoreApplication::translate("ClipDialog", "x =", nullptr));
        label_2->setText(QCoreApplication::translate("ClipDialog", "y =", nullptr));
        grp_box2->setTitle(QCoreApplication::translate("ClipDialog", "Box Center And Dimensions", nullptr));
        label_7->setText(QCoreApplication::translate("ClipDialog", "h =", nullptr));
        label_8->setText(QCoreApplication::translate("ClipDialog", "Dimensions", nullptr));
        label_9->setText(QCoreApplication::translate("ClipDialog", "w =", nullptr));
        label_10->setText(QCoreApplication::translate("ClipDialog", "Center", nullptr));
        label_11->setText(QCoreApplication::translate("ClipDialog", "x =", nullptr));
        label_12->setText(QCoreApplication::translate("ClipDialog", "y =", nullptr));
        rb_rulers->setText(QCoreApplication::translate("ClipDialog", "From ruler start and end points (multi clip)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClipDialog: public Ui_ClipDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPDIALOG_H
