/********************************************************************************
** Form generated from reading UI file 'SelectCellViewForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCELLVIEWFORM_H
#define UI_SELECTCELLVIEWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectCellViewForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame5_2;
    QGridLayout *gridLayout;
    QLabel *title_lbl;
    QListWidget *cvs_lb;
    QPushButton *select_all_pb;
    QFrame *frame5;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *SelectCellViewForm)
    {
        if (SelectCellViewForm->objectName().isEmpty())
            SelectCellViewForm->setObjectName("SelectCellViewForm");
        SelectCellViewForm->resize(544, 167);
        vboxLayout = new QVBoxLayout(SelectCellViewForm);
        vboxLayout->setSpacing(8);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName("vboxLayout");
        frame5_2 = new QFrame(SelectCellViewForm);
        frame5_2->setObjectName("frame5_2");
        frame5_2->setFrameShape(QFrame::NoFrame);
        frame5_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame5_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        title_lbl = new QLabel(frame5_2);
        title_lbl->setObjectName("title_lbl");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title_lbl->sizePolicy().hasHeightForWidth());
        title_lbl->setSizePolicy(sizePolicy);

        gridLayout->addWidget(title_lbl, 0, 0, 1, 1);

        cvs_lb = new QListWidget(frame5_2);
        cvs_lb->setObjectName("cvs_lb");
        cvs_lb->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(cvs_lb, 1, 0, 1, 2);

        select_all_pb = new QPushButton(frame5_2);
        select_all_pb->setObjectName("select_all_pb");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(select_all_pb->sizePolicy().hasHeightForWidth());
        select_all_pb->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(select_all_pb, 0, 1, 1, 1);


        vboxLayout->addWidget(frame5_2);

        frame5 = new QFrame(SelectCellViewForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame5);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName("gridLayout1");
        spacerItem = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 0, 1, 1);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        gridLayout1->addWidget(ok_button, 0, 1, 1, 1);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        gridLayout1->addWidget(cancel_button, 0, 3, 1, 1);


        vboxLayout->addWidget(frame5);


        retranslateUi(SelectCellViewForm);

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(SelectCellViewForm);
    } // setupUi

    void retranslateUi(QDialog *SelectCellViewForm)
    {
        SelectCellViewForm->setWindowTitle(QCoreApplication::translate("SelectCellViewForm", "Select Layout", nullptr));
        title_lbl->setText(QCoreApplication::translate("SelectCellViewForm", "Text", nullptr));
        select_all_pb->setText(QCoreApplication::translate("SelectCellViewForm", "Select All", nullptr));
        ok_button->setText(QCoreApplication::translate("SelectCellViewForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("SelectCellViewForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectCellViewForm: public Ui_SelectCellViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCELLVIEWFORM_H
