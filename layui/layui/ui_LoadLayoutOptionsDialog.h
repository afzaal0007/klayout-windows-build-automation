/********************************************************************************
** Form generated from reading UI file 'LoadLayoutOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADLAYOUTOPTIONSDIALOG_H
#define UI_LOADLAYOUTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadLayoutOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *tech_frame;
    QGridLayout *gridLayout;
    QComboBox *tech_cbx;
    QLabel *tech_cbx_label;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QTabWidget *options_tab;
    QWidget *tab_2;
    QSpacerItem *spacerItem2;
    QCheckBox *always_cbx;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadLayoutOptionsDialog)
    {
        if (LoadLayoutOptionsDialog->objectName().isEmpty())
            LoadLayoutOptionsDialog->setObjectName("LoadLayoutOptionsDialog");
        LoadLayoutOptionsDialog->setWindowModality(Qt::ApplicationModal);
        LoadLayoutOptionsDialog->resize(726, 726);
        vboxLayout = new QVBoxLayout(LoadLayoutOptionsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tech_frame = new QFrame(LoadLayoutOptionsDialog);
        tech_frame->setObjectName("tech_frame");
        tech_frame->setFrameShape(QFrame::NoFrame);
        tech_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(tech_frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tech_cbx = new QComboBox(tech_frame);
        tech_cbx->setObjectName("tech_cbx");

        gridLayout->addWidget(tech_cbx, 0, 1, 1, 1);

        tech_cbx_label = new QLabel(tech_frame);
        tech_cbx_label->setObjectName("tech_cbx_label");

        gridLayout->addWidget(tech_cbx_label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        spacerItem1 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 3);


        vboxLayout->addWidget(tech_frame);

        frame = new QFrame(LoadLayoutOptionsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);

        vboxLayout->addWidget(frame);

        options_tab = new QTabWidget(LoadLayoutOptionsDialog);
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

        vboxLayout->addWidget(options_tab);

        spacerItem2 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem2);

        always_cbx = new QCheckBox(LoadLayoutOptionsDialog);
        always_cbx->setObjectName("always_cbx");

        vboxLayout->addWidget(always_cbx);

        line_2 = new QFrame(LoadLayoutOptionsDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        buttonBox = new QDialogButtonBox(LoadLayoutOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(options_tab, buttonBox);

        retranslateUi(LoadLayoutOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoadLayoutOptionsDialog, qOverload<>(&QDialog::reject));

        options_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoadLayoutOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadLayoutOptionsDialog)
    {
        LoadLayoutOptionsDialog->setWindowTitle(QCoreApplication::translate("LoadLayoutOptionsDialog", "Reader Options", nullptr));
        tech_cbx_label->setText(QCoreApplication::translate("LoadLayoutOptionsDialog", "Technology to be associated with layout", nullptr));
        options_tab->setTabText(options_tab->indexOf(tab_2), QCoreApplication::translate("LoadLayoutOptionsDialog", "Tab 2", nullptr));
        always_cbx->setText(QCoreApplication::translate("LoadLayoutOptionsDialog", "Show this dialog every time a layout is opened", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadLayoutOptionsDialog: public Ui_LoadLayoutOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADLAYOUTOPTIONSDIALOG_H
