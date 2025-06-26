/********************************************************************************
** Form generated from reading UI file 'NewCellPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCELLPROPERTIESDIALOG_H
#define UI_NEWCELLPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewCellPropertiesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *window_le;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *name_le;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewCellPropertiesDialog)
    {
        if (NewCellPropertiesDialog->objectName().isEmpty())
            NewCellPropertiesDialog->setObjectName("NewCellPropertiesDialog");
        NewCellPropertiesDialog->resize(327, 169);
        vboxLayout = new QVBoxLayout(NewCellPropertiesDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(NewCellPropertiesDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        window_le = new QLineEdit(groupBox);
        window_le->setObjectName("window_le");

        gridLayout->addWidget(window_le, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name_le = new QLineEdit(groupBox);
        name_le->setObjectName("name_le");

        gridLayout->addWidget(name_le, 0, 1, 1, 2);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(268, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(NewCellPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(NewCellPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewCellPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewCellPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewCellPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *NewCellPropertiesDialog)
    {
        NewCellPropertiesDialog->setWindowTitle(QCoreApplication::translate("NewCellPropertiesDialog", "New Cell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewCellPropertiesDialog", "New Cell Properties", nullptr));
        label_3->setText(QCoreApplication::translate("NewCellPropertiesDialog", "micron", nullptr));
        label->setText(QCoreApplication::translate("NewCellPropertiesDialog", "Cell name ", nullptr));
        label_2->setText(QCoreApplication::translate("NewCellPropertiesDialog", "Window size  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCellPropertiesDialog: public Ui_NewCellPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCELLPROPERTIESDIALOG_H
