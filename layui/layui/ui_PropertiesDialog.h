/********************************************************************************
** Form generated from reading UI file 'PropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeView *tree;
    QFrame *content_frame;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QPushButton *prev_button;
    QPushButton *next_button;
    QSpacerItem *horizontalSpacer;
    QCheckBox *apply_to_all_cbx;
    QCheckBox *relative_cbx;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName("PropertiesDialog");
        PropertiesDialog->resize(828, 567);
        verticalLayout = new QVBoxLayout(PropertiesDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(PropertiesDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        tree = new QTreeView(splitter);
        tree->setObjectName("tree");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tree->sizePolicy().hasHeightForWidth());
        tree->setSizePolicy(sizePolicy);
        tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tree->setIconSize(QSize(16, 16));
        tree->setUniformRowHeights(true);
        splitter->addWidget(tree);
        tree->header()->setVisible(false);
        tree->header()->setStretchLastSection(false);
        content_frame = new QFrame(splitter);
        content_frame->setObjectName("content_frame");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(content_frame->sizePolicy().hasHeightForWidth());
        content_frame->setSizePolicy(sizePolicy1);
        content_frame->setFrameShape(QFrame::StyledPanel);
        content_frame->setFrameShadow(QFrame::Raised);
        splitter->addWidget(content_frame);

        verticalLayout->addWidget(splitter);

        frame = new QFrame(PropertiesDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        prev_button = new QPushButton(frame);
        prev_button->setObjectName("prev_button");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(prev_button->sizePolicy().hasHeightForWidth());
        prev_button->setSizePolicy(sizePolicy3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/left_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        prev_button->setIcon(icon);

        hboxLayout->addWidget(prev_button);

        next_button = new QPushButton(frame);
        next_button->setObjectName("next_button");
        sizePolicy3.setHeightForWidth(next_button->sizePolicy().hasHeightForWidth());
        next_button->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/right_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_button->setIcon(icon1);

        hboxLayout->addWidget(next_button);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        apply_to_all_cbx = new QCheckBox(frame);
        apply_to_all_cbx->setObjectName("apply_to_all_cbx");

        hboxLayout->addWidget(apply_to_all_cbx);

        relative_cbx = new QCheckBox(frame);
        relative_cbx->setObjectName("relative_cbx");
        relative_cbx->setEnabled(false);

        hboxLayout->addWidget(relative_cbx);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ok_button = new QPushButton(frame);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);

        cancel_button = new QPushButton(frame);
        cancel_button->setObjectName("cancel_button");

        hboxLayout->addWidget(cancel_button);


        verticalLayout->addWidget(frame);


        retranslateUi(PropertiesDialog);
        QObject::connect(apply_to_all_cbx, &QCheckBox::toggled, relative_cbx, &QCheckBox::setEnabled);

        prev_button->setDefault(false);
        next_button->setDefault(false);
        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QCoreApplication::translate("PropertiesDialog", "Object Properties", nullptr));
        prev_button->setText(QCoreApplication::translate("PropertiesDialog", "Previous", nullptr));
        next_button->setText(QCoreApplication::translate("PropertiesDialog", "Next", nullptr));
        apply_to_all_cbx->setText(QCoreApplication::translate("PropertiesDialog", "Change all", nullptr));
        relative_cbx->setText(QCoreApplication::translate("PropertiesDialog", "Relative", nullptr));
        ok_button->setText(QCoreApplication::translate("PropertiesDialog", "Ok", nullptr));
        cancel_button->setText(QCoreApplication::translate("PropertiesDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
