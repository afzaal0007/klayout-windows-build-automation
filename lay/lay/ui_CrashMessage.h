/********************************************************************************
** Form generated from reading UI file 'CrashMessage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHMESSAGE_H
#define UI_CRASHMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CrashMessage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QPlainTextEdit *text;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CrashMessage)
    {
        if (CrashMessage->objectName().isEmpty())
            CrashMessage->setObjectName("CrashMessage");
        CrashMessage->resize(610, 490);
        verticalLayout = new QVBoxLayout(CrashMessage);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(CrashMessage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/bug@2x.png")));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 2, 1);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(CrashMessage);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        text = new QPlainTextEdit(CrashMessage);
        text->setObjectName("text");
        text->setLineWrapMode(QPlainTextEdit::NoWrap);
        text->setReadOnly(true);

        verticalLayout->addWidget(text);

        buttonBox = new QDialogButtonBox(CrashMessage);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CrashMessage);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CrashMessage, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CrashMessage, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CrashMessage);
    } // setupUi

    void retranslateUi(QDialog *CrashMessage)
    {
        CrashMessage->setWindowTitle(QCoreApplication::translate("CrashMessage", "Application Crashed", nullptr));
        label->setText(QCoreApplication::translate("CrashMessage", "Sorry for that - the program encountered an unexpected condition. This is likely due to a bug. Details are given below. If you file a bug report, please provide a copy of these details.", nullptr));
        label_2->setText(QCoreApplication::translate("CrashMessage", "If available you can use the \"Ok\" button below to continue operation. Please note that the application may be unstable. Please save your work and exit as soon as possible.", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("CrashMessage", "Problem details:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrashMessage: public Ui_CrashMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHMESSAGE_H
