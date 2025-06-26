/********************************************************************************
** Form generated from reading UI file 'ReplacePropertiesBox.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPROPERTIESBOX_H
#define UI_REPLACEPROPERTIESBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_ReplacePropertiesBox
{
public:
    QGridLayout *gridLayout;
    QLabel *label_54;
    QLineEdit *box_height;
    QSpacerItem *spacerItem;
    QLabel *label_60;
    QLabel *label_58;
    QLineEdit *box_width;
    QLabel *label_55;
    QLabel *label_59;
    QLabel *label_53;
    QLabel *label;
    QLabel *label_2;
    lay::LayerSelectionComboBox *box_layer;

    void setupUi(QWidget *ReplacePropertiesBox)
    {
        if (ReplacePropertiesBox->objectName().isEmpty())
            ReplacePropertiesBox->setObjectName("ReplacePropertiesBox");
        ReplacePropertiesBox->resize(255, 265);
        gridLayout = new QGridLayout(ReplacePropertiesBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_54 = new QLabel(ReplacePropertiesBox);
        label_54->setObjectName("label_54");

        gridLayout->addWidget(label_54, 2, 0, 1, 1);

        box_height = new QLineEdit(ReplacePropertiesBox);
        box_height->setObjectName("box_height");

        gridLayout->addWidget(box_height, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(200, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 3);

        label_60 = new QLabel(ReplacePropertiesBox);
        label_60->setObjectName("label_60");
        label_60->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_60, 2, 1, 1, 1);

        label_58 = new QLabel(ReplacePropertiesBox);
        label_58->setObjectName("label_58");
        label_58->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_58, 0, 1, 1, 1);

        box_width = new QLineEdit(ReplacePropertiesBox);
        box_width->setObjectName("box_width");

        gridLayout->addWidget(box_width, 1, 2, 1, 1);

        label_55 = new QLabel(ReplacePropertiesBox);
        label_55->setObjectName("label_55");

        gridLayout->addWidget(label_55, 1, 0, 1, 1);

        label_59 = new QLabel(ReplacePropertiesBox);
        label_59->setObjectName("label_59");
        label_59->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_59, 1, 1, 1, 1);

        label_53 = new QLabel(ReplacePropertiesBox);
        label_53->setObjectName("label_53");

        gridLayout->addWidget(label_53, 0, 0, 1, 1);

        label = new QLabel(ReplacePropertiesBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 3, 1, 1);

        label_2 = new QLabel(ReplacePropertiesBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        box_layer = new lay::LayerSelectionComboBox(ReplacePropertiesBox);
        box_layer->setObjectName("box_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(box_layer->sizePolicy().hasHeightForWidth());
        box_layer->setSizePolicy(sizePolicy);
        box_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(box_layer, 0, 2, 1, 1);


        retranslateUi(ReplacePropertiesBox);

        QMetaObject::connectSlotsByName(ReplacePropertiesBox);
    } // setupUi

    void retranslateUi(QWidget *ReplacePropertiesBox)
    {
        ReplacePropertiesBox->setWindowTitle(QCoreApplication::translate("ReplacePropertiesBox", "Form", nullptr));
        label_54->setText(QCoreApplication::translate("ReplacePropertiesBox", "Height", nullptr));
        label_60->setText(QString());
        label_58->setText(QString());
        label_55->setText(QCoreApplication::translate("ReplacePropertiesBox", "Width", nullptr));
        label_59->setText(QString());
        label_53->setText(QCoreApplication::translate("ReplacePropertiesBox", "Layer", nullptr));
        label->setText(QCoreApplication::translate("ReplacePropertiesBox", "\302\265m", nullptr));
        label_2->setText(QCoreApplication::translate("ReplacePropertiesBox", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePropertiesBox: public Ui_ReplacePropertiesBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPROPERTIESBOX_H
