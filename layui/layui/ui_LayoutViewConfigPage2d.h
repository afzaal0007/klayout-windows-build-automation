/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage2d.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE2D_H
#define UI_LAYOUTVIEWCONFIGPAGE2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage2d
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *tracking_cb;
    QGridLayout *gridLayout;
    lay::ColorButton *color_pb;
    QSpacerItem *spacerItem;
    QLabel *textLabel3_2;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *crosshair_cursor_cb;
    QGridLayout *gridLayout1;
    QLabel *textLabel3_3;
    QSpacerItem *spacer;
    lay::ColorButton *color_chc;
    QLabel *label_2;
    lay::LineStyleSelectionButton *line_style_chc;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QFrame *LayoutViewConfigPage2d)
    {
        if (LayoutViewConfigPage2d->objectName().isEmpty())
            LayoutViewConfigPage2d->setObjectName("LayoutViewConfigPage2d");
        LayoutViewConfigPage2d->resize(696, 420);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage2d);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tracking_cb = new QGroupBox(LayoutViewConfigPage2d);
        tracking_cb->setObjectName("tracking_cb");
        tracking_cb->setCheckable(true);
        gridLayout = new QGridLayout(tracking_cb);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        color_pb = new lay::ColorButton(tracking_cb);
        color_pb->setObjectName("color_pb");

        gridLayout->addWidget(color_pb, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(71, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        textLabel3_2 = new QLabel(tracking_cb);
        textLabel3_2->setObjectName("textLabel3_2");

        gridLayout->addWidget(textLabel3_2, 1, 0, 1, 1);

        label = new QLabel(tracking_cb);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        vboxLayout->addWidget(tracking_cb);

        frame = new QFrame(LayoutViewConfigPage2d);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        vboxLayout->addWidget(frame);

        crosshair_cursor_cb = new QGroupBox(LayoutViewConfigPage2d);
        crosshair_cursor_cb->setObjectName("crosshair_cursor_cb");
        crosshair_cursor_cb->setCheckable(true);
        gridLayout1 = new QGridLayout(crosshair_cursor_cb);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        textLabel3_3 = new QLabel(crosshair_cursor_cb);
        textLabel3_3->setObjectName("textLabel3_3");

        gridLayout1->addWidget(textLabel3_3, 0, 0, 1, 1);

        spacer = new QSpacerItem(508, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer, 0, 2, 1, 1);

        color_chc = new lay::ColorButton(crosshair_cursor_cb);
        color_chc->setObjectName("color_chc");

        gridLayout1->addWidget(color_chc, 0, 1, 1, 1);

        label_2 = new QLabel(crosshair_cursor_cb);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        line_style_chc = new lay::LineStyleSelectionButton(crosshair_cursor_cb);
        line_style_chc->setObjectName("line_style_chc");

        gridLayout1->addWidget(line_style_chc, 1, 1, 1, 1);


        vboxLayout->addWidget(crosshair_cursor_cb);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_2);


        retranslateUi(LayoutViewConfigPage2d);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage2d);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage2d)
    {
        LayoutViewConfigPage2d->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage2d", "Settings", nullptr));
        tracking_cb->setTitle(QCoreApplication::translate("LayoutViewConfigPage2d", "Mouse tracking", nullptr));
        color_pb->setText(QString());
        textLabel3_2->setText(QCoreApplication::translate("LayoutViewConfigPage2d", "Cursor color", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage2d", "With mouse tracking enabled, a cursor will appear which indicates the snapped mouse position and whether the mouse snaps to objects.", nullptr));
        crosshair_cursor_cb->setTitle(QCoreApplication::translate("LayoutViewConfigPage2d", "Crosshair cursor", nullptr));
        textLabel3_3->setText(QCoreApplication::translate("LayoutViewConfigPage2d", "Cursor color", nullptr));
        color_chc->setText(QString());
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage2d", "Line style", nullptr));
        line_style_chc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage2d: public Ui_LayoutViewConfigPage2d {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE2D_H
