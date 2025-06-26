/********************************************************************************
** Form generated from reading UI file 'BooleanOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOLEANOPTIONSDIALOG_H
#define UI_BOOLEANOPTIONSDIALOG_H

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

class Ui_BooleanOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *line;
    QComboBox *mode_cbx;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_7;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    lay::CellViewSelectionComboBox *cva_cbx;
    lay::CellViewSelectionComboBox *cvb_cbx;
    lay::CellViewSelectionComboBox *cvr_cbx;
    lay::LayerSelectionComboBox *layera_cbx;
    lay::LayerSelectionComboBox *layerb_cbx;
    lay::LayerSelectionComboBox *layerr_cbx;
    QLabel *label_10;
    QCheckBox *min_coherence_cb;
    QComboBox *hier_mode_cbx;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BooleanOptionsDialog)
    {
        if (BooleanOptionsDialog->objectName().isEmpty())
            BooleanOptionsDialog->setObjectName("BooleanOptionsDialog");
        BooleanOptionsDialog->resize(578, 349);
        vboxLayout = new QVBoxLayout(BooleanOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(BooleanOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 3, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 4);

        mode_cbx = new QComboBox(groupBox);
        mode_cbx->addItem(QString());
        mode_cbx->addItem(QString());
        mode_cbx->addItem(QString());
        mode_cbx->addItem(QString());
        mode_cbx->addItem(QString());
        mode_cbx->setObjectName("mode_cbx");

        gridLayout->addWidget(mode_cbx, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 5, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 5, 1, 1, 1);

        cva_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cva_cbx->setObjectName("cva_cbx");

        gridLayout->addWidget(cva_cbx, 1, 1, 1, 1);

        cvb_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvb_cbx->setObjectName("cvb_cbx");

        gridLayout->addWidget(cvb_cbx, 2, 1, 1, 1);

        cvr_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvr_cbx->setObjectName("cvr_cbx");

        gridLayout->addWidget(cvr_cbx, 6, 1, 1, 1);

        layera_cbx = new lay::LayerSelectionComboBox(groupBox);
        layera_cbx->setObjectName("layera_cbx");
        layera_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layera_cbx, 1, 2, 1, 1);

        layerb_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerb_cbx->setObjectName("layerb_cbx");
        layerb_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layerb_cbx, 2, 2, 1, 1);

        layerr_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerr_cbx->setObjectName("layerr_cbx");
        layerr_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layerr_cbx, 6, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 6, 3, 1, 1);

        min_coherence_cb = new QCheckBox(groupBox);
        min_coherence_cb->setObjectName("min_coherence_cb");

        gridLayout->addWidget(min_coherence_cb, 9, 1, 1, 3);

        hier_mode_cbx = new QComboBox(groupBox);
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->setObjectName("hier_mode_cbx");

        gridLayout->addWidget(hier_mode_cbx, 8, 1, 1, 3);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(506, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(BooleanOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(BooleanOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BooleanOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BooleanOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BooleanOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *BooleanOptionsDialog)
    {
        BooleanOptionsDialog->setWindowTitle(QCoreApplication::translate("BooleanOptionsDialog", "Boolean Operation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BooleanOptionsDialog", "Boolean Operation Setup", nullptr));
        mode_cbx->setItemText(0, QCoreApplication::translate("BooleanOptionsDialog", "Union (OR)", nullptr));
        mode_cbx->setItemText(1, QCoreApplication::translate("BooleanOptionsDialog", "Intersection (AND)", nullptr));
        mode_cbx->setItemText(2, QCoreApplication::translate("BooleanOptionsDialog", "Difference (A NOT B)", nullptr));
        mode_cbx->setItemText(3, QCoreApplication::translate("BooleanOptionsDialog", "Difference (B NOT A)", nullptr));
        mode_cbx->setItemText(4, QCoreApplication::translate("BooleanOptionsDialog", "Symmetric Difference (XOR)", nullptr));

        label_2->setText(QCoreApplication::translate("BooleanOptionsDialog", "Source B", nullptr));
        label->setText(QCoreApplication::translate("BooleanOptionsDialog", "Source A", nullptr));
        label_4->setText(QCoreApplication::translate("BooleanOptionsDialog", "Mode", nullptr));
        label_3->setText(QCoreApplication::translate("BooleanOptionsDialog", "Result", nullptr));
        label_7->setText(QCoreApplication::translate("BooleanOptionsDialog", "Hierarchy", nullptr));
        label_5->setText(QCoreApplication::translate("BooleanOptionsDialog", "Layout and cell", nullptr));
        label_6->setText(QCoreApplication::translate("BooleanOptionsDialog", "Layer", nullptr));
        label_8->setText(QCoreApplication::translate("BooleanOptionsDialog", "Layer", nullptr));
        label_9->setText(QCoreApplication::translate("BooleanOptionsDialog", "Layout and cell", nullptr));
        label_10->setText(QCoreApplication::translate("BooleanOptionsDialog", "(Layer is overwritten)", nullptr));
        min_coherence_cb->setText(QCoreApplication::translate("BooleanOptionsDialog", "Minimum coherence (for touching corners)", nullptr));
        hier_mode_cbx->setItemText(0, QCoreApplication::translate("BooleanOptionsDialog", "Flat", nullptr));
        hier_mode_cbx->setItemText(1, QCoreApplication::translate("BooleanOptionsDialog", "Top cell only", nullptr));
        hier_mode_cbx->setItemText(2, QCoreApplication::translate("BooleanOptionsDialog", "Individually for current and subcells (semi hierarchical)", nullptr));

    } // retranslateUi

};

namespace Ui {
    class BooleanOptionsDialog: public Ui_BooleanOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOLEANOPTIONSDIALOG_H
