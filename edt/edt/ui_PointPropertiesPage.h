/********************************************************************************
** Form generated from reading UI file 'PointPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPROPERTIESPAGE_H
#define UI_POINTPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointPropertiesPage
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame1;
    QHBoxLayout *hboxLayout;
    QLabel *label_12;
    QLabel *layer_lbl;
    QSpacerItem *spacerItem;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLineEdit *x_le;
    QLabel *label_19;
    QLineEdit *y_le;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacerItem1;
    QCheckBox *dbu_cb;
    QCheckBox *abs_cb;
    QSpacerItem *spacerItem2;
    QFrame *frame2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *prop_pb;
    QPushButton *inst_pb;

    void setupUi(QWidget *PointPropertiesPage)
    {
        if (PointPropertiesPage->objectName().isEmpty())
            PointPropertiesPage->setObjectName("PointPropertiesPage");
        PointPropertiesPage->resize(531, 370);
        vboxLayout = new QVBoxLayout(PointPropertiesPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        frame1 = new QFrame(PointPropertiesPage);
        frame1->setObjectName("frame1");
        frame1->setFrameShape(QFrame::NoFrame);
        frame1->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame1);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
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


        vboxLayout->addWidget(frame1);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        label = new QLabel(PointPropertiesPage);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer);

        frame = new QFrame(PointPropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");

        horizontalLayout->addWidget(label_14);

        x_le = new QLineEdit(frame);
        x_le->setObjectName("x_le");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(x_le->sizePolicy().hasHeightForWidth());
        x_le->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(x_le);

        label_19 = new QLabel(frame);
        label_19->setObjectName("label_19");

        horizontalLayout->addWidget(label_19);

        y_le = new QLineEdit(frame);
        y_le->setObjectName("y_le");
        sizePolicy1.setHeightForWidth(y_le->sizePolicy().hasHeightForWidth());
        y_le->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(y_le);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        vboxLayout->addWidget(frame);

        spacerItem1 = new QSpacerItem(478, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        dbu_cb = new QCheckBox(PointPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        vboxLayout->addWidget(dbu_cb);

        abs_cb = new QCheckBox(PointPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        vboxLayout->addWidget(abs_cb);

        spacerItem2 = new QSpacerItem(478, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        frame2 = new QFrame(PointPropertiesPage);
        frame2->setObjectName("frame2");
        frame2->setFrameShape(QFrame::NoFrame);
        frame2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame2);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        spacerItem3 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        prop_pb = new QPushButton(frame2);
        prop_pb->setObjectName("prop_pb");

        hboxLayout1->addWidget(prop_pb);

        inst_pb = new QPushButton(frame2);
        inst_pb->setObjectName("inst_pb");

        hboxLayout1->addWidget(inst_pb);


        vboxLayout->addWidget(frame2);

        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(PointPropertiesPage);

        QMetaObject::connectSlotsByName(PointPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *PointPropertiesPage)
    {
        PointPropertiesPage->setWindowTitle(QCoreApplication::translate("PointPropertiesPage", "Form", nullptr));
        label_12->setText(QCoreApplication::translate("PointPropertiesPage", "Point Properties", nullptr));
        layer_lbl->setText(QString());
        label->setText(QCoreApplication::translate("PointPropertiesPage", "Point position", nullptr));
        label_14->setText(QCoreApplication::translate("PointPropertiesPage", "x = ", nullptr));
        label_19->setText(QCoreApplication::translate("PointPropertiesPage", "y = ", nullptr));
        dbu_cb->setText(QCoreApplication::translate("PointPropertiesPage", "Coordinates in database units", nullptr));
        abs_cb->setText(QCoreApplication::translate("PointPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        prop_pb->setText(QCoreApplication::translate("PointPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("PointPropertiesPage", "Instantiation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointPropertiesPage: public Ui_PointPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPROPERTIESPAGE_H
