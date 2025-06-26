/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage8.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE8_H
#define UI_LAYOUTVIEWCONFIGPAGE8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage8
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *hier_copy_mode_cbx;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *LayoutViewConfigPage8)
    {
        if (LayoutViewConfigPage8->objectName().isEmpty())
            LayoutViewConfigPage8->setObjectName("LayoutViewConfigPage8");
        LayoutViewConfigPage8->resize(414, 46);
        horizontalLayout = new QHBoxLayout(LayoutViewConfigPage8);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LayoutViewConfigPage8);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        hier_copy_mode_cbx = new QComboBox(LayoutViewConfigPage8);
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->setObjectName("hier_copy_mode_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hier_copy_mode_cbx->sizePolicy().hasHeightForWidth());
        hier_copy_mode_cbx->setSizePolicy(sizePolicy);
        hier_copy_mode_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(hier_copy_mode_cbx);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(LayoutViewConfigPage8);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage8);
    } // setupUi

    void retranslateUi(QWidget *LayoutViewConfigPage8)
    {
        LayoutViewConfigPage8->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage8", "Form", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage8", "Cell copy mode", nullptr));
        hier_copy_mode_cbx->setItemText(0, QCoreApplication::translate("LayoutViewConfigPage8", "Shallow mode (cell only)", nullptr));
        hier_copy_mode_cbx->setItemText(1, QCoreApplication::translate("LayoutViewConfigPage8", "Deep mode (cell and subcells)", nullptr));
        hier_copy_mode_cbx->setItemText(2, QCoreApplication::translate("LayoutViewConfigPage8", "Ask", nullptr));

    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage8: public Ui_LayoutViewConfigPage8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE8_H
