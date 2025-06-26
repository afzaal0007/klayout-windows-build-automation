/********************************************************************************
** Form generated from reading UI file 'SearchPropertiesBox.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROPERTIESBOX_H
#define UI_SEARCHPROPERTIESBOX_H

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

class Ui_SearchPropertiesBox
{
public:
    QGridLayout *gridLayout;
    QLineEdit *box_height_value;
    QLabel *label_3;
    QLabel *label;
    QComboBox *box_height_op;
    QLabel *label_12;
    QSpacerItem *spacerItem;
    lay::LayerSelectionComboBox *box_layer;
    QComboBox *box_width_op;
    QLabel *label_2;
    QLabel *label_10;
    QLineEdit *box_area_value;
    QComboBox *box_area_op;
    QLineEdit *box_width_value;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_4;
    QComboBox *box_perimeter_op;
    QLineEdit *box_perimeter_value;
    QLabel *label_5;

    void setupUi(QWidget *SearchPropertiesBox)
    {
        if (SearchPropertiesBox->objectName().isEmpty())
            SearchPropertiesBox->setObjectName("SearchPropertiesBox");
        SearchPropertiesBox->resize(363, 331);
        gridLayout = new QGridLayout(SearchPropertiesBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        box_height_value = new QLineEdit(SearchPropertiesBox);
        box_height_value->setObjectName("box_height_value");

        gridLayout->addWidget(box_height_value, 4, 2, 1, 1);

        label_3 = new QLabel(SearchPropertiesBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 3, 1, 1);

        label = new QLabel(SearchPropertiesBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 3, 1, 1);

        box_height_op = new QComboBox(SearchPropertiesBox);
        box_height_op->addItem(QString());
        box_height_op->addItem(QString());
        box_height_op->addItem(QString());
        box_height_op->addItem(QString());
        box_height_op->addItem(QString());
        box_height_op->addItem(QString());
        box_height_op->setObjectName("box_height_op");

        gridLayout->addWidget(box_height_op, 4, 1, 1, 1);

        label_12 = new QLabel(SearchPropertiesBox);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(200, 281, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 4);

        box_layer = new lay::LayerSelectionComboBox(SearchPropertiesBox);
        box_layer->setObjectName("box_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(box_layer->sizePolicy().hasHeightForWidth());
        box_layer->setSizePolicy(sizePolicy);
        box_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(box_layer, 0, 2, 1, 1);

        box_width_op = new QComboBox(SearchPropertiesBox);
        box_width_op->addItem(QString());
        box_width_op->addItem(QString());
        box_width_op->addItem(QString());
        box_width_op->addItem(QString());
        box_width_op->addItem(QString());
        box_width_op->addItem(QString());
        box_width_op->setObjectName("box_width_op");

        gridLayout->addWidget(box_width_op, 3, 1, 1, 1);

        label_2 = new QLabel(SearchPropertiesBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 3, 1, 1);

        label_10 = new QLabel(SearchPropertiesBox);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        box_area_value = new QLineEdit(SearchPropertiesBox);
        box_area_value->setObjectName("box_area_value");

        gridLayout->addWidget(box_area_value, 1, 2, 1, 1);

        box_area_op = new QComboBox(SearchPropertiesBox);
        box_area_op->addItem(QString());
        box_area_op->addItem(QString());
        box_area_op->addItem(QString());
        box_area_op->addItem(QString());
        box_area_op->addItem(QString());
        box_area_op->addItem(QString());
        box_area_op->setObjectName("box_area_op");

        gridLayout->addWidget(box_area_op, 1, 1, 1, 1);

        box_width_value = new QLineEdit(SearchPropertiesBox);
        box_width_value->setObjectName("box_width_value");

        gridLayout->addWidget(box_width_value, 3, 2, 1, 1);

        label_13 = new QLabel(SearchPropertiesBox);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        label_11 = new QLabel(SearchPropertiesBox);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        label_4 = new QLabel(SearchPropertiesBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        box_perimeter_op = new QComboBox(SearchPropertiesBox);
        box_perimeter_op->addItem(QString());
        box_perimeter_op->addItem(QString());
        box_perimeter_op->addItem(QString());
        box_perimeter_op->addItem(QString());
        box_perimeter_op->addItem(QString());
        box_perimeter_op->addItem(QString());
        box_perimeter_op->setObjectName("box_perimeter_op");

        gridLayout->addWidget(box_perimeter_op, 2, 1, 1, 1);

        box_perimeter_value = new QLineEdit(SearchPropertiesBox);
        box_perimeter_value->setObjectName("box_perimeter_value");

        gridLayout->addWidget(box_perimeter_value, 2, 2, 1, 1);

        label_5 = new QLabel(SearchPropertiesBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        QWidget::setTabOrder(box_layer, box_area_op);
        QWidget::setTabOrder(box_area_op, box_area_value);
        QWidget::setTabOrder(box_area_value, box_perimeter_op);
        QWidget::setTabOrder(box_perimeter_op, box_perimeter_value);
        QWidget::setTabOrder(box_perimeter_value, box_width_op);
        QWidget::setTabOrder(box_width_op, box_width_value);
        QWidget::setTabOrder(box_width_value, box_height_op);
        QWidget::setTabOrder(box_height_op, box_height_value);

        retranslateUi(SearchPropertiesBox);

        QMetaObject::connectSlotsByName(SearchPropertiesBox);
    } // setupUi

    void retranslateUi(QWidget *SearchPropertiesBox)
    {
        SearchPropertiesBox->setWindowTitle(QCoreApplication::translate("SearchPropertiesBox", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SearchPropertiesBox", "\302\265m", nullptr));
        label->setText(QCoreApplication::translate("SearchPropertiesBox", "\302\265m\302\262", nullptr));
        box_height_op->setItemText(0, QCoreApplication::translate("SearchPropertiesBox", "==", nullptr));
        box_height_op->setItemText(1, QCoreApplication::translate("SearchPropertiesBox", "!=", nullptr));
        box_height_op->setItemText(2, QCoreApplication::translate("SearchPropertiesBox", "<", nullptr));
        box_height_op->setItemText(3, QCoreApplication::translate("SearchPropertiesBox", "<=", nullptr));
        box_height_op->setItemText(4, QCoreApplication::translate("SearchPropertiesBox", ">", nullptr));
        box_height_op->setItemText(5, QCoreApplication::translate("SearchPropertiesBox", ">=", nullptr));

        label_12->setText(QCoreApplication::translate("SearchPropertiesBox", "Area", nullptr));
        box_width_op->setItemText(0, QCoreApplication::translate("SearchPropertiesBox", "==", nullptr));
        box_width_op->setItemText(1, QCoreApplication::translate("SearchPropertiesBox", "!=", nullptr));
        box_width_op->setItemText(2, QCoreApplication::translate("SearchPropertiesBox", "<", nullptr));
        box_width_op->setItemText(3, QCoreApplication::translate("SearchPropertiesBox", "<=", nullptr));
        box_width_op->setItemText(4, QCoreApplication::translate("SearchPropertiesBox", ">", nullptr));
        box_width_op->setItemText(5, QCoreApplication::translate("SearchPropertiesBox", ">=", nullptr));

        label_2->setText(QCoreApplication::translate("SearchPropertiesBox", "\302\265m", nullptr));
        label_10->setText(QCoreApplication::translate("SearchPropertiesBox", "Width", nullptr));
        box_area_op->setItemText(0, QCoreApplication::translate("SearchPropertiesBox", "==", nullptr));
        box_area_op->setItemText(1, QCoreApplication::translate("SearchPropertiesBox", "!=", nullptr));
        box_area_op->setItemText(2, QCoreApplication::translate("SearchPropertiesBox", "<", nullptr));
        box_area_op->setItemText(3, QCoreApplication::translate("SearchPropertiesBox", "<=", nullptr));
        box_area_op->setItemText(4, QCoreApplication::translate("SearchPropertiesBox", ">", nullptr));
        box_area_op->setItemText(5, QCoreApplication::translate("SearchPropertiesBox", ">=", nullptr));

        label_13->setText(QCoreApplication::translate("SearchPropertiesBox", "Height", nullptr));
        label_11->setText(QCoreApplication::translate("SearchPropertiesBox", "Layer", nullptr));
        label_4->setText(QCoreApplication::translate("SearchPropertiesBox", "Perimeter", nullptr));
        box_perimeter_op->setItemText(0, QCoreApplication::translate("SearchPropertiesBox", "==", nullptr));
        box_perimeter_op->setItemText(1, QCoreApplication::translate("SearchPropertiesBox", "!=", nullptr));
        box_perimeter_op->setItemText(2, QCoreApplication::translate("SearchPropertiesBox", "<", nullptr));
        box_perimeter_op->setItemText(3, QCoreApplication::translate("SearchPropertiesBox", "<=", nullptr));
        box_perimeter_op->setItemText(4, QCoreApplication::translate("SearchPropertiesBox", ">", nullptr));
        box_perimeter_op->setItemText(5, QCoreApplication::translate("SearchPropertiesBox", ">=", nullptr));

        label_5->setText(QCoreApplication::translate("SearchPropertiesBox", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPropertiesBox: public Ui_SearchPropertiesBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROPERTIESBOX_H
