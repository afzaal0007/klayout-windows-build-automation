/********************************************************************************
** Form generated from reading UI file 'RoundCornerOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUNDCORNEROPTIONSDIALOG_H
#define UI_ROUNDCORNEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RoundCornerOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *amend_cb;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *rinner_le;
    QLineEdit *router_le;
    QLabel *label;
    QLineEdit *points_le;
    QFrame *line;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *RoundCornerOptionsDialog)
    {
        if (RoundCornerOptionsDialog->objectName().isEmpty())
            RoundCornerOptionsDialog->setObjectName("RoundCornerOptionsDialog");
        RoundCornerOptionsDialog->resize(469, 271);
        gridLayout = new QGridLayout(RoundCornerOptionsDialog);
        gridLayout->setObjectName("gridLayout");
        amend_cb = new QCheckBox(RoundCornerOptionsDialog);
        amend_cb->setObjectName("amend_cb");

        gridLayout->addWidget(amend_cb, 2, 0, 1, 3);

        label_2 = new QLabel(RoundCornerOptionsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_3 = new QLabel(RoundCornerOptionsDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        rinner_le = new QLineEdit(RoundCornerOptionsDialog);
        rinner_le->setObjectName("rinner_le");

        gridLayout->addWidget(rinner_le, 5, 1, 1, 1);

        router_le = new QLineEdit(RoundCornerOptionsDialog);
        router_le->setObjectName("router_le");

        gridLayout->addWidget(router_le, 4, 1, 1, 1);

        label = new QLabel(RoundCornerOptionsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        points_le = new QLineEdit(RoundCornerOptionsDialog);
        points_le->setObjectName("points_le");

        gridLayout->addWidget(points_le, 7, 1, 1, 1);

        line = new QFrame(RoundCornerOptionsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 3);

        label_4 = new QLabel(RoundCornerOptionsDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(448, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 3);

        label_5 = new QLabel(RoundCornerOptionsDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 2, 1, 1);

        label_6 = new QLabel(RoundCornerOptionsDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 3);

        buttonBox = new QDialogButtonBox(RoundCornerOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 3);


        retranslateUi(RoundCornerOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RoundCornerOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RoundCornerOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RoundCornerOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RoundCornerOptionsDialog)
    {
        RoundCornerOptionsDialog->setWindowTitle(QCoreApplication::translate("RoundCornerOptionsDialog", "Dialog", nullptr));
        amend_cb->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "Amend mode (undo existing rounding before applying new one)", nullptr));
        label_2->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "Number of points (for full circle)", nullptr));
        label_3->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "Inner corner radius", nullptr));
        label->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "Outer corner radius", nullptr));
        label_4->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "Radius to apply on polygon corners\n"
"(Radius for inner corners can be specified separately.\n"
"Leave empty to get the same radius than for outer corners)", nullptr));
        label_5->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "micron", nullptr));
        label_6->setText(QCoreApplication::translate("RoundCornerOptionsDialog", "micron", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoundCornerOptionsDialog: public Ui_RoundCornerOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUNDCORNEROPTIONSDIALOG_H
