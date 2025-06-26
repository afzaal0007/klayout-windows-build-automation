/********************************************************************************
** Form generated from reading UI file 'AlignCellOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNCELLOPTIONSDIALOG_H
#define UI_ALIGNCELLOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlignCellOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QToolButton *ct;
    QToolButton *lt;
    QToolButton *rt;
    QToolButton *lc;
    QToolButton *cc;
    QToolButton *rc;
    QToolButton *lb;
    QToolButton *cb;
    QToolButton *rb;
    QSpacerItem *spacerItem1;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *x_le;
    QLabel *label_4;
    QLineEdit *y_le;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *vis_only_cbx;
    QCheckBox *adjust_calls_cbx;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AlignCellOptionsDialog)
    {
        if (AlignCellOptionsDialog->objectName().isEmpty())
            AlignCellOptionsDialog->setObjectName("AlignCellOptionsDialog");
        AlignCellOptionsDialog->resize(432, 349);
        vboxLayout = new QVBoxLayout(AlignCellOptionsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(AlignCellOptionsDialog);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        frame_2 = new QFrame(AlignCellOptionsDialog);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(15, 15, 15, 15);
        ct = new QToolButton(frame_3);
        ct->setObjectName("ct");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ct_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ct->setIcon(icon);
        ct->setIconSize(QSize(31, 31));
        ct->setCheckable(true);

        gridLayout->addWidget(ct, 0, 2, 1, 1);

        lt = new QToolButton(frame_3);
        lt->setObjectName("lt");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lt->setIcon(icon1);
        lt->setIconSize(QSize(31, 31));
        lt->setCheckable(true);

        gridLayout->addWidget(lt, 0, 0, 1, 1);

        rt = new QToolButton(frame_3);
        rt->setObjectName("rt");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rt->setIcon(icon2);
        rt->setIconSize(QSize(31, 31));
        rt->setCheckable(true);

        gridLayout->addWidget(rt, 0, 3, 1, 1);

        lc = new QToolButton(frame_3);
        lc->setObjectName("lc");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/lc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lc->setIcon(icon3);
        lc->setIconSize(QSize(31, 31));
        lc->setCheckable(true);

        gridLayout->addWidget(lc, 1, 0, 1, 1);

        cc = new QToolButton(frame_3);
        cc->setObjectName("cc");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cc->setIcon(icon4);
        cc->setIconSize(QSize(31, 31));
        cc->setCheckable(true);

        gridLayout->addWidget(cc, 1, 2, 1, 1);

        rc = new QToolButton(frame_3);
        rc->setObjectName("rc");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rc->setIcon(icon5);
        rc->setIconSize(QSize(31, 31));
        rc->setCheckable(true);

        gridLayout->addWidget(rc, 1, 3, 1, 1);

        lb = new QToolButton(frame_3);
        lb->setObjectName("lb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/lb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lb->setIcon(icon6);
        lb->setIconSize(QSize(31, 31));
        lb->setCheckable(true);

        gridLayout->addWidget(lb, 2, 0, 1, 1);

        cb = new QToolButton(frame_3);
        cb->setObjectName("cb");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb->setIcon(icon7);
        cb->setIconSize(QSize(31, 31));
        cb->setCheckable(true);

        gridLayout->addWidget(cb, 2, 2, 1, 1);

        rb = new QToolButton(frame_3);
        rb->setObjectName("rb");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rb->setIcon(icon8);
        rb->setIconSize(QSize(31, 31));
        rb->setCheckable(true);

        gridLayout->addWidget(rb, 2, 3, 1, 1);


        hboxLayout->addWidget(frame_3);

        spacerItem1 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(frame_2);

        frame_4 = new QFrame(AlignCellOptionsDialog);
        frame_4->setObjectName("frame_4");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        x_le = new QLineEdit(frame_4);
        x_le->setObjectName("x_le");

        horizontalLayout->addWidget(x_le);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        y_le = new QLineEdit(frame_4);
        y_le->setObjectName("y_le");

        horizontalLayout->addWidget(y_le);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        vboxLayout->addWidget(frame_4);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer);

        vis_only_cbx = new QCheckBox(AlignCellOptionsDialog);
        vis_only_cbx->setObjectName("vis_only_cbx");

        vboxLayout->addWidget(vis_only_cbx);

        adjust_calls_cbx = new QCheckBox(AlignCellOptionsDialog);
        adjust_calls_cbx->setObjectName("adjust_calls_cbx");

        vboxLayout->addWidget(adjust_calls_cbx);

        spacerItem2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        frame = new QFrame(AlignCellOptionsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(209, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        hboxLayout1->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        hboxLayout1->addWidget(pushButton_2);


        vboxLayout->addWidget(frame);

        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, lt);
        QWidget::setTabOrder(lt, ct);
        QWidget::setTabOrder(ct, rt);
        QWidget::setTabOrder(rt, lc);
        QWidget::setTabOrder(lc, cc);
        QWidget::setTabOrder(cc, rc);
        QWidget::setTabOrder(rc, lb);
        QWidget::setTabOrder(lb, cb);
        QWidget::setTabOrder(cb, rb);
        QWidget::setTabOrder(rb, x_le);
        QWidget::setTabOrder(x_le, y_le);
        QWidget::setTabOrder(y_le, vis_only_cbx);
        QWidget::setTabOrder(vis_only_cbx, adjust_calls_cbx);

        retranslateUi(AlignCellOptionsDialog);
        QObject::connect(pushButton, &QPushButton::clicked, AlignCellOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, AlignCellOptionsDialog, qOverload<>(&QDialog::reject));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(AlignCellOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *AlignCellOptionsDialog)
    {
        AlignCellOptionsDialog->setWindowTitle(QCoreApplication::translate("AlignCellOptionsDialog", "Adjust Cell Origin", nullptr));
        label->setText(QCoreApplication::translate("AlignCellOptionsDialog", "Place this cell reference point ...", nullptr));
        ct->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        lt->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        rt->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        lc->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        cc->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        rc->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        lb->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        cb->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        rb->setText(QCoreApplication::translate("AlignCellOptionsDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("AlignCellOptionsDialog", "... at     x:", nullptr));
        label_4->setText(QCoreApplication::translate("AlignCellOptionsDialog", "\302\265m,  y:", nullptr));
        label_2->setText(QCoreApplication::translate("AlignCellOptionsDialog", "\302\265m", nullptr));
        vis_only_cbx->setText(QCoreApplication::translate("AlignCellOptionsDialog", "Use visible layers only for bounding box", nullptr));
        adjust_calls_cbx->setText(QCoreApplication::translate("AlignCellOptionsDialog", "Adjust instances in parents", nullptr));
        pushButton->setText(QCoreApplication::translate("AlignCellOptionsDialog", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AlignCellOptionsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlignCellOptionsDialog: public Ui_AlignCellOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNCELLOPTIONSDIALOG_H
