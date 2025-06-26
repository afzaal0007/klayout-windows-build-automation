/********************************************************************************
** Form generated from reading UI file 'FlattenInstOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLATTENINSTOPTIONSDIALOG_H
#define UI_FLATTENINSTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FlattenInstOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *all_levels_rb;
    QRadioButton *first_level_rb;
    QRadioButton *spec_levels_rb;
    QSpinBox *levels_sb;
    QCheckBox *prune_cb;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FlattenInstOptionsDialog)
    {
        if (FlattenInstOptionsDialog->objectName().isEmpty())
            FlattenInstOptionsDialog->setObjectName("FlattenInstOptionsDialog");
        FlattenInstOptionsDialog->resize(391, 234);
        vboxLayout = new QVBoxLayout(FlattenInstOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(FlattenInstOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        all_levels_rb = new QRadioButton(groupBox);
        all_levels_rb->setObjectName("all_levels_rb");

        gridLayout->addWidget(all_levels_rb, 2, 0, 1, 2);

        first_level_rb = new QRadioButton(groupBox);
        first_level_rb->setObjectName("first_level_rb");

        gridLayout->addWidget(first_level_rb, 0, 0, 1, 2);

        spec_levels_rb = new QRadioButton(groupBox);
        spec_levels_rb->setObjectName("spec_levels_rb");

        gridLayout->addWidget(spec_levels_rb, 1, 0, 1, 1);

        levels_sb = new QSpinBox(groupBox);
        levels_sb->setObjectName("levels_sb");
        levels_sb->setMaximum(1000);
        levels_sb->setMinimum(1);
        levels_sb->setValue(1);

        gridLayout->addWidget(levels_sb, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        prune_cb = new QCheckBox(FlattenInstOptionsDialog);
        prune_cb->setObjectName("prune_cb");

        vboxLayout->addWidget(prune_cb);

        spacerItem = new QSpacerItem(301, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(FlattenInstOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(FlattenInstOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FlattenInstOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FlattenInstOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FlattenInstOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *FlattenInstOptionsDialog)
    {
        FlattenInstOptionsDialog->setWindowTitle(QCoreApplication::translate("FlattenInstOptionsDialog", "Flatten Instances", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FlattenInstOptionsDialog", "Flatten Instances", nullptr));
        all_levels_rb->setText(QCoreApplication::translate("FlattenInstOptionsDialog", "All hierarchy levels", nullptr));
        first_level_rb->setText(QCoreApplication::translate("FlattenInstOptionsDialog", "First hierarchy level", nullptr));
        spec_levels_rb->setText(QCoreApplication::translate("FlattenInstOptionsDialog", "This number of hierarchy levels:", nullptr));
        prune_cb->setText(QCoreApplication::translate("FlattenInstOptionsDialog", "Prune (remove all cells which are no longer being used)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlattenInstOptionsDialog: public Ui_FlattenInstOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLATTENINSTOPTIONSDIALOG_H
