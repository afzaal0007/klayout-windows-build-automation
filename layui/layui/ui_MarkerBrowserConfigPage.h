/********************************************************************************
** Form generated from reading UI file 'MarkerBrowserConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKERBROWSERCONFIGPAGE_H
#define UI_MARKERBROWSERCONFIGPAGE_H

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

class Ui_MarkerBrowserConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *spacerItem;
    QLabel *textLabel1_2;
    QComboBox *cbx_window;
    QComboBox *cbx_context;
    QLabel *textLabel1_3;
    QLineEdit *le_max_markers;
    lay::MarginWidget *mgn_window;

    void setupUi(QFrame *MarkerBrowserConfigPage)
    {
        if (MarkerBrowserConfigPage->objectName().isEmpty())
            MarkerBrowserConfigPage->setObjectName("MarkerBrowserConfigPage");
        MarkerBrowserConfigPage->resize(571, 162);
        vboxLayout = new QVBoxLayout(MarkerBrowserConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MarkerBrowserConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout->addWidget(cbx_window, 1, 1, 1, 1);

        cbx_context = new QComboBox(groupBox);
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->addItem(QString());
        cbx_context->setObjectName("cbx_context");

        gridLayout->addWidget(cbx_context, 0, 1, 1, 5);

        textLabel1_3 = new QLabel(groupBox);
        textLabel1_3->setObjectName("textLabel1_3");

        gridLayout->addWidget(textLabel1_3, 0, 0, 1, 1);

        le_max_markers = new QLineEdit(groupBox);
        le_max_markers->setObjectName("le_max_markers");

        gridLayout->addWidget(le_max_markers, 2, 3, 1, 3);

        mgn_window = new lay::MarginWidget(groupBox);
        mgn_window->setObjectName("mgn_window");

        gridLayout->addWidget(mgn_window, 1, 3, 1, 3);


        vboxLayout->addWidget(groupBox);


        retranslateUi(MarkerBrowserConfigPage);

        QMetaObject::connectSlotsByName(MarkerBrowserConfigPage);
    } // setupUi

    void retranslateUi(QFrame *MarkerBrowserConfigPage)
    {
        MarkerBrowserConfigPage->setWindowTitle(QCoreApplication::translate("MarkerBrowserConfigPage", "Marker Database Browser", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MarkerBrowserConfigPage", "Marker Browser", nullptr));
        label_2->setText(QCoreApplication::translate("MarkerBrowserConfigPage", "Maximum number of markers to show", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("MarkerBrowserConfigPage", "Window      ", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("MarkerBrowserConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("MarkerBrowserConfigPage", "Fit context cell", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("MarkerBrowserConfigPage", "Fit marker with margin ..", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("MarkerBrowserConfigPage", "Center marker", nullptr));
        cbx_window->setItemText(4, QCoreApplication::translate("MarkerBrowserConfigPage", "Center marker with size ..", nullptr));

        cbx_context->setItemText(0, QCoreApplication::translate("MarkerBrowserConfigPage", "Any Cell", nullptr));
        cbx_context->setItemText(1, QCoreApplication::translate("MarkerBrowserConfigPage", "Marker Database Top Cell", nullptr));
        cbx_context->setItemText(2, QCoreApplication::translate("MarkerBrowserConfigPage", "Current Cell", nullptr));
        cbx_context->setItemText(3, QCoreApplication::translate("MarkerBrowserConfigPage", "Current or Any Cell", nullptr));
        cbx_context->setItemText(4, QCoreApplication::translate("MarkerBrowserConfigPage", "Marker's Original Cell", nullptr));

        textLabel1_3->setText(QCoreApplication::translate("MarkerBrowserConfigPage", "Context", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkerBrowserConfigPage: public Ui_MarkerBrowserConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKERBROWSERCONFIGPAGE_H
