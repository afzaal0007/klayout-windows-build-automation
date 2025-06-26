/********************************************************************************
** Form generated from reading UI file 'ReplacePropertiesInstance.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPROPERTIESINSTANCE_H
#define UI_REPLACEPROPERTIESINSTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplacePropertiesInstance
{
public:
    QGridLayout *gridLayout;
    QLabel *label_56;
    QSpacerItem *spacerItem;
    QLabel *label_41;
    QLineEdit *instance_cellname;

    void setupUi(QWidget *ReplacePropertiesInstance)
    {
        if (ReplacePropertiesInstance->objectName().isEmpty())
            ReplacePropertiesInstance->setObjectName("ReplacePropertiesInstance");
        ReplacePropertiesInstance->resize(266, 195);
        gridLayout = new QGridLayout(ReplacePropertiesInstance);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_56 = new QLabel(ReplacePropertiesInstance);
        label_56->setObjectName("label_56");
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_56, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(200, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 3);

        label_41 = new QLabel(ReplacePropertiesInstance);
        label_41->setObjectName("label_41");

        gridLayout->addWidget(label_41, 0, 0, 1, 1);

        instance_cellname = new QLineEdit(ReplacePropertiesInstance);
        instance_cellname->setObjectName("instance_cellname");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instance_cellname->sizePolicy().hasHeightForWidth());
        instance_cellname->setSizePolicy(sizePolicy);

        gridLayout->addWidget(instance_cellname, 0, 2, 1, 1);


        retranslateUi(ReplacePropertiesInstance);

        QMetaObject::connectSlotsByName(ReplacePropertiesInstance);
    } // setupUi

    void retranslateUi(QWidget *ReplacePropertiesInstance)
    {
        ReplacePropertiesInstance->setWindowTitle(QCoreApplication::translate("ReplacePropertiesInstance", "Form", nullptr));
        label_56->setText(QString());
        label_41->setText(QCoreApplication::translate("ReplacePropertiesInstance", "Instance cell name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePropertiesInstance: public Ui_ReplacePropertiesInstance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPROPERTIESINSTANCE_H
