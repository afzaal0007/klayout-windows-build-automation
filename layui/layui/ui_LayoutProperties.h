/********************************************************************************
** Form generated from reading UI file 'LayoutProperties.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTPROPERTIES_H
#define UI_LAYOUTPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LayoutPropertiesForm
{
public:
    QGridLayout *gridLayout;
    QFrame *controls_frame;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QLineEdit *dbu_le;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *tech_cbx;
    QFrame *line;
    QComboBox *layout_cbx;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QFrame *line_2;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *prop_pb;

    void setupUi(QDialog *LayoutPropertiesForm)
    {
        if (LayoutPropertiesForm->objectName().isEmpty())
            LayoutPropertiesForm->setObjectName("LayoutPropertiesForm");
        LayoutPropertiesForm->resize(584, 255);
        gridLayout = new QGridLayout(LayoutPropertiesForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        controls_frame = new QFrame(LayoutPropertiesForm);
        controls_frame->setObjectName("controls_frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controls_frame->sizePolicy().hasHeightForWidth());
        controls_frame->setSizePolicy(sizePolicy);
        controls_frame->setFrameShape(QFrame::NoFrame);
        controls_frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(controls_frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName("gridLayout1");
        spacerItem = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 3, 1, 1);

        label_3 = new QLabel(controls_frame);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 1, 2, 1, 1);

        dbu_le = new QLineEdit(controls_frame);
        dbu_le->setObjectName("dbu_le");

        gridLayout1->addWidget(dbu_le, 1, 1, 1, 1);

        label_2 = new QLabel(controls_frame);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(controls_frame);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        tech_cbx = new QComboBox(controls_frame);
        tech_cbx->setObjectName("tech_cbx");

        gridLayout1->addWidget(tech_cbx, 0, 1, 1, 3);


        gridLayout->addWidget(controls_frame, 2, 0, 1, 2);

        line = new QFrame(LayoutPropertiesForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 2);

        layout_cbx = new QComboBox(LayoutPropertiesForm);
        layout_cbx->setObjectName("layout_cbx");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layout_cbx->sizePolicy().hasHeightForWidth());
        layout_cbx->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(layout_cbx, 0, 1, 1, 1);

        frame5 = new QFrame(LayoutPropertiesForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        buttonBox = new QDialogButtonBox(frame5);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addWidget(frame5, 6, 0, 1, 2);

        label = new QLabel(LayoutPropertiesForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_2 = new QFrame(LayoutPropertiesForm);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 0, 1, 2);

        frame = new QFrame(LayoutPropertiesForm);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(445, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        prop_pb = new QPushButton(frame);
        prop_pb->setObjectName("prop_pb");

        horizontalLayout->addWidget(prop_pb);


        gridLayout->addWidget(frame, 4, 0, 1, 2);


        retranslateUi(LayoutPropertiesForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LayoutPropertiesForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LayoutPropertiesForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LayoutPropertiesForm);
    } // setupUi

    void retranslateUi(QDialog *LayoutPropertiesForm)
    {
        LayoutPropertiesForm->setWindowTitle(QCoreApplication::translate("LayoutPropertiesForm", "Layout Properties", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutPropertiesForm", "micron", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutPropertiesForm", "Database unit", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutPropertiesForm", "Technology", nullptr));
        label->setText(QCoreApplication::translate("LayoutPropertiesForm", "Show properties of ...", nullptr));
        prop_pb->setText(QCoreApplication::translate("LayoutPropertiesForm", "User Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutPropertiesForm: public Ui_LayoutPropertiesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTPROPERTIES_H
