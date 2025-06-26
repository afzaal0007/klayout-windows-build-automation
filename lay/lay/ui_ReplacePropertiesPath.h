/********************************************************************************
** Form generated from reading UI file 'ReplacePropertiesPath.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPROPERTIESPATH_H
#define UI_REPLACEPROPERTIESPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_ReplacePropertiesPath
{
public:
    QGridLayout *gridLayout;
    QLabel *label_55;
    QSpacerItem *spacerItem;
    QLabel *label_54;
    lay::LayerSelectionComboBox *path_layer;
    QLabel *label_61;
    QLineEdit *path_width;
    QLabel *label_62;
    QLabel *label;

    void setupUi(QWidget *ReplacePropertiesPath)
    {
        if (ReplacePropertiesPath->objectName().isEmpty())
            ReplacePropertiesPath->setObjectName("ReplacePropertiesPath");
        ReplacePropertiesPath->resize(246, 241);
        gridLayout = new QGridLayout(ReplacePropertiesPath);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_55 = new QLabel(ReplacePropertiesPath);
        label_55->setObjectName("label_55");

        gridLayout->addWidget(label_55, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(200, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 3);

        label_54 = new QLabel(ReplacePropertiesPath);
        label_54->setObjectName("label_54");

        gridLayout->addWidget(label_54, 0, 0, 1, 1);

        path_layer = new lay::LayerSelectionComboBox(ReplacePropertiesPath);
        path_layer->setObjectName("path_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(path_layer->sizePolicy().hasHeightForWidth());
        path_layer->setSizePolicy(sizePolicy);
        path_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(path_layer, 0, 2, 1, 1);

        label_61 = new QLabel(ReplacePropertiesPath);
        label_61->setObjectName("label_61");
        label_61->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_61, 1, 1, 1, 1);

        path_width = new QLineEdit(ReplacePropertiesPath);
        path_width->setObjectName("path_width");

        gridLayout->addWidget(path_width, 1, 2, 1, 1);

        label_62 = new QLabel(ReplacePropertiesPath);
        label_62->setObjectName("label_62");
        label_62->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_62, 0, 1, 1, 1);

        label = new QLabel(ReplacePropertiesPath);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 3, 1, 1);


        retranslateUi(ReplacePropertiesPath);

        QMetaObject::connectSlotsByName(ReplacePropertiesPath);
    } // setupUi

    void retranslateUi(QWidget *ReplacePropertiesPath)
    {
        ReplacePropertiesPath->setWindowTitle(QCoreApplication::translate("ReplacePropertiesPath", "Form", nullptr));
        label_55->setText(QCoreApplication::translate("ReplacePropertiesPath", "Width", nullptr));
        label_54->setText(QCoreApplication::translate("ReplacePropertiesPath", "Layer", nullptr));
        label_61->setText(QString());
        label_62->setText(QString());
        label->setText(QCoreApplication::translate("ReplacePropertiesPath", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePropertiesPath: public Ui_ReplacePropertiesPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPROPERTIESPATH_H
