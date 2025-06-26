/********************************************************************************
** Form generated from reading UI file 'BrowseShapesConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSESHAPESCONFIGPAGE_H
#define UI_BROWSESHAPESCONFIGPAGE_H

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

class Ui_BrowseShapesConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *le_cell_name;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QComboBox *cbx_context;
    QLabel *label;
    QLabel *textLabel1;
    QComboBox *cbx_window;
    QLabel *label_2;
    QLabel *textLabel1_2;
    lay::MarginWidget *mrg_window;
    QLineEdit *le_max_shapes;
    QLineEdit *le_max_inst;

    void setupUi(QFrame *BrowseShapesConfigPage)
    {
        if (BrowseShapesConfigPage->objectName().isEmpty())
            BrowseShapesConfigPage->setObjectName("BrowseShapesConfigPage");
        BrowseShapesConfigPage->resize(577, 194);
        vboxLayout = new QVBoxLayout(BrowseShapesConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(BrowseShapesConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        le_cell_name = new QLineEdit(groupBox);
        le_cell_name->setObjectName("le_cell_name");
        le_cell_name->setEnabled(false);

        gridLayout->addWidget(le_cell_name, 0, 3, 1, 2);

        spacerItem = new QSpacerItem(10, 21, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        cbx_context = new QComboBox(groupBox);
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->setObjectName("cbx_context");

        gridLayout->addWidget(cbx_context, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 2);

        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName("textLabel1");

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout->addWidget(cbx_window, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

        mrg_window = new lay::MarginWidget(groupBox);
        mrg_window->setObjectName("mrg_window");

        gridLayout->addWidget(mrg_window, 1, 3, 1, 2);

        le_max_shapes = new QLineEdit(groupBox);
        le_max_shapes->setObjectName("le_max_shapes");

        gridLayout->addWidget(le_max_shapes, 2, 3, 1, 2);

        le_max_inst = new QLineEdit(groupBox);
        le_max_inst->setObjectName("le_max_inst");

        gridLayout->addWidget(le_max_inst, 3, 3, 1, 2);


        vboxLayout->addWidget(groupBox);


        retranslateUi(BrowseShapesConfigPage);

        QMetaObject::connectSlotsByName(BrowseShapesConfigPage);
    } // setupUi

    void retranslateUi(QFrame *BrowseShapesConfigPage)
    {
        BrowseShapesConfigPage->setWindowTitle(QCoreApplication::translate("BrowseShapesConfigPage", "Browse Shapes", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BrowseShapesConfigPage", "Shape Browser Setup", nullptr));
        cbx_context->setItemText(0, QCoreApplication::translate("BrowseShapesConfigPage", "Show in context of cell ..", nullptr));
        cbx_context->setItemText(1, QCoreApplication::translate("BrowseShapesConfigPage", "Show in context of any top cell", nullptr));
        cbx_context->setItemText(2, QCoreApplication::translate("BrowseShapesConfigPage", "Show in context of local cell", nullptr));

        label->setText(QCoreApplication::translate("BrowseShapesConfigPage", "Maximum number of shapes to show", nullptr));
        textLabel1->setText(QCoreApplication::translate("BrowseShapesConfigPage", "Context   ", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("BrowseShapesConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("BrowseShapesConfigPage", "Fit context cell", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("BrowseShapesConfigPage", "Fit marker with margin ..", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("BrowseShapesConfigPage", "Center marker", nullptr));
        cbx_window->setItemText(4, QCoreApplication::translate("BrowseShapesConfigPage", "Center marker with size ..", nullptr));

        label_2->setText(QCoreApplication::translate("BrowseShapesConfigPage", "Maximum number of instances to show", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("BrowseShapesConfigPage", "Window      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowseShapesConfigPage: public Ui_BrowseShapesConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSESHAPESCONFIGPAGE_H
