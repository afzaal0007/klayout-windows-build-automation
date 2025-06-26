/********************************************************************************
** Form generated from reading UI file 'MarkerBrowserSnapshotView.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKERBROWSERSNAPSHOTVIEW_H
#define UI_MARKERBROWSERSNAPSHOTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "rdbInfoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MarkerBrowserSnapshotView
{
public:
    QVBoxLayout *vboxLayout;
    rdb::InfoWidget *content;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkerBrowserSnapshotView)
    {
        if (MarkerBrowserSnapshotView->objectName().isEmpty())
            MarkerBrowserSnapshotView->setObjectName("MarkerBrowserSnapshotView");
        MarkerBrowserSnapshotView->resize(786, 641);
        vboxLayout = new QVBoxLayout(MarkerBrowserSnapshotView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        content = new rdb::InfoWidget(MarkerBrowserSnapshotView);
        content->setObjectName("content");

        vboxLayout->addWidget(content);

        buttonBox = new QDialogButtonBox(MarkerBrowserSnapshotView);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(MarkerBrowserSnapshotView);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MarkerBrowserSnapshotView, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MarkerBrowserSnapshotView, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MarkerBrowserSnapshotView);
    } // setupUi

    void retranslateUi(QDialog *MarkerBrowserSnapshotView)
    {
        MarkerBrowserSnapshotView->setWindowTitle(QCoreApplication::translate("MarkerBrowserSnapshotView", "Snapshot View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkerBrowserSnapshotView: public Ui_MarkerBrowserSnapshotView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKERBROWSERSNAPSHOTVIEW_H
