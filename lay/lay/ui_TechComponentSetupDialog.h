/********************************************************************************
** Form generated from reading UI file 'TechComponentSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHCOMPONENTSETUPDIALOG_H
#define UI_TECHCOMPONENTSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TechComponentSetupDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *headline_lbl;
    QFrame *content_frame;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TechComponentSetupDialog)
    {
        if (TechComponentSetupDialog->objectName().isEmpty())
            TechComponentSetupDialog->setObjectName("TechComponentSetupDialog");
        TechComponentSetupDialog->resize(758, 729);
        vboxLayout = new QVBoxLayout(TechComponentSetupDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        headline_lbl = new QLabel(TechComponentSetupDialog);
        headline_lbl->setObjectName("headline_lbl");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headline_lbl->sizePolicy().hasHeightForWidth());
        headline_lbl->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        headline_lbl->setFont(font);

        vboxLayout->addWidget(headline_lbl);

        content_frame = new QFrame(TechComponentSetupDialog);
        content_frame->setObjectName("content_frame");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(content_frame->sizePolicy().hasHeightForWidth());
        content_frame->setSizePolicy(sizePolicy1);
        content_frame->setFrameShape(QFrame::NoFrame);
        content_frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(content_frame);

        line = new QFrame(TechComponentSetupDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(TechComponentSetupDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(TechComponentSetupDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TechComponentSetupDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TechComponentSetupDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TechComponentSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *TechComponentSetupDialog)
    {
        TechComponentSetupDialog->setWindowTitle(QCoreApplication::translate("TechComponentSetupDialog", "Dialog", nullptr));
        headline_lbl->setText(QCoreApplication::translate("TechComponentSetupDialog", "Technology Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechComponentSetupDialog: public Ui_TechComponentSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHCOMPONENTSETUPDIALOG_H
