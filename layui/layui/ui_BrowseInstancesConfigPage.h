/********************************************************************************
** Form generated from reading UI file 'BrowseInstancesConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSEINSTANCESCONFIGPAGE_H
#define UI_BROWSEINSTANCESCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_BrowseInstancesConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLineEdit *le_cell_name;
    QLabel *label;
    QComboBox *cbx_context;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QSpacerItem *spacerItem1;
    QComboBox *cbx_window;
    lay::MarginWidget *mrg_window;
    QLineEdit *le_max_count;

    void setupUi(QFrame *BrowseInstancesConfigPage)
    {
        if (BrowseInstancesConfigPage->objectName().isEmpty())
            BrowseInstancesConfigPage->setObjectName("BrowseInstancesConfigPage");
        BrowseInstancesConfigPage->resize(499, 151);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BrowseInstancesConfigPage->sizePolicy().hasHeightForWidth());
        BrowseInstancesConfigPage->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(BrowseInstancesConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(BrowseInstancesConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        le_cell_name = new QLineEdit(groupBox);
        le_cell_name->setObjectName("le_cell_name");
        le_cell_name->setEnabled(false);

        gridLayout->addWidget(le_cell_name, 0, 3, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 3);

        cbx_context = new QComboBox(groupBox);
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->setObjectName("cbx_context");

        gridLayout->addWidget(cbx_context, 0, 1, 1, 1);

        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName("textLabel1");

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(16, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout->addWidget(cbx_window, 1, 1, 1, 1);

        mrg_window = new lay::MarginWidget(groupBox);
        mrg_window->setObjectName("mrg_window");

        gridLayout->addWidget(mrg_window, 1, 3, 1, 2);

        le_max_count = new QLineEdit(groupBox);
        le_max_count->setObjectName("le_max_count");

        gridLayout->addWidget(le_max_count, 2, 3, 1, 2);


        vboxLayout->addWidget(groupBox);


        retranslateUi(BrowseInstancesConfigPage);

        QMetaObject::connectSlotsByName(BrowseInstancesConfigPage);
    } // setupUi

    void retranslateUi(QFrame *BrowseInstancesConfigPage)
    {
        BrowseInstancesConfigPage->setWindowTitle(QCoreApplication::translate("BrowseInstancesConfigPage", "Browse Cell Instances", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BrowseInstancesConfigPage", "Instance Browser Setup", nullptr));
        label->setText(QCoreApplication::translate("BrowseInstancesConfigPage", "Maximum number of instances to show", nullptr));
        cbx_context->setItemText(0, QCoreApplication::translate("BrowseInstancesConfigPage", "Show in context of cell ..", nullptr));
        cbx_context->setItemText(1, QCoreApplication::translate("BrowseInstancesConfigPage", "Show in context of any top cell", nullptr));
        cbx_context->setItemText(2, QCoreApplication::translate("BrowseInstancesConfigPage", "Show in parent cell", nullptr));

        textLabel1->setText(QCoreApplication::translate("BrowseInstancesConfigPage", "Context   ", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("BrowseInstancesConfigPage", "Window", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("BrowseInstancesConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("BrowseInstancesConfigPage", "Fit whole context cell", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("BrowseInstancesConfigPage", "Fit marker with margin ..", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("BrowseInstancesConfigPage", "Center marker", nullptr));
        cbx_window->setItemText(4, QCoreApplication::translate("BrowseInstancesConfigPage", "Center marker with size ..", nullptr));

    } // retranslateUi

};

namespace Ui {
    class BrowseInstancesConfigPage: public Ui_BrowseInstancesConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSEINSTANCESCONFIGPAGE_H
