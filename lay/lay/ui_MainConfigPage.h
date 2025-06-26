/********************************************************************************
** Form generated from reading UI file 'MainConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE_H
#define UI_MAINCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *grid_edit;
    QLabel *textLabel1_4;
    QSpacerItem *spacerItem;

    void setupUi(QFrame *MainConfigPage)
    {
        if (MainConfigPage->objectName().isEmpty())
            MainConfigPage->setObjectName("MainConfigPage");
        MainConfigPage->resize(475, 99);
        vboxLayout = new QVBoxLayout(MainConfigPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MainConfigPage);
        groupBox->setObjectName("groupBox");
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        hboxLayout->setObjectName("hboxLayout");
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName("textLabel1");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(textLabel1);

        grid_edit = new QLineEdit(groupBox);
        grid_edit->setObjectName("grid_edit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grid_edit->sizePolicy().hasHeightForWidth());
        grid_edit->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(grid_edit);

        textLabel1_4 = new QLabel(groupBox);
        textLabel1_4->setObjectName("textLabel1_4");

        hboxLayout->addWidget(textLabel1_4);

        spacerItem = new QSpacerItem(81, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(groupBox);


        retranslateUi(MainConfigPage);

        QMetaObject::connectSlotsByName(MainConfigPage);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage)
    {
        MainConfigPage->setWindowTitle(QCoreApplication::translate("MainConfigPage", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage", "Grid", nullptr));
        textLabel1->setText(QCoreApplication::translate("MainConfigPage", "For display and ruler snapping", nullptr));
        textLabel1_4->setText(QCoreApplication::translate("MainConfigPage", "\302\265m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage: public Ui_MainConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE_H
