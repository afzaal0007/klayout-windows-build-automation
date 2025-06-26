/********************************************************************************
** Form generated from reading UI file 'TechSaveOptionsEditorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHSAVEOPTIONSEDITORPAGE_H
#define UI_TECHSAVEOPTIONSEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechSaveOptionsEditorPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *options_tab;
    QWidget *tab_2;

    void setupUi(QWidget *TechSaveOptionsEditorPage)
    {
        if (TechSaveOptionsEditorPage->objectName().isEmpty())
            TechSaveOptionsEditorPage->setObjectName("TechSaveOptionsEditorPage");
        TechSaveOptionsEditorPage->resize(704, 476);
        verticalLayout = new QVBoxLayout(TechSaveOptionsEditorPage);
        verticalLayout->setObjectName("verticalLayout");
        options_tab = new QTabWidget(TechSaveOptionsEditorPage);
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


        retranslateUi(TechSaveOptionsEditorPage);

        options_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechSaveOptionsEditorPage);
    } // setupUi

    void retranslateUi(QWidget *TechSaveOptionsEditorPage)
    {
        TechSaveOptionsEditorPage->setWindowTitle(QCoreApplication::translate("TechSaveOptionsEditorPage", "Form", nullptr));
        options_tab->setTabText(options_tab->indexOf(tab_2), QCoreApplication::translate("TechSaveOptionsEditorPage", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechSaveOptionsEditorPage: public Ui_TechSaveOptionsEditorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHSAVEOPTIONSEDITORPAGE_H
