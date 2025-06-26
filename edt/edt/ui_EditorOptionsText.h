/********************************************************************************
** Form generated from reading UI file 'EditorOptionsText.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOROPTIONSTEXT_H
#define UI_EDITOROPTIONSTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorOptionsText
{
public:
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *_2;
    QLabel *label_9;
    QSpacerItem *spacerItem;
    QLabel *Text_size;
    QLabel *label_2;
    QComboBox *valign_cbx;
    QComboBox *halign_cbx;
    QLabel *label_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *text_le;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *size_le;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *spacer;

    void setupUi(QWidget *EditorOptionsText)
    {
        if (EditorOptionsText->objectName().isEmpty())
            EditorOptionsText->setObjectName("EditorOptionsText");
        EditorOptionsText->resize(542, 243);
        vboxLayout = new QVBoxLayout(EditorOptionsText);
        vboxLayout->setSpacing(2);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(EditorOptionsText);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 542, 243));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        _2 = new QGridLayout(frame);
        _2->setObjectName("_2");
        _2->setHorizontalSpacing(6);
        _2->setVerticalSpacing(2);
        _2->setContentsMargins(4, 4, 4, 4);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        _2->addWidget(label_9, 2, 3, 1, 1);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _2->addItem(spacerItem, 1, 0, 1, 5);

        Text_size = new QLabel(frame);
        Text_size->setObjectName("Text_size");

        _2->addWidget(Text_size, 4, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        _2->addWidget(label_2, 0, 0, 1, 1);

        valign_cbx = new QComboBox(frame);
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->setObjectName("valign_cbx");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(valign_cbx->sizePolicy().hasHeightForWidth());
        valign_cbx->setSizePolicy(sizePolicy1);

        _2->addWidget(valign_cbx, 2, 4, 1, 1);

        halign_cbx = new QComboBox(frame);
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->setObjectName("halign_cbx");
        sizePolicy1.setHeightForWidth(halign_cbx->sizePolicy().hasHeightForWidth());
        halign_cbx->setSizePolicy(sizePolicy1);

        _2->addWidget(halign_cbx, 2, 2, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        _2->addWidget(label_8, 2, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        _2->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 2, 5, 1, 1);

        text_le = new QLineEdit(frame);
        text_le->setObjectName("text_le");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(text_le->sizePolicy().hasHeightForWidth());
        text_le->setSizePolicy(sizePolicy2);

        _2->addWidget(text_le, 0, 1, 1, 5);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        size_le = new QLineEdit(frame_2);
        size_le->setObjectName("size_le");

        horizontalLayout->addWidget(size_le);

        label = new QLabel(frame_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        _2->addWidget(frame_2, 4, 1, 1, 5);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        _2->addWidget(label_3, 5, 1, 1, 5);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        spacer = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);


        retranslateUi(EditorOptionsText);

        QMetaObject::connectSlotsByName(EditorOptionsText);
    } // setupUi

    void retranslateUi(QWidget *EditorOptionsText)
    {
        EditorOptionsText->setWindowTitle(QCoreApplication::translate("EditorOptionsText", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("EditorOptionsText", "v =", nullptr));
        Text_size->setText(QCoreApplication::translate("EditorOptionsText", "Text size", nullptr));
        label_2->setText(QCoreApplication::translate("EditorOptionsText", "Text", nullptr));
        valign_cbx->setItemText(0, QCoreApplication::translate("EditorOptionsText", "(Default)", nullptr));
        valign_cbx->setItemText(1, QCoreApplication::translate("EditorOptionsText", "Top", nullptr));
        valign_cbx->setItemText(2, QCoreApplication::translate("EditorOptionsText", "Center", nullptr));
        valign_cbx->setItemText(3, QCoreApplication::translate("EditorOptionsText", "Bottom", nullptr));

        halign_cbx->setItemText(0, QCoreApplication::translate("EditorOptionsText", "(Default)", nullptr));
        halign_cbx->setItemText(1, QCoreApplication::translate("EditorOptionsText", "Left", nullptr));
        halign_cbx->setItemText(2, QCoreApplication::translate("EditorOptionsText", "Center", nullptr));
        halign_cbx->setItemText(3, QCoreApplication::translate("EditorOptionsText", "Right", nullptr));

        label_8->setText(QCoreApplication::translate("EditorOptionsText", "h =", nullptr));
        label_4->setText(QCoreApplication::translate("EditorOptionsText", "Alignment", nullptr));
        label->setText(QCoreApplication::translate("EditorOptionsText", "(empty for default)", nullptr));
        label_3->setText(QCoreApplication::translate("EditorOptionsText", "Hint: orientation, alignments and size cannot be saved to OASIS files. Enable a vector font and text scaling in the setup dialog to show text objects scaled and rotated.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorOptionsText: public Ui_EditorOptionsText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOROPTIONSTEXT_H
