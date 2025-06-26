/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage3c.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE3C_H
#define UI_LAYOUTVIEWCONFIGPAGE3C_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage3c
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *dbu_units_cbx;
    QCheckBox *abs_units_cbx;

    void setupUi(QFrame *LayoutViewConfigPage3c)
    {
        if (LayoutViewConfigPage3c->objectName().isEmpty())
            LayoutViewConfigPage3c->setObjectName("LayoutViewConfigPage3c");
        LayoutViewConfigPage3c->resize(556, 117);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage3c);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(LayoutViewConfigPage3c);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        vboxLayout1->setObjectName("vboxLayout1");
        dbu_units_cbx = new QCheckBox(groupBox);
        dbu_units_cbx->setObjectName("dbu_units_cbx");

        vboxLayout1->addWidget(dbu_units_cbx);

        abs_units_cbx = new QCheckBox(groupBox);
        abs_units_cbx->setObjectName("abs_units_cbx");

        vboxLayout1->addWidget(abs_units_cbx);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(dbu_units_cbx, abs_units_cbx);

        retranslateUi(LayoutViewConfigPage3c);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage3c);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage3c)
    {
        LayoutViewConfigPage3c->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage3c", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage3c", "Coordinate Display", nullptr));
        dbu_units_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3c", "Default coordinate units are database units instead of micron", nullptr));
        abs_units_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3c", "By default, transformations are shown in top cell, not in local cell", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage3c: public Ui_LayoutViewConfigPage3c {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE3C_H
