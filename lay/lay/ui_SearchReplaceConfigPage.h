/********************************************************************************
** Form generated from reading UI file 'SearchReplaceConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHREPLACECONFIGPAGE_H
#define UI_SEARCHREPLACECONFIGPAGE_H

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

class Ui_SearchReplaceConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLineEdit *le_max_items;
    QComboBox *cbx_window;
    QLabel *textLabel1_2;
    lay::MarginWidget *mrg_window;
    QLabel *label;

    void setupUi(QFrame *SearchReplaceConfigPage)
    {
        if (SearchReplaceConfigPage->objectName().isEmpty())
            SearchReplaceConfigPage->setObjectName("SearchReplaceConfigPage");
        SearchReplaceConfigPage->resize(569, 158);
        vboxLayout = new QVBoxLayout(SearchReplaceConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(SearchReplaceConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(10, 21, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        le_max_items = new QLineEdit(groupBox);
        le_max_items->setObjectName("le_max_items");

        gridLayout->addWidget(le_max_items, 1, 3, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout->addWidget(cbx_window, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        mrg_window = new lay::MarginWidget(groupBox);
        mrg_window->setObjectName("mrg_window");

        gridLayout->addWidget(mrg_window, 0, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 3);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(cbx_window, le_max_items);

        retranslateUi(SearchReplaceConfigPage);

        QMetaObject::connectSlotsByName(SearchReplaceConfigPage);
    } // setupUi

    void retranslateUi(QFrame *SearchReplaceConfigPage)
    {
        SearchReplaceConfigPage->setWindowTitle(QCoreApplication::translate("SearchReplaceConfigPage", "Search Result Browser Configuration", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SearchReplaceConfigPage", "Search Result Browser Configuration", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("SearchReplaceConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("SearchReplaceConfigPage", "Fit context cell", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("SearchReplaceConfigPage", "Fit marker with margin ..", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("SearchReplaceConfigPage", "Center marker", nullptr));
        cbx_window->setItemText(4, QCoreApplication::translate("SearchReplaceConfigPage", "Center marker with size ..", nullptr));

        textLabel1_2->setText(QCoreApplication::translate("SearchReplaceConfigPage", "Window      ", nullptr));
        label->setText(QCoreApplication::translate("SearchReplaceConfigPage", "Maximum number of items to show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchReplaceConfigPage: public Ui_SearchReplaceConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHREPLACECONFIGPAGE_H
