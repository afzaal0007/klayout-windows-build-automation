/********************************************************************************
** Form generated from reading UI file 'TechLoadOptionsEditorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHLOADOPTIONSEDITORPAGE_H
#define UI_TECHLOADOPTIONSEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechLoadOptionsEditorPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *options_tab;
    QWidget *tab_2;

    void setupUi(QWidget *TechLoadOptionsEditorPage)
    {
        if (TechLoadOptionsEditorPage->objectName().isEmpty())
            TechLoadOptionsEditorPage->setObjectName("TechLoadOptionsEditorPage");
        TechLoadOptionsEditorPage->resize(704, 476);
        verticalLayout = new QVBoxLayout(TechLoadOptionsEditorPage);
        verticalLayout->setObjectName("verticalLayout");
        options_tab = new QTabWidget(TechLoadOptionsEditorPage);
        options_tab->setObjectName("options_tab");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options_tab->sizePolicy().hasHeightForWidth());
        options_tab->setSizePolicy(sizePolicy);
        options_tab->setMinimumSize(QSize(0, 80));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        options_tab->addTab(tab_2, QString());

        verticalLayout->addWidget(options_tab);


        retranslateUi(TechLoadOptionsEditorPage);

        options_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechLoadOptionsEditorPage);
    } // setupUi

    void retranslateUi(QWidget *TechLoadOptionsEditorPage)
    {
        TechLoadOptionsEditorPage->setWindowTitle(QCoreApplication::translate("TechLoadOptionsEditorPage", "Form", nullptr));
        options_tab->setTabText(options_tab->indexOf(tab_2), QCoreApplication::translate("TechLoadOptionsEditorPage", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechLoadOptionsEditorPage: public Ui_TechLoadOptionsEditorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHLOADOPTIONSEDITORPAGE_H
