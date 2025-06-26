/********************************************************************************
** Form generated from reading UI file 'MacroTemplateSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROTEMPLATESELECTIONDIALOG_H
#define UI_MACROTEMPLATESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MacroTemplateSelectionDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QTreeWidget *templateView;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MacroTemplateSelectionDialog)
    {
        if (MacroTemplateSelectionDialog->objectName().isEmpty())
            MacroTemplateSelectionDialog->setObjectName("MacroTemplateSelectionDialog");
        MacroTemplateSelectionDialog->resize(471, 335);
        vboxLayout = new QVBoxLayout(MacroTemplateSelectionDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        label = new QLabel(MacroTemplateSelectionDialog);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        templateView = new QTreeWidget(MacroTemplateSelectionDialog);
        templateView->setObjectName("templateView");
        templateView->setAlternatingRowColors(true);
        templateView->setRootIsDecorated(true);

        vboxLayout->addWidget(templateView);

        line = new QFrame(MacroTemplateSelectionDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(MacroTemplateSelectionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(MacroTemplateSelectionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MacroTemplateSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MacroTemplateSelectionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MacroTemplateSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *MacroTemplateSelectionDialog)
    {
        MacroTemplateSelectionDialog->setWindowTitle(QCoreApplication::translate("MacroTemplateSelectionDialog", "Select Macro Template", nullptr));
        label->setText(QCoreApplication::translate("MacroTemplateSelectionDialog", "Select which kind of macro or script you want to create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroTemplateSelectionDialog: public Ui_MacroTemplateSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROTEMPLATESELECTIONDIALOG_H
