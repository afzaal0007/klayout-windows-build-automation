/********************************************************************************
** Form generated from reading UI file 'UserPropertiesEditForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROPERTIESEDITFORM_H
#define UI_USERPROPERTIESEDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserPropertiesEditForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *key_le;
    QLineEdit *value_le;
    QLabel *help_label;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserPropertiesEditForm)
    {
        if (UserPropertiesEditForm->objectName().isEmpty())
            UserPropertiesEditForm->setObjectName("UserPropertiesEditForm");
        UserPropertiesEditForm->resize(474, 209);
        vboxLayout = new QVBoxLayout(UserPropertiesEditForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(UserPropertiesEditForm);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        key_le = new QLineEdit(frame);
        key_le->setObjectName("key_le");

        gridLayout->addWidget(key_le, 0, 1, 1, 1);

        value_le = new QLineEdit(frame);
        value_le->setObjectName("value_le");

        gridLayout->addWidget(value_le, 1, 1, 1, 1);

        help_label = new QLabel(frame);
        help_label->setObjectName("help_label");
        help_label->setWordWrap(true);

        gridLayout->addWidget(help_label, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        vboxLayout->addWidget(frame);

        spacerItem = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(UserPropertiesEditForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(UserPropertiesEditForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UserPropertiesEditForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UserPropertiesEditForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UserPropertiesEditForm);
    } // setupUi

    void retranslateUi(QDialog *UserPropertiesEditForm)
    {
        UserPropertiesEditForm->setWindowTitle(QCoreApplication::translate("UserPropertiesEditForm", "Edit User Property", nullptr));
        help_label->setText(QCoreApplication::translate("UserPropertiesEditForm", "<html>Use the Variant Notation for key and value (<a href=\"int:/about/variant_notation.xml\">See here for details</a>)</html>", nullptr));
        label_2->setText(QCoreApplication::translate("UserPropertiesEditForm", "Value", nullptr));
        label->setText(QCoreApplication::translate("UserPropertiesEditForm", "Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPropertiesEditForm: public Ui_UserPropertiesEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROPERTIESEDITFORM_H
