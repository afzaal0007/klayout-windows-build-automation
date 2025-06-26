/********************************************************************************
** Form generated from reading UI file 'SelectStippleForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSTIPPLEFORM_H
#define UI_SELECTSTIPPLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectStippleForm
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *stipple_items;
    QFrame *line;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *SelectStippleForm)
    {
        if (SelectStippleForm->objectName().isEmpty())
            SelectStippleForm->setObjectName("SelectStippleForm");
        SelectStippleForm->resize(238, 374);
        vboxLayout = new QVBoxLayout(SelectStippleForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        stipple_items = new QListWidget(SelectStippleForm);
        stipple_items->setObjectName("stipple_items");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stipple_items->sizePolicy().hasHeightForWidth());
        stipple_items->setSizePolicy(sizePolicy);
        stipple_items->setAcceptDrops(true);
        stipple_items->setProperty("showDropIndicator", QVariant(false));
        stipple_items->setDragEnabled(false);
        stipple_items->setAlternatingRowColors(false);
        stipple_items->setSelectionMode(QAbstractItemView::SingleSelection);
        stipple_items->setIconSize(QSize(32, 32));
        stipple_items->setMovement(QListView::Static);
        stipple_items->setViewMode(QListView::ListMode);

        vboxLayout->addWidget(stipple_items);

        line = new QFrame(SelectStippleForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame5 = new QFrame(SelectStippleForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(SelectStippleForm);
        QObject::connect(ok_button, &QPushButton::clicked, SelectStippleForm, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, SelectStippleForm, qOverload<>(&QDialog::reject));

        ok_button->setDefault(true);
        cancel_button->setDefault(true);


        QMetaObject::connectSlotsByName(SelectStippleForm);
    } // setupUi

    void retranslateUi(QDialog *SelectStippleForm)
    {
        SelectStippleForm->setWindowTitle(QCoreApplication::translate("SelectStippleForm", "Select Stipple Pattern", nullptr));
        ok_button->setText(QCoreApplication::translate("SelectStippleForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("SelectStippleForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectStippleForm: public Ui_SelectStippleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSTIPPLEFORM_H
