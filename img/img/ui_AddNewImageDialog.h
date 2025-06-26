/********************************************************************************
** Form generated from reading UI file 'AddNewImageDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWIMAGEDIALOG_H
#define UI_ADDNEWIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "imgPropertiesPage.h"

QT_BEGIN_NAMESPACE

class Ui_AddNewImageDialog
{
public:
    QVBoxLayout *vboxLayout;
    img::PropertiesPage *properties_frame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNewImageDialog)
    {
        if (AddNewImageDialog->objectName().isEmpty())
            AddNewImageDialog->setObjectName("AddNewImageDialog");
        AddNewImageDialog->resize(509, 379);
        vboxLayout = new QVBoxLayout(AddNewImageDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        properties_frame = new img::PropertiesPage(AddNewImageDialog);
        properties_frame->setObjectName("properties_frame");
        properties_frame->setFrameShape(QFrame::NoFrame);
        properties_frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(properties_frame);

        buttonBox = new QDialogButtonBox(AddNewImageDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AddNewImageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddNewImageDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddNewImageDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddNewImageDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewImageDialog)
    {
        AddNewImageDialog->setWindowTitle(QCoreApplication::translate("AddNewImageDialog", "Add New Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewImageDialog: public Ui_AddNewImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWIMAGEDIALOG_H
