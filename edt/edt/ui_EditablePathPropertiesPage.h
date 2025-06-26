/********************************************************************************
** Form generated from reading UI file 'EditablePathPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITABLEPATHPROPERTIESPAGE_H
#define UI_EDITABLEPATHPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditablePathPropertiesPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QCheckBox *abs_cb;
    QCheckBox *dbu_cb;
    QLabel *label_4;
    QFrame *frame1;
    QHBoxLayout *hboxLayout;
    QLabel *label_12;
    QLabel *layer_lbl;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *ptlist_le;
    QFrame *frame2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *prop_pb;
    QPushButton *inst_pb;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout2;
    QLabel *label_6;
    QLineEdit *start_ext_le;
    QLabel *label_8;
    QLineEdit *end_ext_le;
    QLineEdit *width_le;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QComboBox *type_cb;

    void setupUi(QWidget *EditablePathPropertiesPage)
    {
        if (EditablePathPropertiesPage->objectName().isEmpty())
            EditablePathPropertiesPage->setObjectName("EditablePathPropertiesPage");
        EditablePathPropertiesPage->resize(474, 378);
        gridLayout = new QGridLayout(EditablePathPropertiesPage);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(456, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 5, 0, 1, 3);

        abs_cb = new QCheckBox(EditablePathPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        gridLayout->addWidget(abs_cb, 7, 1, 1, 2);

        dbu_cb = new QCheckBox(EditablePathPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        gridLayout->addWidget(dbu_cb, 6, 1, 1, 2);

        label_4 = new QLabel(EditablePathPropertiesPage);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        frame1 = new QFrame(EditablePathPropertiesPage);
        frame1->setObjectName("frame1");
        frame1->setFrameShape(QFrame::NoFrame);
        frame1->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame1);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(frame1);
        label_12->setObjectName("label_12");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        hboxLayout->addWidget(label_12);

        layer_lbl = new QLabel(frame1);
        layer_lbl->setObjectName("layer_lbl");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layer_lbl->sizePolicy().hasHeightForWidth());
        layer_lbl->setSizePolicy(sizePolicy);
        layer_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(layer_lbl);


        gridLayout->addWidget(frame1, 0, 0, 1, 3);

        label_2 = new QLabel(EditablePathPropertiesPage);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(EditablePathPropertiesPage);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        ptlist_le = new QTextEdit(EditablePathPropertiesPage);
        ptlist_le->setObjectName("ptlist_le");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ptlist_le->sizePolicy().hasHeightForWidth());
        ptlist_le->setSizePolicy(sizePolicy1);
        ptlist_le->setLineWidth(2);

        gridLayout->addWidget(ptlist_le, 2, 1, 1, 2);

        frame2 = new QFrame(EditablePathPropertiesPage);
        frame2->setObjectName("frame2");
        frame2->setFrameShape(QFrame::NoFrame);
        frame2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        prop_pb = new QPushButton(frame2);
        prop_pb->setObjectName("prop_pb");

        hboxLayout1->addWidget(prop_pb);

        inst_pb = new QPushButton(frame2);
        inst_pb->setObjectName("inst_pb");

        hboxLayout1->addWidget(inst_pb);


        gridLayout->addWidget(frame2, 8, 0, 1, 3);

        frame_2 = new QFrame(EditablePathPropertiesPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_2);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        hboxLayout2->addWidget(label_6);

        start_ext_le = new QLineEdit(frame_2);
        start_ext_le->setObjectName("start_ext_le");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(start_ext_le->sizePolicy().hasHeightForWidth());
        start_ext_le->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(start_ext_le);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        hboxLayout2->addWidget(label_8);

        end_ext_le = new QLineEdit(frame_2);
        end_ext_le->setObjectName("end_ext_le");
        sizePolicy2.setHeightForWidth(end_ext_le->sizePolicy().hasHeightForWidth());
        end_ext_le->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(end_ext_le);


        gridLayout->addWidget(frame_2, 4, 1, 1, 2);

        width_le = new QLineEdit(EditablePathPropertiesPage);
        width_le->setObjectName("width_le");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(width_le->sizePolicy().hasHeightForWidth());
        width_le->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(width_le, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(191, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 1, 2, 1, 1);

        label = new QLabel(EditablePathPropertiesPage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        type_cb = new QComboBox(EditablePathPropertiesPage);
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->addItem(QString());
        type_cb->setObjectName("type_cb");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(type_cb->sizePolicy().hasHeightForWidth());
        type_cb->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(type_cb, 3, 1, 1, 2);

        QWidget::setTabOrder(width_le, ptlist_le);
        QWidget::setTabOrder(ptlist_le, type_cb);
        QWidget::setTabOrder(type_cb, start_ext_le);
        QWidget::setTabOrder(start_ext_le, end_ext_le);
        QWidget::setTabOrder(end_ext_le, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(EditablePathPropertiesPage);

        QMetaObject::connectSlotsByName(EditablePathPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *EditablePathPropertiesPage)
    {
        EditablePathPropertiesPage->setWindowTitle(QCoreApplication::translate("EditablePathPropertiesPage", "Form", nullptr));
        abs_cb->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        dbu_cb->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Coordinates in database units", nullptr));
        label_4->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Extension type", nullptr));
        label_12->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Path Properties", nullptr));
        layer_lbl->setText(QString());
        label_2->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Points (x,y)", nullptr));
        prop_pb->setText(QCoreApplication::translate("EditablePathPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Instantiation", nullptr));
        label_6->setText(QCoreApplication::translate("EditablePathPropertiesPage", "start =", nullptr));
        label_8->setText(QCoreApplication::translate("EditablePathPropertiesPage", " end =", nullptr));
        label->setText(QCoreApplication::translate("EditablePathPropertiesPage", "Var. extensions   ", nullptr));
        type_cb->setItemText(0, QCoreApplication::translate("EditablePathPropertiesPage", "Flush", nullptr));
        type_cb->setItemText(1, QCoreApplication::translate("EditablePathPropertiesPage", "Square", nullptr));
        type_cb->setItemText(2, QCoreApplication::translate("EditablePathPropertiesPage", "Variable", nullptr));
        type_cb->setItemText(3, QCoreApplication::translate("EditablePathPropertiesPage", "Round", nullptr));

    } // retranslateUi

};

namespace Ui {
    class EditablePathPropertiesPage: public Ui_EditablePathPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITABLEPATHPROPERTIESPAGE_H
