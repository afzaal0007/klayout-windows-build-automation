/********************************************************************************
** Form generated from reading UI file 'NewLayoutPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLAYOUTPROPERTIESDIALOG_H
#define UI_NEWLAYOUTPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_NewLayoutPropertiesDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *window_le;
    QSpacerItem *spacerItem;
    QLineEdit *topcell_le;
    QLineEdit *dbu_le;
    QComboBox *tech_cbx;
    QLineEdit *layers_le;
    QSpacerItem *spacerItem1;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *spacerItem2;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *spacerItem3;
    QCheckBox *current_panel_cb;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewLayoutPropertiesDialog)
    {
        if (NewLayoutPropertiesDialog->objectName().isEmpty())
            NewLayoutPropertiesDialog->setObjectName("NewLayoutPropertiesDialog");
        NewLayoutPropertiesDialog->resize(594, 401);
        vboxLayout = new QVBoxLayout(NewLayoutPropertiesDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(NewLayoutPropertiesDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        window_le = new QLineEdit(groupBox);
        window_le->setObjectName("window_le");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(window_le->sizePolicy().hasHeightForWidth());
        window_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(window_le, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 3);

        topcell_le = new QLineEdit(groupBox);
        topcell_le->setObjectName("topcell_le");
        sizePolicy.setHeightForWidth(topcell_le->sizePolicy().hasHeightForWidth());
        topcell_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(topcell_le, 1, 1, 1, 1);

        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName("dbu_le");
        sizePolicy.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dbu_le, 3, 1, 1, 1);

        tech_cbx = new QComboBox(groupBox);
        tech_cbx->setObjectName("tech_cbx");

        gridLayout->addWidget(tech_cbx, 0, 1, 1, 4);

        layers_le = new QLineEdit(groupBox);
        layers_le->setObjectName("layers_le");

        gridLayout->addWidget(layers_le, 5, 1, 1, 4);

        spacerItem1 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 4, 4, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 3, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 3, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        gridLayout->addWidget(label_9, 6, 1, 1, 4);


        vboxLayout->addWidget(groupBox);

        spacerItem3 = new QSpacerItem(385, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);

        current_panel_cb = new QCheckBox(NewLayoutPropertiesDialog);
        current_panel_cb->setObjectName("current_panel_cb");

        vboxLayout->addWidget(current_panel_cb);

        line = new QFrame(NewLayoutPropertiesDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(NewLayoutPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(tech_cbx, topcell_le);
        QWidget::setTabOrder(topcell_le, dbu_le);
        QWidget::setTabOrder(dbu_le, window_le);
        QWidget::setTabOrder(window_le, layers_le);
        QWidget::setTabOrder(layers_le, current_panel_cb);

        retranslateUi(NewLayoutPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewLayoutPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewLayoutPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewLayoutPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *NewLayoutPropertiesDialog)
    {
        NewLayoutPropertiesDialog->setWindowTitle(QCoreApplication::translate("NewLayoutPropertiesDialog", "New Layout", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NewLayoutPropertiesDialog", "New Layout Properties", nullptr));
        label_6->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "\302\265m", nullptr));
        label_4->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "\302\265m", nullptr));
        label->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Top cell", nullptr));
        label_5->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Database unit", nullptr));
        label_3->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Technology", nullptr));
        label_7->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", " (empty for default)", nullptr));
        label_2->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Initial window size", nullptr));
        label_8->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Initial layer(s)", nullptr));
        label_9->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "<html><head/><body>Specify a comma or blank separated list of layers to create in the usual layer notation, e.g. \"1/0 2/0 3/0\", \"metal1 via1 metal2\" or \"metal1 (1/0) via1 (2/0) metal2 (3/0)\"</body></html>", nullptr));
        current_panel_cb->setText(QCoreApplication::translate("NewLayoutPropertiesDialog", "Create layout in current panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewLayoutPropertiesDialog: public Ui_NewLayoutPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLAYOUTPROPERTIESDIALOG_H
