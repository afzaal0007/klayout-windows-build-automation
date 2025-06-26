/********************************************************************************
** Form generated from reading UI file 'MainConfigPage6.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE6_H
#define UI_MAINCONFIGPAGE6_H

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

class Ui_MainConfigPage6
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *circle_points;
    QSpacerItem *spacerItem;

    void setupUi(QFrame *MainConfigPage6)
    {
        if (MainConfigPage6->objectName().isEmpty())
            MainConfigPage6->setObjectName("MainConfigPage6");
        MainConfigPage6->resize(606, 130);
        vboxLayout = new QVBoxLayout(MainConfigPage6);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MainConfigPage6);
        groupBox->setObjectName("groupBox");
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        hboxLayout->setObjectName("hboxLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        hboxLayout->addWidget(label);

        circle_points = new QLineEdit(groupBox);
        circle_points->setObjectName("circle_points");

        hboxLayout->addWidget(circle_points);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(groupBox);


        retranslateUi(MainConfigPage6);

        QMetaObject::connectSlotsByName(MainConfigPage6);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage6)
    {
        MainConfigPage6->setWindowTitle(QCoreApplication::translate("MainConfigPage6", "Application Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage6", "Circle Resolution", nullptr));
        label->setText(QCoreApplication::translate("MainConfigPage6", "Number of points per full circle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage6: public Ui_MainConfigPage6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE6_H
