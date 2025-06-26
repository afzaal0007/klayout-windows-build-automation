/********************************************************************************
** Form generated from reading UI file 'MarkerBrowserDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKERBROWSERDIALOG_H
#define UI_MARKERBROWSERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
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
#include "rdbMarkerBrowserPage.h"

QT_BEGIN_NAMESPACE

class Ui_MarkerBrowserDialog
{
public:
    QAction *open_action;
    QAction *saveas_action;
    QAction *reload_action;
    QAction *save_action;
    QAction *export_action;
    QAction *unload_action;
    QAction *unload_all_action;
    QAction *info_action;
    QAction *saveas_waiver_db_action;
    QAction *apply_waiver_db_action;
    QVBoxLayout *vboxLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QToolButton *file_menu;
    QLabel *label;
    QSpacerItem *spacerItem;
    QComboBox *rdb_cb;
    QLabel *label_3;
    QComboBox *layout_cb;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout;
    QStackedWidget *central_stack;
    QWidget *page;
    QVBoxLayout *vboxLayout1;
    rdb::MarkerBrowserPage *browser_frame;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    QPushButton *configure_pb;
    QSpacerItem *spacerItem1;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MarkerBrowserDialog)
    {
        if (MarkerBrowserDialog->objectName().isEmpty())
            MarkerBrowserDialog->setObjectName("MarkerBrowserDialog");
        MarkerBrowserDialog->resize(515, 553);
        open_action = new QAction(MarkerBrowserDialog);
        open_action->setObjectName("open_action");
        open_action->setMenuRole(QAction::NoRole);
        saveas_action = new QAction(MarkerBrowserDialog);
        saveas_action->setObjectName("saveas_action");
        saveas_action->setMenuRole(QAction::NoRole);
        reload_action = new QAction(MarkerBrowserDialog);
        reload_action->setObjectName("reload_action");
        reload_action->setMenuRole(QAction::NoRole);
        save_action = new QAction(MarkerBrowserDialog);
        save_action->setObjectName("save_action");
        save_action->setMenuRole(QAction::NoRole);
        export_action = new QAction(MarkerBrowserDialog);
        export_action->setObjectName("export_action");
        export_action->setMenuRole(QAction::NoRole);
        unload_action = new QAction(MarkerBrowserDialog);
        unload_action->setObjectName("unload_action");
        unload_action->setMenuRole(QAction::NoRole);
        unload_all_action = new QAction(MarkerBrowserDialog);
        unload_all_action->setObjectName("unload_all_action");
        unload_all_action->setMenuRole(QAction::NoRole);
        info_action = new QAction(MarkerBrowserDialog);
        info_action->setObjectName("info_action");
        info_action->setMenuRole(QAction::NoRole);
        saveas_waiver_db_action = new QAction(MarkerBrowserDialog);
        saveas_waiver_db_action->setObjectName("saveas_waiver_db_action");
        saveas_waiver_db_action->setMenuRole(QAction::NoRole);
        apply_waiver_db_action = new QAction(MarkerBrowserDialog);
        apply_waiver_db_action->setObjectName("apply_waiver_db_action");
        apply_waiver_db_action->setMenuRole(QAction::NoRole);
        vboxLayout = new QVBoxLayout(MarkerBrowserDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_3 = new QFrame(MarkerBrowserDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        file_menu = new QToolButton(frame_3);
        file_menu->setObjectName("file_menu");
        file_menu->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(file_menu, 0, 3, 1, 1);

        label = new QLabel(frame_3);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        rdb_cb = new QComboBox(frame_3);
        rdb_cb->setObjectName("rdb_cb");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rdb_cb->sizePolicy().hasHeightForWidth());
        rdb_cb->setSizePolicy(sizePolicy);
        rdb_cb->setMinimumSize(QSize(50, 0));
        rdb_cb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(rdb_cb, 0, 1, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        layout_cb = new QComboBox(frame_3);
        layout_cb->setObjectName("layout_cb");
        sizePolicy.setHeightForWidth(layout_cb->sizePolicy().hasHeightForWidth());
        layout_cb->setSizePolicy(sizePolicy);
        layout_cb->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(layout_cb, 1, 1, 1, 1);


        vboxLayout->addWidget(frame_3);

        frame_4 = new QFrame(MarkerBrowserDialog);
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
        browser_frame = new rdb::MarkerBrowserPage(page);
        browser_frame->setObjectName("browser_frame");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browser_frame->sizePolicy().hasHeightForWidth());
        browser_frame->setSizePolicy(sizePolicy1);
        browser_frame->setFrameShape(QFrame::NoFrame);
        browser_frame->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(browser_frame);

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

        line_2 = new QFrame(MarkerBrowserDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        frame_2 = new QFrame(MarkerBrowserDialog);
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

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");

        hboxLayout1->addWidget(pushButton_2);


        vboxLayout->addWidget(frame_2);

        QWidget::setTabOrder(rdb_cb, layout_cb);
        QWidget::setTabOrder(layout_cb, configure_pb);
        QWidget::setTabOrder(configure_pb, pushButton_2);

        retranslateUi(MarkerBrowserDialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, MarkerBrowserDialog, qOverload<>(&QDialog::accept));

        central_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MarkerBrowserDialog);
    } // setupUi

    void retranslateUi(QDialog *MarkerBrowserDialog)
    {
        MarkerBrowserDialog->setWindowTitle(QCoreApplication::translate("MarkerBrowserDialog", "Marker Database Browser", nullptr));
        open_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Open", nullptr));
#if QT_CONFIG(shortcut)
        open_action->setShortcut(QCoreApplication::translate("MarkerBrowserDialog", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveas_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Save As", nullptr));
        reload_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Reload", nullptr));
#if QT_CONFIG(shortcut)
        reload_action->setShortcut(QCoreApplication::translate("MarkerBrowserDialog", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        save_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Save", nullptr));
#if QT_CONFIG(shortcut)
        save_action->setShortcut(QCoreApplication::translate("MarkerBrowserDialog", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        export_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Export To Layout", nullptr));
        unload_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Unload", nullptr));
        unload_all_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Unload All", nullptr));
#if QT_CONFIG(tooltip)
        unload_all_action->setToolTip(QCoreApplication::translate("MarkerBrowserDialog", "Unload All", nullptr));
#endif // QT_CONFIG(tooltip)
        info_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Info", nullptr));
        saveas_waiver_db_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Save As Waiver DB", nullptr));
        apply_waiver_db_action->setText(QCoreApplication::translate("MarkerBrowserDialog", "Apply Waiver DB", nullptr));
        file_menu->setText(QCoreApplication::translate("MarkerBrowserDialog", "File ...  ", nullptr));
        label->setText(QCoreApplication::translate("MarkerBrowserDialog", "    ... on layout ", nullptr));
        label_3->setText(QCoreApplication::translate("MarkerBrowserDialog", "Database ", nullptr));
        label_2->setText(QCoreApplication::translate("MarkerBrowserDialog", "Choose \"Open\" from the \"File ...\" menu \n"
"to load a marker database", nullptr));
        configure_pb->setText(QCoreApplication::translate("MarkerBrowserDialog", "Configure", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MarkerBrowserDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkerBrowserDialog: public Ui_MarkerBrowserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKERBROWSERDIALOG_H
