/********************************************************************************
** Form generated from reading UI file 'MainConfigPage5.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE5_H
#define UI_MAINCONFIGPAGE5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage5
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QSpinBox *dbu_digits;
    QSpinBox *micron_digits;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QFrame *MainConfigPage5)
    {
        if (MainConfigPage5->objectName().isEmpty())
            MainConfigPage5->setObjectName("MainConfigPage5");
        MainConfigPage5->resize(447, 160);
        gridLayout = new QGridLayout(MainConfigPage5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(MainConfigPage5);
        groupBox->setObjectName("groupBox");
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName("gridLayout1");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout1->addWidget(label_2, 0, 0, 1, 2);

        dbu_digits = new QSpinBox(groupBox);
        dbu_digits->setObjectName("dbu_digits");
        dbu_digits->setMaximum(15);

        gridLayout1->addWidget(dbu_digits, 2, 1, 1, 1);

        micron_digits = new QSpinBox(groupBox);
        micron_digits->setObjectName("micron_digits");
        micron_digits->setMaximum(15);

        gridLayout1->addWidget(micron_digits, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(MainConfigPage5);

        QMetaObject::connectSlotsByName(MainConfigPage5);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage5)
    {
        MainConfigPage5->setWindowTitle(QCoreApplication::translate("MainConfigPage5", "Application Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage5", "Display resolution", nullptr));
        label_2->setText(QCoreApplication::translate("MainConfigPage5", "Specify the number of digits to be used for displaying ...", nullptr));
        label_3->setText(QCoreApplication::translate("MainConfigPage5", "data base unit values", nullptr));
        label->setText(QCoreApplication::translate("MainConfigPage5", "\302\265m values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage5: public Ui_MainConfigPage5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE5_H
