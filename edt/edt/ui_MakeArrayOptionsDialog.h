/********************************************************************************
** Form generated from reading UI file 'MakeArrayOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEARRAYOPTIONSDIALOG_H
#define UI_MAKEARRAYOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MakeArrayOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QSpacerItem *spacerItem;
    QGroupBox *array_grp;
    QGridLayout *gridLayout;
    QLineEdit *row_x_le;
    QLabel *label_11;
    QLineEdit *column_y_le;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *columns_le;
    QLabel *label_9;
    QLabel *label_16;
    QLineEdit *row_y_le;
    QLabel *label_14;
    QLineEdit *column_x_le;
    QLineEdit *rows_le;
    QLabel *label_15;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MakeArrayOptionsDialog)
    {
        if (MakeArrayOptionsDialog->objectName().isEmpty())
            MakeArrayOptionsDialog->setObjectName("MakeArrayOptionsDialog");
        MakeArrayOptionsDialog->resize(561, 323);
        vboxLayout = new QVBoxLayout(MakeArrayOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        label_2 = new QLabel(MakeArrayOptionsDialog);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        vboxLayout->addWidget(label_2);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        array_grp = new QGroupBox(MakeArrayOptionsDialog);
        array_grp->setObjectName("array_grp");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(array_grp->sizePolicy().hasHeightForWidth());
        array_grp->setSizePolicy(sizePolicy);
        array_grp->setCheckable(false);
        gridLayout = new QGridLayout(array_grp);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        row_x_le = new QLineEdit(array_grp);
        row_x_le->setObjectName("row_x_le");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(row_x_le->sizePolicy().hasHeightForWidth());
        row_x_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(row_x_le, 3, 3, 1, 1);

        label_11 = new QLabel(array_grp);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 2, 1, 1);

        column_y_le = new QLineEdit(array_grp);
        column_y_le->setObjectName("column_y_le");
        sizePolicy1.setHeightForWidth(column_y_le->sizePolicy().hasHeightForWidth());
        column_y_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(column_y_le, 2, 5, 1, 1);

        label_8 = new QLabel(array_grp);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 0, 0, 1, 3);

        label_6 = new QLabel(array_grp);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        columns_le = new QLineEdit(array_grp);
        columns_le->setObjectName("columns_le");
        sizePolicy1.setHeightForWidth(columns_le->sizePolicy().hasHeightForWidth());
        columns_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(columns_le, 0, 3, 1, 1);

        label_9 = new QLabel(array_grp);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        label_16 = new QLabel(array_grp);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 2, 0, 1, 2);

        row_y_le = new QLineEdit(array_grp);
        row_y_le->setObjectName("row_y_le");
        sizePolicy1.setHeightForWidth(row_y_le->sizePolicy().hasHeightForWidth());
        row_y_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(row_y_le, 3, 5, 1, 1);

        label_14 = new QLabel(array_grp);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 2, 2, 1, 1);

        column_x_le = new QLineEdit(array_grp);
        column_x_le->setObjectName("column_x_le");
        sizePolicy1.setHeightForWidth(column_x_le->sizePolicy().hasHeightForWidth());
        column_x_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(column_x_le, 2, 3, 1, 1);

        rows_le = new QLineEdit(array_grp);
        rows_le->setObjectName("rows_le");
        sizePolicy1.setHeightForWidth(rows_le->sizePolicy().hasHeightForWidth());
        rows_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rows_le, 0, 5, 1, 1);

        label_15 = new QLabel(array_grp);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 2, 4, 1, 1);

        label_10 = new QLabel(array_grp);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 6);


        vboxLayout->addWidget(array_grp);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        label = new QLabel(MakeArrayOptionsDialog);
        label->setObjectName("label");
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        spacerItem2 = new QSpacerItem(200, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(MakeArrayOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(columns_le, rows_le);
        QWidget::setTabOrder(rows_le, column_x_le);
        QWidget::setTabOrder(column_x_le, column_y_le);
        QWidget::setTabOrder(column_y_le, row_x_le);
        QWidget::setTabOrder(row_x_le, row_y_le);

        retranslateUi(MakeArrayOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MakeArrayOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MakeArrayOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MakeArrayOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *MakeArrayOptionsDialog)
    {
        MakeArrayOptionsDialog->setWindowTitle(QCoreApplication::translate("MakeArrayOptionsDialog", "Make Array", nullptr));
        label_2->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "The selection will be copied row * columns times. Each copy will be displaced by a vector given by the row vector times the row index and the column vector times the column index.", nullptr));
        array_grp->setTitle(QCoreApplication::translate("MakeArrayOptionsDialog", "Rows And Columns", nullptr));
        label_11->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "x =", nullptr));
        label_8->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "Columns =", nullptr));
        label_6->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "Rows =", nullptr));
        label_9->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "  Row vector (x,y)", nullptr));
        label_16->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "  Column vector (x,y)", nullptr));
        label_14->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "x =", nullptr));
        label_15->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "y =", nullptr));
        label_10->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "y =", nullptr));
        label->setText(QCoreApplication::translate("MakeArrayOptionsDialog", "<span style=\" font-weight:600;\">Warning</span>: undo is available for this function only for small arrays (less than 1000 instances)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeArrayOptionsDialog: public Ui_MakeArrayOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEARRAYOPTIONSDIALOG_H
