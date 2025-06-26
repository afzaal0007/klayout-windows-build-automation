/********************************************************************************
** Form generated from reading UI file 'SaltManagerInstallConfirmationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALTMANAGERINSTALLCONFIRMATIONDIALOG_H
#define UI_SALTMANAGERINSTALLCONFIRMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaltManagerInstallConfirmationDialog
{
public:
    QAction *actionNew;
    QAction *actionDelete;
    QAction *actionImport;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *list;
    QFrame *confirm_panel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QFrame *log_panel;
    QVBoxLayout *verticalLayout_3;
    QListView *log_view;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *attn_frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *abort_button;
    QPushButton *close_button;

    void setupUi(QDialog *SaltManagerInstallConfirmationDialog)
    {
        if (SaltManagerInstallConfirmationDialog->objectName().isEmpty())
            SaltManagerInstallConfirmationDialog->setObjectName("SaltManagerInstallConfirmationDialog");
        SaltManagerInstallConfirmationDialog->resize(495, 478);
        actionNew = new QAction(SaltManagerInstallConfirmationDialog);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionDelete = new QAction(SaltManagerInstallConfirmationDialog);
        actionDelete->setObjectName("actionDelete");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon1);
        actionImport = new QAction(SaltManagerInstallConfirmationDialog);
        actionImport->setObjectName("actionImport");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/import_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon2);
        verticalLayout_4 = new QVBoxLayout(SaltManagerInstallConfirmationDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(SaltManagerInstallConfirmationDialog);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout_4->addWidget(label);

        splitter = new QSplitter(SaltManagerInstallConfirmationDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        list = new QTreeWidget(layoutWidget);
        list->setObjectName("list");
        list->setFocusPolicy(Qt::NoFocus);
        list->setRootIsDecorated(false);
        list->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(list);

        confirm_panel = new QFrame(layoutWidget);
        confirm_panel->setObjectName("confirm_panel");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(confirm_panel->sizePolicy().hasHeightForWidth());
        confirm_panel->setSizePolicy(sizePolicy);
        confirm_panel->setFrameShape(QFrame::NoFrame);
        confirm_panel->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(confirm_panel);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(confirm_panel);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        frame = new QFrame(confirm_panel);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        horizontalLayout_3->addWidget(ok_button);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");

        horizontalLayout_3->addWidget(cancel_button);


        verticalLayout_2->addWidget(frame);


        verticalLayout->addWidget(confirm_panel);

        splitter->addWidget(layoutWidget);
        log_panel = new QFrame(splitter);
        log_panel->setObjectName("log_panel");
        log_panel->setFrameShape(QFrame::NoFrame);
        log_panel->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(log_panel);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        log_view = new QListView(log_panel);
        log_view->setObjectName("log_view");
        log_view->setIconSize(QSize(16, 16));
        log_view->setProperty("isWrapping", QVariant(false));
        log_view->setResizeMode(QListView::Adjust);
        log_view->setUniformItemSizes(true);
        log_view->setWordWrap(false);

        verticalLayout_3->addWidget(log_view);

        frame_2 = new QFrame(log_panel);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        attn_frame = new QFrame(frame_2);
        attn_frame->setObjectName("attn_frame");
        attn_frame->setFrameShape(QFrame::NoFrame);
        attn_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(attn_frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(attn_frame);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/warn_16px@2x.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(attn_frame);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);


        horizontalLayout->addWidget(attn_frame);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        abort_button = new QPushButton(frame_3);
        abort_button->setObjectName("abort_button");

        horizontalLayout_4->addWidget(abort_button);

        close_button = new QPushButton(frame_3);
        close_button->setObjectName("close_button");

        horizontalLayout_4->addWidget(close_button);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_3->addWidget(frame_2);

        splitter->addWidget(log_panel);

        verticalLayout_4->addWidget(splitter);


        retranslateUi(SaltManagerInstallConfirmationDialog);

        QMetaObject::connectSlotsByName(SaltManagerInstallConfirmationDialog);
    } // setupUi

    void retranslateUi(QDialog *SaltManagerInstallConfirmationDialog)
    {
        SaltManagerInstallConfirmationDialog->setWindowTitle(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Ready for Installation", nullptr));
        actionNew->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "New package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Delete package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Import", nullptr));
#if QT_CONFIG(tooltip)
        actionImport->setToolTip(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Import package", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "The following packages are now ready for installation or update:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = list->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Download link", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Version", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Action", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Package", nullptr));
        label_2->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Press \"Ok\" to install or update these packages or \"Cancel\" to abort.", nullptr));
        ok_button->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Cancel", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "There are errors or warnings", nullptr));
        abort_button->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Abort", nullptr));
        close_button->setText(QCoreApplication::translate("SaltManagerInstallConfirmationDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaltManagerInstallConfirmationDialog: public Ui_SaltManagerInstallConfirmationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALTMANAGERINSTALLCONFIRMATIONDIALOG_H
