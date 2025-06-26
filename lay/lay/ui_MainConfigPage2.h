/********************************************************************************
** Form generated from reading UI file 'MainConfigPage2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE2_H
#define UI_MAINCONFIGPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage2
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *buttonGroup6;
    QGridLayout *gridLayout;
    QCheckBox *sync_views_cbx;

    void setupUi(QFrame *MainConfigPage2)
    {
        if (MainConfigPage2->objectName().isEmpty())
            MainConfigPage2->setObjectName("MainConfigPage2");
        MainConfigPage2->resize(400, 80);
        vboxLayout = new QVBoxLayout(MainConfigPage2);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        buttonGroup6 = new QGroupBox(MainConfigPage2);
        buttonGroup6->setObjectName("buttonGroup6");
        gridLayout = new QGridLayout(buttonGroup6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        sync_views_cbx = new QCheckBox(buttonGroup6);
        sync_views_cbx->setObjectName("sync_views_cbx");

        gridLayout->addWidget(sync_views_cbx, 0, 0, 1, 1);


        vboxLayout->addWidget(buttonGroup6);


        retranslateUi(MainConfigPage2);

        QMetaObject::connectSlotsByName(MainConfigPage2);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage2)
    {
        MainConfigPage2->setWindowTitle(QCoreApplication::translate("MainConfigPage2", "Settings", nullptr));
        buttonGroup6->setTitle(QCoreApplication::translate("MainConfigPage2", " Synchronized Views ", nullptr));
        sync_views_cbx->setText(QCoreApplication::translate("MainConfigPage2", "All views show same window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage2: public Ui_MainConfigPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE2_H
