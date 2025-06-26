/********************************************************************************
** Form generated from reading UI file 'SearchPropertiesPath.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROPERTIESPATH_H
#define UI_SEARCHPROPERTIESPATH_H

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

class Ui_SearchPropertiesPath
{
public:
    QGridLayout *gridLayout;
    QLabel *label_21;
    QLineEdit *path_width_value;
    QLabel *label_22;
    QLabel *label_19;
    QComboBox *path_width_op;
    QComboBox *path_length_op;
    QLineEdit *path_length_value;
    QLabel *label;
    QLabel *label_2;
    lay::LayerSelectionComboBox *path_layer;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *SearchPropertiesPath)
    {
        if (SearchPropertiesPath->objectName().isEmpty())
            SearchPropertiesPath->setObjectName("SearchPropertiesPath");
        SearchPropertiesPath->resize(279, 260);
        gridLayout = new QGridLayout(SearchPropertiesPath);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_21 = new QLabel(SearchPropertiesPath);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 1, 0, 1, 1);

        path_width_value = new QLineEdit(SearchPropertiesPath);
        path_width_value->setObjectName("path_width_value");

        gridLayout->addWidget(path_width_value, 2, 2, 1, 1);

        label_22 = new QLabel(SearchPropertiesPath);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 2, 0, 1, 1);

        label_19 = new QLabel(SearchPropertiesPath);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 0, 0, 1, 1);

        path_width_op = new QComboBox(SearchPropertiesPath);
        path_width_op->addItem(QString());
        path_width_op->addItem(QString());
        path_width_op->addItem(QString());
        path_width_op->addItem(QString());
        path_width_op->addItem(QString());
        path_width_op->addItem(QString());
        path_width_op->setObjectName("path_width_op");

        gridLayout->addWidget(path_width_op, 2, 1, 1, 1);

        path_length_op = new QComboBox(SearchPropertiesPath);
        path_length_op->addItem(QString());
        path_length_op->addItem(QString());
        path_length_op->addItem(QString());
        path_length_op->addItem(QString());
        path_length_op->addItem(QString());
        path_length_op->addItem(QString());
        path_length_op->setObjectName("path_length_op");

        gridLayout->addWidget(path_length_op, 1, 1, 1, 1);

        path_length_value = new QLineEdit(SearchPropertiesPath);
        path_length_value->setObjectName("path_length_value");

        gridLayout->addWidget(path_length_value, 1, 2, 1, 1);

        label = new QLabel(SearchPropertiesPath);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 3, 1, 1);

        label_2 = new QLabel(SearchPropertiesPath);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        path_layer = new lay::LayerSelectionComboBox(SearchPropertiesPath);
        path_layer->setObjectName("path_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(path_layer->sizePolicy().hasHeightForWidth());
        path_layer->setSizePolicy(sizePolicy);
        path_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(path_layer, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(200, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 4);

        QWidget::setTabOrder(path_layer, path_length_op);
        QWidget::setTabOrder(path_length_op, path_length_value);
        QWidget::setTabOrder(path_length_value, path_width_op);
        QWidget::setTabOrder(path_width_op, path_width_value);

        retranslateUi(SearchPropertiesPath);

        QMetaObject::connectSlotsByName(SearchPropertiesPath);
    } // setupUi

    void retranslateUi(QWidget *SearchPropertiesPath)
    {
        SearchPropertiesPath->setWindowTitle(QCoreApplication::translate("SearchPropertiesPath", "Form", nullptr));
        label_21->setText(QCoreApplication::translate("SearchPropertiesPath", "Length", nullptr));
        label_22->setText(QCoreApplication::translate("SearchPropertiesPath", "Width", nullptr));
        label_19->setText(QCoreApplication::translate("SearchPropertiesPath", "Layer", nullptr));
        path_width_op->setItemText(0, QCoreApplication::translate("SearchPropertiesPath", "==", nullptr));
        path_width_op->setItemText(1, QCoreApplication::translate("SearchPropertiesPath", "!=", nullptr));
        path_width_op->setItemText(2, QCoreApplication::translate("SearchPropertiesPath", "<", nullptr));
        path_width_op->setItemText(3, QCoreApplication::translate("SearchPropertiesPath", "<=", nullptr));
        path_width_op->setItemText(4, QCoreApplication::translate("SearchPropertiesPath", ">", nullptr));
        path_width_op->setItemText(5, QCoreApplication::translate("SearchPropertiesPath", ">=", nullptr));

        path_length_op->setItemText(0, QCoreApplication::translate("SearchPropertiesPath", "==", nullptr));
        path_length_op->setItemText(1, QCoreApplication::translate("SearchPropertiesPath", "!=", nullptr));
        path_length_op->setItemText(2, QCoreApplication::translate("SearchPropertiesPath", "<", nullptr));
        path_length_op->setItemText(3, QCoreApplication::translate("SearchPropertiesPath", "<=", nullptr));
        path_length_op->setItemText(4, QCoreApplication::translate("SearchPropertiesPath", ">", nullptr));
        path_length_op->setItemText(5, QCoreApplication::translate("SearchPropertiesPath", ">=", nullptr));

        label->setText(QCoreApplication::translate("SearchPropertiesPath", "\302\265m", nullptr));
        label_2->setText(QCoreApplication::translate("SearchPropertiesPath", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPropertiesPath: public Ui_SearchPropertiesPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROPERTIESPATH_H
