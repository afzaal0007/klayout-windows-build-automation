/********************************************************************************
** Form generated from reading UI file 'BookmarkManagementForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKMANAGEMENTFORM_H
#define UI_BOOKMARKMANAGEMENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookmarkManagementForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame5_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QFrame *frame6;
    QVBoxLayout *vboxLayout1;
    QPushButton *delete_button;
    QSpacerItem *spacerItem;
    QListWidget *bookmark_list;
    QFrame *line;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *BookmarkManagementForm)
    {
        if (BookmarkManagementForm->objectName().isEmpty())
            BookmarkManagementForm->setObjectName("BookmarkManagementForm");
        BookmarkManagementForm->resize(349, 240);
        vboxLayout = new QVBoxLayout(BookmarkManagementForm);
        vboxLayout->setSpacing(8);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName("vboxLayout");
        frame5_2 = new QFrame(BookmarkManagementForm);
        frame5_2->setObjectName("frame5_2");
        frame5_2->setFrameShape(QFrame::NoFrame);
        frame5_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame5_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(frame5_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        frame6 = new QFrame(frame5_2);
        frame6->setObjectName("frame6");
        frame6->setFrameShape(QFrame::NoFrame);
        frame6->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame6);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        delete_button = new QPushButton(frame6);
        delete_button->setObjectName("delete_button");

        vboxLayout1->addWidget(delete_button);

        spacerItem = new QSpacerItem(46, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        gridLayout->addWidget(frame6, 1, 1, 1, 1);

        bookmark_list = new QListWidget(frame5_2);
        bookmark_list->setObjectName("bookmark_list");
        bookmark_list->setAcceptDrops(true);
        bookmark_list->setProperty("showDropIndicator", QVariant(false));
        bookmark_list->setDragEnabled(false);
        bookmark_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        bookmark_list->setMovement(QListView::Static);
        bookmark_list->setViewMode(QListView::ListMode);

        gridLayout->addWidget(bookmark_list, 1, 0, 1, 1);


        vboxLayout->addWidget(frame5_2);

        line = new QFrame(BookmarkManagementForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frame5 = new QFrame(BookmarkManagementForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem1 = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(BookmarkManagementForm);
        QObject::connect(ok_button, &QPushButton::clicked, BookmarkManagementForm, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, BookmarkManagementForm, qOverload<>(&QDialog::reject));

        ok_button->setDefault(true);
        cancel_button->setDefault(true);


        QMetaObject::connectSlotsByName(BookmarkManagementForm);
    } // setupUi

    void retranslateUi(QDialog *BookmarkManagementForm)
    {
        BookmarkManagementForm->setWindowTitle(QCoreApplication::translate("BookmarkManagementForm", "Manage Bookmarks", nullptr));
        label->setText(QCoreApplication::translate("BookmarkManagementForm", "Double-click to edit bookmark name", nullptr));
        delete_button->setText(QCoreApplication::translate("BookmarkManagementForm", "Delete", nullptr));
        ok_button->setText(QCoreApplication::translate("BookmarkManagementForm", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("BookmarkManagementForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookmarkManagementForm: public Ui_BookmarkManagementForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKMANAGEMENTFORM_H
