/********************************************************************************
** Form generated from reading UI file 'OpenLayoutModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENLAYOUTMODEDIALOG_H
#define UI_OPENLAYOUTMODEDIALOG_H

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

class Ui_OpenLayoutModeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *replace_rb;
    QRadioButton *new_rb;
    QRadioButton *add_rb;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenLayoutModeDialog)
    {
        if (OpenLayoutModeDialog->objectName().isEmpty())
            OpenLayoutModeDialog->setObjectName("OpenLayoutModeDialog");
        OpenLayoutModeDialog->resize(511, 201);
        vboxLayout = new QVBoxLayout(OpenLayoutModeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(OpenLayoutModeDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        replace_rb = new QRadioButton(groupBox);
        replace_rb->setObjectName("replace_rb");

        vboxLayout1->addWidget(replace_rb);

        new_rb = new QRadioButton(groupBox);
        new_rb->setObjectName("new_rb");

        vboxLayout1->addWidget(new_rb);

        add_rb = new QRadioButton(groupBox);
        add_rb->setObjectName("add_rb");

        vboxLayout1->addWidget(add_rb);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(382, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(OpenLayoutModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(OpenLayoutModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OpenLayoutModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OpenLayoutModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OpenLayoutModeDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenLayoutModeDialog)
    {
        OpenLayoutModeDialog->setWindowTitle(QCoreApplication::translate("OpenLayoutModeDialog", "Open Layout Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OpenLayoutModeDialog", "Open Layout Mode", nullptr));
        replace_rb->setText(QCoreApplication::translate("OpenLayoutModeDialog", "Replace current panel by new layout", nullptr));
        new_rb->setText(QCoreApplication::translate("OpenLayoutModeDialog", "Open layout in new panel", nullptr));
        add_rb->setText(QCoreApplication::translate("OpenLayoutModeDialog", "Add layout to current panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenLayoutModeDialog: public Ui_OpenLayoutModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENLAYOUTMODEDIALOG_H
