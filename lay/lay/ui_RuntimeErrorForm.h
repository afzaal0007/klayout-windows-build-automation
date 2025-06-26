/********************************************************************************
** Form generated from reading UI file 'RuntimeErrorForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNTIMEERRORFORM_H
#define UI_RUNTIMEERRORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RuntimeErrorForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *msg_label;
    QSpacerItem *spacerItem2;
    QLabel *icon_label;
    QSpacerItem *spacerItem3;
    QFrame *details_frame;
    QVBoxLayout *vboxLayout1;
    QTextBrowser *details_text;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QPushButton *details_pb;
    QSpacerItem *spacerItem4;
    QPushButton *ok_button;

    void setupUi(QDialog *RuntimeErrorForm)
    {
        if (RuntimeErrorForm->objectName().isEmpty())
            RuntimeErrorForm->setObjectName("RuntimeErrorForm");
        RuntimeErrorForm->resize(496, 297);
        vboxLayout = new QVBoxLayout(RuntimeErrorForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(RuntimeErrorForm);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(411, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 2, 3, 1, 1);

        spacerItem1 = new QSpacerItem(411, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        msg_label = new QLabel(frame_2);
        msg_label->setObjectName("msg_label");

        gridLayout->addWidget(msg_label, 1, 3, 1, 1);

        spacerItem2 = new QSpacerItem(20, 71, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 2, 3, 1);

        icon_label = new QLabel(frame_2);
        icon_label->setObjectName("icon_label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon_label->sizePolicy().hasHeightForWidth());
        icon_label->setSizePolicy(sizePolicy);
        icon_label->setFrameShape(QFrame::NoFrame);
        icon_label->setLineWidth(0);

        gridLayout->addWidget(icon_label, 0, 1, 3, 1);

        spacerItem3 = new QSpacerItem(20, 71, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 0, 3, 1);


        vboxLayout->addWidget(frame_2);

        details_frame = new QFrame(RuntimeErrorForm);
        details_frame->setObjectName("details_frame");
        details_frame->setFrameShape(QFrame::NoFrame);
        details_frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(details_frame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        details_text = new QTextBrowser(details_frame);
        details_text->setObjectName("details_text");
        details_text->setLineWrapMode(QTextEdit::NoWrap);

        vboxLayout1->addWidget(details_text);


        vboxLayout->addWidget(details_frame);

        frame = new QFrame(RuntimeErrorForm);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        details_pb = new QPushButton(frame);
        details_pb->setObjectName("details_pb");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(details_pb->sizePolicy().hasHeightForWidth());
        details_pb->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(details_pb);

        spacerItem4 = new QSpacerItem(341, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);


        vboxLayout->addWidget(frame);


        retranslateUi(RuntimeErrorForm);
        QObject::connect(ok_button, &QPushButton::clicked, RuntimeErrorForm, qOverload<>(&QDialog::accept));

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(RuntimeErrorForm);
    } // setupUi

    void retranslateUi(QDialog *RuntimeErrorForm)
    {
        RuntimeErrorForm->setWindowTitle(QCoreApplication::translate("RuntimeErrorForm", "Script Error", nullptr));
        msg_label->setText(QCoreApplication::translate("RuntimeErrorForm", "TextLabel", nullptr));
        icon_label->setText(QCoreApplication::translate("RuntimeErrorForm", "X", nullptr));
        details_text->setHtml(QCoreApplication::translate("RuntimeErrorForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Liberation Mono';\"><br /></p></body></html>", nullptr));
        details_pb->setText(QCoreApplication::translate("RuntimeErrorForm", " Details >> ", nullptr));
        ok_button->setText(QCoreApplication::translate("RuntimeErrorForm", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RuntimeErrorForm: public Ui_RuntimeErrorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNTIMEERRORFORM_H
