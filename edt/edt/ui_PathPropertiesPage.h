/********************************************************************************
** Form generated from reading UI file 'PathPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHPROPERTIESPAGE_H
#define UI_PATHPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_PathPropertiesPage
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLabel *label_6;
    QLineEdit *start_ext_le;
    QLabel *label_8;
    QLineEdit *end_ext_le;
    QCheckBox *abs_cb;
    QCheckBox *dbu_cb;
    QFrame *frame1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *prop_pb;
    QPushButton *inst_pb;
    QTextEdit *ptlist_le;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QLineEdit *width_le;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *frame2;
    QHBoxLayout *hboxLayout2;
    QLabel *label_12;
    QLabel *layer_lbl;
    QCheckBox *round_cb;

    void setupUi(QWidget *PathPropertiesPage)
    {
        if (PathPropertiesPage->objectName().isEmpty())
            PathPropertiesPage->setObjectName("PathPropertiesPage");
        PathPropertiesPage->resize(474, 368);
        gridLayout = new QGridLayout(PathPropertiesPage);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(PathPropertiesPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        hboxLayout->addWidget(label_6);

        start_ext_le = new QLineEdit(frame_2);
        start_ext_le->setObjectName("start_ext_le");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(start_ext_le->sizePolicy().hasHeightForWidth());
        start_ext_le->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(start_ext_le);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        hboxLayout->addWidget(label_8);

        end_ext_le = new QLineEdit(frame_2);
        end_ext_le->setObjectName("end_ext_le");
        sizePolicy.setHeightForWidth(end_ext_le->sizePolicy().hasHeightForWidth());
        end_ext_le->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(end_ext_le);


        gridLayout->addWidget(frame_2, 3, 1, 1, 2);

        abs_cb = new QCheckBox(PathPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        gridLayout->addWidget(abs_cb, 7, 1, 1, 2);

        dbu_cb = new QCheckBox(PathPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        gridLayout->addWidget(dbu_cb, 6, 1, 1, 2);

        frame1 = new QFrame(PathPropertiesPage);
        frame1->setObjectName("frame1");
        frame1->setFrameShape(QFrame::NoFrame);
        frame1->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame1);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        prop_pb = new QPushButton(frame1);
        prop_pb->setObjectName("prop_pb");

        hboxLayout1->addWidget(prop_pb);

        inst_pb = new QPushButton(frame1);
        inst_pb->setObjectName("inst_pb");

        hboxLayout1->addWidget(inst_pb);


        gridLayout->addWidget(frame1, 8, 0, 1, 3);

        ptlist_le = new QTextEdit(PathPropertiesPage);
        ptlist_le->setObjectName("ptlist_le");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ptlist_le->sizePolicy().hasHeightForWidth());
        ptlist_le->setSizePolicy(sizePolicy1);
        ptlist_le->setLineWidth(2);

        gridLayout->addWidget(ptlist_le, 2, 1, 1, 2);

        spacerItem1 = new QSpacerItem(451, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 5, 0, 1, 3);

        spacerItem2 = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 1, 2, 1, 1);

        label = new QLabel(PathPropertiesPage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        width_le = new QLineEdit(PathPropertiesPage);
        width_le->setObjectName("width_le");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(width_le->sizePolicy().hasHeightForWidth());
        width_le->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(width_le, 1, 1, 1, 1);

        label_3 = new QLabel(PathPropertiesPage);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(PathPropertiesPage);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        frame2 = new QFrame(PathPropertiesPage);
        frame2->setObjectName("frame2");
        frame2->setFrameShape(QFrame::NoFrame);
        frame2->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame2);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(frame2);
        label_12->setObjectName("label_12");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        hboxLayout2->addWidget(label_12);

        layer_lbl = new QLabel(frame2);
        layer_lbl->setObjectName("layer_lbl");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(layer_lbl->sizePolicy().hasHeightForWidth());
        layer_lbl->setSizePolicy(sizePolicy3);
        layer_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(layer_lbl);


        gridLayout->addWidget(frame2, 0, 0, 1, 3);

        round_cb = new QCheckBox(PathPropertiesPage);
        round_cb->setObjectName("round_cb");

        gridLayout->addWidget(round_cb, 4, 1, 1, 1);

        QWidget::setTabOrder(width_le, ptlist_le);
        QWidget::setTabOrder(ptlist_le, start_ext_le);
        QWidget::setTabOrder(start_ext_le, end_ext_le);
        QWidget::setTabOrder(end_ext_le, round_cb);
        QWidget::setTabOrder(round_cb, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(PathPropertiesPage);

        QMetaObject::connectSlotsByName(PathPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *PathPropertiesPage)
    {
        PathPropertiesPage->setWindowTitle(QCoreApplication::translate("PathPropertiesPage", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("PathPropertiesPage", "start =", nullptr));
        label_8->setText(QCoreApplication::translate("PathPropertiesPage", " end =", nullptr));
        abs_cb->setText(QCoreApplication::translate("PathPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        dbu_cb->setText(QCoreApplication::translate("PathPropertiesPage", "Coordinates in database units", nullptr));
        prop_pb->setText(QCoreApplication::translate("PathPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("PathPropertiesPage", "Instantiation", nullptr));
        label->setText(QCoreApplication::translate("PathPropertiesPage", "Extensions", nullptr));
        label_3->setText(QCoreApplication::translate("PathPropertiesPage", "Points (x,y)", nullptr));
        label_2->setText(QCoreApplication::translate("PathPropertiesPage", "Width", nullptr));
        label_12->setText(QCoreApplication::translate("PathPropertiesPage", "Path Properties", nullptr));
        layer_lbl->setText(QString());
        round_cb->setText(QCoreApplication::translate("PathPropertiesPage", "Round path ends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathPropertiesPage: public Ui_PathPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHPROPERTIESPAGE_H
