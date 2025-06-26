/********************************************************************************
** Form generated from reading UI file 'RulerConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULERCONFIGPAGE_H
#define UI_RULERCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RulerConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *ruler_grid_snap_cbx;
    QCheckBox *ruler_obj_snap_cbx;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_2;
    QLineEdit *ruler_snap_range_edit;
    QLabel *textLabel2;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QFrame *RulerConfigPage)
    {
        if (RulerConfigPage->objectName().isEmpty())
            RulerConfigPage->setObjectName("RulerConfigPage");
        RulerConfigPage->resize(652, 191);
        vboxLayout = new QVBoxLayout(RulerConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(RulerConfigPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        ruler_grid_snap_cbx = new QCheckBox(groupBox);
        ruler_grid_snap_cbx->setObjectName("ruler_grid_snap_cbx");

        gridLayout->addWidget(ruler_grid_snap_cbx, 0, 0, 1, 1);

        ruler_obj_snap_cbx = new QCheckBox(groupBox);
        ruler_obj_snap_cbx->setObjectName("ruler_obj_snap_cbx");

        gridLayout->addWidget(ruler_obj_snap_cbx, 1, 0, 1, 1);

        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1_2 = new QLabel(frame);
        textLabel1_2->setObjectName("textLabel1_2");

        hboxLayout->addWidget(textLabel1_2);

        ruler_snap_range_edit = new QLineEdit(frame);
        ruler_snap_range_edit->setObjectName("ruler_snap_range_edit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ruler_snap_range_edit->sizePolicy().hasHeightForWidth());
        ruler_snap_range_edit->setSizePolicy(sizePolicy1);
        ruler_snap_range_edit->setMinimumSize(QSize(0, 0));

        hboxLayout->addWidget(ruler_snap_range_edit);

        textLabel2 = new QLabel(frame);
        textLabel2->setObjectName("textLabel2");
        sizePolicy.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(textLabel2);

        spacerItem = new QSpacerItem(111, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addWidget(frame, 3, 0, 1, 1);

        spacerItem1 = new QSpacerItem(597, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 1);


        vboxLayout->addWidget(groupBox);


        retranslateUi(RulerConfigPage);

        QMetaObject::connectSlotsByName(RulerConfigPage);
    } // setupUi

    void retranslateUi(QFrame *RulerConfigPage)
    {
        RulerConfigPage->setWindowTitle(QCoreApplication::translate("RulerConfigPage", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RulerConfigPage", "Snapping", nullptr));
#if QT_CONFIG(tooltip)
        ruler_grid_snap_cbx->setToolTip(QCoreApplication::translate("RulerConfigPage", "If checked, all coordinates are snapped to the global grid", nullptr));
#endif // QT_CONFIG(tooltip)
        ruler_grid_snap_cbx->setText(QCoreApplication::translate("RulerConfigPage", "Snap to grid", nullptr));
#if QT_CONFIG(tooltip)
        ruler_obj_snap_cbx->setToolTip(QCoreApplication::translate("RulerConfigPage", "If checked, all positions are snapped to edges and vertices in the vicinity unless this feature is disabled in the template", nullptr));
#endif // QT_CONFIG(tooltip)
        ruler_obj_snap_cbx->setText(QCoreApplication::translate("RulerConfigPage", "Snap to edge / vertex (unless disabled in template)", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("RulerConfigPage", "Snap range", nullptr));
#if QT_CONFIG(tooltip)
        ruler_snap_range_edit->setToolTip(QCoreApplication::translate("RulerConfigPage", "The range around the current cursor location which is searched for edges or vertices to snap to", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel2->setText(QCoreApplication::translate("RulerConfigPage", "pixel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RulerConfigPage: public Ui_RulerConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULERCONFIGPAGE_H
