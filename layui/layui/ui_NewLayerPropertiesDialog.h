/********************************************************************************
** Form generated from reading UI file 'NewLayerPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLAYERPROPERTIESDIALOG_H
#define UI_NEWLAYERPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewLayerPropertiesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *layout_lbl;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFrame *line;
    QLineEdit *name_le;
    QLineEdit *layer_le;
    QLineEdit *datatype_le;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewLayerPropertiesDialog)
    {
        if (NewLayerPropertiesDialog->objectName().isEmpty())
            NewLayerPropertiesDialog->setObjectName("NewLayerPropertiesDialog");
        NewLayerPropertiesDialog->resize(347, 271);
        vboxLayout = new QVBoxLayout(NewLayerPropertiesDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        layout_lbl = new QLabel(NewLayerPropertiesDialog);
        layout_lbl->setObjectName("layout_lbl");

        vboxLayout->addWidget(layout_lbl);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(NewLayerPropertiesDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        name_le = new QLineEdit(groupBox);
        name_le->setObjectName("name_le");

        gridLayout->addWidget(name_le, 4, 1, 1, 1);

        layer_le = new QLineEdit(groupBox);
        layer_le->setObjectName("layer_le");

        gridLayout->addWidget(layer_le, 1, 1, 1, 1);

        datatype_le = new QLineEdit(groupBox);
        datatype_le->setObjectName("datatype_le");

        gridLayout->addWidget(datatype_le, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        label_4 = new QLabel(NewLayerPropertiesDialog);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        vboxLayout->addWidget(label_4);

        spacerItem = new QSpacerItem(100, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(NewLayerPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(layer_le, datatype_le);
        QWidget::setTabOrder(datatype_le, name_le);
        QWidget::setTabOrder(name_le, buttonBox);

        retranslateUi(NewLayerPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewLayerPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewLayerPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewLayerPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *NewLayerPropertiesDialog)
    {
        NewLayerPropertiesDialog->setWindowTitle(QCoreApplication::translate("NewLayerPropertiesDialog", "(New) Layer", nullptr));
        layout_lbl->setText(QCoreApplication::translate("NewLayerPropertiesDialog", "X", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewLayerPropertiesDialog", "Layer Properties", nullptr));
        label_3->setText(QCoreApplication::translate("NewLayerPropertiesDialog", "Layer name", nullptr));
        label_2->setText(QCoreApplication::translate("NewLayerPropertiesDialog", "Datatype", nullptr));
        label->setText(QCoreApplication::translate("NewLayerPropertiesDialog", "Layer", nullptr));
        label_4->setText(QCoreApplication::translate("NewLayerPropertiesDialog", "Only layers with valid layer and datatype specification are written to GDS2 or OASIS files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewLayerPropertiesDialog: public Ui_NewLayerPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLAYERPROPERTIESDIALOG_H
