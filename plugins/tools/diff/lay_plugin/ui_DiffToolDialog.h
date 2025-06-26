/********************************************************************************
** Form generated from reading UI file 'DiffToolDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFTOOLDIALOG_H
#define UI_DIFFTOOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_DiffToolDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    lay::CellViewSelectionComboBox *layouta;
    lay::CellViewSelectionComboBox *layoutb;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QCheckBox *smart_cbx;
    QCheckBox *xor_cbx;
    QCheckBox *summarize_cbx;
    QCheckBox *detailed_cbx;
    QCheckBox *expand_cell_arrays_cbx;
    QCheckBox *exact_cbx;
    QCheckBox *ignore_duplicates_cbx;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DiffToolDialog)
    {
        if (DiffToolDialog->objectName().isEmpty())
            DiffToolDialog->setObjectName("DiffToolDialog");
        DiffToolDialog->resize(503, 404);
        vboxLayout = new QVBoxLayout(DiffToolDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(DiffToolDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        layouta = new lay::CellViewSelectionComboBox(groupBox);
        layouta->setObjectName("layouta");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layouta->sizePolicy().hasHeightForWidth());
        layouta->setSizePolicy(sizePolicy);
        layouta->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layouta, 0, 1, 1, 1);

        layoutb = new lay::CellViewSelectionComboBox(groupBox);
        layoutb->setObjectName("layoutb");
        sizePolicy.setHeightForWidth(layoutb->sizePolicy().hasHeightForWidth());
        layoutb->setSizePolicy(sizePolicy);
        layoutb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layoutb, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DiffToolDialog);
        groupBox_2->setObjectName("groupBox_2");
        vboxLayout1 = new QVBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        smart_cbx = new QCheckBox(groupBox_2);
        smart_cbx->setObjectName("smart_cbx");
        smart_cbx->setChecked(true);

        vboxLayout1->addWidget(smart_cbx);

        xor_cbx = new QCheckBox(groupBox_2);
        xor_cbx->setObjectName("xor_cbx");

        vboxLayout1->addWidget(xor_cbx);

        summarize_cbx = new QCheckBox(groupBox_2);
        summarize_cbx->setObjectName("summarize_cbx");
        summarize_cbx->setChecked(true);

        vboxLayout1->addWidget(summarize_cbx);

        detailed_cbx = new QCheckBox(groupBox_2);
        detailed_cbx->setObjectName("detailed_cbx");
        detailed_cbx->setChecked(true);

        vboxLayout1->addWidget(detailed_cbx);

        expand_cell_arrays_cbx = new QCheckBox(groupBox_2);
        expand_cell_arrays_cbx->setObjectName("expand_cell_arrays_cbx");

        vboxLayout1->addWidget(expand_cell_arrays_cbx);

        exact_cbx = new QCheckBox(groupBox_2);
        exact_cbx->setObjectName("exact_cbx");

        vboxLayout1->addWidget(exact_cbx);

        ignore_duplicates_cbx = new QCheckBox(groupBox_2);
        ignore_duplicates_cbx->setObjectName("ignore_duplicates_cbx");

        vboxLayout1->addWidget(ignore_duplicates_cbx);


        vboxLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(472, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(DiffToolDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DiffToolDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DiffToolDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DiffToolDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DiffToolDialog);
    } // setupUi

    void retranslateUi(QDialog *DiffToolDialog)
    {
        DiffToolDialog->setWindowTitle(QCoreApplication::translate("DiffToolDialog", "Diff Tool", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DiffToolDialog", "Input", nullptr));
        label->setText(QCoreApplication::translate("DiffToolDialog", "Layout A   ", nullptr));
        label_2->setText(QCoreApplication::translate("DiffToolDialog", "Layout B", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DiffToolDialog", "Options", nullptr));
        smart_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Don't use names to match cells (use geometrical properties)", nullptr));
        xor_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Run XOR on differences", nullptr));
        summarize_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Summarize missing layers", nullptr));
        detailed_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Detailed information", nullptr));
        expand_cell_arrays_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Expand cell arrays (compare single instance by instance)", nullptr));
        exact_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Exact compare (includes properties, text orientation and similar)", nullptr));
        ignore_duplicates_cbx->setText(QCoreApplication::translate("DiffToolDialog", "Ignore duplicate instances and shapes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiffToolDialog: public Ui_DiffToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFTOOLDIALOG_H
