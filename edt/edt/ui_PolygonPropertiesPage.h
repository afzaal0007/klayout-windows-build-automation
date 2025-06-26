/********************************************************************************
** Form generated from reading UI file 'PolygonPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONPROPERTIESPAGE_H
#define UI_POLYGONPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolygonPropertiesPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *pointCountLabel;
    QLabel *label_3;
    QCheckBox *abs_cb;
    QCheckBox *dbu_cb;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *label_12;
    QLabel *layer_lbl;
    QFrame *frame1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *prop_pb;
    QPushButton *inst_pb;
    QTextEdit *pointListEdit;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *PolygonPropertiesPage)
    {
        if (PolygonPropertiesPage->objectName().isEmpty())
            PolygonPropertiesPage->setObjectName("PolygonPropertiesPage");
        PolygonPropertiesPage->resize(488, 282);
        gridLayout = new QGridLayout(PolygonPropertiesPage);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        pointCountLabel = new QLabel(PolygonPropertiesPage);
        pointCountLabel->setObjectName("pointCountLabel");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pointCountLabel->sizePolicy().hasHeightForWidth());
        pointCountLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pointCountLabel, 2, 0, 1, 1);

        label_3 = new QLabel(PolygonPropertiesPage);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        abs_cb = new QCheckBox(PolygonPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        gridLayout->addWidget(abs_cb, 6, 1, 1, 1);

        dbu_cb = new QCheckBox(PolygonPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        gridLayout->addWidget(dbu_cb, 5, 1, 1, 1);

        frame = new QFrame(PolygonPropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(frame);
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

        layer_lbl = new QLabel(frame);
        layer_lbl->setObjectName("layer_lbl");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layer_lbl->sizePolicy().hasHeightForWidth());
        layer_lbl->setSizePolicy(sizePolicy1);
        layer_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(layer_lbl);


        gridLayout->addWidget(frame, 0, 0, 1, 2);

        frame1 = new QFrame(PolygonPropertiesPage);
        frame1->setObjectName("frame1");
        frame1->setFrameShape(QFrame::NoFrame);
        frame1->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame1);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        prop_pb = new QPushButton(frame1);
        prop_pb->setObjectName("prop_pb");

        hboxLayout1->addWidget(prop_pb);

        inst_pb = new QPushButton(frame1);
        inst_pb->setObjectName("inst_pb");

        hboxLayout1->addWidget(inst_pb);


        gridLayout->addWidget(frame1, 7, 0, 1, 2);

        pointListEdit = new QTextEdit(PolygonPropertiesPage);
        pointListEdit->setObjectName("pointListEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pointListEdit->sizePolicy().hasHeightForWidth());
        pointListEdit->setSizePolicy(sizePolicy2);
        pointListEdit->setLineWidth(2);

        gridLayout->addWidget(pointListEdit, 1, 1, 3, 1);

        spacerItem2 = new QSpacerItem(470, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 4, 0, 1, 2);

        QWidget::setTabOrder(pointListEdit, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(PolygonPropertiesPage);

        QMetaObject::connectSlotsByName(PolygonPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *PolygonPropertiesPage)
    {
        PolygonPropertiesPage->setWindowTitle(QCoreApplication::translate("PolygonPropertiesPage", "Form", nullptr));
        pointCountLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("PolygonPropertiesPage", "Points (x,y)", nullptr));
        abs_cb->setText(QCoreApplication::translate("PolygonPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        dbu_cb->setText(QCoreApplication::translate("PolygonPropertiesPage", "Coordinates in database units", nullptr));
        label_12->setText(QCoreApplication::translate("PolygonPropertiesPage", "Polygon Properties", nullptr));
        layer_lbl->setText(QString());
        prop_pb->setText(QCoreApplication::translate("PolygonPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("PolygonPropertiesPage", "Instantiation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolygonPropertiesPage: public Ui_PolygonPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONPROPERTIESPAGE_H
