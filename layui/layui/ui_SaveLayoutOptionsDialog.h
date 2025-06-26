/********************************************************************************
** Form generated from reading UI file 'SaveLayoutOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELAYOUTOPTIONSDIALOG_H
#define UI_SAVELAYOUTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveLayoutOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QComboBox *tech_cbx;
    QSpacerItem *spacerItem;
    QSpacerItem *verticalSpacer;
    QTabWidget *options_tab;
    QWidget *options_stackPage1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveLayoutOptionsDialog)
    {
        if (SaveLayoutOptionsDialog->objectName().isEmpty())
            SaveLayoutOptionsDialog->setObjectName("SaveLayoutOptionsDialog");
        SaveLayoutOptionsDialog->setWindowModality(Qt::ApplicationModal);
        SaveLayoutOptionsDialog->resize(632, 599);
        verticalLayout = new QVBoxLayout(SaveLayoutOptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(SaveLayoutOptionsDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        hboxLayout->addWidget(label_2);

        tech_cbx = new QComboBox(frame_2);
        tech_cbx->setObjectName("tech_cbx");

        hboxLayout->addWidget(tech_cbx);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout->addWidget(frame_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        options_tab = new QTabWidget(SaveLayoutOptionsDialog);
        options_tab->setObjectName("options_tab");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(options_tab->sizePolicy().hasHeightForWidth());
        options_tab->setSizePolicy(sizePolicy);
        options_stackPage1 = new QWidget();
        options_stackPage1->setObjectName("options_stackPage1");
        options_tab->addTab(options_stackPage1, QString());

        verticalLayout->addWidget(options_tab);

        buttonBox = new QDialogButtonBox(SaveLayoutOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SaveLayoutOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaveLayoutOptionsDialog, qOverload<>(&QDialog::reject));

        options_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SaveLayoutOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveLayoutOptionsDialog)
    {
        SaveLayoutOptionsDialog->setWindowTitle(QString());
        label_2->setText(QCoreApplication::translate("SaveLayoutOptionsDialog", "Edit settings for technology", nullptr));
        options_tab->setTabText(options_tab->indexOf(options_stackPage1), QString());
    } // retranslateUi

};

namespace Ui {
    class SaveLayoutOptionsDialog: public Ui_SaveLayoutOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELAYOUTOPTIONSDIALOG_H
