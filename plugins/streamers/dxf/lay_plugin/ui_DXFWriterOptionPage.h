/********************************************************************************
** Form generated from reading UI file 'DXFWriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DXFWRITEROPTIONPAGE_H
#define UI_DXFWRITEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DXFWriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QComboBox *polygon_mode_cbx;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *DXFWriterOptionPage)
    {
        if (DXFWriterOptionPage->objectName().isEmpty())
            DXFWriterOptionPage->setObjectName("DXFWriterOptionPage");
        DXFWriterOptionPage->resize(637, 164);
        vboxLayout = new QVBoxLayout(DXFWriterOptionPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(DXFWriterOptionPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(371, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        polygon_mode_cbx = new QComboBox(groupBox);
        polygon_mode_cbx->addItem(QString());
        polygon_mode_cbx->addItem(QString());
        polygon_mode_cbx->addItem(QString());
        polygon_mode_cbx->addItem(QString());
        polygon_mode_cbx->addItem(QString());
        polygon_mode_cbx->setObjectName("polygon_mode_cbx");

        gridLayout->addWidget(polygon_mode_cbx, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(601, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(DXFWriterOptionPage);

        QMetaObject::connectSlotsByName(DXFWriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *DXFWriterOptionPage)
    {
        DXFWriterOptionPage->setWindowTitle(QCoreApplication::translate("DXFWriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DXFWriterOptionPage", "DXF Writer Options", nullptr));
        label->setText(QCoreApplication::translate("DXFWriterOptionPage", "Polygon handling", nullptr));
        polygon_mode_cbx->setItemText(0, QCoreApplication::translate("DXFWriterOptionPage", "Write POLYLINE entity", nullptr));
        polygon_mode_cbx->setItemText(1, QCoreApplication::translate("DXFWriterOptionPage", "Write LWPOLYLINE entity", nullptr));
        polygon_mode_cbx->setItemText(2, QCoreApplication::translate("DXFWriterOptionPage", "Decompose into SOLID entities", nullptr));
        polygon_mode_cbx->setItemText(3, QCoreApplication::translate("DXFWriterOptionPage", "Write HATCH entity", nullptr));
        polygon_mode_cbx->setItemText(4, QCoreApplication::translate("DXFWriterOptionPage", "Write LINE entity", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DXFWriterOptionPage: public Ui_DXFWriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DXFWRITEROPTIONPAGE_H
