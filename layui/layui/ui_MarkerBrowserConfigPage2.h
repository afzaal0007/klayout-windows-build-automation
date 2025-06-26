/********************************************************************************
** Form generated from reading UI file 'MarkerBrowserConfigPage2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKERBROWSERCONFIGPAGE2_H
#define UI_MARKERBROWSERCONFIGPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_MarkerBrowserConfigPage2
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *halo_cb;
    QLineEdit *vs_le;
    QLineEdit *lw_le;
    QLabel *label_5;
    QSpacerItem *spacerItem;
    QLabel *textLabel2_2;
    QLabel *textLabel1_4;
    QSpacerItem *spacerItem1;
    QLabel *vs_lbl;
    lay::ColorButton *color_pb;
    QLabel *textLabel3_2;
    QLabel *label;
    lay::DitherPatternSelectionButton *stipple_pb;

    void setupUi(QFrame *MarkerBrowserConfigPage2)
    {
        if (MarkerBrowserConfigPage2->objectName().isEmpty())
            MarkerBrowserConfigPage2->setObjectName("MarkerBrowserConfigPage2");
        MarkerBrowserConfigPage2->resize(571, 174);
        vboxLayout = new QVBoxLayout(MarkerBrowserConfigPage2);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox_2 = new QGroupBox(MarkerBrowserConfigPage2);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        halo_cb = new QCheckBox(groupBox_2);
        halo_cb->setObjectName("halo_cb");
        halo_cb->setTristate(true);

        gridLayout->addWidget(halo_cb, 2, 1, 1, 2);

        vs_le = new QLineEdit(groupBox_2);
        vs_le->setObjectName("vs_le");

        gridLayout->addWidget(vs_le, 1, 4, 1, 1);

        lw_le = new QLineEdit(groupBox_2);
        lw_le->setObjectName("lw_le");

        gridLayout->addWidget(lw_le, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        spacerItem = new QSpacerItem(71, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 6, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName("textLabel2_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel2_2, 0, 5, 1, 1);

        textLabel1_4 = new QLabel(groupBox_2);
        textLabel1_4->setObjectName("textLabel1_4");

        gridLayout->addWidget(textLabel1_4, 0, 3, 1, 1);

        spacerItem1 = new QSpacerItem(41, 31, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);

        vs_lbl = new QLabel(groupBox_2);
        vs_lbl->setObjectName("vs_lbl");

        gridLayout->addWidget(vs_lbl, 1, 3, 1, 1);

        color_pb = new lay::ColorButton(groupBox_2);
        color_pb->setObjectName("color_pb");

        gridLayout->addWidget(color_pb, 0, 1, 1, 1);

        textLabel3_2 = new QLabel(groupBox_2);
        textLabel3_2->setObjectName("textLabel3_2");

        gridLayout->addWidget(textLabel3_2, 0, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        stipple_pb = new lay::DitherPatternSelectionButton(groupBox_2);
        stipple_pb->setObjectName("stipple_pb");

        gridLayout->addWidget(stipple_pb, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);


        retranslateUi(MarkerBrowserConfigPage2);

        QMetaObject::connectSlotsByName(MarkerBrowserConfigPage2);
    } // setupUi

    void retranslateUi(QFrame *MarkerBrowserConfigPage2)
    {
        MarkerBrowserConfigPage2->setWindowTitle(QCoreApplication::translate("MarkerBrowserConfigPage2", "Marker Database Browser", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MarkerBrowserConfigPage2", "Marker Appearance", nullptr));
        halo_cb->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "With halo", nullptr));
        label_5->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "pixel", nullptr));
        textLabel2_2->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "pixel", nullptr));
        textLabel1_4->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "Line width", nullptr));
        vs_lbl->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "Vertex size", nullptr));
#if QT_CONFIG(tooltip)
        color_pb->setToolTip(QCoreApplication::translate("MarkerBrowserConfigPage2", "The color in which the markers are drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        color_pb->setText(QString());
        textLabel3_2->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "Marker color", nullptr));
        label->setText(QCoreApplication::translate("MarkerBrowserConfigPage2", "Stipple", nullptr));
        stipple_pb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MarkerBrowserConfigPage2: public Ui_MarkerBrowserConfigPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKERBROWSERCONFIGPAGE2_H
