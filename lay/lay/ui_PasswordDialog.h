/********************************************************************************
** Form generated from reading UI file 'PasswordDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLineEdit *password_le;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *user_le;
    QDialogButtonBox *buttonBox;
    QLabel *realm_label;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *attempt_label;
    QSpacerItem *spacerItem3;
    QLabel *where_label;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName("PasswordDialog");
        PasswordDialog->resize(338, 229);
        gridLayout = new QGridLayout(PasswordDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 8, 1, 1, 2);

        password_le = new QLineEdit(PasswordDialog);
        password_le->setObjectName("password_le");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password_le->sizePolicy().hasHeightForWidth());
        password_le->setSizePolicy(sizePolicy);
        password_le->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_le, 7, 2, 1, 1);

        label = new QLabel(PasswordDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 6, 1, 1, 1);

        label_3 = new QLabel(PasswordDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 7, 1, 1, 1);

        user_le = new QLineEdit(PasswordDialog);
        user_le->setObjectName("user_le");
        sizePolicy.setHeightForWidth(user_le->sizePolicy().hasHeightForWidth());
        user_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(user_le, 6, 2, 1, 1);

        buttonBox = new QDialogButtonBox(PasswordDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 4);

        realm_label = new QLabel(PasswordDialog);
        realm_label->setObjectName("realm_label");
        realm_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        realm_label->setWordWrap(false);

        gridLayout->addWidget(realm_label, 0, 0, 2, 4);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 2);

        spacerItem2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 6, 0, 1, 1);

        attempt_label = new QLabel(PasswordDialog);
        attempt_label->setObjectName("attempt_label");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        attempt_label->setPalette(palette);
        QFont font;
        font.setBold(true);
        attempt_label->setFont(font);

        gridLayout->addWidget(attempt_label, 4, 1, 1, 3);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 6, 3, 1, 1);

        where_label = new QLabel(PasswordDialog);
        where_label->setObjectName("where_label");
        where_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        where_label->setWordWrap(false);

        gridLayout->addWidget(where_label, 2, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 2);

        QWidget::setTabOrder(user_le, password_le);
        QWidget::setTabOrder(password_le, buttonBox);

        retranslateUi(PasswordDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PasswordDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PasswordDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QCoreApplication::translate("PasswordDialog", "Authentication Required", nullptr));
        label->setText(QCoreApplication::translate("PasswordDialog", "User", nullptr));
        label_3->setText(QCoreApplication::translate("PasswordDialog", "Password  ", nullptr));
        realm_label->setText(QCoreApplication::translate("PasswordDialog", "-", nullptr));
        attempt_label->setText(QCoreApplication::translate("PasswordDialog", "# of attempt", nullptr));
        where_label->setText(QCoreApplication::translate("PasswordDialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
