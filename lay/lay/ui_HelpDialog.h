/********************************************************************************
** Form generated from reading UI file 'HelpDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "layBrowserPanel.h"

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    lay::BrowserPanel *browser_panel;
    QDialogButtonBox *button_frame;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName("HelpDialog");
        HelpDialog->resize(900, 500);
        verticalLayout = new QVBoxLayout(HelpDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 4, 9, 9);
        browser_panel = new lay::BrowserPanel(HelpDialog);
        browser_panel->setObjectName("browser_panel");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(browser_panel->sizePolicy().hasHeightForWidth());
        browser_panel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(browser_panel);

        button_frame = new QDialogButtonBox(HelpDialog);
        button_frame->setObjectName("button_frame");
        button_frame->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(button_frame);


        retranslateUi(HelpDialog);
        QObject::connect(button_frame, &QDialogButtonBox::rejected, HelpDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Assistant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
