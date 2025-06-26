/********************************************************************************
** Form generated from reading UI file 'HelpAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPABOUTDIALOG_H
#define UI_HELPABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpAboutDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *main;
    QSpacerItem *spacerItem;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem3;
    QPushButton *cancel_button;

    void setupUi(QDialog *HelpAboutDialog)
    {
        if (HelpAboutDialog->objectName().isEmpty())
            HelpAboutDialog->setObjectName("HelpAboutDialog");
        HelpAboutDialog->resize(900, 500);
        gridLayout = new QGridLayout(HelpAboutDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(HelpAboutDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame_2);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 582, 395));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        main = new QLabel(scrollAreaWidgetContents);
        main->setObjectName("main");
        main->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(main);

        spacerItem = new QSpacerItem(391, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);


        gridLayout->addWidget(frame_2, 1, 1, 1, 1);

        frame_3 = new QFrame(HelpAboutDialog);
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
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));

        vboxLayout1->addWidget(label);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        gridLayout->addWidget(frame_3, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(481, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 0, 0, 1, 2);

        frame = new QFrame(HelpAboutDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(381, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);


        gridLayout->addWidget(frame, 2, 0, 1, 2);


        retranslateUi(HelpAboutDialog);
        QObject::connect(cancel_button, &QPushButton::clicked, HelpAboutDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(HelpAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpAboutDialog)
    {
        HelpAboutDialog->setWindowTitle(QCoreApplication::translate("HelpAboutDialog", "X", nullptr));
        main->setText(QCoreApplication::translate("HelpAboutDialog", "TextLabel", nullptr));
        label->setText(QString());
        cancel_button->setText(QCoreApplication::translate("HelpAboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpAboutDialog: public Ui_HelpAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPABOUTDIALOG_H
