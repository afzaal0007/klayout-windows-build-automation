/********************************************************************************
** Form generated from reading UI file 'MAGWriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGWRITEROPTIONPAGE_H
#define UI_MAGWRITEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAGWriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *tech_le;
    QLineEdit *lambda_le;
    QLabel *label_4;
    QCheckBox *zero_ts_cbx;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *MAGWriterOptionPage)
    {
        if (MAGWriterOptionPage->objectName().isEmpty())
            MAGWriterOptionPage->setObjectName("MAGWriterOptionPage");
        MAGWriterOptionPage->resize(619, 250);
        vboxLayout = new QVBoxLayout(MAGWriterOptionPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(MAGWriterOptionPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        tech_le = new QLineEdit(groupBox);
        tech_le->setObjectName("tech_le");

        gridLayout->addWidget(tech_le, 3, 1, 1, 1);

        lambda_le = new QLineEdit(groupBox);
        lambda_le->setObjectName("lambda_le");

        gridLayout->addWidget(lambda_le, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        zero_ts_cbx = new QCheckBox(groupBox);
        zero_ts_cbx->setObjectName("zero_ts_cbx");

        gridLayout->addWidget(zero_ts_cbx, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(601, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(MAGWriterOptionPage);

        QMetaObject::connectSlotsByName(MAGWriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *MAGWriterOptionPage)
    {
        MAGWriterOptionPage->setWindowTitle(QCoreApplication::translate("MAGWriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MAGWriterOptionPage", "Magic Writer Options", nullptr));
        label_4->setText(QCoreApplication::translate("MAGWriterOptionPage", "Zero timestamp", nullptr));
        zero_ts_cbx->setText(QCoreApplication::translate("MAGWriterOptionPage", "If checked, a zero timestamp is written (good for comparing files)", nullptr));
        label_2->setText(QCoreApplication::translate("MAGWriterOptionPage", "Leave this value empty to take the lambda value stored in the layout", nullptr));
        label_5->setText(QCoreApplication::translate("MAGWriterOptionPage", "Technology", nullptr));
        label->setText(QCoreApplication::translate("MAGWriterOptionPage", "Micron", nullptr));
        label_6->setText(QCoreApplication::translate("MAGWriterOptionPage", "Lambda value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAGWriterOptionPage: public Ui_MAGWriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGWRITEROPTIONPAGE_H
