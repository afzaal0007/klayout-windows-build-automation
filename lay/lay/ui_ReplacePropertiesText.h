/********************************************************************************
** Form generated from reading UI file 'ReplacePropertiesText.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPROPERTIESTEXT_H
#define UI_REPLACEPROPERTIESTEXT_H

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

class Ui_ReplacePropertiesText
{
public:
    QGridLayout *gridLayout;
    QComboBox *text_orientation;
    QLabel *label_57;
    QLabel *label_67;
    QLabel *label_65;
    QLineEdit *text_size;
    QSpacerItem *spacerItem;
    QLabel *label_64;
    QLabel *label_58;
    QLabel *label_66;
    QLabel *label_56;
    QLineEdit *text_string;
    QLabel *label_55;
    lay::LayerSelectionComboBox *text_layer;
    QLabel *label;

    void setupUi(QWidget *ReplacePropertiesText)
    {
        if (ReplacePropertiesText->objectName().isEmpty())
            ReplacePropertiesText->setObjectName("ReplacePropertiesText");
        ReplacePropertiesText->resize(296, 269);
        gridLayout = new QGridLayout(ReplacePropertiesText);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        text_orientation = new QComboBox(ReplacePropertiesText);
        text_orientation->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/r0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/r90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/r180_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/r270_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/m0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/m45_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/m90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/m135_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_orientation->addItem(icon7, QString());
        text_orientation->setObjectName("text_orientation");

        gridLayout->addWidget(text_orientation, 2, 2, 1, 1);

        label_57 = new QLabel(ReplacePropertiesText);
        label_57->setObjectName("label_57");

        gridLayout->addWidget(label_57, 1, 0, 1, 1);

        label_67 = new QLabel(ReplacePropertiesText);
        label_67->setObjectName("label_67");
        label_67->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_67, 0, 1, 1, 1);

        label_65 = new QLabel(ReplacePropertiesText);
        label_65->setObjectName("label_65");
        label_65->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_65, 2, 1, 1, 1);

        text_size = new QLineEdit(ReplacePropertiesText);
        text_size->setObjectName("text_size");

        gridLayout->addWidget(text_size, 3, 2, 1, 1);

        spacerItem = new QSpacerItem(200, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 3);

        label_64 = new QLabel(ReplacePropertiesText);
        label_64->setObjectName("label_64");
        label_64->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_64, 1, 1, 1, 1);

        label_58 = new QLabel(ReplacePropertiesText);
        label_58->setObjectName("label_58");

        gridLayout->addWidget(label_58, 2, 0, 1, 1);

        label_66 = new QLabel(ReplacePropertiesText);
        label_66->setObjectName("label_66");
        label_66->setPixmap(QPixmap(QString::fromUtf8(":/right_16px@2x.png")));

        gridLayout->addWidget(label_66, 3, 1, 1, 1);

        label_56 = new QLabel(ReplacePropertiesText);
        label_56->setObjectName("label_56");

        gridLayout->addWidget(label_56, 3, 0, 1, 1);

        text_string = new QLineEdit(ReplacePropertiesText);
        text_string->setObjectName("text_string");

        gridLayout->addWidget(text_string, 1, 2, 1, 1);

        label_55 = new QLabel(ReplacePropertiesText);
        label_55->setObjectName("label_55");

        gridLayout->addWidget(label_55, 0, 0, 1, 1);

        text_layer = new lay::LayerSelectionComboBox(ReplacePropertiesText);
        text_layer->setObjectName("text_layer");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text_layer->sizePolicy().hasHeightForWidth());
        text_layer->setSizePolicy(sizePolicy);
        text_layer->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(text_layer, 0, 2, 1, 1);

        label = new QLabel(ReplacePropertiesText);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 3, 1, 1);


        retranslateUi(ReplacePropertiesText);

        QMetaObject::connectSlotsByName(ReplacePropertiesText);
    } // setupUi

    void retranslateUi(QWidget *ReplacePropertiesText)
    {
        ReplacePropertiesText->setWindowTitle(QCoreApplication::translate("ReplacePropertiesText", "Form", nullptr));
        text_orientation->setItemText(0, QString());
        text_orientation->setItemText(1, QCoreApplication::translate("ReplacePropertiesText", "R0", nullptr));
        text_orientation->setItemText(2, QCoreApplication::translate("ReplacePropertiesText", "R90", nullptr));
        text_orientation->setItemText(3, QCoreApplication::translate("ReplacePropertiesText", "R180", nullptr));
        text_orientation->setItemText(4, QCoreApplication::translate("ReplacePropertiesText", "R270", nullptr));
        text_orientation->setItemText(5, QCoreApplication::translate("ReplacePropertiesText", "M0", nullptr));
        text_orientation->setItemText(6, QCoreApplication::translate("ReplacePropertiesText", "M45", nullptr));
        text_orientation->setItemText(7, QCoreApplication::translate("ReplacePropertiesText", "M90", nullptr));
        text_orientation->setItemText(8, QCoreApplication::translate("ReplacePropertiesText", "M135", nullptr));

        label_57->setText(QCoreApplication::translate("ReplacePropertiesText", "Text", nullptr));
        label_67->setText(QString());
        label_65->setText(QString());
        label_64->setText(QString());
        label_58->setText(QCoreApplication::translate("ReplacePropertiesText", "Orientation", nullptr));
        label_66->setText(QString());
        label_56->setText(QCoreApplication::translate("ReplacePropertiesText", "Size", nullptr));
        label_55->setText(QCoreApplication::translate("ReplacePropertiesText", "Layer", nullptr));
        label->setText(QCoreApplication::translate("ReplacePropertiesText", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePropertiesText: public Ui_ReplacePropertiesText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPROPERTIESTEXT_H
