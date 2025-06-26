/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage3b.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE3B_H
#define UI_LAYOUTVIEWCONFIGPAGE3B_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage3b
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QCheckBox *alt_mouse_wheel_mode_cbx;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QLineEdit *pan_distance_le;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QRadioButton *paste_dont_change_rb;
    QRadioButton *paste_pan_rb;
    QRadioButton *paste_zoom_rb;

    void setupUi(QFrame *LayoutViewConfigPage3b)
    {
        if (LayoutViewConfigPage3b->objectName().isEmpty())
            LayoutViewConfigPage3b->setObjectName("LayoutViewConfigPage3b");
        LayoutViewConfigPage3b->resize(632, 278);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage3b);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox_2 = new QGroupBox(LayoutViewConfigPage3b);
        groupBox_2->setObjectName("groupBox_2");
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        alt_mouse_wheel_mode_cbx = new QCheckBox(groupBox_2);
        alt_mouse_wheel_mode_cbx->setObjectName("alt_mouse_wheel_mode_cbx");

        vboxLayout1->addWidget(alt_mouse_wheel_mode_cbx);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        hboxLayout->addWidget(label_3);

        pan_distance_le = new QLineEdit(frame);
        pan_distance_le->setObjectName("pan_distance_le");

        hboxLayout->addWidget(pan_distance_le);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        hboxLayout->addWidget(label_4);


        vboxLayout1->addWidget(frame);


        vboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(LayoutViewConfigPage3b);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 0));
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        vboxLayout2->setObjectName("vboxLayout2");
        paste_dont_change_rb = new QRadioButton(groupBox);
        paste_dont_change_rb->setObjectName("paste_dont_change_rb");

        vboxLayout2->addWidget(paste_dont_change_rb);

        paste_pan_rb = new QRadioButton(groupBox);
        paste_pan_rb->setObjectName("paste_pan_rb");

        vboxLayout2->addWidget(paste_pan_rb);

        paste_zoom_rb = new QRadioButton(groupBox);
        paste_zoom_rb->setObjectName("paste_zoom_rb");

        vboxLayout2->addWidget(paste_zoom_rb);


        vboxLayout->addWidget(groupBox);


        retranslateUi(LayoutViewConfigPage3b);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage3b);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage3b)
    {
        LayoutViewConfigPage3b->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage3b", "Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LayoutViewConfigPage3b", "Zoom And Pan", nullptr));
        alt_mouse_wheel_mode_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Mouse wheel alternative mode (No button: vertical, Ctrl: zoom, Shift: horizontal)", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Pan distance", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Percent of screen width or height", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage3b", "On Paste", nullptr));
        paste_dont_change_rb->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Don't change view", nullptr));
        paste_pan_rb->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Pan to pasted objects", nullptr));
        paste_zoom_rb->setText(QCoreApplication::translate("LayoutViewConfigPage3b", "Zoom to pasted objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage3b: public Ui_LayoutViewConfigPage3b {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE3B_H
