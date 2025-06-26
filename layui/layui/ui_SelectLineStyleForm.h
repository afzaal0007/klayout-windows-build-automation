/********************************************************************************
** Form generated from reading UI file 'SelectLineStyleForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTLINESTYLEFORM_H
#define UI_SELECTLINESTYLEFORM_H

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

class Ui_SelectLineStyleForm
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *style_items;
    QFrame *line;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *SelectLineStyleForm)
    {
        if (SelectLineStyleForm->objectName().isEmpty())
            SelectLineStyleForm->setObjectName("SelectLineStyleForm");
        SelectLineStyleForm->resize(238, 374);
        vboxLayout = new QVBoxLayout(SelectLineStyleForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        style_items = new QListWidget(SelectLineStyleForm);
        style_items->setObjectName("style_items");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(style_items->sizePolicy().hasHeightForWidth());
        style_items->setSizePolicy(sizePolicy);
        style_items->setAcceptDrops(true);
        style_items->setProperty("showDropIndicator", QVariant(false));
        style_items->setDragEnabled(false);
        style_items->setAlternatingRowColors(false);
        style_items->setSelectionMode(QAbstractItemView::SingleSelection);
        style_items->setIconSize(QSize(36, 26));
        style_items->setMovement(QListView::Static);
        style_items->setViewMode(QListView::ListMode);

        vboxLayout->addWidget(style_items);

        line = new QFrame(SelectLineStyleForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame5 = new QFrame(SelectLineStyleForm);
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


        retranslateUi(SelectLineStyleForm);
        QObject::connect(ok_button, &QPushButton::clicked, SelectLineStyleForm, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, SelectLineStyleForm, qOverload<>(&QDialog::reject));

        ok_button->setDefault(true);
        cancel_button->setDefault(true);


        QMetaObject::connectSlotsByName(SelectLineStyleForm);
    } // setupUi

    void retranslateUi(QDialog *SelectLineStyleForm)
    {
        SelectLineStyleForm->setWindowTitle(QCoreApplication::translate("SelectLineStyleForm", "Select line Style", nullptr));
        ok_button->setText(QCoreApplication::translate("SelectLineStyleForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("SelectLineStyleForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectLineStyleForm: public Ui_SelectLineStyleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLINESTYLEFORM_H
