/********************************************************************************
** Form generated from reading UI file 'LibraryCellSelectionForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYCELLSELECTIONFORM_H
#define UI_LIBRARYCELLSELECTIONFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_LibraryCellSelectionForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame8;
    QGridLayout *gridLayout;
    QTreeView *lv_cells;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QToolButton *find_next;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_cell_name;
    QLabel *lib_label;
    lay::LibrarySelectionComboBox *lib_cb;
    QCheckBox *cb_show_all_cells;
    QSpacerItem *spacerItem1;
    QFrame *line_4;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *LibraryCellSelectionForm)
    {
        if (LibraryCellSelectionForm->objectName().isEmpty())
            LibraryCellSelectionForm->setObjectName("LibraryCellSelectionForm");
        LibraryCellSelectionForm->resize(374, 488);
        vboxLayout = new QVBoxLayout(LibraryCellSelectionForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        frame8 = new QFrame(LibraryCellSelectionForm);
        frame8->setObjectName("frame8");
        frame8->setFrameShape(QFrame::NoFrame);
        frame8->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame8);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        lv_cells = new QTreeView(frame8);
        lv_cells->setObjectName("lv_cells");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(lv_cells->sizePolicy().hasHeightForWidth());
        lv_cells->setSizePolicy(sizePolicy);
        lv_cells->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lv_cells->setUniformRowHeights(true);

        gridLayout->addWidget(lv_cells, 4, 0, 1, 2);

        spacerItem = new QSpacerItem(200, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        label_3 = new QLabel(frame8);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        frame = new QFrame(frame8);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName("gridLayout1");
        find_next = new QToolButton(frame);
        find_next->setObjectName("find_next");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/find_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_next->setIcon(icon);
        find_next->setAutoRaise(true);

        gridLayout1->addWidget(find_next, 1, 3, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 2, 1, 1, 3);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        le_cell_name = new QLineEdit(frame);
        le_cell_name->setObjectName("le_cell_name");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(le_cell_name->sizePolicy().hasHeightForWidth());
        le_cell_name->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(le_cell_name, 1, 1, 1, 2);

        lib_label = new QLabel(frame);
        lib_label->setObjectName("lib_label");

        gridLayout1->addWidget(lib_label, 0, 0, 1, 1);

        lib_cb = new lay::LibrarySelectionComboBox(frame);
        lib_cb->setObjectName("lib_cb");

        gridLayout1->addWidget(lib_cb, 0, 1, 1, 2);


        gridLayout->addWidget(frame, 0, 0, 2, 2);


        vboxLayout->addWidget(frame8);

        cb_show_all_cells = new QCheckBox(LibraryCellSelectionForm);
        cb_show_all_cells->setObjectName("cb_show_all_cells");

        vboxLayout->addWidget(cb_show_all_cells);

        spacerItem1 = new QSpacerItem(200, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        line_4 = new QFrame(LibraryCellSelectionForm);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_4);

        frame5 = new QFrame(LibraryCellSelectionForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem2 = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame5);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);


        vboxLayout->addWidget(frame5);


        retranslateUi(LibraryCellSelectionForm);

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(LibraryCellSelectionForm);
    } // setupUi

    void retranslateUi(QDialog *LibraryCellSelectionForm)
    {
        LibraryCellSelectionForm->setWindowTitle(QCoreApplication::translate("LibraryCellSelectionForm", "Select Cell", nullptr));
        label_3->setText(QCoreApplication::translate("LibraryCellSelectionForm", "Cell list", nullptr));
#if QT_CONFIG(tooltip)
        find_next->setToolTip(QCoreApplication::translate("LibraryCellSelectionForm", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Find next</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        find_next->setText(QCoreApplication::translate("LibraryCellSelectionForm", "...", nullptr));
        label->setText(QCoreApplication::translate("LibraryCellSelectionForm", "(* and ? can be used to match any text)", nullptr));
        label_2->setText(QCoreApplication::translate("LibraryCellSelectionForm", "Filter", nullptr));
        lib_label->setText(QCoreApplication::translate("LibraryCellSelectionForm", "Library", nullptr));
        cb_show_all_cells->setText(QCoreApplication::translate("LibraryCellSelectionForm", "Show all cells", nullptr));
        ok_button->setText(QCoreApplication::translate("LibraryCellSelectionForm", "_ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("LibraryCellSelectionForm", "_cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibraryCellSelectionForm: public Ui_LibraryCellSelectionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYCELLSELECTIONFORM_H
