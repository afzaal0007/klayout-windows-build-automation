/********************************************************************************
** Form generated from reading UI file 'SearchPropertiesText.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROPERTIESTEXT_H
#define UI_SEARCHPROPERTIESTEXT_H

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

class Ui_SearchPropertiesText
{
public:
    QGridLayout *gridLayout;
    QLabel *label_20;
    QLabel *label_24;
    QLineEdit *text_size_value;
    lay::LayerSelectionComboBox *text_layer;
    QComboBox *text_string_op;
    QLineEdit *text_string_value;
    QComboBox *text_orientation_value;
    QComboBox *text_size_op;
    QLabel *label_23;
    QLabel *label_25;
    QComboBox *text_orientation_op;
    QLabel *label;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *SearchPropertiesText)
    {
        if (SearchPropertiesText->objectName().isEmpty())
            SearchPropertiesText->setObjectName("SearchPropertiesText");
        SearchPropertiesText->resize(338, 308);
        gridLayout = new QGridLayout(SearchPropertiesText);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_20 = new QLabel(SearchPropertiesText);
        label_20->setObjectName("label_20");

        gridLayout->addWidget(label_20, 0, 0, 1, 1);

        label_24 = new QLabel(SearchPropertiesText);
        label_24->setObjectName("label_24");

        gridLayout->addWidget(label_24, 3, 0, 1, 1);

        text_size_value = new QLineEdit(SearchPropertiesText);
        text_size_value->setObjectName("text_size_value");

        gridLayout->addWidget(text_size_value, 3, 2, 1, 1);

        text_layer = new lay::LayerSelectionComboBox(SearchPropertiesText);
        text_layer->setObjectName("text_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text_layer->sizePolicy().hasHeightForWidth());
        text_layer->setSizePolicy(sizePolicy);
        text_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(text_layer, 0, 2, 1, 1);

        text_string_op = new QComboBox(SearchPropertiesText);
        text_string_op->addItem(QString());
        text_string_op->addItem(QString());
        text_string_op->setObjectName("text_string_op");

        gridLayout->addWidget(text_string_op, 1, 1, 1, 1);

        text_string_value = new QLineEdit(SearchPropertiesText);
        text_string_value->setObjectName("text_string_value");

        gridLayout->addWidget(text_string_value, 1, 2, 1, 1);

        text_orientation_value = new QComboBox(SearchPropertiesText);
        text_orientation_value->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/r0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/r90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/r180_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/r270_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/m0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/m45_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/m90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/m135_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation_value->addItem(icon7, QString());
        text_orientation_value->setObjectName("text_orientation_value");

        gridLayout->addWidget(text_orientation_value, 2, 2, 1, 1);

        text_size_op = new QComboBox(SearchPropertiesText);
        text_size_op->addItem(QString());
        text_size_op->addItem(QString());
        text_size_op->addItem(QString());
        text_size_op->addItem(QString());
        text_size_op->addItem(QString());
        text_size_op->addItem(QString());
        text_size_op->setObjectName("text_size_op");

        gridLayout->addWidget(text_size_op, 3, 1, 1, 1);

        label_23 = new QLabel(SearchPropertiesText);
        label_23->setObjectName("label_23");

        gridLayout->addWidget(label_23, 1, 0, 1, 1);

        label_25 = new QLabel(SearchPropertiesText);
        label_25->setObjectName("label_25");

        gridLayout->addWidget(label_25, 2, 0, 1, 1);

        text_orientation_op = new QComboBox(SearchPropertiesText);
        text_orientation_op->addItem(QString());
        text_orientation_op->addItem(QString());
        text_orientation_op->setObjectName("text_orientation_op");

        gridLayout->addWidget(text_orientation_op, 2, 1, 1, 1);

        label = new QLabel(SearchPropertiesText);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 3, 1, 1);

        spacerItem = new QSpacerItem(200, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 4);

        QWidget::setTabOrder(text_layer, text_string_op);
        QWidget::setTabOrder(text_string_op, text_string_value);
        QWidget::setTabOrder(text_string_value, text_orientation_op);
        QWidget::setTabOrder(text_orientation_op, text_orientation_value);
        QWidget::setTabOrder(text_orientation_value, text_size_op);
        QWidget::setTabOrder(text_size_op, text_size_value);

        retranslateUi(SearchPropertiesText);

        QMetaObject::connectSlotsByName(SearchPropertiesText);
    } // setupUi

    void retranslateUi(QWidget *SearchPropertiesText)
    {
        SearchPropertiesText->setWindowTitle(QCoreApplication::translate("SearchPropertiesText", "Form", nullptr));
        label_20->setText(QCoreApplication::translate("SearchPropertiesText", "Layer", nullptr));
        label_24->setText(QCoreApplication::translate("SearchPropertiesText", "Size", nullptr));
        text_string_op->setItemText(0, QCoreApplication::translate("SearchPropertiesText", "~", nullptr));
        text_string_op->setItemText(1, QCoreApplication::translate("SearchPropertiesText", "!~", nullptr));

        text_orientation_value->setItemText(0, QString());
        text_orientation_value->setItemText(1, QCoreApplication::translate("SearchPropertiesText", "R0", nullptr));
        text_orientation_value->setItemText(2, QCoreApplication::translate("SearchPropertiesText", "R90", nullptr));
        text_orientation_value->setItemText(3, QCoreApplication::translate("SearchPropertiesText", "R180", nullptr));
        text_orientation_value->setItemText(4, QCoreApplication::translate("SearchPropertiesText", "R270", nullptr));
        text_orientation_value->setItemText(5, QCoreApplication::translate("SearchPropertiesText", "M0", nullptr));
        text_orientation_value->setItemText(6, QCoreApplication::translate("SearchPropertiesText", "M45", nullptr));
        text_orientation_value->setItemText(7, QCoreApplication::translate("SearchPropertiesText", "M90", nullptr));
        text_orientation_value->setItemText(8, QCoreApplication::translate("SearchPropertiesText", "M135", nullptr));

        text_size_op->setItemText(0, QCoreApplication::translate("SearchPropertiesText", "==", nullptr));
        text_size_op->setItemText(1, QCoreApplication::translate("SearchPropertiesText", "!=", nullptr));
        text_size_op->setItemText(2, QCoreApplication::translate("SearchPropertiesText", "<", nullptr));
        text_size_op->setItemText(3, QCoreApplication::translate("SearchPropertiesText", "<=", nullptr));
        text_size_op->setItemText(4, QCoreApplication::translate("SearchPropertiesText", ">", nullptr));
        text_size_op->setItemText(5, QCoreApplication::translate("SearchPropertiesText", ">=", nullptr));

        label_23->setText(QCoreApplication::translate("SearchPropertiesText", "Text", nullptr));
        label_25->setText(QCoreApplication::translate("SearchPropertiesText", "Orientation", nullptr));
        text_orientation_op->setItemText(0, QCoreApplication::translate("SearchPropertiesText", "==", nullptr));
        text_orientation_op->setItemText(1, QCoreApplication::translate("SearchPropertiesText", "!=", nullptr));

        label->setText(QCoreApplication::translate("SearchPropertiesText", " \302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPropertiesText: public Ui_SearchPropertiesText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROPERTIESTEXT_H
