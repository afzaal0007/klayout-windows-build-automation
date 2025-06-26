/********************************************************************************
** Form generated from reading UI file 'MacroPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROPROPERTIESDIALOG_H
#define UI_MACROPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MacroPropertiesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *propertiesFrame;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *interpreterLabel;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *description;
    QLineEdit *version;
    QLabel *label;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QCheckBox *autorun;
    QCheckBox *autorunEarly;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_7;
    QLineEdit *priority;
    QLabel *label_12;
    QLineEdit *prolog;
    QLineEdit *epilog;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLineEdit *shortcut;
    QGroupBox *showmenu;
    QGridLayout *gridLayout3;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *groupName;
    QLineEdit *menuPath;
    QLabel *helpLabel;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MacroPropertiesDialog)
    {
        if (MacroPropertiesDialog->objectName().isEmpty())
            MacroPropertiesDialog->setObjectName("MacroPropertiesDialog");
        MacroPropertiesDialog->resize(476, 573);
        vboxLayout = new QVBoxLayout(MacroPropertiesDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        propertiesFrame = new QFrame(MacroPropertiesDialog);
        propertiesFrame->setObjectName("propertiesFrame");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(propertiesFrame->sizePolicy().hasHeightForWidth());
        propertiesFrame->setSizePolicy(sizePolicy);
        propertiesFrame->setFrameShape(QFrame::NoFrame);
        propertiesFrame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(propertiesFrame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(propertiesFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        interpreterLabel = new QLabel(frame_2);
        interpreterLabel->setObjectName("interpreterLabel");
        QFont font;
        font.setBold(true);
        interpreterLabel->setFont(font);

        gridLayout->addWidget(interpreterLabel, 0, 1, 1, 2);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        description = new QLineEdit(frame_2);
        description->setObjectName("description");

        gridLayout->addWidget(description, 2, 1, 1, 2);

        version = new QLineEdit(frame_2);
        version->setObjectName("version");

        gridLayout->addWidget(version, 3, 1, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 1, 0, 1, 3);


        vboxLayout1->addWidget(frame_2);

        groupBox = new QGroupBox(propertiesFrame);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        autorun = new QCheckBox(groupBox);
        autorun->setObjectName("autorun");

        vboxLayout2->addWidget(autorun);

        autorunEarly = new QCheckBox(groupBox);
        autorunEarly->setObjectName("autorunEarly");

        vboxLayout2->addWidget(autorunEarly);

        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        gridLayout1->addWidget(label_11, 0, 0, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        gridLayout1->addWidget(label_10, 1, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        priority = new QLineEdit(frame);
        priority->setObjectName("priority");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(priority->sizePolicy().hasHeightForWidth());
        priority->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(priority, 0, 1, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");

        gridLayout1->addWidget(label_12, 0, 2, 1, 1);

        prolog = new QLineEdit(frame);
        prolog->setObjectName("prolog");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(prolog->sizePolicy().hasHeightForWidth());
        prolog->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(prolog, 1, 1, 1, 2);

        epilog = new QLineEdit(frame);
        epilog->setObjectName("epilog");

        gridLayout1->addWidget(epilog, 2, 1, 1, 2);


        vboxLayout2->addWidget(frame);


        vboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(propertiesFrame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        shortcut = new QLineEdit(groupBox_2);
        shortcut->setObjectName("shortcut");

        gridLayout2->addWidget(shortcut, 2, 1, 1, 1);

        showmenu = new QGroupBox(groupBox_2);
        showmenu->setObjectName("showmenu");
        showmenu->setMinimumSize(QSize(0, 0));
        showmenu->setCheckable(true);
        gridLayout3 = new QGridLayout(showmenu);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        label_4 = new QLabel(showmenu);
        label_4->setObjectName("label_4");

        gridLayout3->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(showmenu);
        label_3->setObjectName("label_3");

        gridLayout3->addWidget(label_3, 0, 0, 1, 1);

        groupName = new QLineEdit(showmenu);
        groupName->setObjectName("groupName");

        gridLayout3->addWidget(groupName, 2, 1, 1, 1);

        menuPath = new QLineEdit(showmenu);
        menuPath->setObjectName("menuPath");

        gridLayout3->addWidget(menuPath, 0, 1, 1, 1);

        helpLabel = new QLabel(showmenu);
        helpLabel->setObjectName("helpLabel");
        helpLabel->setWordWrap(true);

        gridLayout3->addWidget(helpLabel, 3, 1, 1, 1);


        gridLayout2->addWidget(showmenu, 1, 0, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout2->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout2->addWidget(label_5, 3, 1, 1, 1);


        vboxLayout1->addWidget(groupBox_2);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        vboxLayout->addWidget(propertiesFrame);

        line = new QFrame(MacroPropertiesDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(MacroPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(description, version);
        QWidget::setTabOrder(version, autorun);
        QWidget::setTabOrder(autorun, autorunEarly);
        QWidget::setTabOrder(autorunEarly, prolog);
        QWidget::setTabOrder(prolog, epilog);
        QWidget::setTabOrder(epilog, menuPath);
        QWidget::setTabOrder(menuPath, groupName);
        QWidget::setTabOrder(groupName, shortcut);
        QWidget::setTabOrder(shortcut, buttonBox);

        retranslateUi(MacroPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MacroPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MacroPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MacroPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *MacroPropertiesDialog)
    {
        MacroPropertiesDialog->setWindowTitle(QCoreApplication::translate("MacroPropertiesDialog", "Macro Properties", nullptr));
        label_8->setText(QCoreApplication::translate("MacroPropertiesDialog", "(leave empty if no version is specified)", nullptr));
        interpreterLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("MacroPropertiesDialog", "Interpreter", nullptr));
        label_6->setText(QCoreApplication::translate("MacroPropertiesDialog", "Description", nullptr));
        label->setText(QCoreApplication::translate("MacroPropertiesDialog", "Version", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MacroPropertiesDialog", "Execution", nullptr));
        autorun->setText(QCoreApplication::translate("MacroPropertiesDialog", "Run on startup", nullptr));
        autorunEarly->setText(QCoreApplication::translate("MacroPropertiesDialog", "Run early on startup (before main window is created)", nullptr));
        label_11->setText(QCoreApplication::translate("MacroPropertiesDialog", "Priority", nullptr));
        label_10->setText(QCoreApplication::translate("MacroPropertiesDialog", "Prolog", nullptr));
        label_7->setText(QCoreApplication::translate("MacroPropertiesDialog", "Epilog", nullptr));
        label_12->setText(QCoreApplication::translate("MacroPropertiesDialog", "for autorun: 0 = first, 1 = second ...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MacroPropertiesDialog", "User interface binding", nullptr));
        showmenu->setTitle(QCoreApplication::translate("MacroPropertiesDialog", "Show in &menu", nullptr));
        label_4->setText(QCoreApplication::translate("MacroPropertiesDialog", "Group name", nullptr));
        label_3->setText(QCoreApplication::translate("MacroPropertiesDialog", "Menu path", nullptr));
        helpLabel->setText(QCoreApplication::translate("MacroPropertiesDialog", "<html>Leave empty to show the macro in \"Tools/Macros\".<br/><a href=\"int:/about/macro_in_menu.xml\">Read more about menu paths and groups</a></p></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MacroPropertiesDialog", "Default keyboard shortcut", nullptr));
        label_5->setText(QCoreApplication::translate("MacroPropertiesDialog", "Leave empty for none", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroPropertiesDialog: public Ui_MacroPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROPROPERTIESDIALOG_H
