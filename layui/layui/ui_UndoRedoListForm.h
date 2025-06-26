/********************************************************************************
** Form generated from reading UI file 'UndoRedoListForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNDOREDOLISTFORM_H
#define UI_UNDOREDOLISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_UndoRedoListForm
{
public:
    QGridLayout *gridLayout;
    QLabel *title_lbl;
    QDialogButtonBox *buttonBox;
    QListView *items;

    void setupUi(QDialog *UndoRedoListForm)
    {
        if (UndoRedoListForm->objectName().isEmpty())
            UndoRedoListForm->setObjectName("UndoRedoListForm");
        UndoRedoListForm->resize(307, 320);
        gridLayout = new QGridLayout(UndoRedoListForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        title_lbl = new QLabel(UndoRedoListForm);
        title_lbl->setObjectName("title_lbl");

        gridLayout->addWidget(title_lbl, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(UndoRedoListForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        items = new QListView(UndoRedoListForm);
        items->setObjectName("items");
        items->setUniformItemSizes(true);

        gridLayout->addWidget(items, 1, 0, 1, 2);


        retranslateUi(UndoRedoListForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UndoRedoListForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UndoRedoListForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UndoRedoListForm);
    } // setupUi

    void retranslateUi(QDialog *UndoRedoListForm)
    {
        UndoRedoListForm->setWindowTitle(QCoreApplication::translate("UndoRedoListForm", "Undo / Redo by List", nullptr));
        title_lbl->setText(QCoreApplication::translate("UndoRedoListForm", "(tbd)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UndoRedoListForm: public Ui_UndoRedoListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDOREDOLISTFORM_H
