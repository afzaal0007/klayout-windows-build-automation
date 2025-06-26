/********************************************************************************
** Form generated from reading UI file 'MergeOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEOPTIONSDIALOG_H
#define UI_MERGEOPTIONSDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_MergeOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *hier_mode_cbx;
    QLabel *label_10;
    QLabel *label_8;
    lay::CellViewSelectionComboBox *cvr_cbx;
    QLineEdit *threshold_le;
    QFrame *line_2;
    QLabel *label_7;
    lay::CellViewSelectionComboBox *cv_cbx;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QFrame *line;
    QCheckBox *min_coherence_cb;
    QSpacerItem *spacerItem;
    lay::LayerSelectionComboBox *layer_cbx;
    lay::LayerSelectionComboBox *layerr_cbx;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_4;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MergeOptionsDialog)
    {
        if (MergeOptionsDialog->objectName().isEmpty())
            MergeOptionsDialog->setObjectName("MergeOptionsDialog");
        MergeOptionsDialog->resize(641, 331);
        vboxLayout = new QVBoxLayout(MergeOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MergeOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        hier_mode_cbx = new QComboBox(groupBox);
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->addItem(QString());
        hier_mode_cbx->setObjectName("hier_mode_cbx");

        gridLayout->addWidget(hier_mode_cbx, 7, 1, 1, 3);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 5, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 4, 2, 1, 1);

        cvr_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvr_cbx->setObjectName("cvr_cbx");

        gridLayout->addWidget(cvr_cbx, 5, 1, 1, 1);

        threshold_le = new QLineEdit(groupBox);
        threshold_le->setObjectName("threshold_le");

        gridLayout->addWidget(threshold_le, 3, 1, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 6, 0, 1, 4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        cv_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cv_cbx->setObjectName("cv_cbx");

        gridLayout->addWidget(cv_cbx, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 4);

        min_coherence_cb = new QCheckBox(groupBox);
        min_coherence_cb->setObjectName("min_coherence_cb");

        gridLayout->addWidget(min_coherence_cb, 8, 1, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        layer_cbx = new lay::LayerSelectionComboBox(groupBox);
        layer_cbx->setObjectName("layer_cbx");
        layer_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layer_cbx, 1, 2, 1, 1);

        layerr_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerr_cbx->setObjectName("layerr_cbx");
        layerr_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(layerr_cbx, 5, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 2, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(506, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(MergeOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(MergeOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MergeOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MergeOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MergeOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *MergeOptionsDialog)
    {
        MergeOptionsDialog->setWindowTitle(QCoreApplication::translate("MergeOptionsDialog", "Merge Operation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MergeOptionsDialog", "Merge Operation Setup", nullptr));
        hier_mode_cbx->setItemText(0, QCoreApplication::translate("MergeOptionsDialog", "Flat", nullptr));
        hier_mode_cbx->setItemText(1, QCoreApplication::translate("MergeOptionsDialog", "Top cell only", nullptr));
        hier_mode_cbx->setItemText(2, QCoreApplication::translate("MergeOptionsDialog", "Individually for current and subcells (semi hierarchical)", nullptr));

        label_10->setText(QCoreApplication::translate("MergeOptionsDialog", "(Layer is overwritten)", nullptr));
        label_8->setText(QCoreApplication::translate("MergeOptionsDialog", "Layer", nullptr));
        label_7->setText(QCoreApplication::translate("MergeOptionsDialog", "Hierarchy", nullptr));
        label_3->setText(QCoreApplication::translate("MergeOptionsDialog", "Result", nullptr));
        label->setText(QCoreApplication::translate("MergeOptionsDialog", "Source", nullptr));
        label_6->setText(QCoreApplication::translate("MergeOptionsDialog", "Layer", nullptr));
        min_coherence_cb->setText(QCoreApplication::translate("MergeOptionsDialog", "Minimum coherence (for touching corners)", nullptr));
        label_2->setText(QCoreApplication::translate("MergeOptionsDialog", "(0: all polygons, 1: at least two overlapping ...)", nullptr));
        label_5->setText(QCoreApplication::translate("MergeOptionsDialog", "Layout and cell", nullptr));
        label_9->setText(QCoreApplication::translate("MergeOptionsDialog", "Layout and cell", nullptr));
        label_4->setText(QCoreApplication::translate("MergeOptionsDialog", "Overlap threshold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergeOptionsDialog: public Ui_MergeOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEOPTIONSDIALOG_H
