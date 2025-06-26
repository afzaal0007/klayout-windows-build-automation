/********************************************************************************
** Form generated from reading UI file 'InstantiationForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANTIATIONFORM_H
#define UI_INSTANTIATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InstantiationForm
{
public:
    QGridLayout *gridLayout;
    QListWidget *list;
    QSpacerItem *spacerItem;
    QFrame *frame5;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *close_button;
    QSpacerItem *spacerItem2;
    QCheckBox *dbu_cb;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *title_lbl;
    QSpacerItem *spacerItem3;
    QLineEdit *layout_le;
    QSpacerItem *spacerItem4;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *abs_cb;

    void setupUi(QDialog *InstantiationForm)
    {
        if (InstantiationForm->objectName().isEmpty())
            InstantiationForm->setObjectName("InstantiationForm");
        InstantiationForm->resize(469, 429);
        gridLayout = new QGridLayout(InstantiationForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        list = new QListWidget(InstantiationForm);
        list->setObjectName("list");

        gridLayout->addWidget(list, 3, 2, 3, 1);

        spacerItem = new QSpacerItem(332, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 10, 0, 1, 3);

        frame5 = new QFrame(InstantiationForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame5);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName("gridLayout1");
        spacerItem1 = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 0, 1, 1);

        close_button = new QPushButton(frame5);
        close_button->setObjectName("close_button");

        gridLayout1->addWidget(close_button, 0, 3, 1, 1);


        gridLayout->addWidget(frame5, 11, 0, 1, 3);

        spacerItem2 = new QSpacerItem(20, 151, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 3, 0, 3, 1);

        dbu_cb = new QCheckBox(InstantiationForm);
        dbu_cb->setObjectName("dbu_cb");

        gridLayout->addWidget(dbu_cb, 7, 2, 1, 1);

        label_2 = new QLabel(InstantiationForm);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        label_4 = new QLabel(InstantiationForm);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 6, 2, 1, 1);

        title_lbl = new QLabel(InstantiationForm);
        title_lbl->setObjectName("title_lbl");

        gridLayout->addWidget(title_lbl, 0, 0, 1, 3);

        spacerItem3 = new QSpacerItem(332, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem3, 1, 0, 1, 3);

        layout_le = new QLineEdit(InstantiationForm);
        layout_le->setObjectName("layout_le");
        layout_le->setReadOnly(true);

        gridLayout->addWidget(layout_le, 2, 2, 1, 1);

        spacerItem4 = new QSpacerItem(37, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem4, 4, 1, 1, 1);

        label_3 = new QLabel(InstantiationForm);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label = new QLabel(InstantiationForm);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        abs_cb = new QCheckBox(InstantiationForm);
        abs_cb->setObjectName("abs_cb");

        gridLayout->addWidget(abs_cb, 8, 2, 1, 1);

        QWidget::setTabOrder(layout_le, list);
        QWidget::setTabOrder(list, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, close_button);

        retranslateUi(InstantiationForm);
        QObject::connect(close_button, &QPushButton::clicked, InstantiationForm, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(InstantiationForm);
    } // setupUi

    void retranslateUi(QDialog *InstantiationForm)
    {
        InstantiationForm->setWindowTitle(QCoreApplication::translate("InstantiationForm", "Instantiation Path", nullptr));
        close_button->setText(QCoreApplication::translate("InstantiationForm", "Close", nullptr));
        dbu_cb->setText(QCoreApplication::translate("InstantiationForm", "Coordinates in database units", nullptr));
        label_2->setText(QCoreApplication::translate("InstantiationForm", ":\n"
"Bottom", nullptr));
        label_4->setText(QCoreApplication::translate("InstantiationForm", "Double-click to select the respective cell in the layout tree", nullptr));
        title_lbl->setText(QCoreApplication::translate("InstantiationForm", "Instantiation path", nullptr));
        label_3->setText(QCoreApplication::translate("InstantiationForm", "Layout", nullptr));
        label->setText(QCoreApplication::translate("InstantiationForm", "Top cell\n"
":", nullptr));
        abs_cb->setText(QCoreApplication::translate("InstantiationForm", "Absolute (accumulated) transformations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstantiationForm: public Ui_InstantiationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANTIATIONFORM_H
