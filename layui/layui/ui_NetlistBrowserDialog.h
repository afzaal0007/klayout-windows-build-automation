/********************************************************************************
** Form generated from reading UI file 'NetlistBrowserDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETLISTBROWSERDIALOG_H
#define UI_NETLISTBROWSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layNetlistBrowserPage.h"

QT_BEGIN_NAMESPACE

class Ui_NetlistBrowserDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QComboBox *l2ndb_cb;
    QLabel *label_3;
    QLabel *label;
    QComboBox *layout_cb;
    QToolButton *file_menu;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout;
    QStackedWidget *central_stack;
    QWidget *page;
    QVBoxLayout *vboxLayout1;
    lay::NetlistBrowserPage *browser_page;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    QPushButton *configure_pb;
    QPushButton *probe_pb;
    QCheckBox *sticky_cbx;
    QSpacerItem *spacerItem2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NetlistBrowserDialog)
    {
        if (NetlistBrowserDialog->objectName().isEmpty())
            NetlistBrowserDialog->setObjectName("NetlistBrowserDialog");
        NetlistBrowserDialog->resize(515, 553);
        vboxLayout = new QVBoxLayout(NetlistBrowserDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_3 = new QFrame(NetlistBrowserDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        l2ndb_cb = new QComboBox(frame_3);
        l2ndb_cb->setObjectName("l2ndb_cb");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l2ndb_cb->sizePolicy().hasHeightForWidth());
        l2ndb_cb->setSizePolicy(sizePolicy);
        l2ndb_cb->setMinimumSize(QSize(50, 0));
        l2ndb_cb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(l2ndb_cb, 0, 1, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(frame_3);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        layout_cb = new QComboBox(frame_3);
        layout_cb->setObjectName("layout_cb");
        sizePolicy.setHeightForWidth(layout_cb->sizePolicy().hasHeightForWidth());
        layout_cb->setSizePolicy(sizePolicy);
        layout_cb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layout_cb, 1, 1, 1, 1);

        file_menu = new QToolButton(frame_3);
        file_menu->setObjectName("file_menu");
        file_menu->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(file_menu, 0, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 4);


        vboxLayout->addWidget(frame_3);

        line = new QFrame(NetlistBrowserDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame_4 = new QFrame(NetlistBrowserDialog);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_4);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        central_stack = new QStackedWidget(frame_4);
        central_stack->setObjectName("central_stack");
        page = new QWidget();
        page->setObjectName("page");
        vboxLayout1 = new QVBoxLayout(page);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        browser_page = new lay::NetlistBrowserPage(page);
        browser_page->setObjectName("browser_page");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browser_page->sizePolicy().hasHeightForWidth());
        browser_page->setSizePolicy(sizePolicy1);
        browser_page->setFrameShape(QFrame::NoFrame);
        browser_page->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(browser_page);

        central_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        vboxLayout2->addWidget(label_2);

        central_stack->addWidget(page_2);

        hboxLayout->addWidget(central_stack);


        vboxLayout->addWidget(frame_4);

        line_2 = new QFrame(NetlistBrowserDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        frame_2 = new QFrame(NetlistBrowserDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        configure_pb = new QPushButton(frame_2);
        configure_pb->setObjectName("configure_pb");

        hboxLayout1->addWidget(configure_pb);

        probe_pb = new QPushButton(frame_2);
        probe_pb->setObjectName("probe_pb");

        hboxLayout1->addWidget(probe_pb);

        sticky_cbx = new QCheckBox(frame_2);
        sticky_cbx->setObjectName("sticky_cbx");

        hboxLayout1->addWidget(sticky_cbx);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");

        hboxLayout1->addWidget(pushButton_2);


        vboxLayout->addWidget(frame_2);

        QWidget::setTabOrder(l2ndb_cb, layout_cb);
        QWidget::setTabOrder(layout_cb, configure_pb);
        QWidget::setTabOrder(configure_pb, pushButton_2);

        retranslateUi(NetlistBrowserDialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, NetlistBrowserDialog, qOverload<>(&QDialog::accept));

        central_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NetlistBrowserDialog);
    } // setupUi

    void retranslateUi(QDialog *NetlistBrowserDialog)
    {
        NetlistBrowserDialog->setWindowTitle(QCoreApplication::translate("NetlistBrowserDialog", "Netlist Database Browser", nullptr));
        label_3->setText(QCoreApplication::translate("NetlistBrowserDialog", "Netlist", nullptr));
        label->setText(QCoreApplication::translate("NetlistBrowserDialog", "    ... on layout ", nullptr));
        file_menu->setText(QCoreApplication::translate("NetlistBrowserDialog", "File ...  ", nullptr));
        label_2->setText(QCoreApplication::translate("NetlistBrowserDialog", "Choose \"Open\" from the \"File ...\" menu \n"
"to load a netlist or a netlist/LVS database", nullptr));
        configure_pb->setText(QCoreApplication::translate("NetlistBrowserDialog", "Configure", nullptr));
#if QT_CONFIG(tooltip)
        probe_pb->setToolTip(QCoreApplication::translate("NetlistBrowserDialog", "Select a new by clicking on a shape", nullptr));
#endif // QT_CONFIG(tooltip)
        probe_pb->setText(QCoreApplication::translate("NetlistBrowserDialog", "Probe Net", nullptr));
        sticky_cbx->setText(QCoreApplication::translate("NetlistBrowserDialog", "Lock", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NetlistBrowserDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetlistBrowserDialog: public Ui_NetlistBrowserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLISTBROWSERDIALOG_H
