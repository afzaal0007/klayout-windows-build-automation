/********************************************************************************
** Form generated from reading UI file 'RenameCellDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMECELLDIALOG_H
#define UI_RENAMECELLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RenameCellDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QLineEdit *name_le;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameCellDialog)
    {
        if (RenameCellDialog->objectName().isEmpty())
            RenameCellDialog->setObjectName("RenameCellDialog");
        RenameCellDialog->resize(540, 133);
        gridLayout = new QGridLayout(RenameCellDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RenameCellDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(268, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 0, 0, 1, 2);

        name_le = new QLineEdit(RenameCellDialog);
        name_le->setObjectName("name_le");

        gridLayout->addWidget(name_le, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(268, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(RenameCellDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        QWidget::setTabOrder(name_le, buttonBox);

        retranslateUi(RenameCellDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RenameCellDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RenameCellDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RenameCellDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameCellDialog)
    {
        RenameCellDialog->setWindowTitle(QCoreApplication::translate("RenameCellDialog", "Rename Cell", nullptr));
        label->setText(QCoreApplication::translate("RenameCellDialog", "New cell name   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenameCellDialog: public Ui_RenameCellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMECELLDIALOG_H
