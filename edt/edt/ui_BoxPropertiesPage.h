/********************************************************************************
** Form generated from reading UI file 'BoxPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXPROPERTIESPAGE_H
#define UI_BOXPROPERTIESPAGE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoxPropertiesPage
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame1;
    QHBoxLayout *hboxLayout;
    QLabel *label_12;
    QLabel *layer_lbl;
    QSpacerItem *spacerItem;
    QTabWidget *mode_tab;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QFrame *line_2;
    QLineEdit *y2_le_1;
    QLineEdit *x1_le_1;
    QLabel *label_13;
    QLineEdit *x2_le_1;
    QLabel *label_17;
    QLineEdit *y1_le_1;
    QLabel *label_18;
    QLabel *label_15;
    QLineEdit *w_le_1;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_14;
    QLineEdit *h_le_1;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *cx_le_1;
    QLineEdit *cy_le_1;
    QWidget *tab_3;
    QGridLayout *gridLayout1;
    QLineEdit *y1_le_2;
    QLineEdit *cy_le_2;
    QLabel *label_2;
    QFrame *line;
    QLineEdit *cx_le_2;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *h_le_2;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_7;
    QLineEdit *w_le_2;
    QLabel *label_8;
    QLineEdit *x1_le_2;
    QLabel *label_9;
    QLabel *label_5;
    QLineEdit *x2_le_2;
    QLineEdit *y2_le_2;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QSpacerItem *spacerItem1;
    QCheckBox *dbu_cb;
    QCheckBox *abs_cb;
    QSpacerItem *spacerItem2;
    QFrame *frame2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *prop_pb;
    QPushButton *inst_pb;

    void setupUi(QWidget *BoxPropertiesPage)
    {
        if (BoxPropertiesPage->objectName().isEmpty())
            BoxPropertiesPage->setObjectName("BoxPropertiesPage");
        BoxPropertiesPage->resize(531, 370);
        vboxLayout = new QVBoxLayout(BoxPropertiesPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        frame1 = new QFrame(BoxPropertiesPage);
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

        mode_tab = new QTabWidget(BoxPropertiesPage);
        mode_tab->setObjectName("mode_tab");
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout = new QGridLayout(tab_4);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_16 = new QLabel(tab_4);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 1, 1, 1, 1);

        line_2 = new QFrame(tab_4);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 5);

        y2_le_1 = new QLineEdit(tab_4);
        y2_le_1->setObjectName("y2_le_1");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(y2_le_1->sizePolicy().hasHeightForWidth());
        y2_le_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(y2_le_1, 1, 4, 1, 1);

        x1_le_1 = new QLineEdit(tab_4);
        x1_le_1->setObjectName("x1_le_1");
        sizePolicy1.setHeightForWidth(x1_le_1->sizePolicy().hasHeightForWidth());
        x1_le_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(x1_le_1, 0, 2, 1, 1);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 4, 3, 1, 1);

        x2_le_1 = new QLineEdit(tab_4);
        x2_le_1->setObjectName("x2_le_1");
        sizePolicy1.setHeightForWidth(x2_le_1->sizePolicy().hasHeightForWidth());
        x2_le_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(x2_le_1, 1, 2, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        y1_le_1 = new QLineEdit(tab_4);
        y1_le_1->setObjectName("y1_le_1");
        sizePolicy1.setHeightForWidth(y1_le_1->sizePolicy().hasHeightForWidth());
        y1_le_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(y1_le_1, 0, 4, 1, 1);

        label_18 = new QLabel(tab_4);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 4, 1, 1, 1);

        label_15 = new QLabel(tab_4);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        w_le_1 = new QLineEdit(tab_4);
        w_le_1->setObjectName("w_le_1");
        w_le_1->setEnabled(false);
        sizePolicy1.setHeightForWidth(w_le_1->sizePolicy().hasHeightForWidth());
        w_le_1->setSizePolicy(sizePolicy1);
        w_le_1->setReadOnly(true);

        gridLayout->addWidget(w_le_1, 4, 2, 1, 1);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 1, 3, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 0, 1, 1, 1);

        h_le_1 = new QLineEdit(tab_4);
        h_le_1->setObjectName("h_le_1");
        h_le_1->setEnabled(false);
        sizePolicy1.setHeightForWidth(h_le_1->sizePolicy().hasHeightForWidth());
        h_le_1->setSizePolicy(sizePolicy1);
        h_le_1->setReadOnly(true);

        gridLayout->addWidget(h_le_1, 4, 4, 1, 1);

        label_19 = new QLabel(tab_4);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 0, 3, 1, 1);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName("label_20");

        gridLayout->addWidget(label_20, 3, 0, 1, 1);

        label_21 = new QLabel(tab_4);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 3, 1, 1, 1);

        label_22 = new QLabel(tab_4);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 3, 3, 1, 1);

        cx_le_1 = new QLineEdit(tab_4);
        cx_le_1->setObjectName("cx_le_1");
        cx_le_1->setEnabled(false);
        cx_le_1->setReadOnly(true);

        gridLayout->addWidget(cx_le_1, 3, 2, 1, 1);

        cy_le_1 = new QLineEdit(tab_4);
        cy_le_1->setObjectName("cy_le_1");
        cy_le_1->setEnabled(false);
        cy_le_1->setReadOnly(true);

        gridLayout->addWidget(cy_le_1, 3, 4, 1, 1);

        mode_tab->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout1 = new QGridLayout(tab_3);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName("gridLayout1");
        y1_le_2 = new QLineEdit(tab_3);
        y1_le_2->setObjectName("y1_le_2");
        y1_le_2->setEnabled(false);
        sizePolicy1.setHeightForWidth(y1_le_2->sizePolicy().hasHeightForWidth());
        y1_le_2->setSizePolicy(sizePolicy1);
        y1_le_2->setReadOnly(true);

        gridLayout1->addWidget(y1_le_2, 3, 4, 1, 1);

        cy_le_2 = new QLineEdit(tab_3);
        cy_le_2->setObjectName("cy_le_2");
        sizePolicy1.setHeightForWidth(cy_le_2->sizePolicy().hasHeightForWidth());
        cy_le_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(cy_le_2, 0, 4, 1, 1);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        line = new QFrame(tab_3);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 2, 0, 1, 5);

        cx_le_2 = new QLineEdit(tab_3);
        cx_le_2->setObjectName("cx_le_2");
        sizePolicy1.setHeightForWidth(cx_le_2->sizePolicy().hasHeightForWidth());
        cx_le_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(cx_le_2, 0, 2, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 1, 1, 1, 1);

        label = new QLabel(tab_3);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        h_le_2 = new QLineEdit(tab_3);
        h_le_2->setObjectName("h_le_2");
        sizePolicy1.setHeightForWidth(h_le_2->sizePolicy().hasHeightForWidth());
        h_le_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(h_le_2, 1, 4, 1, 1);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 3, 0, 1, 1);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName("label_10");

        gridLayout1->addWidget(label_10, 3, 3, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 0, 3, 1, 1);

        w_le_2 = new QLineEdit(tab_3);
        w_le_2->setObjectName("w_le_2");
        sizePolicy1.setHeightForWidth(w_le_2->sizePolicy().hasHeightForWidth());
        w_le_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(w_le_2, 1, 2, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");

        gridLayout1->addWidget(label_8, 1, 3, 1, 1);

        x1_le_2 = new QLineEdit(tab_3);
        x1_le_2->setObjectName("x1_le_2");
        x1_le_2->setEnabled(false);
        sizePolicy1.setHeightForWidth(x1_le_2->sizePolicy().hasHeightForWidth());
        x1_le_2->setSizePolicy(sizePolicy1);
        x1_le_2->setReadOnly(true);

        gridLayout1->addWidget(x1_le_2, 3, 2, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName("label_9");

        gridLayout1->addWidget(label_9, 3, 1, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 0, 1, 1, 1);

        x2_le_2 = new QLineEdit(tab_3);
        x2_le_2->setObjectName("x2_le_2");
        x2_le_2->setEnabled(false);
        x2_le_2->setReadOnly(true);

        gridLayout1->addWidget(x2_le_2, 4, 2, 1, 1);

        y2_le_2 = new QLineEdit(tab_3);
        y2_le_2->setObjectName("y2_le_2");
        y2_le_2->setEnabled(false);
        y2_le_2->setReadOnly(true);

        gridLayout1->addWidget(y2_le_2, 4, 4, 1, 1);

        label_23 = new QLabel(tab_3);
        label_23->setObjectName("label_23");

        gridLayout1->addWidget(label_23, 4, 0, 1, 1);

        label_24 = new QLabel(tab_3);
        label_24->setObjectName("label_24");

        gridLayout1->addWidget(label_24, 4, 1, 1, 1);

        label_25 = new QLabel(tab_3);
        label_25->setObjectName("label_25");

        gridLayout1->addWidget(label_25, 4, 3, 1, 1);

        mode_tab->addTab(tab_3, QString());

        vboxLayout->addWidget(mode_tab);

        spacerItem1 = new QSpacerItem(478, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        dbu_cb = new QCheckBox(BoxPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        vboxLayout->addWidget(dbu_cb);

        abs_cb = new QCheckBox(BoxPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        vboxLayout->addWidget(abs_cb);

        spacerItem2 = new QSpacerItem(478, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        frame2 = new QFrame(BoxPropertiesPage);
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

        QWidget::setTabOrder(mode_tab, x1_le_1);
        QWidget::setTabOrder(x1_le_1, y1_le_1);
        QWidget::setTabOrder(y1_le_1, x2_le_1);
        QWidget::setTabOrder(x2_le_1, y2_le_1);
        QWidget::setTabOrder(y2_le_1, cx_le_1);
        QWidget::setTabOrder(cx_le_1, cy_le_1);
        QWidget::setTabOrder(cy_le_1, w_le_1);
        QWidget::setTabOrder(w_le_1, h_le_1);
        QWidget::setTabOrder(h_le_1, cx_le_2);
        QWidget::setTabOrder(cx_le_2, cy_le_2);
        QWidget::setTabOrder(cy_le_2, w_le_2);
        QWidget::setTabOrder(w_le_2, h_le_2);
        QWidget::setTabOrder(h_le_2, x1_le_2);
        QWidget::setTabOrder(x1_le_2, y1_le_2);
        QWidget::setTabOrder(y1_le_2, x2_le_2);
        QWidget::setTabOrder(x2_le_2, y2_le_2);
        QWidget::setTabOrder(y2_le_2, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(BoxPropertiesPage);

        mode_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BoxPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *BoxPropertiesPage)
    {
        BoxPropertiesPage->setWindowTitle(QCoreApplication::translate("BoxPropertiesPage", "Form", nullptr));
        label_12->setText(QCoreApplication::translate("BoxPropertiesPage", "Box Properties", nullptr));
        layer_lbl->setText(QString());
        label_16->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_13->setText(QCoreApplication::translate("BoxPropertiesPage", "h = ", nullptr));
        label_17->setText(QCoreApplication::translate("BoxPropertiesPage", "Width/height", nullptr));
        label_18->setText(QCoreApplication::translate("BoxPropertiesPage", "w = ", nullptr));
        label_15->setText(QCoreApplication::translate("BoxPropertiesPage", "Upper right (x/y) ", nullptr));
        label_4->setText(QCoreApplication::translate("BoxPropertiesPage", "Lower left (x/y)", nullptr));
        label_11->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        label_14->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_19->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        label_20->setText(QCoreApplication::translate("BoxPropertiesPage", "Center (x/y)", nullptr));
        label_21->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_22->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_4), QCoreApplication::translate("BoxPropertiesPage", "Corners", nullptr));
        label_2->setText(QCoreApplication::translate("BoxPropertiesPage", "Size (w/h)", nullptr));
        label_6->setText(QCoreApplication::translate("BoxPropertiesPage", "w = ", nullptr));
        label->setText(QCoreApplication::translate("BoxPropertiesPage", "Center (x/y)", nullptr));
        label_3->setText(QCoreApplication::translate("BoxPropertiesPage", "Lower left (x/y)", nullptr));
        label_10->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        label_7->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        label_8->setText(QCoreApplication::translate("BoxPropertiesPage", "h = ", nullptr));
        label_9->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_5->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_23->setText(QCoreApplication::translate("BoxPropertiesPage", "Upper right (x/y) ", nullptr));
        label_24->setText(QCoreApplication::translate("BoxPropertiesPage", "x = ", nullptr));
        label_25->setText(QCoreApplication::translate("BoxPropertiesPage", "y = ", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_3), QCoreApplication::translate("BoxPropertiesPage", "Center/Size", nullptr));
        dbu_cb->setText(QCoreApplication::translate("BoxPropertiesPage", "Coordinates in database units", nullptr));
        abs_cb->setText(QCoreApplication::translate("BoxPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        prop_pb->setText(QCoreApplication::translate("BoxPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("BoxPropertiesPage", "Instantiation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoxPropertiesPage: public Ui_BoxPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXPROPERTIESPAGE_H
