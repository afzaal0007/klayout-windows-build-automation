/********************************************************************************
** Form generated from reading UI file 'DeleteCellModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECELLMODEDIALOG_H
#define UI_DELETECELLMODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteCellModeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *shallow_rb;
    QRadioButton *deep_rb;
    QRadioButton *full_rb;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteCellModeDialog)
    {
        if (DeleteCellModeDialog->objectName().isEmpty())
            DeleteCellModeDialog->setObjectName("DeleteCellModeDialog");
        DeleteCellModeDialog->resize(511, 201);
        vboxLayout = new QVBoxLayout(DeleteCellModeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(DeleteCellModeDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        shallow_rb = new QRadioButton(groupBox);
        shallow_rb->setObjectName("shallow_rb");

        vboxLayout1->addWidget(shallow_rb);

        deep_rb = new QRadioButton(groupBox);
        deep_rb->setObjectName("deep_rb");

        vboxLayout1->addWidget(deep_rb);

        full_rb = new QRadioButton(groupBox);
        full_rb->setObjectName("full_rb");

        vboxLayout1->addWidget(full_rb);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(382, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(DeleteCellModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(shallow_rb, deep_rb);
        QWidget::setTabOrder(deep_rb, full_rb);
        QWidget::setTabOrder(full_rb, buttonBox);

        retranslateUi(DeleteCellModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeleteCellModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeleteCellModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DeleteCellModeDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteCellModeDialog)
    {
        DeleteCellModeDialog->setWindowTitle(QCoreApplication::translate("DeleteCellModeDialog", "Delete Cell Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeleteCellModeDialog", "Delete Cell Mode", nullptr));
        shallow_rb->setText(QCoreApplication::translate("DeleteCellModeDialog", "Shallow delete (keep subcells which may become new top-level cells)", nullptr));
        deep_rb->setText(QCoreApplication::translate("DeleteCellModeDialog", "Deep delete (delete cell plus subcells that are not used otherwise)", nullptr));
        full_rb->setText(QCoreApplication::translate("DeleteCellModeDialog", "Complete delete (delete cell plus all subcells)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteCellModeDialog: public Ui_DeleteCellModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECELLMODEDIALOG_H
