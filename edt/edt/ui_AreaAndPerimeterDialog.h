/********************************************************************************
** Form generated from reading UI file 'AreaAndPerimeterDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREAANDPERIMETERDIALOG_H
#define UI_AREAANDPERIMETERDIALOG_H

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

class Ui_AreaAndPerimeterDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *perimeter_le;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *area_le;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AreaAndPerimeterDialog)
    {
        if (AreaAndPerimeterDialog->objectName().isEmpty())
            AreaAndPerimeterDialog->setObjectName("AreaAndPerimeterDialog");
        AreaAndPerimeterDialog->resize(367, 205);
        gridLayout = new QGridLayout(AreaAndPerimeterDialog);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(10, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 3);

        perimeter_le = new QLineEdit(AreaAndPerimeterDialog);
        perimeter_le->setObjectName("perimeter_le");
        perimeter_le->setReadOnly(true);

        gridLayout->addWidget(perimeter_le, 1, 1, 1, 1);

        label = new QLabel(AreaAndPerimeterDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(AreaAndPerimeterDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_5 = new QLabel(AreaAndPerimeterDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_3 = new QLabel(AreaAndPerimeterDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        area_le = new QLineEdit(AreaAndPerimeterDialog);
        area_le->setObjectName("area_le");
        area_le->setReadOnly(true);

        gridLayout->addWidget(area_le, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AreaAndPerimeterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 3);

        label_2 = new QLabel(AreaAndPerimeterDialog);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 3, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 3);


        retranslateUi(AreaAndPerimeterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AreaAndPerimeterDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AreaAndPerimeterDialog);
    } // setupUi

    void retranslateUi(QDialog *AreaAndPerimeterDialog)
    {
        AreaAndPerimeterDialog->setWindowTitle(QCoreApplication::translate("AreaAndPerimeterDialog", "Area And Perimeter", nullptr));
        label->setText(QCoreApplication::translate("AreaAndPerimeterDialog", "Area", nullptr));
        label_6->setText(QCoreApplication::translate("AreaAndPerimeterDialog", "\302\265m", nullptr));
        label_5->setText(QCoreApplication::translate("AreaAndPerimeterDialog", "\302\265m\302\262", nullptr));
        label_3->setText(QCoreApplication::translate("AreaAndPerimeterDialog", "Perimeter", nullptr));
        label_2->setText(QCoreApplication::translate("AreaAndPerimeterDialog", "Note: area and perimeter are computed in \"merged mode\". This means, overlapping shapes are counted once for area calculation.\n"
"The perimeter calculation only takes true outside edges into account. Internal edges are ignored.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaAndPerimeterDialog: public Ui_AreaAndPerimeterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREAANDPERIMETERDIALOG_H
