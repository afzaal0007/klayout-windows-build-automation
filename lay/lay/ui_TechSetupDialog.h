/********************************************************************************
** Form generated from reading UI file 'TechSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHSETUPDIALOG_H
#define UI_TECHSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechSetupDialog
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QTreeWidget *tech_tree;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout;
    QToolButton *add_pb;
    QToolButton *delete_pb;
    QToolButton *rename_pb;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout3;
    QStackedWidget *tc_stack;
    QWidget *def_page;
    QVBoxLayout *vboxLayout4;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TechSetupDialog)
    {
        if (TechSetupDialog->objectName().isEmpty())
            TechSetupDialog->setObjectName("TechSetupDialog");
        TechSetupDialog->resize(770, 615);
        vboxLayout = new QVBoxLayout(TechSetupDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        splitter = new QSplitter(TechSetupDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName("label");

        vboxLayout1->addWidget(label);

        tech_tree = new QTreeWidget(frame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tech_tree->setHeaderItem(__qtreewidgetitem);
        tech_tree->setObjectName("tech_tree");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tech_tree->sizePolicy().hasHeightForWidth());
        tech_tree->setSizePolicy(sizePolicy);
        tech_tree->setContextMenuPolicy(Qt::ActionsContextMenu);

        vboxLayout1->addWidget(tech_tree);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_4);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        add_pb = new QToolButton(frame_4);
        add_pb->setObjectName("add_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pb->setIcon(icon);
        add_pb->setAutoRaise(false);

        hboxLayout->addWidget(add_pb);

        delete_pb = new QToolButton(frame_4);
        delete_pb->setObjectName("delete_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_pb->setIcon(icon1);
        delete_pb->setAutoRaise(false);

        hboxLayout->addWidget(delete_pb);

        rename_pb = new QToolButton(frame_4);
        rename_pb->setObjectName("rename_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rename_16px@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        rename_pb->setIcon(icon2);

        hboxLayout->addWidget(rename_pb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);


        vboxLayout1->addWidget(frame_4);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        vboxLayout2->addWidget(label_2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout3 = new QVBoxLayout(frame_3);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName("vboxLayout3");
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        tc_stack = new QStackedWidget(frame_3);
        tc_stack->setObjectName("tc_stack");
        def_page = new QWidget();
        def_page->setObjectName("def_page");
        vboxLayout4 = new QVBoxLayout(def_page);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName("vboxLayout4");
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
        label_3 = new QLabel(def_page);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        vboxLayout4->addWidget(label_3);

        tc_stack->addWidget(def_page);

        vboxLayout3->addWidget(tc_stack);


        vboxLayout2->addWidget(frame_3);

        splitter->addWidget(frame_2);

        vboxLayout->addWidget(splitter);

        spacerItem = new QSpacerItem(504, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(TechSetupDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(TechSetupDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TechSetupDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TechSetupDialog, qOverload<>(&QDialog::reject));

        tc_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *TechSetupDialog)
    {
        TechSetupDialog->setWindowTitle(QCoreApplication::translate("TechSetupDialog", "Technology Manager", nullptr));
        label->setText(QCoreApplication::translate("TechSetupDialog", "Technologies", nullptr));
#if QT_CONFIG(tooltip)
        add_pb->setToolTip(QCoreApplication::translate("TechSetupDialog", "Add technology", nullptr));
#endif // QT_CONFIG(tooltip)
        add_pb->setText(QCoreApplication::translate("TechSetupDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        delete_pb->setToolTip(QCoreApplication::translate("TechSetupDialog", "Delete technology", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_pb->setText(QCoreApplication::translate("TechSetupDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        rename_pb->setToolTip(QCoreApplication::translate("TechSetupDialog", "Rename technology", nullptr));
#endif // QT_CONFIG(tooltip)
        rename_pb->setText(QCoreApplication::translate("TechSetupDialog", "Rename", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("TechSetupDialog", "Choose a category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechSetupDialog: public Ui_TechSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHSETUPDIALOG_H
