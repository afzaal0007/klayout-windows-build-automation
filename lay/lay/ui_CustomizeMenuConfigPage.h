/********************************************************************************
** Form generated from reading UI file 'CustomizeMenuConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZEMENUCONFIGPAGE_H
#define UI_CUSTOMIZEMENUCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_CustomizeMenuConfigPage
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    lay::DecoratedLineEdit *binding_le;
    QLabel *label_2;
    QSpacerItem *spacerItem1;
    QPushButton *reset_pb;
    QTreeWidget *bindings_list;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    lay::DecoratedLineEdit *filter;

    void setupUi(QFrame *CustomizeMenuConfigPage)
    {
        if (CustomizeMenuConfigPage->objectName().isEmpty())
            CustomizeMenuConfigPage->setObjectName("CustomizeMenuConfigPage");
        CustomizeMenuConfigPage->resize(651, 495);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(CustomizeMenuConfigPage->sizePolicy().hasHeightForWidth());
        CustomizeMenuConfigPage->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CustomizeMenuConfigPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(CustomizeMenuConfigPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        label = new QLabel(frame);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        binding_le = new lay::DecoratedLineEdit(frame);
        binding_le->setObjectName("binding_le");

        vboxLayout->addWidget(binding_le);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        vboxLayout->addWidget(label_2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        reset_pb = new QPushButton(frame);
        reset_pb->setObjectName("reset_pb");

        vboxLayout->addWidget(reset_pb);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        bindings_list = new QTreeWidget(CustomizeMenuConfigPage);
        bindings_list->setObjectName("bindings_list");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bindings_list->sizePolicy().hasHeightForWidth());
        bindings_list->setSizePolicy(sizePolicy1);
        bindings_list->setRootIsDecorated(true);

        gridLayout->addWidget(bindings_list, 1, 0, 1, 1);

        frame_2 = new QFrame(CustomizeMenuConfigPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(328, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/find_16px@2x.png")));

        horizontalLayout->addWidget(label_3);

        filter = new lay::DecoratedLineEdit(frame_2);
        filter->setObjectName("filter");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filter->sizePolicy().hasHeightForWidth());
        filter->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(filter);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(CustomizeMenuConfigPage);

        QMetaObject::connectSlotsByName(CustomizeMenuConfigPage);
    } // setupUi

    void retranslateUi(QFrame *CustomizeMenuConfigPage)
    {
        CustomizeMenuConfigPage->setWindowTitle(QCoreApplication::translate("CustomizeMenuConfigPage", "Settings", nullptr));
        label->setText(QCoreApplication::translate("CustomizeMenuConfigPage", "Keyboard Shortcut", nullptr));
        label_2->setText(QCoreApplication::translate("CustomizeMenuConfigPage", "Delete text for\n"
"\"no key bound\".\n"
"\n"
"Key examples:\n"
" - \"Ctrl+A\"\n"
" - \"Shift+F2\"\n"
" - \"M\"\n"
"\n"
"For special keys:\n"
" - \"PgUp\"\n"
" - \"Left\"\n"
" - \"Enter\"\n"
" - \"Esc\" or \"Escape\"\n"
" - \"Ins\" or \"Insert\"\n"
" - \"Backspace\"\n"
"", nullptr));
        reset_pb->setText(QCoreApplication::translate("CustomizeMenuConfigPage", "Reset To Default", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = bindings_list->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("CustomizeMenuConfigPage", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("CustomizeMenuConfigPage", "Title", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("CustomizeMenuConfigPage", "Path", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomizeMenuConfigPage: public Ui_CustomizeMenuConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZEMENUCONFIGPAGE_H
