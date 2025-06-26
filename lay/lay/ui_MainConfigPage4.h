/********************************************************************************
** Form generated from reading UI file 'MainConfigPage4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE4_H
#define UI_MAINCONFIGPAGE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage4
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *label_2;
    QCheckBox *edit_mode_cbx;

    void setupUi(QFrame *MainConfigPage4)
    {
        if (MainConfigPage4->objectName().isEmpty())
            MainConfigPage4->setObjectName("MainConfigPage4");
        MainConfigPage4->resize(476, 164);
        vboxLayout = new QVBoxLayout(MainConfigPage4);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MainConfigPage4);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        vboxLayout1->setObjectName("vboxLayout1");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        vboxLayout1->addWidget(label_2);

        edit_mode_cbx = new QCheckBox(groupBox);
        edit_mode_cbx->setObjectName("edit_mode_cbx");

        vboxLayout1->addWidget(edit_mode_cbx);


        vboxLayout->addWidget(groupBox);


        retranslateUi(MainConfigPage4);

        QMetaObject::connectSlotsByName(MainConfigPage4);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage4)
    {
        MainConfigPage4->setWindowTitle(QCoreApplication::translate("MainConfigPage4", "Application Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage4", "Editing mode", nullptr));
        label_2->setText(QCoreApplication::translate("MainConfigPage4", "If this option is selected, the application will enter edit mode when it is started. In any case, editing mode can be forced or disabled with the \"-e\" or \"-ne\" command line switch.", nullptr));
        edit_mode_cbx->setText(QCoreApplication::translate("MainConfigPage4", "Use editing mode by default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage4: public Ui_MainConfigPage4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE4_H
