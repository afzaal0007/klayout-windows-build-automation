/********************************************************************************
** Form generated from reading UI file 'MoveToOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVETOOPTIONSDIALOG_H
#define UI_MOVETOOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_MoveToOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_6;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *x_le;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *y_le;
    QLabel *label_3;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QFrame *frame_3;
    QGridLayout *gridLayout1;
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
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MoveToOptionsDialog)
    {
        if (MoveToOptionsDialog->objectName().isEmpty())
            MoveToOptionsDialog->setObjectName("MoveToOptionsDialog");
        MoveToOptionsDialog->resize(396, 345);
        vboxLayout = new QVBoxLayout(MoveToOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        label_6 = new QLabel(MoveToOptionsDialog);
        label_6->setObjectName("label_6");

        vboxLayout->addWidget(label_6);

        frame_4 = new QFrame(MoveToOptionsDialog);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        x_le = new QLineEdit(frame_4);
        x_le->setObjectName("x_le");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(x_le->sizePolicy().hasHeightForWidth());
        x_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(x_le, 0, 1, 1, 1);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        y_le = new QLineEdit(frame_4);
        y_le->setObjectName("y_le");
        sizePolicy.setHeightForWidth(y_le->sizePolicy().hasHeightForWidth());
        y_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(y_le, 1, 1, 1, 1);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 1, 1);


        vboxLayout->addWidget(frame_4);

        label = new QLabel(MoveToOptionsDialog);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        frame_2 = new QFrame(MoveToOptionsDialog);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frame_3);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(15, 15, 15, 15);
        gridLayout1->setObjectName("gridLayout1");
        ct = new QToolButton(frame_3);
        ct->setObjectName("ct");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ct_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ct->setIcon(icon);
        ct->setIconSize(QSize(31, 31));
        ct->setCheckable(true);

        gridLayout1->addWidget(ct, 0, 2, 1, 1);

        lt = new QToolButton(frame_3);
        lt->setObjectName("lt");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lt->setIcon(icon1);
        lt->setIconSize(QSize(31, 31));
        lt->setCheckable(true);

        gridLayout1->addWidget(lt, 0, 0, 1, 1);

        rt = new QToolButton(frame_3);
        rt->setObjectName("rt");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rt->setIcon(icon2);
        rt->setIconSize(QSize(31, 31));
        rt->setCheckable(true);

        gridLayout1->addWidget(rt, 0, 3, 1, 1);

        lc = new QToolButton(frame_3);
        lc->setObjectName("lc");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/lc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lc->setIcon(icon3);
        lc->setIconSize(QSize(31, 31));
        lc->setCheckable(true);

        gridLayout1->addWidget(lc, 1, 0, 1, 1);

        cc = new QToolButton(frame_3);
        cc->setObjectName("cc");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cc->setIcon(icon4);
        cc->setIconSize(QSize(31, 31));
        cc->setCheckable(true);

        gridLayout1->addWidget(cc, 1, 2, 1, 1);

        rc = new QToolButton(frame_3);
        rc->setObjectName("rc");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rc->setIcon(icon5);
        rc->setIconSize(QSize(31, 31));
        rc->setCheckable(true);

        gridLayout1->addWidget(rc, 1, 3, 1, 1);

        lb = new QToolButton(frame_3);
        lb->setObjectName("lb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/lb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lb->setIcon(icon6);
        lb->setIconSize(QSize(31, 31));
        lb->setCheckable(true);

        gridLayout1->addWidget(lb, 2, 0, 1, 1);

        cb = new QToolButton(frame_3);
        cb->setObjectName("cb");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb->setIcon(icon7);
        cb->setIconSize(QSize(31, 31));
        cb->setCheckable(true);

        gridLayout1->addWidget(cb, 2, 2, 1, 1);

        rb = new QToolButton(frame_3);
        rb->setObjectName("rb");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rb->setIcon(icon8);
        rb->setIconSize(QSize(31, 31));
        rb->setCheckable(true);

        gridLayout1->addWidget(rb, 2, 3, 1, 1);


        hboxLayout->addWidget(frame_3);

        spacerItem1 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(frame_2);

        frame = new QFrame(MoveToOptionsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        spacerItem2 = new QSpacerItem(209, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

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

        retranslateUi(MoveToOptionsDialog);
        QObject::connect(pushButton, &QPushButton::clicked, MoveToOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, MoveToOptionsDialog, qOverload<>(&QDialog::reject));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(MoveToOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *MoveToOptionsDialog)
    {
        MoveToOptionsDialog->setWindowTitle(QCoreApplication::translate("MoveToOptionsDialog", "Move Selection To", nullptr));
        label_6->setText(QCoreApplication::translate("MoveToOptionsDialog", "Target position", nullptr));
        label_4->setText(QCoreApplication::translate("MoveToOptionsDialog", "x    ", nullptr));
        x_le->setText(QString());
        label_2->setText(QCoreApplication::translate("MoveToOptionsDialog", "\302\265m", nullptr));
        label_5->setText(QCoreApplication::translate("MoveToOptionsDialog", "y    ", nullptr));
        label_3->setText(QCoreApplication::translate("MoveToOptionsDialog", "\302\265m", nullptr));
        label->setText(QCoreApplication::translate("MoveToOptionsDialog", "Reposition selection by using as reference point:", nullptr));
        ct->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        lt->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        rt->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        lc->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        cc->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        rc->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        lb->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        cb->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        rb->setText(QCoreApplication::translate("MoveToOptionsDialog", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("MoveToOptionsDialog", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MoveToOptionsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveToOptionsDialog: public Ui_MoveToOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVETOOPTIONSDIALOG_H
