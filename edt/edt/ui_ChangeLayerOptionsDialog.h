/********************************************************************************
** Form generated from reading UI file 'ChangeLayerOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELAYEROPTIONSDIALOG_H
#define UI_CHANGELAYEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ChangeLayerOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QComboBox *target_cbx;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeLayerOptionsDialog)
    {
        if (ChangeLayerOptionsDialog->objectName().isEmpty())
            ChangeLayerOptionsDialog->setObjectName("ChangeLayerOptionsDialog");
        ChangeLayerOptionsDialog->resize(359, 125);
        gridLayout = new QGridLayout(ChangeLayerOptionsDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        target_cbx = new QComboBox(ChangeLayerOptionsDialog);
        target_cbx->setObjectName("target_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(target_cbx->sizePolicy().hasHeightForWidth());
        target_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(target_cbx, 1, 1, 1, 1);

        label = new QLabel(ChangeLayerOptionsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(100, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ChangeLayerOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        QWidget::setTabOrder(target_cbx, buttonBox);

        retranslateUi(ChangeLayerOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChangeLayerOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChangeLayerOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChangeLayerOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeLayerOptionsDialog)
    {
        ChangeLayerOptionsDialog->setWindowTitle(QCoreApplication::translate("ChangeLayerOptionsDialog", "Change Layer", nullptr));
        label->setText(QCoreApplication::translate("ChangeLayerOptionsDialog", "Move shapes to layer ..  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeLayerOptionsDialog: public Ui_ChangeLayerOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELAYEROPTIONSDIALOG_H
