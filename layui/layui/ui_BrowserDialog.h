/********************************************************************************
** Form generated from reading UI file 'BrowserDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSERDIALOG_H
#define UI_BROWSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layBrowserPanel.h"

QT_BEGIN_NAMESPACE

class Ui_BrowserDialog
{
public:
    QVBoxLayout *vboxLayout;
    lay::BrowserPanel *browser;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *close_pb;

    void setupUi(QDialog *BrowserDialog)
    {
        if (BrowserDialog->objectName().isEmpty())
            BrowserDialog->setObjectName("BrowserDialog");
        BrowserDialog->resize(574, 461);
        vboxLayout = new QVBoxLayout(BrowserDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        browser = new lay::BrowserPanel(BrowserDialog);
        browser->setObjectName("browser");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(browser->sizePolicy().hasHeightForWidth());
        browser->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(browser);

        frame = new QFrame(BrowserDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        close_pb = new QPushButton(frame);
        close_pb->setObjectName("close_pb");

        hboxLayout->addWidget(close_pb);


        vboxLayout->addWidget(frame);


        retranslateUi(BrowserDialog);
        QObject::connect(close_pb, &QPushButton::clicked, BrowserDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(BrowserDialog);
    } // setupUi

    void retranslateUi(QDialog *BrowserDialog)
    {
        BrowserDialog->setWindowTitle(QCoreApplication::translate("BrowserDialog", "Browser", nullptr));
        close_pb->setText(QCoreApplication::translate("BrowserDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowserDialog: public Ui_BrowserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSERDIALOG_H
