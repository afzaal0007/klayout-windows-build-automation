/********************************************************************************
** Form generated from reading UI file 'DuplicateLayerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUPLICATELAYERDIALOG_H
#define UI_DUPLICATELAYERDIALOG_H

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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_DuplicateLayerDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFrame *line_2;
    lay::CellViewSelectionComboBox *cvr_cbx;
    lay::CellViewSelectionComboBox *cv_cbx;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    lay::LayerSelectionComboBox *layer_cbx;
    lay::LayerSelectionComboBox *layerr_cbx;
    QLabel *label_5;
    QCheckBox *clear_cb;
    QSpacerItem *spacerItem1;
    QComboBox *hier_mode_cbx;
    QLabel *label_7;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DuplicateLayerDialog)
    {
        if (DuplicateLayerDialog->objectName().isEmpty())
            DuplicateLayerDialog->setObjectName("DuplicateLayerDialog");
        DuplicateLayerDialog->resize(641, 266);
        vboxLayout = new QVBoxLayout(DuplicateLayerDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(DuplicateLayerDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 6);

        cvr_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvr_cbx->setObjectName("cvr_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cvr_cbx->sizePolicy().hasHeightForWidth());
        cvr_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cvr_cbx, 2, 2, 1, 1);

        cv_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cv_cbx->setObjectName("cv_cbx");
        sizePolicy.setHeightForWidth(cv_cbx->sizePolicy().hasHeightForWidth());
        cv_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cv_cbx, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 4, 1, 2);

        layer_cbx = new lay::LayerSelectionComboBox(groupBox);
        layer_cbx->setObjectName("layer_cbx");
        layer_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layer_cbx, 1, 3, 1, 1);

        layerr_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerr_cbx->setObjectName("layerr_cbx");
        layerr_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layerr_cbx, 2, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        clear_cb = new QCheckBox(groupBox);
        clear_cb->setObjectName("clear_cb");

        gridLayout->addWidget(clear_cb, 2, 5, 1, 1);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 2, 4, 1, 1);

        hier_mode_cbx = new QComboBox(groupBox);
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->setObjectName("hier_mode_cbx");

        gridLayout->addWidget(hier_mode_cbx, 4, 2, 1, 4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 4, 0, 1, 2);


        vboxLayout->addWidget(groupBox);

        spacerItem2 = new QSpacerItem(623, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(DuplicateLayerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DuplicateLayerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DuplicateLayerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DuplicateLayerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DuplicateLayerDialog);
    } // setupUi

    void retranslateUi(QDialog *DuplicateLayerDialog)
    {
        DuplicateLayerDialog->setWindowTitle(QCoreApplication::translate("DuplicateLayerDialog", "Copy Layer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DuplicateLayerDialog", "Copy Layer", nullptr));
        label_3->setText(QCoreApplication::translate("DuplicateLayerDialog", "Copy to", nullptr));
        label->setText(QCoreApplication::translate("DuplicateLayerDialog", "Source layer", nullptr));
        label_6->setText(QCoreApplication::translate("DuplicateLayerDialog", "Layer", nullptr));
        label_5->setText(QCoreApplication::translate("DuplicateLayerDialog", "Layout and cell", nullptr));
        clear_cb->setText(QCoreApplication::translate("DuplicateLayerDialog", "Replace content with source layer", nullptr));
        hier_mode_cbx->setItemText(0, QCoreApplication::translate("DuplicateLayerDialog", "Flatten into target cell", nullptr));
        hier_mode_cbx->setItemText(1, QCoreApplication::translate("DuplicateLayerDialog", "Top cell only", nullptr));
        hier_mode_cbx->setItemText(2, QCoreApplication::translate("DuplicateLayerDialog", "Cell by cell below the current cell", nullptr));

        label_7->setText(QCoreApplication::translate("DuplicateLayerDialog", "Hierarchy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DuplicateLayerDialog: public Ui_DuplicateLayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUPLICATELAYERDIALOG_H
