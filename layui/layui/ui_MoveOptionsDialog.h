/********************************************************************************
** Form generated from reading UI file 'MoveOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEOPTIONSDIALOG_H
#define UI_MOVEOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MoveOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *disp_y_le;
    QLabel *label_2;
    QLineEdit *disp_x_le;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MoveOptionsDialog)
    {
        if (MoveOptionsDialog->objectName().isEmpty())
            MoveOptionsDialog->setObjectName("MoveOptionsDialog");
        MoveOptionsDialog->resize(233, 168);
        vboxLayout = new QVBoxLayout(MoveOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MoveOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        disp_y_le = new QLineEdit(groupBox);
        disp_y_le->setObjectName("disp_y_le");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(disp_y_le->sizePolicy().hasHeightForWidth());
        disp_y_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(disp_y_le, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        disp_x_le = new QLineEdit(groupBox);
        disp_x_le->setObjectName("disp_x_le");
        sizePolicy1.setHeightForWidth(disp_x_le->sizePolicy().hasHeightForWidth());
        disp_x_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(disp_x_le, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(MoveOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(disp_x_le, disp_y_le);
        QWidget::setTabOrder(disp_y_le, buttonBox);

        retranslateUi(MoveOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MoveOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MoveOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MoveOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *MoveOptionsDialog)
    {
        MoveOptionsDialog->setWindowTitle(QCoreApplication::translate("MoveOptionsDialog", "Move", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MoveOptionsDialog", "Displacement", nullptr));
        label_4->setText(QCoreApplication::translate("MoveOptionsDialog", "\302\265m", nullptr));
        label_5->setText(QCoreApplication::translate("MoveOptionsDialog", "\302\265m", nullptr));
        label_3->setText(QCoreApplication::translate("MoveOptionsDialog", "y", nullptr));
        label_2->setText(QCoreApplication::translate("MoveOptionsDialog", "x    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveOptionsDialog: public Ui_MoveOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEOPTIONSDIALOG_H
