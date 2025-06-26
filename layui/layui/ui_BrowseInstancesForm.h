/********************************************************************************
** Form generated from reading UI file 'BrowseInstancesForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSEINSTANCESFORM_H
#define UI_BROWSEINSTANCESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrowseInstancesForm
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter2;
    QFrame *cell_frame;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QToolButton *pb_next_cell;
    QTreeWidget *lv_cell;
    QToolButton *pb_prev_cell;
    QFrame *inst_frame;
    QGridLayout *gridLayout1;
    QToolButton *pb_next_inst;
    QSpacerItem *spacerItem1;
    QTreeWidget *lv_cell_instance;
    QToolButton *pb_prev_inst;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *configureButton;
    QPushButton *chooseCellButton;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;

    void setupUi(QDialog *BrowseInstancesForm)
    {
        if (BrowseInstancesForm->objectName().isEmpty())
            BrowseInstancesForm->setObjectName("BrowseInstancesForm");
        BrowseInstancesForm->resize(549, 193);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BrowseInstancesForm->sizePolicy().hasHeightForWidth());
        BrowseInstancesForm->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(BrowseInstancesForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName("vboxLayout");
        splitter2 = new QSplitter(BrowseInstancesForm);
        splitter2->setObjectName("splitter2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(splitter2->sizePolicy().hasHeightForWidth());
        splitter2->setSizePolicy(sizePolicy1);
        splitter2->setFrameShape(QFrame::NoFrame);
        splitter2->setFrameShadow(QFrame::Plain);
        splitter2->setLineWidth(1);
        splitter2->setOrientation(Qt::Horizontal);
        cell_frame = new QFrame(splitter2);
        cell_frame->setObjectName("cell_frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(cell_frame->sizePolicy().hasHeightForWidth());
        cell_frame->setSizePolicy(sizePolicy2);
        cell_frame->setFrameShape(QFrame::NoFrame);
        cell_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(cell_frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        pb_next_cell = new QToolButton(cell_frame);
        pb_next_cell->setObjectName("pb_next_cell");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_next_cell->setIcon(icon);

        gridLayout->addWidget(pb_next_cell, 1, 1, 1, 1);

        lv_cell = new QTreeWidget(cell_frame);
        lv_cell->setObjectName("lv_cell");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lv_cell->sizePolicy().hasHeightForWidth());
        lv_cell->setSizePolicy(sizePolicy3);
        lv_cell->setRootIsDecorated(false);

        gridLayout->addWidget(lv_cell, 0, 0, 1, 3);

        pb_prev_cell = new QToolButton(cell_frame);
        pb_prev_cell->setObjectName("pb_prev_cell");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_prev_cell->setIcon(icon1);

        gridLayout->addWidget(pb_prev_cell, 1, 0, 1, 1);

        splitter2->addWidget(cell_frame);
        inst_frame = new QFrame(splitter2);
        inst_frame->setObjectName("inst_frame");
        sizePolicy.setHeightForWidth(inst_frame->sizePolicy().hasHeightForWidth());
        inst_frame->setSizePolicy(sizePolicy);
        inst_frame->setFrameShape(QFrame::NoFrame);
        inst_frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(inst_frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName("gridLayout1");
        pb_next_inst = new QToolButton(inst_frame);
        pb_next_inst->setObjectName("pb_next_inst");
        pb_next_inst->setIcon(icon);

        gridLayout1->addWidget(pb_next_inst, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 2, 1, 1);

        lv_cell_instance = new QTreeWidget(inst_frame);
        lv_cell_instance->setObjectName("lv_cell_instance");
        sizePolicy3.setHeightForWidth(lv_cell_instance->sizePolicy().hasHeightForWidth());
        lv_cell_instance->setSizePolicy(sizePolicy3);
        lv_cell_instance->setRootIsDecorated(false);

        gridLayout1->addWidget(lv_cell_instance, 0, 0, 1, 3);

        pb_prev_inst = new QToolButton(inst_frame);
        pb_prev_inst->setObjectName("pb_prev_inst");
        pb_prev_inst->setIcon(icon1);

        gridLayout1->addWidget(pb_prev_inst, 1, 0, 1, 1);

        splitter2->addWidget(inst_frame);

        vboxLayout->addWidget(splitter2);

        line = new QFrame(BrowseInstancesForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        configureButton = new QPushButton(BrowseInstancesForm);
        configureButton->setObjectName("configureButton");
        configureButton->setAutoDefault(false);

        hboxLayout->addWidget(configureButton);

        chooseCellButton = new QPushButton(BrowseInstancesForm);
        chooseCellButton->setObjectName("chooseCellButton");

        hboxLayout->addWidget(chooseCellButton);

        spacerItem2 = new QSpacerItem(283, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        okButton = new QPushButton(BrowseInstancesForm);
        okButton->setObjectName("okButton");

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(BrowseInstancesForm);
        QObject::connect(okButton, &QPushButton::clicked, BrowseInstancesForm, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(BrowseInstancesForm);
    } // setupUi

    void retranslateUi(QDialog *BrowseInstancesForm)
    {
        BrowseInstancesForm->setWindowTitle(QCoreApplication::translate("BrowseInstancesForm", "Browse Cell Instances", nullptr));
        pb_next_cell->setText(QCoreApplication::translate("BrowseInstancesForm", ">", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = lv_cell->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BrowseInstancesForm", "Flat", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BrowseInstancesForm", "Count", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BrowseInstancesForm", "Parent", nullptr));
        pb_prev_cell->setText(QCoreApplication::translate("BrowseInstancesForm", "<", nullptr));
        pb_next_inst->setText(QCoreApplication::translate("BrowseInstancesForm", ">", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = lv_cell_instance->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("BrowseInstancesForm", "Path", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("BrowseInstancesForm", "Cell instance", nullptr));
        pb_prev_inst->setText(QCoreApplication::translate("BrowseInstancesForm", "<", nullptr));
        configureButton->setText(QCoreApplication::translate("BrowseInstancesForm", "Configure", nullptr));
        chooseCellButton->setText(QCoreApplication::translate("BrowseInstancesForm", "Choose Cell", nullptr));
        okButton->setText(QCoreApplication::translate("BrowseInstancesForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowseInstancesForm: public Ui_BrowseInstancesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSEINSTANCESFORM_H
