/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage3a.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE3A_H
#define UI_LAYOUTVIEWCONFIGPAGE3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage3a
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *buttonGroup6;
    QGridLayout *gridLayout;
    QCheckBox *fit_new_cell_cbx;
    QCheckBox *full_hier_new_cell_cbx;
    QCheckBox *clear_ruler_new_cell_cbx;

    void setupUi(QFrame *LayoutViewConfigPage3a)
    {
        if (LayoutViewConfigPage3a->objectName().isEmpty())
            LayoutViewConfigPage3a->setObjectName("LayoutViewConfigPage3a");
        LayoutViewConfigPage3a->resize(556, 152);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage3a);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        buttonGroup6 = new QGroupBox(LayoutViewConfigPage3a);
        buttonGroup6->setObjectName("buttonGroup6");
        gridLayout = new QGridLayout(buttonGroup6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        fit_new_cell_cbx = new QCheckBox(buttonGroup6);
        fit_new_cell_cbx->setObjectName("fit_new_cell_cbx");

        gridLayout->addWidget(fit_new_cell_cbx, 0, 0, 1, 1);

        full_hier_new_cell_cbx = new QCheckBox(buttonGroup6);
        full_hier_new_cell_cbx->setObjectName("full_hier_new_cell_cbx");

        gridLayout->addWidget(full_hier_new_cell_cbx, 1, 0, 1, 1);

        clear_ruler_new_cell_cbx = new QCheckBox(buttonGroup6);
        clear_ruler_new_cell_cbx->setObjectName("clear_ruler_new_cell_cbx");

        gridLayout->addWidget(clear_ruler_new_cell_cbx, 2, 0, 1, 1);


        vboxLayout->addWidget(buttonGroup6);

        QWidget::setTabOrder(fit_new_cell_cbx, full_hier_new_cell_cbx);
        QWidget::setTabOrder(full_hier_new_cell_cbx, clear_ruler_new_cell_cbx);

        retranslateUi(LayoutViewConfigPage3a);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage3a);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage3a)
    {
        LayoutViewConfigPage3a->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage3a", "Settings", nullptr));
        buttonGroup6->setTitle(QCoreApplication::translate("LayoutViewConfigPage3a", "On Cell Change", nullptr));
        fit_new_cell_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3a", "Fit window to cell when cell is changed", nullptr));
        full_hier_new_cell_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3a", "Select all hierarchy levels", nullptr));
        clear_ruler_new_cell_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3a", "Clear all rulers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage3a: public Ui_LayoutViewConfigPage3a {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE3A_H
