/********************************************************************************
** Form generated from reading UI file 'CopyCellModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYCELLMODEDIALOG_H
#define UI_COPYCELLMODEDIALOG_H

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

class Ui_CopyCellModeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *shallow_rb;
    QRadioButton *deep_rb;
    QCheckBox *dont_ask_cbx;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyCellModeDialog)
    {
        if (CopyCellModeDialog->objectName().isEmpty())
            CopyCellModeDialog->setObjectName("CopyCellModeDialog");
        CopyCellModeDialog->resize(546, 198);
        verticalLayout = new QVBoxLayout(CopyCellModeDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(CopyCellModeDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        shallow_rb = new QRadioButton(groupBox);
        shallow_rb->setObjectName("shallow_rb");

        vboxLayout->addWidget(shallow_rb);

        deep_rb = new QRadioButton(groupBox);
        deep_rb->setObjectName("deep_rb");

        vboxLayout->addWidget(deep_rb);


        verticalLayout->addWidget(groupBox);

        dont_ask_cbx = new QCheckBox(CopyCellModeDialog);
        dont_ask_cbx->setObjectName("dont_ask_cbx");

        verticalLayout->addWidget(dont_ask_cbx);

        spacerItem = new QSpacerItem(382, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(CopyCellModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(shallow_rb, deep_rb);
        QWidget::setTabOrder(deep_rb, buttonBox);

        retranslateUi(CopyCellModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CopyCellModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CopyCellModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CopyCellModeDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyCellModeDialog)
    {
        CopyCellModeDialog->setWindowTitle(QCoreApplication::translate("CopyCellModeDialog", "Copy Cell Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CopyCellModeDialog", "Copy Cell Mode", nullptr));
        shallow_rb->setText(QCoreApplication::translate("CopyCellModeDialog", "Shallow copy (don't copy subcells)", nullptr));
        deep_rb->setText(QCoreApplication::translate("CopyCellModeDialog", "Deep copy (include subcells)", nullptr));
        dont_ask_cbx->setText(QCoreApplication::translate("CopyCellModeDialog", "Don't ask again (you can always reset this in Setup: Application/Cells page)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyCellModeDialog: public Ui_CopyCellModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYCELLMODEDIALOG_H
