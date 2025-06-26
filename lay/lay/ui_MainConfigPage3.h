/********************************************************************************
** Form generated from reading UI file 'MainConfigPage3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE3_H
#define UI_MAINCONFIGPAGE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage3
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel1_4;
    QLineEdit *grids_edit;
    QLabel *label;

    void setupUi(QFrame *MainConfigPage3)
    {
        if (MainConfigPage3->objectName().isEmpty())
            MainConfigPage3->setObjectName("MainConfigPage3");
        MainConfigPage3->resize(504, 180);
        vboxLayout = new QVBoxLayout(MainConfigPage3);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(MainConfigPage3);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName("textLabel1");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_4 = new QLabel(groupBox);
        textLabel1_4->setObjectName("textLabel1_4");

        gridLayout->addWidget(textLabel1_4, 0, 2, 1, 1);

        grids_edit = new QLineEdit(groupBox);
        grids_edit->setObjectName("grids_edit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grids_edit->sizePolicy().hasHeightForWidth());
        grids_edit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(grids_edit, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 3);


        vboxLayout->addWidget(groupBox);


        retranslateUi(MainConfigPage3);

        QMetaObject::connectSlotsByName(MainConfigPage3);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage3)
    {
        MainConfigPage3->setWindowTitle(QCoreApplication::translate("MainConfigPage3", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage3", "Default Grids", nullptr));
        textLabel1->setText(QCoreApplication::translate("MainConfigPage3", "Grids for \"View\" menu", nullptr));
        textLabel1_4->setText(QCoreApplication::translate("MainConfigPage3", "\302\265m (g1,g2,...)", nullptr));
        label->setText(QCoreApplication::translate("MainConfigPage3", "<html>You can declare one grid a strong default to enforce an editing grid from this list. To do so, add an exclamation mark - e.g. \"0.01!,0.02,0.05\".\n"
"<br/><b>Note</b>: the general default grids can be overridden by technology specific default grids.</html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage3: public Ui_MainConfigPage3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE3_H
