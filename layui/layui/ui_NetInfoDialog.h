/********************************************************************************
** Form generated from reading UI file 'NetInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETINFODIALOG_H
#define UI_NETINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QFrame *frame_4;
    QHBoxLayout *_2;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QCheckBox *detailed_cb;
    QSpacerItem *spacerItem1;
    QTextBrowser *net_info_text;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetInfoDialog)
    {
        if (NetInfoDialog->objectName().isEmpty())
            NetInfoDialog->setObjectName("NetInfoDialog");
        NetInfoDialog->resize(490, 394);
        verticalLayout = new QVBoxLayout(NetInfoDialog);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(NetInfoDialog);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame_2);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        _2 = new QHBoxLayout(frame_4);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);

        _2->addWidget(label_4);

        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        detailed_cb = new QCheckBox(frame_4);
        detailed_cb->setObjectName("detailed_cb");

        _2->addWidget(detailed_cb);

        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem1);


        vboxLayout->addWidget(frame_4);

        net_info_text = new QTextBrowser(frame_2);
        net_info_text->setObjectName("net_info_text");
        net_info_text->setAutoFillBackground(false);
        net_info_text->setFrameShape(QFrame::StyledPanel);
        net_info_text->setLineWrapMode(QTextEdit::NoWrap);
        net_info_text->setLineWrapColumnOrWidth(0);
        net_info_text->setCursorWidth(1);

        vboxLayout->addWidget(net_info_text);


        verticalLayout->addWidget(frame_2);

        buttonBox = new QDialogButtonBox(NetInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NetInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetInfoDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(NetInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *NetInfoDialog)
    {
        NetInfoDialog->setWindowTitle(QCoreApplication::translate("NetInfoDialog", "Net Info", nullptr));
        label_4->setText(QCoreApplication::translate("NetInfoDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Net Info</span></p></body></html>", nullptr));
        detailed_cb->setText(QCoreApplication::translate("NetInfoDialog", "Detailed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetInfoDialog: public Ui_NetInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETINFODIALOG_H
