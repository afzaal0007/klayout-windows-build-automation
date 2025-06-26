/********************************************************************************
** Form generated from reading UI file 'LayerSourceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERSOURCEDIALOG_H
#define UI_LAYERSOURCEDIALOG_H

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

class Ui_LayerSourceDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *helpLabel;
    QLineEdit *sourceString;
    QSpacerItem *spacerItem;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LayerSourceDialog)
    {
        if (LayerSourceDialog->objectName().isEmpty())
            LayerSourceDialog->setObjectName("LayerSourceDialog");
        LayerSourceDialog->resize(462, 258);
        gridLayout = new QGridLayout(LayerSourceDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        helpLabel = new QLabel(LayerSourceDialog);
        helpLabel->setObjectName("helpLabel");
        helpLabel->setWordWrap(true);

        gridLayout->addWidget(helpLabel, 2, 0, 1, 3);

        sourceString = new QLineEdit(LayerSourceDialog);
        sourceString->setObjectName("sourceString");

        gridLayout->addWidget(sourceString, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 3);

        label = new QLabel(LayerSourceDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(LayerSourceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);


        retranslateUi(LayerSourceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LayerSourceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LayerSourceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LayerSourceDialog);
    } // setupUi

    void retranslateUi(QDialog *LayerSourceDialog)
    {
        LayerSourceDialog->setWindowTitle(QCoreApplication::translate("LayerSourceDialog", "Layer Source", nullptr));
        helpLabel->setText(QCoreApplication::translate("LayerSourceDialog", "<html><body>Typically the source string specifies the layer/datatype and the layout from which to take the shapes from.\n"
"<p>However, the source string can do much more that just specify the layer and datatype of the shapes to draw.<p><a href=\"int:/about/layer_sources.xml\">Learn more about the capabilities of the source specification.</a></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LayerSourceDialog", "Source Specification:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerSourceDialog: public Ui_LayerSourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERSOURCEDIALOG_H
