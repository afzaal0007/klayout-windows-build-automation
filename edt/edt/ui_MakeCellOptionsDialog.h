/********************************************************************************
** Form generated from reading UI file 'MakeCellOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKECELLOPTIONSDIALOG_H
#define UI_MAKECELLOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MakeCellOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLineEdit *cell_name_le;
    QGroupBox *origin_groupbox;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QFrame *frame_3;
    QGridLayout *_3;
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
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MakeCellOptionsDialog)
    {
        if (MakeCellOptionsDialog->objectName().isEmpty())
            MakeCellOptionsDialog->setObjectName("MakeCellOptionsDialog");
        MakeCellOptionsDialog->resize(483, 367);
        vboxLayout = new QVBoxLayout(MakeCellOptionsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(MakeCellOptionsDialog);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        cell_name_le = new QLineEdit(groupBox);
        cell_name_le->setObjectName("cell_name_le");

        vboxLayout1->addWidget(cell_name_le);


        vboxLayout->addWidget(groupBox);

        origin_groupbox = new QGroupBox(MakeCellOptionsDialog);
        origin_groupbox->setObjectName("origin_groupbox");
        origin_groupbox->setMinimumSize(QSize(0, 0));
        origin_groupbox->setCheckable(true);
        verticalLayout = new QVBoxLayout(origin_groupbox);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(origin_groupbox);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        _2 = new QHBoxLayout(frame_2);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        _3 = new QGridLayout(frame_3);
        _3->setSpacing(6);
        _3->setObjectName("_3");
        _3->setContentsMargins(15, 15, 15, 15);
        ct = new QToolButton(frame_3);
        ct->setObjectName("ct");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ct_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ct->setIcon(icon);
        ct->setIconSize(QSize(31, 31));
        ct->setCheckable(true);

        _3->addWidget(ct, 0, 2, 1, 1);

        lt = new QToolButton(frame_3);
        lt->setObjectName("lt");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lt->setIcon(icon1);
        lt->setIconSize(QSize(31, 31));
        lt->setCheckable(true);

        _3->addWidget(lt, 0, 0, 1, 1);

        rt = new QToolButton(frame_3);
        rt->setObjectName("rt");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rt_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rt->setIcon(icon2);
        rt->setIconSize(QSize(31, 31));
        rt->setCheckable(true);

        _3->addWidget(rt, 0, 3, 1, 1);

        lc = new QToolButton(frame_3);
        lc->setObjectName("lc");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/lc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lc->setIcon(icon3);
        lc->setIconSize(QSize(31, 31));
        lc->setCheckable(true);

        _3->addWidget(lc, 1, 0, 1, 1);

        cc = new QToolButton(frame_3);
        cc->setObjectName("cc");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cc->setIcon(icon4);
        cc->setIconSize(QSize(31, 31));
        cc->setCheckable(true);

        _3->addWidget(cc, 1, 2, 1, 1);

        rc = new QToolButton(frame_3);
        rc->setObjectName("rc");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rc_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rc->setIcon(icon5);
        rc->setIconSize(QSize(31, 31));
        rc->setCheckable(true);

        _3->addWidget(rc, 1, 3, 1, 1);

        lb = new QToolButton(frame_3);
        lb->setObjectName("lb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/lb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        lb->setIcon(icon6);
        lb->setIconSize(QSize(31, 31));
        lb->setCheckable(true);

        _3->addWidget(lb, 2, 0, 1, 1);

        cb = new QToolButton(frame_3);
        cb->setObjectName("cb");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        cb->setIcon(icon7);
        cb->setIconSize(QSize(31, 31));
        cb->setCheckable(true);

        _3->addWidget(cb, 2, 2, 1, 1);

        rb = new QToolButton(frame_3);
        rb->setObjectName("rb");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rb_31px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rb->setIcon(icon8);
        rb->setIconSize(QSize(31, 31));
        rb->setCheckable(true);

        _3->addWidget(rb, 2, 3, 1, 1);


        _2->addWidget(frame_3);

        spacerItem1 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem1);


        verticalLayout->addWidget(frame_2);


        vboxLayout->addWidget(origin_groupbox);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(MakeCellOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(MakeCellOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MakeCellOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MakeCellOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MakeCellOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *MakeCellOptionsDialog)
    {
        MakeCellOptionsDialog->setWindowTitle(QCoreApplication::translate("MakeCellOptionsDialog", "Make Cell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MakeCellOptionsDialog", "Name of cell to make from selected shapes and instances:", nullptr));
        origin_groupbox->setTitle(QCoreApplication::translate("MakeCellOptionsDialog", "Put origin relative to cell's bounding bo&x at ...", nullptr));
        ct->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        lt->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        rt->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        lc->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        cc->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        rc->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        lb->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        cb->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
        rb->setText(QCoreApplication::translate("MakeCellOptionsDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeCellOptionsDialog: public Ui_MakeCellOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKECELLOPTIONSDIALOG_H
