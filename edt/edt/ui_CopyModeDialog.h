/********************************************************************************
** Form generated from reading UI file 'CopyModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYMODEDIALOG_H
#define UI_COPYMODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyModeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *shallow_rb;
    QRadioButton *deep_rb;
    QCheckBox *dont_ask_cbx;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyModeDialog)
    {
        if (CopyModeDialog->objectName().isEmpty())
            CopyModeDialog->setObjectName("CopyModeDialog");
        CopyModeDialog->resize(400, 164);
        vboxLayout = new QVBoxLayout(CopyModeDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(CopyModeDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        shallow_rb = new QRadioButton(groupBox);
        shallow_rb->setObjectName("shallow_rb");

        vboxLayout1->addWidget(shallow_rb);

        deep_rb = new QRadioButton(groupBox);
        deep_rb->setObjectName("deep_rb");

        vboxLayout1->addWidget(deep_rb);


        vboxLayout->addWidget(groupBox);

        dont_ask_cbx = new QCheckBox(CopyModeDialog);
        dont_ask_cbx->setObjectName("dont_ask_cbx");

        vboxLayout->addWidget(dont_ask_cbx);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(CopyModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(CopyModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CopyModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CopyModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CopyModeDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyModeDialog)
    {
        CopyModeDialog->setWindowTitle(QCoreApplication::translate("CopyModeDialog", "Copy Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CopyModeDialog", "Copy Mode", nullptr));
        shallow_rb->setText(QCoreApplication::translate("CopyModeDialog", "Shallow copy (instances only)", nullptr));
        deep_rb->setText(QCoreApplication::translate("CopyModeDialog", "Deep copy (instances plus cell)", nullptr));
        dont_ask_cbx->setText(QCoreApplication::translate("CopyModeDialog", "Don't ask again (you can always reset this in the editor options)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyModeDialog: public Ui_CopyModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYMODEDIALOG_H
