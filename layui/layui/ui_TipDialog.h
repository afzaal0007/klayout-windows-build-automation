/********************************************************************************
** Form generated from reading UI file 'TipDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPDIALOG_H
#define UI_TIPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TipDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QLabel *tip_text;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *yes_button;
    QPushButton *no_button;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QPushButton *close_button;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem5;
    QCheckBox *dont_show_cbx;

    void setupUi(QDialog *TipDialog)
    {
        if (TipDialog->objectName().isEmpty())
            TipDialog->setObjectName("TipDialog");
        TipDialog->resize(549, 334);
        gridLayout = new QGridLayout(TipDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(TipDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame_2);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tip_text = new QLabel(frame_2);
        tip_text->setObjectName("tip_text");
        tip_text->setWordWrap(true);

        vboxLayout->addWidget(tip_text);

        spacerItem = new QSpacerItem(391, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addWidget(frame_2, 1, 1, 1, 1);

        frame = new QFrame(TipDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(381, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        yes_button = new QPushButton(frame);
        yes_button->setObjectName("yes_button");

        hboxLayout->addWidget(yes_button);

        no_button = new QPushButton(frame);
        no_button->setObjectName("no_button");

        hboxLayout->addWidget(no_button);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);

        close_button = new QPushButton(frame);
        close_button->setObjectName("close_button");

        hboxLayout->addWidget(close_button);


        gridLayout->addWidget(frame, 4, 0, 1, 2);

        frame_3 = new QFrame(TipDialog);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/bulb@2x.png")));
        label->setScaledContents(false);

        vboxLayout1->addWidget(label);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);


        gridLayout->addWidget(frame_3, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(531, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem3, 3, 0, 1, 2);

        spacerItem4 = new QSpacerItem(481, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem4, 0, 0, 1, 2);

        frame_4 = new QFrame(TipDialog);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_4);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);

        dont_show_cbx = new QCheckBox(frame_4);
        dont_show_cbx->setObjectName("dont_show_cbx");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dont_show_cbx->sizePolicy().hasHeightForWidth());
        dont_show_cbx->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(dont_show_cbx);


        gridLayout->addWidget(frame_4, 2, 0, 1, 2);


        retranslateUi(TipDialog);
        QObject::connect(close_button, &QPushButton::clicked, TipDialog, qOverload<>(&QDialog::accept));

        yes_button->setDefault(true);
        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(TipDialog);
    } // setupUi

    void retranslateUi(QDialog *TipDialog)
    {
        TipDialog->setWindowTitle(QCoreApplication::translate("TipDialog", "Tip", nullptr));
        tip_text->setText(QCoreApplication::translate("TipDialog", "TextLabel", nullptr));
        yes_button->setText(QCoreApplication::translate("TipDialog", "Yes", nullptr));
        no_button->setText(QCoreApplication::translate("TipDialog", "No", nullptr));
        ok_button->setText(QCoreApplication::translate("TipDialog", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("TipDialog", "Cancel", nullptr));
        close_button->setText(QCoreApplication::translate("TipDialog", "Close", nullptr));
        label->setText(QString());
        dont_show_cbx->setText(QCoreApplication::translate("TipDialog", "Don't show this window again (use \"Help/Show All Tips\" to show it again)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TipDialog: public Ui_TipDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPDIALOG_H
