/********************************************************************************
** Form generated from reading UI file 'EditorOptionsPath.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOROPTIONSPATH_H
#define UI_EDITOROPTIONSPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorOptionsPath
{
public:
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QHBoxLayout *_2;
    QLabel *label_2;
    QLineEdit *width_le;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *_3;
    QLabel *label_8;
    QLineEdit *start_ext_le;
    QLabel *label_5;
    QLineEdit *end_ext_le;
    QComboBox *type_cb;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacer;

    void setupUi(QWidget *EditorOptionsPath)
    {
        if (EditorOptionsPath->objectName().isEmpty())
            EditorOptionsPath->setObjectName("EditorOptionsPath");
        EditorOptionsPath->resize(357, 289);
        vboxLayout = new QVBoxLayout(EditorOptionsPath);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(EditorOptionsPath);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 357, 289));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        _2 = new QHBoxLayout(frame_2);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        _2->addWidget(label_2);

        width_le = new QLineEdit(frame_2);
        width_le->setObjectName("width_le");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(width_le->sizePolicy().hasHeightForWidth());
        width_le->setSizePolicy(sizePolicy);

        _2->addWidget(width_le);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        _2->addWidget(label_3);

        spacerItem = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        _3 = new QGridLayout(groupBox);
        _3->setObjectName("_3");
        _3->setHorizontalSpacing(6);
        _3->setVerticalSpacing(2);
        _3->setContentsMargins(4, 4, 4, 4);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        _3->addWidget(label_8, 2, 1, 1, 1);

        start_ext_le = new QLineEdit(groupBox);
        start_ext_le->setObjectName("start_ext_le");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(start_ext_le->sizePolicy().hasHeightForWidth());
        start_ext_le->setSizePolicy(sizePolicy2);

        _3->addWidget(start_ext_le, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        _3->addWidget(label_5, 2, 3, 1, 1);

        end_ext_le = new QLineEdit(groupBox);
        end_ext_le->setObjectName("end_ext_le");
        sizePolicy2.setHeightForWidth(end_ext_le->sizePolicy().hasHeightForWidth());
        end_ext_le->setSizePolicy(sizePolicy2);

        _3->addWidget(end_ext_le, 2, 2, 1, 1);

        type_cb = new QComboBox(groupBox);
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->setObjectName("type_cb");
        sizePolicy.setHeightForWidth(type_cb->sizePolicy().hasHeightForWidth());
        type_cb->setSizePolicy(sizePolicy);

        _3->addWidget(type_cb, 0, 1, 1, 3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        _3->addWidget(label_7, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        _3->addWidget(label_4, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        _3->addWidget(label_6, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        _3->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(horizontalSpacer, 1, 4, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        spacer = new QSpacerItem(271, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);


        retranslateUi(EditorOptionsPath);

        QMetaObject::connectSlotsByName(EditorOptionsPath);
    } // setupUi

    void retranslateUi(QWidget *EditorOptionsPath)
    {
        EditorOptionsPath->setWindowTitle(QCoreApplication::translate("EditorOptionsPath", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("EditorOptionsPath", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("EditorOptionsPath", "\302\265m", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorOptionsPath", "Extensions", nullptr));
        label_8->setText(QCoreApplication::translate("EditorOptionsPath", " end =", nullptr));
        label_5->setText(QCoreApplication::translate("EditorOptionsPath", "\302\265m", nullptr));
        type_cb->setItemText(0, QCoreApplication::translate("EditorOptionsPath", "Flush", nullptr));
        type_cb->setItemText(1, QCoreApplication::translate("EditorOptionsPath", "Square", nullptr));
        type_cb->setItemText(2, QCoreApplication::translate("EditorOptionsPath", "Variable", nullptr));
        type_cb->setItemText(3, QCoreApplication::translate("EditorOptionsPath", "Round", nullptr));

        label_7->setText(QCoreApplication::translate("EditorOptionsPath", "Variable   ", nullptr));
        label_4->setText(QCoreApplication::translate("EditorOptionsPath", "\302\265m", nullptr));
        label_6->setText(QCoreApplication::translate("EditorOptionsPath", "start =", nullptr));
        label->setText(QCoreApplication::translate("EditorOptionsPath", "Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorOptionsPath: public Ui_EditorOptionsPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOROPTIONSPATH_H
