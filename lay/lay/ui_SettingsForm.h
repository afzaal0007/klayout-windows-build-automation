/********************************************************************************
** Form generated from reading UI file 'SettingsForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout1;
    QSplitter *splitter;
    QTreeWidget *items_tree;
    QStackedWidget *pages_stack;
    QWidget *page;
    QWidget *page_2;
    QFrame *line;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QPushButton *reset_pb;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *apply_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName("SettingsForm");
        SettingsForm->resize(823, 633);
        vboxLayout = new QVBoxLayout(SettingsForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(SettingsForm);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        items_tree = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        items_tree->setHeaderItem(__qtreewidgetitem);
        items_tree->setObjectName("items_tree");
        items_tree->setRootIsDecorated(true);
        items_tree->setUniformRowHeights(true);
        splitter->addWidget(items_tree);
        pages_stack = new QStackedWidget(splitter);
        pages_stack->setObjectName("pages_stack");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pages_stack->sizePolicy().hasHeightForWidth());
        pages_stack->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName("page");
        pages_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pages_stack->addWidget(page_2);
        splitter->addWidget(pages_stack);

        vboxLayout1->addWidget(splitter);


        vboxLayout->addWidget(frame_2);

        line = new QFrame(SettingsForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame = new QFrame(SettingsForm);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        reset_pb = new QPushButton(frame);
        reset_pb->setObjectName("reset_pb");

        hboxLayout->addWidget(reset_pb);

        spacerItem = new QSpacerItem(251, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        apply_button = new QPushButton(frame);
        apply_button->setObjectName("apply_button");

        hboxLayout->addWidget(apply_button);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
        cancel_button->setSizePolicy(sizePolicy3);

        hboxLayout->addWidget(cancel_button);


        vboxLayout->addWidget(frame);


        retranslateUi(SettingsForm);

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QDialog *SettingsForm)
    {
        SettingsForm->setWindowTitle(QCoreApplication::translate("SettingsForm", "Setup", nullptr));
        reset_pb->setText(QCoreApplication::translate("SettingsForm", "Reset", nullptr));
        ok_button->setText(QCoreApplication::translate("SettingsForm", "OK", nullptr));
        apply_button->setText(QCoreApplication::translate("SettingsForm", "Apply", nullptr));
        cancel_button->setText(QCoreApplication::translate("SettingsForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
