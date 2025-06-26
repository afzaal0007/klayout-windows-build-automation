/********************************************************************************
** Form generated from reading UI file 'ClearLayerModeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEARLAYERMODEDIALOG_H
#define UI_CLEARLAYERMODEDIALOG_H

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

class Ui_ClearLayerModeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *local_rb;
    QRadioButton *hierarchically_rb;
    QRadioButton *layout_rb;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClearLayerModeDialog)
    {
        if (ClearLayerModeDialog->objectName().isEmpty())
            ClearLayerModeDialog->setObjectName("ClearLayerModeDialog");
        ClearLayerModeDialog->resize(511, 201);
        vboxLayout = new QVBoxLayout(ClearLayerModeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(ClearLayerModeDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        local_rb = new QRadioButton(groupBox);
        local_rb->setObjectName("local_rb");

        vboxLayout1->addWidget(local_rb);

        hierarchically_rb = new QRadioButton(groupBox);
        hierarchically_rb->setObjectName("hierarchically_rb");

        vboxLayout1->addWidget(hierarchically_rb);

        layout_rb = new QRadioButton(groupBox);
        layout_rb->setObjectName("layout_rb");

        vboxLayout1->addWidget(layout_rb);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(382, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(ClearLayerModeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(local_rb, hierarchically_rb);
        QWidget::setTabOrder(hierarchically_rb, layout_rb);
        QWidget::setTabOrder(layout_rb, buttonBox);

        retranslateUi(ClearLayerModeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ClearLayerModeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ClearLayerModeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClearLayerModeDialog);
    } // setupUi

    void retranslateUi(QDialog *ClearLayerModeDialog)
    {
        ClearLayerModeDialog->setWindowTitle(QCoreApplication::translate("ClearLayerModeDialog", "Clear Layer Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClearLayerModeDialog", "Clear Layer Mode", nullptr));
        local_rb->setText(QCoreApplication::translate("ClearLayerModeDialog", "Only within current cell", nullptr));
        hierarchically_rb->setText(QCoreApplication::translate("ClearLayerModeDialog", "Hierarchically: within cell and all children (direct and indirect)", nullptr));
        layout_rb->setText(QCoreApplication::translate("ClearLayerModeDialog", "Within all cells in layout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClearLayerModeDialog: public Ui_ClearLayerModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEARLAYERMODEDIALOG_H
