/********************************************************************************
** Form generated from reading UI file 'SearchPropertiesShape.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROPERTIESSHAPE_H
#define UI_SEARCHPROPERTIESSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_SearchPropertiesShape
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *shape_area_op;
    QLabel *label_7;
    QLineEdit *shape_area_value;
    QLineEdit *shape_perimeter_value;
    QComboBox *shape_perimeter_op;
    QLabel *label;
    QLabel *label_2;
    lay::LayerSelectionComboBox *shape_layer;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *SearchPropertiesShape)
    {
        if (SearchPropertiesShape->objectName().isEmpty())
            SearchPropertiesShape->setObjectName("SearchPropertiesShape");
        SearchPropertiesShape->resize(367, 287);
        gridLayout = new QGridLayout(SearchPropertiesShape);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_5 = new QLabel(SearchPropertiesShape);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(SearchPropertiesShape);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        shape_area_op = new QComboBox(SearchPropertiesShape);
        shape_area_op->addItem(QString());
        shape_area_op->addItem(QString());
        shape_area_op->addItem(QString());
        shape_area_op->addItem(QString());
        shape_area_op->addItem(QString());
        shape_area_op->addItem(QString());
        shape_area_op->setObjectName("shape_area_op");

        gridLayout->addWidget(shape_area_op, 1, 1, 1, 1);

        label_7 = new QLabel(SearchPropertiesShape);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        shape_area_value = new QLineEdit(SearchPropertiesShape);
        shape_area_value->setObjectName("shape_area_value");

        gridLayout->addWidget(shape_area_value, 1, 2, 1, 1);

        shape_perimeter_value = new QLineEdit(SearchPropertiesShape);
        shape_perimeter_value->setObjectName("shape_perimeter_value");

        gridLayout->addWidget(shape_perimeter_value, 2, 2, 1, 1);

        shape_perimeter_op = new QComboBox(SearchPropertiesShape);
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->addItem(QString());
        shape_perimeter_op->setObjectName("shape_perimeter_op");

        gridLayout->addWidget(shape_perimeter_op, 2, 1, 1, 1);

        label = new QLabel(SearchPropertiesShape);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 3, 1, 1);

        label_2 = new QLabel(SearchPropertiesShape);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        shape_layer = new lay::LayerSelectionComboBox(SearchPropertiesShape);
        shape_layer->setObjectName("shape_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shape_layer->sizePolicy().hasHeightForWidth());
        shape_layer->setSizePolicy(sizePolicy);
        shape_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(shape_layer, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(200, 281, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 4);

        QWidget::setTabOrder(shape_layer, shape_area_op);
        QWidget::setTabOrder(shape_area_op, shape_area_value);
        QWidget::setTabOrder(shape_area_value, shape_perimeter_op);
        QWidget::setTabOrder(shape_perimeter_op, shape_perimeter_value);

        retranslateUi(SearchPropertiesShape);

        QMetaObject::connectSlotsByName(SearchPropertiesShape);
    } // setupUi

    void retranslateUi(QWidget *SearchPropertiesShape)
    {
        SearchPropertiesShape->setWindowTitle(QCoreApplication::translate("SearchPropertiesShape", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("SearchPropertiesShape", "Layer", nullptr));
        label_6->setText(QCoreApplication::translate("SearchPropertiesShape", "Area", nullptr));
        shape_area_op->setItemText(0, QCoreApplication::translate("SearchPropertiesShape", "==", nullptr));
        shape_area_op->setItemText(1, QCoreApplication::translate("SearchPropertiesShape", "!=", nullptr));
        shape_area_op->setItemText(2, QCoreApplication::translate("SearchPropertiesShape", "<", nullptr));
        shape_area_op->setItemText(3, QCoreApplication::translate("SearchPropertiesShape", "<=", nullptr));
        shape_area_op->setItemText(4, QCoreApplication::translate("SearchPropertiesShape", ">", nullptr));
        shape_area_op->setItemText(5, QCoreApplication::translate("SearchPropertiesShape", ">=", nullptr));

        label_7->setText(QCoreApplication::translate("SearchPropertiesShape", "Perimeter", nullptr));
        shape_perimeter_op->setItemText(0, QCoreApplication::translate("SearchPropertiesShape", "==", nullptr));
        shape_perimeter_op->setItemText(1, QCoreApplication::translate("SearchPropertiesShape", "!=", nullptr));
        shape_perimeter_op->setItemText(2, QCoreApplication::translate("SearchPropertiesShape", "<", nullptr));
        shape_perimeter_op->setItemText(3, QCoreApplication::translate("SearchPropertiesShape", "<=", nullptr));
        shape_perimeter_op->setItemText(4, QCoreApplication::translate("SearchPropertiesShape", ">", nullptr));
        shape_perimeter_op->setItemText(5, QCoreApplication::translate("SearchPropertiesShape", ">=", nullptr));

        label->setText(QCoreApplication::translate("SearchPropertiesShape", "\302\265m\302\262", nullptr));
        label_2->setText(QCoreApplication::translate("SearchPropertiesShape", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPropertiesShape: public Ui_SearchPropertiesShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROPERTIESSHAPE_H
