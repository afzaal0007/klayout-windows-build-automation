/********************************************************************************
** Form generated from reading UI file 'ConfigurationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *centralFrame;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName("ConfigurationDialog");
        ConfigurationDialog->resize(417, 79);
        vboxLayout = new QVBoxLayout(ConfigurationDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName("vboxLayout");
        centralFrame = new QFrame(ConfigurationDialog);
        centralFrame->setObjectName("centralFrame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(centralFrame->sizePolicy().hasHeightForWidth());
        centralFrame->setSizePolicy(sizePolicy);
        centralFrame->setFrameShape(QFrame::NoFrame);
        centralFrame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(centralFrame);

        frame = new QFrame(ConfigurationDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(8, 8, 8, 8);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(251, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
        cancel_button->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(cancel_button);


        vboxLayout->addWidget(frame);


        retranslateUi(ConfigurationDialog);

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QCoreApplication::translate("ConfigurationDialog", "Configuration", nullptr));
        ok_button->setText(QCoreApplication::translate("ConfigurationDialog", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("ConfigurationDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
