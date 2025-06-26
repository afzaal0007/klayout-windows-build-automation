/********************************************************************************
** Form generated from reading UI file 'ReplacePropertiesShape.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPROPERTIESSHAPE_H
#define UI_REPLACEPROPERTIESSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_ReplacePropertiesShape
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label_47;
    lay::LayerSelectionComboBox *shape_layer;
    QLabel *label_57;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ReplacePropertiesShape)
    {
        if (ReplacePropertiesShape->objectName().isEmpty())
            ReplacePropertiesShape->setObjectName("ReplacePropertiesShape");
        ReplacePropertiesShape->resize(343, 187);
        gridLayout = new QGridLayout(ReplacePropertiesShape);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(10, 281, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 3);

        label_47 = new QLabel(ReplacePropertiesShape);
        label_47->setObjectName("label_47");

        gridLayout->addWidget(label_47, 0, 0, 1, 1);

        shape_layer = new lay::LayerSelectionComboBox(ReplacePropertiesShape);
        shape_layer->setObjectName("shape_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shape_layer->sizePolicy().hasHeightForWidth());
        shape_layer->setSizePolicy(sizePolicy);
        shape_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(shape_layer, 0, 2, 1, 1);

        label_57 = new QLabel(ReplacePropertiesShape);
        label_57->setObjectName("label_57");
        label_57->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_57, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(ReplacePropertiesShape);

        QMetaObject::connectSlotsByName(ReplacePropertiesShape);
    } // setupUi

    void retranslateUi(QWidget *ReplacePropertiesShape)
    {
        ReplacePropertiesShape->setWindowTitle(QCoreApplication::translate("ReplacePropertiesShape", "Form", nullptr));
        label_47->setText(QCoreApplication::translate("ReplacePropertiesShape", "Layer", nullptr));
        label_57->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReplacePropertiesShape: public Ui_ReplacePropertiesShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPROPERTIESSHAPE_H
