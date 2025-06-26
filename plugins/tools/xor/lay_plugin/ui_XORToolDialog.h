/********************************************************************************
** Form generated from reading UI file 'XORToolDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XORTOOLDIALOG_H
#define UI_XORTOOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_XORToolDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_2;
    QComboBox *input_layers_cbx;
    QSpacerItem *spacerItem;
    QComboBox *region_cbx;
    lay::CellViewSelectionComboBox *layoutb;
    lay::CellViewSelectionComboBox *layouta;
    QSpacerItem *spacerItem1;
    QLabel *label_13;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QCheckBox *anotb_cb;
    QLabel *label_6;
    QLabel *label_10;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QSpinBox *threads;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *spacerItem2;
    QCheckBox *axorb_cb;
    QCheckBox *summarize_cb;
    QCheckBox *bnota_cb;
    QLabel *label_7;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QLineEdit *tiling;
    QLabel *label_3;
    QCheckBox *heal_cb;
    QLineEdit *tolerances;
    QLabel *label_14;
    QCheckBox *deep;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout2;
    QLabel *label_9;
    QComboBox *output_cbx;
    QLabel *layer_offset_lbl;
    QLineEdit *layer_offset_le;
    QSpacerItem *spacerItem3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XORToolDialog)
    {
        if (XORToolDialog->objectName().isEmpty())
            XORToolDialog->setObjectName("XORToolDialog");
        XORToolDialog->resize(576, 649);
        vboxLayout = new QVBoxLayout(XORToolDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(XORToolDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        input_layers_cbx = new QComboBox(groupBox);
        input_layers_cbx->addItem(QString());
        input_layers_cbx->addItem(QString());
        input_layers_cbx->setObjectName("input_layers_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(input_layers_cbx->sizePolicy().hasHeightForWidth());
        input_layers_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(input_layers_cbx, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        region_cbx = new QComboBox(groupBox);
        region_cbx->addItem(QString());
        region_cbx->addItem(QString());
        region_cbx->addItem(QString());
        region_cbx->setObjectName("region_cbx");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(region_cbx->sizePolicy().hasHeightForWidth());
        region_cbx->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(region_cbx, 5, 1, 1, 1);

        layoutb = new lay::CellViewSelectionComboBox(groupBox);
        layoutb->setObjectName("layoutb");
        sizePolicy.setHeightForWidth(layoutb->sizePolicy().hasHeightForWidth());
        layoutb->setSizePolicy(sizePolicy);
        layoutb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layoutb, 1, 1, 1, 1);

        layouta = new lay::CellViewSelectionComboBox(groupBox);
        layouta->setObjectName("layouta");
        sizePolicy.setHeightForWidth(layouta->sizePolicy().hasHeightForWidth());
        layouta->setSizePolicy(sizePolicy);
        layouta->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layouta, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 4, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_13, 1, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(XORToolDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        anotb_cb = new QCheckBox(groupBox_2);
        anotb_cb->setObjectName("anotb_cb");
        sizePolicy1.setHeightForWidth(anotb_cb->sizePolicy().hasHeightForWidth());
        anotb_cb->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(anotb_cb, 1, 1, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 5, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");

        gridLayout1->addWidget(label_10, 8, 0, 1, 1);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        threads = new QSpinBox(frame_2);
        threads->setObjectName("threads");
        threads->setMinimum(1);

        hboxLayout->addWidget(threads);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        hboxLayout->addWidget(label_11);


        gridLayout1->addWidget(frame_2, 8, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem2, 3, 0, 1, 3);

        axorb_cb = new QCheckBox(groupBox_2);
        axorb_cb->setObjectName("axorb_cb");
        sizePolicy1.setHeightForWidth(axorb_cb->sizePolicy().hasHeightForWidth());
        axorb_cb->setSizePolicy(sizePolicy1);
        axorb_cb->setChecked(true);

        gridLayout1->addWidget(axorb_cb, 0, 1, 1, 2);

        summarize_cb = new QCheckBox(groupBox_2);
        summarize_cb->setObjectName("summarize_cb");
        summarize_cb->setChecked(true);

        gridLayout1->addWidget(summarize_cb, 4, 1, 1, 2);

        bnota_cb = new QCheckBox(groupBox_2);
        bnota_cb->setObjectName("bnota_cb");
        sizePolicy1.setHeightForWidth(bnota_cb->sizePolicy().hasHeightForWidth());
        bnota_cb->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(bnota_cb, 2, 1, 1, 2);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 7, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        tiling = new QLineEdit(frame);
        tiling->setObjectName("tiling");
        sizePolicy1.setHeightForWidth(tiling->sizePolicy().hasHeightForWidth());
        tiling->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(tiling);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(label_3);

        heal_cb = new QCheckBox(frame);
        heal_cb->setObjectName("heal_cb");

        hboxLayout1->addWidget(heal_cb);


        gridLayout1->addWidget(frame, 7, 1, 1, 2);

        tolerances = new QLineEdit(groupBox_2);
        tolerances->setObjectName("tolerances");
        sizePolicy.setHeightForWidth(tolerances->sizePolicy().hasHeightForWidth());
        tolerances->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(tolerances, 5, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");

        gridLayout1->addWidget(label_14, 6, 0, 1, 1);

        deep = new QCheckBox(groupBox_2);
        deep->setObjectName("deep");

        gridLayout1->addWidget(deep, 6, 1, 1, 2);


        vboxLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(XORToolDialog);
        groupBox_4->setObjectName("groupBox_4");
        hboxLayout2 = new QHBoxLayout(groupBox_4);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");

        hboxLayout2->addWidget(label_9);

        output_cbx = new QComboBox(groupBox_4);
        output_cbx->addItem(QString());
        output_cbx->addItem(QString());
        output_cbx->addItem(QString());
        output_cbx->addItem(QString());
        output_cbx->setObjectName("output_cbx");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(output_cbx->sizePolicy().hasHeightForWidth());
        output_cbx->setSizePolicy(sizePolicy4);

        hboxLayout2->addWidget(output_cbx);

        layer_offset_lbl = new QLabel(groupBox_4);
        layer_offset_lbl->setObjectName("layer_offset_lbl");

        hboxLayout2->addWidget(layer_offset_lbl);

        layer_offset_le = new QLineEdit(groupBox_4);
        layer_offset_le->setObjectName("layer_offset_le");
        sizePolicy1.setHeightForWidth(layer_offset_le->sizePolicy().hasHeightForWidth());
        layer_offset_le->setSizePolicy(sizePolicy1);

        hboxLayout2->addWidget(layer_offset_le);


        vboxLayout->addWidget(groupBox_4);

        spacerItem3 = new QSpacerItem(0, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);

        buttonBox = new QDialogButtonBox(XORToolDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(layouta, layoutb);
        QWidget::setTabOrder(layoutb, input_layers_cbx);
        QWidget::setTabOrder(input_layers_cbx, region_cbx);
        QWidget::setTabOrder(region_cbx, axorb_cb);
        QWidget::setTabOrder(axorb_cb, anotb_cb);
        QWidget::setTabOrder(anotb_cb, bnota_cb);
        QWidget::setTabOrder(bnota_cb, summarize_cb);
        QWidget::setTabOrder(summarize_cb, tolerances);
        QWidget::setTabOrder(tolerances, tiling);
        QWidget::setTabOrder(tiling, threads);
        QWidget::setTabOrder(threads, output_cbx);
        QWidget::setTabOrder(output_cbx, layer_offset_le);
        QWidget::setTabOrder(layer_offset_le, buttonBox);

        retranslateUi(XORToolDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XORToolDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XORToolDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XORToolDialog);
    } // setupUi

    void retranslateUi(QDialog *XORToolDialog)
    {
        XORToolDialog->setWindowTitle(QCoreApplication::translate("XORToolDialog", "XOR Tool", nullptr));
        groupBox->setTitle(QCoreApplication::translate("XORToolDialog", "Input", nullptr));
        label_12->setText(QCoreApplication::translate("XORToolDialog", "From region", nullptr));
        label->setText(QCoreApplication::translate("XORToolDialog", "Layout A", nullptr));
        label_8->setText(QCoreApplication::translate("XORToolDialog", "Use for input   ", nullptr));
        label_2->setText(QCoreApplication::translate("XORToolDialog", "Layout B", nullptr));
        input_layers_cbx->setItemText(0, QCoreApplication::translate("XORToolDialog", "All Layers (different layouts)", nullptr));
        input_layers_cbx->setItemText(1, QCoreApplication::translate("XORToolDialog", "Visible layers (different layouts)", nullptr));

        region_cbx->setItemText(0, QCoreApplication::translate("XORToolDialog", "All", nullptr));
        region_cbx->setItemText(1, QCoreApplication::translate("XORToolDialog", "Visible region", nullptr));
        region_cbx->setItemText(2, QCoreApplication::translate("XORToolDialog", "Clipped to ruler", nullptr));

        label_13->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("XORToolDialog", "Options", nullptr));
        anotb_cb->setText(QCoreApplication::translate("XORToolDialog", "A NOT B (In A but not in B)", nullptr));
        label_6->setText(QCoreApplication::translate("XORToolDialog", "Tolerances (t1,t2,..) in micron", nullptr));
        label_10->setText(QCoreApplication::translate("XORToolDialog", "Threads", nullptr));
        label_11->setText(QCoreApplication::translate("XORToolDialog", "Used for tiles and layers", nullptr));
        label_5->setText(QCoreApplication::translate("XORToolDialog", "Tolerances", nullptr));
        label_4->setText(QCoreApplication::translate("XORToolDialog", "Compare modes   ", nullptr));
        axorb_cb->setText(QCoreApplication::translate("XORToolDialog", "A XOR B (differences)", nullptr));
        summarize_cb->setText(QCoreApplication::translate("XORToolDialog", "Summarize missing layers (when output is marker DB)", nullptr));
        bnota_cb->setText(QCoreApplication::translate("XORToolDialog", "B NOT A (in B but not in A)", nullptr));
        label_7->setText(QCoreApplication::translate("XORToolDialog", "Tiling", nullptr));
        label_3->setText(QCoreApplication::translate("XORToolDialog", "Tile size in micron", nullptr));
        heal_cb->setText(QCoreApplication::translate("XORToolDialog", "Heal result shapes", nullptr));
        label_14->setText(QCoreApplication::translate("XORToolDialog", "Hierarchical", nullptr));
        deep->setText(QCoreApplication::translate("XORToolDialog", "consider hierarchy (experimental)", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("XORToolDialog", "Output", nullptr));
        label_9->setText(QCoreApplication::translate("XORToolDialog", "Send output to   ", nullptr));
        output_cbx->setItemText(0, QCoreApplication::translate("XORToolDialog", "Marker database", nullptr));
        output_cbx->setItemText(1, QCoreApplication::translate("XORToolDialog", "Other layout", nullptr));
        output_cbx->setItemText(2, QCoreApplication::translate("XORToolDialog", "New layers in layout A ...", nullptr));
        output_cbx->setItemText(3, QCoreApplication::translate("XORToolDialog", "New layers in layout B ...", nullptr));

        layer_offset_lbl->setText(QCoreApplication::translate("XORToolDialog", "with offset", nullptr));
        layer_offset_le->setText(QCoreApplication::translate("XORToolDialog", "1000/0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XORToolDialog: public Ui_XORToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XORTOOLDIALOG_H
