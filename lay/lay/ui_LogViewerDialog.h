/********************************************************************************
** Form generated from reading UI file 'LogViewerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGVIEWERDIALOG_H
#define UI_LOGVIEWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LogViewerDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *verbosity_cbx;
    QPushButton *separator_pb;
    QPushButton *copy_pb;
    QPushButton *clear_pb;
    QLabel *verbosity_label;
    QListView *log_view;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *attn_frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogViewerDialog)
    {
        if (LogViewerDialog->objectName().isEmpty())
            LogViewerDialog->setObjectName("LogViewerDialog");
        LogViewerDialog->resize(516, 287);
        gridLayout = new QGridLayout(LogViewerDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        verbosity_cbx = new QComboBox(LogViewerDialog);
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->addItem(QString());
        verbosity_cbx->setObjectName("verbosity_cbx");

        gridLayout->addWidget(verbosity_cbx, 0, 1, 1, 1);

        separator_pb = new QPushButton(LogViewerDialog);
        separator_pb->setObjectName("separator_pb");

        gridLayout->addWidget(separator_pb, 0, 4, 1, 1);

        copy_pb = new QPushButton(LogViewerDialog);
        copy_pb->setObjectName("copy_pb");

        gridLayout->addWidget(copy_pb, 0, 5, 1, 1);

        clear_pb = new QPushButton(LogViewerDialog);
        clear_pb->setObjectName("clear_pb");

        gridLayout->addWidget(clear_pb, 0, 3, 1, 1);

        verbosity_label = new QLabel(LogViewerDialog);
        verbosity_label->setObjectName("verbosity_label");

        gridLayout->addWidget(verbosity_label, 0, 0, 1, 1);

        log_view = new QListView(LogViewerDialog);
        log_view->setObjectName("log_view");
        log_view->setIconSize(QSize(16, 16));
        log_view->setProperty("isWrapping", QVariant(false));
        log_view->setResizeMode(QListView::Adjust);
        log_view->setUniformItemSizes(true);
        log_view->setWordWrap(false);

        gridLayout->addWidget(log_view, 1, 0, 1, 6);

        spacerItem = new QSpacerItem(101, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        frame = new QFrame(LogViewerDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        attn_frame = new QFrame(frame);
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

        label_2 = new QLabel(attn_frame);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(attn_frame);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addWidget(frame, 2, 0, 1, 6);

        QWidget::setTabOrder(verbosity_cbx, clear_pb);
        QWidget::setTabOrder(clear_pb, separator_pb);
        QWidget::setTabOrder(separator_pb, copy_pb);
        QWidget::setTabOrder(copy_pb, log_view);

        retranslateUi(LogViewerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogViewerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogViewerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogViewerDialog);
    } // setupUi

    void retranslateUi(QDialog *LogViewerDialog)
    {
        LogViewerDialog->setWindowTitle(QCoreApplication::translate("LogViewerDialog", "Log Viewer", nullptr));
        verbosity_cbx->setItemText(0, QCoreApplication::translate("LogViewerDialog", "No warnings, no errors", nullptr));
        verbosity_cbx->setItemText(1, QCoreApplication::translate("LogViewerDialog", "No warnings", nullptr));
        verbosity_cbx->setItemText(2, QCoreApplication::translate("LogViewerDialog", "Silent", nullptr));
        verbosity_cbx->setItemText(3, QCoreApplication::translate("LogViewerDialog", "Information", nullptr));
        verbosity_cbx->setItemText(4, QCoreApplication::translate("LogViewerDialog", "Details", nullptr));
        verbosity_cbx->setItemText(5, QCoreApplication::translate("LogViewerDialog", "Verbose", nullptr));
        verbosity_cbx->setItemText(6, QCoreApplication::translate("LogViewerDialog", "Noisy", nullptr));

        separator_pb->setText(QCoreApplication::translate("LogViewerDialog", "Separator", nullptr));
        copy_pb->setText(QCoreApplication::translate("LogViewerDialog", "Copy", nullptr));
        clear_pb->setText(QCoreApplication::translate("LogViewerDialog", "Clear", nullptr));
        verbosity_label->setText(QCoreApplication::translate("LogViewerDialog", "Verbosity", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("LogViewerDialog", "There are errors or warnings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogViewerDialog: public Ui_LogViewerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGVIEWERDIALOG_H
