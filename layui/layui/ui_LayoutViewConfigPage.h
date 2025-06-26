/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE_H
#define UI_LAYOUTVIEWCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage
{
public:
    QGridLayout *gridLayout;
    lay::ColorButton *bkgnd_color_pb;
    QLabel *label;
    QSpacerItem *spacerItem;

    void setupUi(QFrame *LayoutViewConfigPage)
    {
        if (LayoutViewConfigPage->objectName().isEmpty())
            LayoutViewConfigPage->setObjectName("LayoutViewConfigPage");
        LayoutViewConfigPage->resize(449, 57);
        gridLayout = new QGridLayout(LayoutViewConfigPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        bkgnd_color_pb = new lay::ColorButton(LayoutViewConfigPage);
        bkgnd_color_pb->setObjectName("bkgnd_color_pb");
        bkgnd_color_pb->setAutoFillBackground(false);

        gridLayout->addWidget(bkgnd_color_pb, 0, 1, 1, 1);

        label = new QLabel(LayoutViewConfigPage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(111, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);


        retranslateUi(LayoutViewConfigPage);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage)
    {
        LayoutViewConfigPage->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage", "Settings", nullptr));
        bkgnd_color_pb->setText(QString());
        label->setText(QCoreApplication::translate("LayoutViewConfigPage", "Background color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage: public Ui_LayoutViewConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE_H
