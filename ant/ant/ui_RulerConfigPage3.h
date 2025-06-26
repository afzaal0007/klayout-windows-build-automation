/********************************************************************************
** Form generated from reading UI file 'RulerConfigPage3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULERCONFIGPAGE3_H
#define UI_RULERCONFIGPAGE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RulerConfigPage3
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *buttonGroup2;
    QGridLayout *gridLayout;
    QRadioButton *ruler_hor_rb;
    QRadioButton *ruler_any_angle_rb;
    QRadioButton *ruler_ortho_rb;
    QRadioButton *ruler_diag_rb;
    QRadioButton *ruler_vert_rb;

    void setupUi(QFrame *RulerConfigPage3)
    {
        if (RulerConfigPage3->objectName().isEmpty())
            RulerConfigPage3->setObjectName("RulerConfigPage3");
        RulerConfigPage3->resize(665, 103);
        vboxLayout = new QVBoxLayout(RulerConfigPage3);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        buttonGroup2 = new QGroupBox(RulerConfigPage3);
        buttonGroup2->setObjectName("buttonGroup2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonGroup2->sizePolicy().hasHeightForWidth());
        buttonGroup2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(buttonGroup2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        ruler_hor_rb = new QRadioButton(buttonGroup2);
        ruler_hor_rb->setObjectName("ruler_hor_rb");

        gridLayout->addWidget(ruler_hor_rb, 0, 2, 1, 1);

        ruler_any_angle_rb = new QRadioButton(buttonGroup2);
        ruler_any_angle_rb->setObjectName("ruler_any_angle_rb");

        gridLayout->addWidget(ruler_any_angle_rb, 0, 0, 1, 1);

        ruler_ortho_rb = new QRadioButton(buttonGroup2);
        ruler_ortho_rb->setObjectName("ruler_ortho_rb");

        gridLayout->addWidget(ruler_ortho_rb, 0, 1, 1, 1);

        ruler_diag_rb = new QRadioButton(buttonGroup2);
        ruler_diag_rb->setObjectName("ruler_diag_rb");

        gridLayout->addWidget(ruler_diag_rb, 1, 1, 1, 1);

        ruler_vert_rb = new QRadioButton(buttonGroup2);
        ruler_vert_rb->setObjectName("ruler_vert_rb");

        gridLayout->addWidget(ruler_vert_rb, 1, 2, 1, 1);


        vboxLayout->addWidget(buttonGroup2);

        QWidget::setTabOrder(ruler_any_angle_rb, ruler_ortho_rb);
        QWidget::setTabOrder(ruler_ortho_rb, ruler_diag_rb);
        QWidget::setTabOrder(ruler_diag_rb, ruler_hor_rb);
        QWidget::setTabOrder(ruler_hor_rb, ruler_vert_rb);

        retranslateUi(RulerConfigPage3);

        QMetaObject::connectSlotsByName(RulerConfigPage3);
    } // setupUi

    void retranslateUi(QFrame *RulerConfigPage3)
    {
        RulerConfigPage3->setWindowTitle(QCoreApplication::translate("RulerConfigPage3", "Settings", nullptr));
        buttonGroup2->setTitle(QCoreApplication::translate("RulerConfigPage3", " Angle constraint (unless disabled in template)", nullptr));
        ruler_hor_rb->setText(QCoreApplication::translate("RulerConfigPage3", "Hori&zontal only", nullptr));
        ruler_any_angle_rb->setText(QCoreApplication::translate("RulerConfigPage3", "Any angle", nullptr));
        ruler_ortho_rb->setText(QCoreApplication::translate("RulerConfigPage3", "Orthogonal", nullptr));
        ruler_diag_rb->setText(QCoreApplication::translate("RulerConfigPage3", "Diagonal", nullptr));
        ruler_vert_rb->setText(QCoreApplication::translate("RulerConfigPage3", "Vertical only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RulerConfigPage3: public Ui_RulerConfigPage3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULERCONFIGPAGE3_H
