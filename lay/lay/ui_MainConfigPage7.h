/********************************************************************************
** Form generated from reading UI file 'MainConfigPage7.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONFIGPAGE7_H
#define UI_MAINCONFIGPAGE7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainConfigPage7
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *check_for_updates;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *keep_backups;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *always_exit_without_saving;
    QLabel *label_5;

    void setupUi(QFrame *MainConfigPage7)
    {
        if (MainConfigPage7->objectName().isEmpty())
            MainConfigPage7->setObjectName("MainConfigPage7");
        MainConfigPage7->resize(611, 271);
        vboxLayout = new QVBoxLayout(MainConfigPage7);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(MainConfigPage7);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        check_for_updates = new QCheckBox(groupBox);
        check_for_updates->setObjectName("check_for_updates");

        gridLayout->addWidget(check_for_updates, 1, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MainConfigPage7);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(252, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        keep_backups = new QSpinBox(groupBox_2);
        keep_backups->setObjectName("keep_backups");

        gridLayout_2->addWidget(keep_backups, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MainConfigPage7);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(9, 9, 9, 9);
        always_exit_without_saving = new QCheckBox(groupBox_3);
        always_exit_without_saving->setObjectName("always_exit_without_saving");

        gridLayout_3->addWidget(always_exit_without_saving, 1, 0, 1, 2);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        label_5->setWordWrap(false);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 2);


        vboxLayout->addWidget(groupBox_3);


        retranslateUi(MainConfigPage7);

        QMetaObject::connectSlotsByName(MainConfigPage7);
    } // setupUi

    void retranslateUi(QFrame *MainConfigPage7)
    {
        MainConfigPage7->setWindowTitle(QCoreApplication::translate("MainConfigPage7", "Application Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainConfigPage7", "Watch Layout Files", nullptr));
        check_for_updates->setText(QCoreApplication::translate("MainConfigPage7", "Check files for updates", nullptr));
        label->setText(QCoreApplication::translate("MainConfigPage7", "If this option is enabled, the program will detect changes in layout files and ask whether to reload them.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainConfigPage7", "Keep Backup Files", nullptr));
        label_3->setText(QCoreApplication::translate("MainConfigPage7", "When saving files, the specified number of backups are kept. Backup files are formed by adding \".1\", \".2\" etc. to the original file name. \".1\" is the most recent one. On saving, the files will be shuffled and \".1\" becomes \".2\", \".2 becomes \".3\" up to the specified number of backup files.", nullptr));
        label_2->setText(QCoreApplication::translate("MainConfigPage7", "Number of backup files", nullptr));
        label_4->setText(QCoreApplication::translate("MainConfigPage7", "(0 for no backups)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainConfigPage7", "Disable Save Needed Dialog", nullptr));
        always_exit_without_saving->setText(QCoreApplication::translate("MainConfigPage7", "Always exit without saving", nullptr));
        label_5->setText(QCoreApplication::translate("MainConfigPage7", "If this option is enabled, the program will not ask to save changes before exiting.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainConfigPage7: public Ui_MainConfigPage7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONFIGPAGE7_H
