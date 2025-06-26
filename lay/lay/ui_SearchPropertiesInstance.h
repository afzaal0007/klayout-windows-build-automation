/********************************************************************************
** Form generated from reading UI file 'SearchPropertiesInstance.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROPERTIESINSTANCE_H
#define UI_SEARCHPROPERTIESINSTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPropertiesInstance
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLineEdit *instance_cellname_value;
    QComboBox *instance_cellname_op;
    QLabel *label_2;

    void setupUi(QWidget *SearchPropertiesInstance)
    {
        if (SearchPropertiesInstance->objectName().isEmpty())
            SearchPropertiesInstance->setObjectName("SearchPropertiesInstance");
        SearchPropertiesInstance->resize(334, 295);
        gridLayout = new QGridLayout(SearchPropertiesInstance);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(200, 321, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 3);

        instance_cellname_value = new QLineEdit(SearchPropertiesInstance);
        instance_cellname_value->setObjectName("instance_cellname_value");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instance_cellname_value->sizePolicy().hasHeightForWidth());
        instance_cellname_value->setSizePolicy(sizePolicy);

        gridLayout->addWidget(instance_cellname_value, 0, 2, 1, 1);

        instance_cellname_op = new QComboBox(SearchPropertiesInstance);
        instance_cellname_op->addItem(QString());
        instance_cellname_op->addItem(QString());
        instance_cellname_op->setObjectName("instance_cellname_op");

        gridLayout->addWidget(instance_cellname_op, 0, 1, 1, 1);

        label_2 = new QLabel(SearchPropertiesInstance);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        QWidget::setTabOrder(instance_cellname_op, instance_cellname_value);

        retranslateUi(SearchPropertiesInstance);

        QMetaObject::connectSlotsByName(SearchPropertiesInstance);
    } // setupUi

    void retranslateUi(QWidget *SearchPropertiesInstance)
    {
        SearchPropertiesInstance->setWindowTitle(QCoreApplication::translate("SearchPropertiesInstance", "Form", nullptr));
        instance_cellname_op->setItemText(0, QCoreApplication::translate("SearchPropertiesInstance", "~", nullptr));
        instance_cellname_op->setItemText(1, QCoreApplication::translate("SearchPropertiesInstance", "!~", nullptr));

        label_2->setText(QCoreApplication::translate("SearchPropertiesInstance", "Instance cell name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPropertiesInstance: public Ui_SearchPropertiesInstance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROPERTIESINSTANCE_H
