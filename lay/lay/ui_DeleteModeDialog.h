/********************************************************************************
** Form generated from reading UI file 'DeleteModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMODEDIALOG_H
#define UI_DELETEMODEDIALOG_H

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

class Ui_DeleteModeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *shallow_rb;
    QRadioButton *deep_rb;
    QRadioButton *rec_rb;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteModeDialog)
    {
        if (DeleteModeDialog->objectName().isEmpty())
            DeleteModeDialog->setObjectName("DeleteModeDialog");
        DeleteModeDialog->resize(435, 193);
        vboxLayout = new QVBoxLayout(DeleteModeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(DeleteModeDialog);
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

        rec_rb = new QRadioButton(groupBox);
        rec_rb->setObjectName("rec_rb");

        vboxLayout1->addWidget(rec_rb);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(DeleteModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DeleteModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeleteModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeleteModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DeleteModeDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteModeDialog)
    {
        DeleteModeDialog->setWindowTitle(QCoreApplication::translate("DeleteModeDialog", "Delete Cell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeleteModeDialog", "Delete Mode", nullptr));
        shallow_rb->setText(QCoreApplication::translate("DeleteModeDialog", "Shallow delete (cell)", nullptr));
        deep_rb->setText(QCoreApplication::translate("DeleteModeDialog", "Deep delete (cell plus subcells unless used otherwise)", nullptr));
        rec_rb->setText(QCoreApplication::translate("DeleteModeDialog", "Recursive delete (cell plus all subcells)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteModeDialog: public Ui_DeleteModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMODEDIALOG_H
