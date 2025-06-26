/********************************************************************************
** Form generated from reading UI file 'BrowseShapesForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSESHAPESFORM_H
#define UI_BROWSESHAPESFORM_H

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

class Ui_BrowseShapesForm
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QFrame *cell_frame;
    QGridLayout *gridLayout;
    QToolButton *pb_next_cell;
    QToolButton *pb_prev_cell;
    QTreeWidget *lv_cell;
    QSpacerItem *spacerItem;
    QFrame *shape_inst_frame;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QToolButton *pb_next_shape;
    QToolButton *pb_prev_shape;
    QTreeWidget *lv_shape_instance;
    QFrame *inst_frame;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem2;
    QToolButton *pb_next_inst;
    QToolButton *pb_prev_inst;
    QTreeWidget *lv_cell_instance;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *configureButton;
    QSpacerItem *spacerItem3;
    QPushButton *okButton;

    void setupUi(QDialog *BrowseShapesForm)
    {
        if (BrowseShapesForm->objectName().isEmpty())
            BrowseShapesForm->setObjectName("BrowseShapesForm");
        BrowseShapesForm->resize(755, 199);
        vboxLayout = new QVBoxLayout(BrowseShapesForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName("vboxLayout");
        splitter = new QSplitter(BrowseShapesForm);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Raised);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        cell_frame = new QFrame(splitter);
        cell_frame->setObjectName("cell_frame");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(cell_frame->sizePolicy().hasHeightForWidth());
        cell_frame->setSizePolicy(sizePolicy1);
        cell_frame->setFrameShape(QFrame::NoFrame);
        cell_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(cell_frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName("gridLayout");
        pb_next_cell = new QToolButton(cell_frame);
        pb_next_cell->setObjectName("pb_next_cell");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_next_cell->setIcon(icon);

        gridLayout->addWidget(pb_next_cell, 1, 1, 1, 1);

        pb_prev_cell = new QToolButton(cell_frame);
        pb_prev_cell->setObjectName("pb_prev_cell");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_prev_cell->setIcon(icon1);

        gridLayout->addWidget(pb_prev_cell, 1, 0, 1, 1);

        lv_cell = new QTreeWidget(cell_frame);
        lv_cell->setObjectName("lv_cell");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lv_cell->sizePolicy().hasHeightForWidth());
        lv_cell->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lv_cell, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        splitter->addWidget(cell_frame);
        shape_inst_frame = new QFrame(splitter);
        shape_inst_frame->setObjectName("shape_inst_frame");
        sizePolicy1.setHeightForWidth(shape_inst_frame->sizePolicy().hasHeightForWidth());
        shape_inst_frame->setSizePolicy(sizePolicy1);
        shape_inst_frame->setFrameShape(QFrame::NoFrame);
        shape_inst_frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(shape_inst_frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName("gridLayout1");
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 2, 1, 1);

        pb_next_shape = new QToolButton(shape_inst_frame);
        pb_next_shape->setObjectName("pb_next_shape");
        pb_next_shape->setIcon(icon);

        gridLayout1->addWidget(pb_next_shape, 1, 1, 1, 1);

        pb_prev_shape = new QToolButton(shape_inst_frame);
        pb_prev_shape->setObjectName("pb_prev_shape");
        pb_prev_shape->setIcon(icon1);

        gridLayout1->addWidget(pb_prev_shape, 1, 0, 1, 1);

        lv_shape_instance = new QTreeWidget(shape_inst_frame);
        lv_shape_instance->setObjectName("lv_shape_instance");
        sizePolicy2.setHeightForWidth(lv_shape_instance->sizePolicy().hasHeightForWidth());
        lv_shape_instance->setSizePolicy(sizePolicy2);
        lv_shape_instance->setRootIsDecorated(false);

        gridLayout1->addWidget(lv_shape_instance, 0, 0, 1, 3);

        splitter->addWidget(shape_inst_frame);
        inst_frame = new QFrame(splitter);
        inst_frame->setObjectName("inst_frame");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inst_frame->sizePolicy().hasHeightForWidth());
        inst_frame->setSizePolicy(sizePolicy3);
        inst_frame->setFrameShape(QFrame::NoFrame);
        inst_frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(inst_frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(4, 4, 4, 4);
        gridLayout2->setObjectName("gridLayout2");
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 1, 2, 1, 1);

        pb_next_inst = new QToolButton(inst_frame);
        pb_next_inst->setObjectName("pb_next_inst");
        pb_next_inst->setIcon(icon);

        gridLayout2->addWidget(pb_next_inst, 1, 1, 1, 1);

        pb_prev_inst = new QToolButton(inst_frame);
        pb_prev_inst->setObjectName("pb_prev_inst");
        pb_prev_inst->setIcon(icon1);

        gridLayout2->addWidget(pb_prev_inst, 1, 0, 1, 1);

        lv_cell_instance = new QTreeWidget(inst_frame);
        lv_cell_instance->setObjectName("lv_cell_instance");
        sizePolicy2.setHeightForWidth(lv_cell_instance->sizePolicy().hasHeightForWidth());
        lv_cell_instance->setSizePolicy(sizePolicy2);
        lv_cell_instance->setRootIsDecorated(false);

        gridLayout2->addWidget(lv_cell_instance, 0, 0, 1, 3);

        splitter->addWidget(inst_frame);

        vboxLayout->addWidget(splitter);

        line = new QFrame(BrowseShapesForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        configureButton = new QPushButton(BrowseShapesForm);
        configureButton->setObjectName("configureButton");
        configureButton->setAutoDefault(false);

        hboxLayout->addWidget(configureButton);

        spacerItem3 = new QSpacerItem(325, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        okButton = new QPushButton(BrowseShapesForm);
        okButton->setObjectName("okButton");

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(BrowseShapesForm);
        QObject::connect(okButton, &QPushButton::clicked, BrowseShapesForm, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(BrowseShapesForm);
    } // setupUi

    void retranslateUi(QDialog *BrowseShapesForm)
    {
        BrowseShapesForm->setWindowTitle(QCoreApplication::translate("BrowseShapesForm", "Browse Shapes", nullptr));
        pb_next_cell->setText(QCoreApplication::translate("BrowseShapesForm", ">", nullptr));
        pb_prev_cell->setText(QCoreApplication::translate("BrowseShapesForm", "<", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = lv_cell->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BrowseShapesForm", "Flat", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BrowseShapesForm", "Shapes", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BrowseShapesForm", "Cell", nullptr));
        pb_next_shape->setText(QCoreApplication::translate("BrowseShapesForm", ">", nullptr));
        pb_prev_shape->setText(QCoreApplication::translate("BrowseShapesForm", "<", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = lv_shape_instance->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("BrowseShapesForm", "Shape instance       ", nullptr));
        pb_next_inst->setText(QCoreApplication::translate("BrowseShapesForm", ">", nullptr));
        pb_prev_inst->setText(QCoreApplication::translate("BrowseShapesForm", "<", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = lv_cell_instance->headerItem();
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("BrowseShapesForm", "Path", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("BrowseShapesForm", "Cell instance", nullptr));
        configureButton->setText(QCoreApplication::translate("BrowseShapesForm", "Configure", nullptr));
        okButton->setText(QCoreApplication::translate("BrowseShapesForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowseShapesForm: public Ui_BrowseShapesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSESHAPESFORM_H
