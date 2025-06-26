/********************************************************************************
** Form generated from reading UI file 'AlignOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNOPTIONSDIALOG_H
#define UI_ALIGNOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlignOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *h_none_rb;
    QRadioButton *h_left_rb;
    QRadioButton *h_center_rb;
    QRadioButton *h_right_rb;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *v_none_rb;
    QRadioButton *v_top_rb;
    QRadioButton *v_center_rb;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *v_bottom_rb;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QRadioButton *visible_layers_rb;
    QRadioButton *all_layers_rb;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlignOptionsDialog)
    {
        if (AlignOptionsDialog->objectName().isEmpty())
            AlignOptionsDialog->setObjectName("AlignOptionsDialog");
        AlignOptionsDialog->resize(516, 392);
        verticalLayout = new QVBoxLayout(AlignOptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(AlignOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        h_none_rb = new QRadioButton(groupBox);
        h_none_rb->setObjectName("h_none_rb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/align_none_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_none_rb->setIcon(icon);
        h_none_rb->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(h_none_rb, 0, 0, 1, 1);

        h_left_rb = new QRadioButton(groupBox);
        h_left_rb->setObjectName("h_left_rb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/align_left_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_left_rb->setIcon(icon1);
        h_left_rb->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(h_left_rb, 0, 2, 1, 1);

        h_center_rb = new QRadioButton(groupBox);
        h_center_rb->setObjectName("h_center_rb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/align_hcenter_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_center_rb->setIcon(icon2);
        h_center_rb->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(h_center_rb, 0, 4, 1, 1);

        h_right_rb = new QRadioButton(groupBox);
        h_right_rb->setObjectName("h_right_rb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/align_right_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        h_right_rb->setIcon(icon3);
        h_right_rb->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(h_right_rb, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 1, 4, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 1, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 5, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AlignOptionsDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        v_none_rb = new QRadioButton(groupBox_2);
        v_none_rb->setObjectName("v_none_rb");
        v_none_rb->setIcon(icon);
        v_none_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_none_rb, 0, 0, 1, 1);

        v_top_rb = new QRadioButton(groupBox_2);
        v_top_rb->setObjectName("v_top_rb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/align_top_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_top_rb->setIcon(icon4);
        v_top_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_top_rb, 0, 2, 1, 1);

        v_center_rb = new QRadioButton(groupBox_2);
        v_center_rb->setObjectName("v_center_rb");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/align_vcenter_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_center_rb->setIcon(icon5);
        v_center_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_center_rb, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(243, 34, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 7, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 4, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 6, 1, 1);

        v_bottom_rb = new QRadioButton(groupBox_2);
        v_bottom_rb->setObjectName("v_bottom_rb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/align_bottom_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        v_bottom_rb->setIcon(icon6);
        v_bottom_rb->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(v_bottom_rb, 0, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 5, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(AlignOptionsDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        visible_layers_rb = new QRadioButton(groupBox_3);
        visible_layers_rb->setObjectName("visible_layers_rb");

        gridLayout->addWidget(visible_layers_rb, 1, 0, 1, 1);

        all_layers_rb = new QRadioButton(groupBox_3);
        all_layers_rb->setObjectName("all_layers_rb");

        gridLayout->addWidget(all_layers_rb, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(488, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AlignOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(all_layers_rb, visible_layers_rb);
        QWidget::setTabOrder(visible_layers_rb, h_none_rb);
        QWidget::setTabOrder(h_none_rb, h_left_rb);
        QWidget::setTabOrder(h_left_rb, h_center_rb);
        QWidget::setTabOrder(h_center_rb, h_right_rb);
        QWidget::setTabOrder(h_right_rb, v_none_rb);
        QWidget::setTabOrder(v_none_rb, v_top_rb);
        QWidget::setTabOrder(v_top_rb, v_center_rb);
        QWidget::setTabOrder(v_center_rb, v_bottom_rb);
        QWidget::setTabOrder(v_bottom_rb, buttonBox);

        retranslateUi(AlignOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlignOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlignOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AlignOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *AlignOptionsDialog)
    {
        AlignOptionsDialog->setWindowTitle(QCoreApplication::translate("AlignOptionsDialog", "Alignment Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlignOptionsDialog", "Horizontal alignment", nullptr));
        h_none_rb->setText(QString());
        h_left_rb->setText(QString());
        h_center_rb->setText(QString());
        h_right_rb->setText(QString());
        label_5->setText(QCoreApplication::translate("AlignOptionsDialog", "none", nullptr));
        label_6->setText(QCoreApplication::translate("AlignOptionsDialog", "left", nullptr));
        label_7->setText(QCoreApplication::translate("AlignOptionsDialog", "center", nullptr));
        label_8->setText(QCoreApplication::translate("AlignOptionsDialog", "right", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AlignOptionsDialog", "Vertical alignment", nullptr));
        v_none_rb->setText(QString());
        v_top_rb->setText(QString());
        v_center_rb->setText(QString());
        label->setText(QCoreApplication::translate("AlignOptionsDialog", "none", nullptr));
        label_2->setText(QCoreApplication::translate("AlignOptionsDialog", "top", nullptr));
        label_3->setText(QCoreApplication::translate("AlignOptionsDialog", "center", nullptr));
        label_4->setText(QCoreApplication::translate("AlignOptionsDialog", "bottom", nullptr));
        v_bottom_rb->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("AlignOptionsDialog", "Layers for alignment of instances", nullptr));
        visible_layers_rb->setText(QCoreApplication::translate("AlignOptionsDialog", "Use visible layers only", nullptr));
        all_layers_rb->setText(QCoreApplication::translate("AlignOptionsDialog", "Use all layers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlignOptionsDialog: public Ui_AlignOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNOPTIONSDIALOG_H
