/********************************************************************************
** Form generated from reading UI file 'SaltGrainTemplateSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALTGRAINTEMPLATESELECTIONDIALOG_H
#define UI_SALTGRAINTEMPLATESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layLogViewerDialog.h"

QT_BEGIN_NAMESPACE

class Ui_SaltGrainTemplateSelectionDialog
{
public:
    QAction *actionNew;
    QAction *actionDelete;
    QAction *actionImport;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *salt_view;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name_edit;
    lay::AlertLogButton *name_alert;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaltGrainTemplateSelectionDialog)
    {
        if (SaltGrainTemplateSelectionDialog->objectName().isEmpty())
            SaltGrainTemplateSelectionDialog->setObjectName("SaltGrainTemplateSelectionDialog");
        SaltGrainTemplateSelectionDialog->resize(401, 499);
        actionNew = new QAction(SaltGrainTemplateSelectionDialog);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionDelete = new QAction(SaltGrainTemplateSelectionDialog);
        actionDelete->setObjectName("actionDelete");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon1);
        actionImport = new QAction(SaltGrainTemplateSelectionDialog);
        actionImport->setObjectName("actionImport");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/import_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon2);
        verticalLayout = new QVBoxLayout(SaltGrainTemplateSelectionDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(SaltGrainTemplateSelectionDialog);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        salt_view = new QListView(SaltGrainTemplateSelectionDialog);
        salt_view->setObjectName("salt_view");
        salt_view->setAlternatingRowColors(true);
        salt_view->setIconSize(QSize(64, 64));
        salt_view->setSelectionRectVisible(false);

        verticalLayout->addWidget(salt_view);

        label_4 = new QLabel(SaltGrainTemplateSelectionDialog);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setItalic(true);
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(SaltGrainTemplateSelectionDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        frame = new QFrame(SaltGrainTemplateSelectionDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        name_edit = new QLineEdit(frame);
        name_edit->setObjectName("name_edit");

        horizontalLayout->addWidget(name_edit);

        name_alert = new lay::AlertLogButton(frame);
        name_alert->setObjectName("name_alert");
        name_alert->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/warn_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        name_alert->setIcon(icon3);
        name_alert->setAutoRaise(true);

        horizontalLayout->addWidget(name_alert);


        verticalLayout->addWidget(frame);

        label_3 = new QLabel(SaltGrainTemplateSelectionDialog);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setBold(false);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        buttonBox = new QDialogButtonBox(SaltGrainTemplateSelectionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SaltGrainTemplateSelectionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SaltGrainTemplateSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaltGrainTemplateSelectionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaltGrainTemplateSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *SaltGrainTemplateSelectionDialog)
    {
        SaltGrainTemplateSelectionDialog->setWindowTitle(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Create Package", nullptr));
        actionNew->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "New package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Delete package", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Import", nullptr));
#if QT_CONFIG(tooltip)
        actionImport->setToolTip(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Import package", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Template", nullptr));
        label_4->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "(Pick a template with which to initialize your new package)", nullptr));
        label_2->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "Package Name", nullptr));
        name_alert->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("SaltGrainTemplateSelectionDialog", "(Choose a simple name composed of letters, digits and underscores. Use the notation \"group/package\" to create a package inside a group)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaltGrainTemplateSelectionDialog: public Ui_SaltGrainTemplateSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALTGRAINTEMPLATESELECTIONDIALOG_H
