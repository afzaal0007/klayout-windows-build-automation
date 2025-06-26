/********************************************************************************
** Form generated from reading UI file 'ReplaceCellOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACECELLOPTIONSDIALOG_H
#define UI_REPLACECELLOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplaceCellOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *cell_selection_cbx;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *shallow_rb;
    QRadioButton *deep_rb;
    QRadioButton *full_rb;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReplaceCellOptionsDialog)
    {
        if (ReplaceCellOptionsDialog->objectName().isEmpty())
            ReplaceCellOptionsDialog->setObjectName("ReplaceCellOptionsDialog");
        ReplaceCellOptionsDialog->resize(533, 254);
        vboxLayout = new QVBoxLayout(ReplaceCellOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        frame = new QFrame(ReplaceCellOptionsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        hboxLayout->addWidget(label);

        cell_selection_cbx = new QComboBox(frame);
        cell_selection_cbx->setObjectName("cell_selection_cbx");
        cell_selection_cbx->setEditable(true);

        hboxLayout->addWidget(cell_selection_cbx);


        vboxLayout->addWidget(frame);

        spacerItem = new QSpacerItem(427, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        groupBox = new QGroupBox(ReplaceCellOptionsDialog);
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

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(ReplaceCellOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ReplaceCellOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReplaceCellOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReplaceCellOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReplaceCellOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplaceCellOptionsDialog)
    {
        ReplaceCellOptionsDialog->setWindowTitle(QCoreApplication::translate("ReplaceCellOptionsDialog", "Replace Mode", nullptr));
        label->setText(QCoreApplication::translate("ReplaceCellOptionsDialog", "Replace with cell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReplaceCellOptionsDialog", "Replace Cell Mode", nullptr));
        shallow_rb->setText(QCoreApplication::translate("ReplaceCellOptionsDialog", "Shallow replace (keep subcells which may become new top-level cells)", nullptr));
        deep_rb->setText(QCoreApplication::translate("ReplaceCellOptionsDialog", "Deep replace (delete cell plus subcells that are not used otherwise)", nullptr));
        full_rb->setText(QCoreApplication::translate("ReplaceCellOptionsDialog", "Complete replace (delete cell plus all subcells)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceCellOptionsDialog: public Ui_ReplaceCellOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACECELLOPTIONSDIALOG_H
