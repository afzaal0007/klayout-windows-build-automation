/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage6a.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE6A_H
#define UI_LAYOUTVIEWCONFIGPAGE6A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage6a
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QPushButton *undo_pb;
    QPushButton *redo_pb;
    QSpacerItem *spacerItem1;
    QPushButton *reset_pb;
    QSpacerItem *spacerItem2;
    QFrame *frame5_2;
    QGridLayout *gridLayout1;
    QToolButton *cb_1;
    QToolButton *cb_2;
    QToolButton *cb_3;
    QToolButton *cb_4;

    void setupUi(QFrame *LayoutViewConfigPage6a)
    {
        if (LayoutViewConfigPage6a->objectName().isEmpty())
            LayoutViewConfigPage6a->setObjectName("LayoutViewConfigPage6a");
        LayoutViewConfigPage6a->resize(469, 253);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LayoutViewConfigPage6a->sizePolicy().hasHeightForWidth());
        LayoutViewConfigPage6a->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(LayoutViewConfigPage6a);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(451, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 4);

        frame = new QFrame(LayoutViewConfigPage6a);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName("vboxLayout");
        undo_pb = new QPushButton(frame);
        undo_pb->setObjectName("undo_pb");

        vboxLayout->addWidget(undo_pb);

        redo_pb = new QPushButton(frame);
        redo_pb->setObjectName("redo_pb");

        vboxLayout->addWidget(redo_pb);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        reset_pb = new QPushButton(frame);
        reset_pb->setObjectName("reset_pb");

        vboxLayout->addWidget(reset_pb);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

        spacerItem2 = new QSpacerItem(161, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 1, 1, 1);

        frame5_2 = new QFrame(LayoutViewConfigPage6a);
        frame5_2->setObjectName("frame5_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame5_2->sizePolicy().hasHeightForWidth());
        frame5_2->setSizePolicy(sizePolicy1);
        frame5_2->setFrameShape(QFrame::Panel);
        frame5_2->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(frame5_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        cb_1 = new QToolButton(frame5_2);
        cb_1->setObjectName("cb_1");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_1->sizePolicy().hasHeightForWidth());
        cb_1->setSizePolicy(sizePolicy2);
        cb_1->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_1, 0, 0, 1, 1);

        cb_2 = new QToolButton(frame5_2);
        cb_2->setObjectName("cb_2");
        cb_2->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_2, 0, 1, 1, 1);

        cb_3 = new QToolButton(frame5_2);
        cb_3->setObjectName("cb_3");
        cb_3->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_3, 0, 2, 1, 1);

        cb_4 = new QToolButton(frame5_2);
        cb_4->setObjectName("cb_4");
        cb_4->setMinimumSize(QSize(40, 0));

        gridLayout1->addWidget(cb_4, 0, 3, 1, 1);


        gridLayout->addWidget(frame5_2, 0, 0, 1, 1);

        QWidget::setTabOrder(cb_1, cb_2);
        QWidget::setTabOrder(cb_2, cb_3);
        QWidget::setTabOrder(cb_3, cb_4);
        QWidget::setTabOrder(cb_4, undo_pb);
        QWidget::setTabOrder(undo_pb, redo_pb);
        QWidget::setTabOrder(redo_pb, reset_pb);

        retranslateUi(LayoutViewConfigPage6a);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage6a);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage6a)
    {
        LayoutViewConfigPage6a->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage6a", "Edit Stipple Palette", nullptr));
        undo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "Undo", nullptr));
        redo_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "Redo", nullptr));
        reset_pb->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "Reset", nullptr));
        cb_1->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "...", nullptr));
        cb_2->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "...", nullptr));
        cb_3->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "...", nullptr));
        cb_4->setText(QCoreApplication::translate("LayoutViewConfigPage6a", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage6a: public Ui_LayoutViewConfigPage6a {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE6A_H
