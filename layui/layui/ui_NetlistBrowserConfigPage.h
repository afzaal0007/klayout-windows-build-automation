/********************************************************************************
** Form generated from reading UI file 'NetlistBrowserConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETLISTBROWSERCONFIGPAGE_H
#define UI_NETLISTBROWSERCONFIGPAGE_H

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

QT_BEGIN_NAMESPACE

class Ui_NetlistBrowserConfigPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QComboBox *cbx_window;
    QLineEdit *le_max_markers;
    QLabel *textLabel1_2;
    QLabel *textLabel2;
    QLineEdit *le_window;
    QSpacerItem *spacerItem1;
    QLabel *label_2;

    void setupUi(QFrame *NetlistBrowserConfigPage)
    {
        if (NetlistBrowserConfigPage->objectName().isEmpty())
            NetlistBrowserConfigPage->setObjectName("NetlistBrowserConfigPage");
        NetlistBrowserConfigPage->resize(571, 162);
        verticalLayout = new QVBoxLayout(NetlistBrowserConfigPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(NetlistBrowserConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        cbx_window = new QComboBox(groupBox);
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->addItem(QString());
        cbx_window->setObjectName("cbx_window");

        gridLayout->addWidget(cbx_window, 0, 1, 1, 1);

        le_max_markers = new QLineEdit(groupBox);
        le_max_markers->setObjectName("le_max_markers");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_max_markers->sizePolicy().hasHeightForWidth());
        le_max_markers->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_max_markers, 1, 3, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName("textLabel1_2");

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName("textLabel2");

        gridLayout->addWidget(textLabel2, 0, 4, 1, 1);

        le_window = new QLineEdit(groupBox);
        le_window->setObjectName("le_window");
        le_window->setEnabled(false);
        sizePolicy.setHeightForWidth(le_window->sizePolicy().hasHeightForWidth());
        le_window->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_window, 0, 3, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 5, 2, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(NetlistBrowserConfigPage);

        QMetaObject::connectSlotsByName(NetlistBrowserConfigPage);
    } // setupUi

    void retranslateUi(QFrame *NetlistBrowserConfigPage)
    {
        NetlistBrowserConfigPage->setWindowTitle(QCoreApplication::translate("NetlistBrowserConfigPage", "Netlist Database Browser", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NetlistBrowserConfigPage", "Net Browser", nullptr));
        cbx_window->setItemText(0, QCoreApplication::translate("NetlistBrowserConfigPage", "Don't change", nullptr));
        cbx_window->setItemText(1, QCoreApplication::translate("NetlistBrowserConfigPage", "Fit net with margin ..", nullptr));
        cbx_window->setItemText(2, QCoreApplication::translate("NetlistBrowserConfigPage", "Center net", nullptr));
        cbx_window->setItemText(3, QCoreApplication::translate("NetlistBrowserConfigPage", "Center net with size ..", nullptr));

        textLabel1_2->setText(QCoreApplication::translate("NetlistBrowserConfigPage", "Window      ", nullptr));
        textLabel2->setText(QCoreApplication::translate("NetlistBrowserConfigPage", "\302\265m", nullptr));
        label_2->setText(QCoreApplication::translate("NetlistBrowserConfigPage", "Maximum number of shapes highlighted", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetlistBrowserConfigPage: public Ui_NetlistBrowserConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLISTBROWSERCONFIGPAGE_H
