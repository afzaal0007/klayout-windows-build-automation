/********************************************************************************
** Form generated from reading UI file 'TechBaseEditorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHBASEEDITORPAGE_H
#define UI_TECHBASEEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechBaseEditorPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *dbu_le;
    QLabel *label_9;
    QLabel *label_11;
    QGroupBox *lyp_grp;
    QGridLayout *_2;
    QLabel *label_6;
    QLineEdit *lyp_le;
    QToolButton *browse_lyp_pb;
    QLineEdit *name_le;
    QLabel *label_8;
    QLabel *label_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *grids_le;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_15;
    QLabel *libs_lbl;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QListWidget *libs_lw;
    QLabel *label_12;
    QToolButton *browse_pb;
    QLabel *label_13;
    QLabel *label;
    QLineEdit *desc_le;
    QLabel *label_5;
    QLineEdit *base_path_le;
    QLineEdit *group_le;
    QCheckBox *add_other_layers_cbx;

    void setupUi(QWidget *TechBaseEditorPage)
    {
        if (TechBaseEditorPage->objectName().isEmpty())
            TechBaseEditorPage->setObjectName("TechBaseEditorPage");
        TechBaseEditorPage->resize(625, 616);
        gridLayout = new QGridLayout(TechBaseEditorPage);
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 2);

        frame = new QFrame(TechBaseEditorPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dbu_le = new QLineEdit(frame);
        dbu_le->setObjectName("dbu_le");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dbu_le);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);


        gridLayout->addWidget(frame, 7, 1, 1, 3);

        label_11 = new QLabel(TechBaseEditorPage);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        lyp_grp = new QGroupBox(TechBaseEditorPage);
        lyp_grp->setObjectName("lyp_grp");
        lyp_grp->setCheckable(true);
        _2 = new QGridLayout(lyp_grp);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(9, 9, 9, 9);
        label_6 = new QLabel(lyp_grp);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(true);

        _2->addWidget(label_6, 0, 0, 1, 2);

        lyp_le = new QLineEdit(lyp_grp);
        lyp_le->setObjectName("lyp_le");

        _2->addWidget(lyp_le, 1, 0, 1, 1);

        browse_lyp_pb = new QToolButton(lyp_grp);
        browse_lyp_pb->setObjectName("browse_lyp_pb");

        _2->addWidget(browse_lyp_pb, 1, 1, 1, 1);


        gridLayout->addWidget(lyp_grp, 13, 1, 1, 3);

        name_le = new QLineEdit(TechBaseEditorPage);
        name_le->setObjectName("name_le");
        name_le->setEnabled(false);

        gridLayout->addWidget(name_le, 0, 1, 1, 1);

        label_8 = new QLabel(TechBaseEditorPage);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 8, 1, 1, 3);

        label_4 = new QLabel(TechBaseEditorPage);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        frame_2 = new QFrame(TechBaseEditorPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        grids_le = new QLineEdit(frame_2);
        grids_le->setObjectName("grids_le");

        horizontalLayout_2->addWidget(grids_le);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");

        horizontalLayout_2->addWidget(label_14);


        gridLayout->addWidget(frame_2, 10, 1, 1, 3);

        label_10 = new QLabel(TechBaseEditorPage);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_10, 13, 0, 1, 1);

        label_3 = new QLabel(TechBaseEditorPage);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 5, 1, 1, 3);

        label_15 = new QLabel(TechBaseEditorPage);
        label_15->setObjectName("label_15");
        label_15->setWordWrap(true);

        gridLayout->addWidget(label_15, 11, 1, 1, 3);

        libs_lbl = new QLabel(TechBaseEditorPage);
        libs_lbl->setObjectName("libs_lbl");

        gridLayout->addWidget(libs_lbl, 16, 0, 1, 1);

        line_3 = new QFrame(TechBaseEditorPage);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 15, 0, 1, 4);

        line_2 = new QFrame(TechBaseEditorPage);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 6, 0, 1, 4);

        line = new QFrame(TechBaseEditorPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 4);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 9, 0, 1, 4);

        label_2 = new QLabel(TechBaseEditorPage);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 4);

        label_7 = new QLabel(TechBaseEditorPage);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_7, 7, 0, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 17, 0, 1, 1);

        libs_lw = new QListWidget(TechBaseEditorPage);
        libs_lw->setObjectName("libs_lw");
        libs_lw->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(libs_lw, 16, 1, 2, 3);

        label_12 = new QLabel(TechBaseEditorPage);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 2, 2, 1, 2);

        browse_pb = new QToolButton(TechBaseEditorPage);
        browse_pb->setObjectName("browse_pb");

        gridLayout->addWidget(browse_pb, 4, 3, 1, 1);

        label_13 = new QLabel(TechBaseEditorPage);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 10, 0, 1, 1);

        label = new QLabel(TechBaseEditorPage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        desc_le = new QLineEdit(TechBaseEditorPage);
        desc_le->setObjectName("desc_le");

        gridLayout->addWidget(desc_le, 1, 1, 1, 1);

        label_5 = new QLabel(TechBaseEditorPage);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 2, 1, 2);

        base_path_le = new QLineEdit(TechBaseEditorPage);
        base_path_le->setObjectName("base_path_le");

        gridLayout->addWidget(base_path_le, 4, 1, 1, 2);

        group_le = new QLineEdit(TechBaseEditorPage);
        group_le->setObjectName("group_le");

        gridLayout->addWidget(group_le, 2, 1, 1, 1);

        add_other_layers_cbx = new QCheckBox(TechBaseEditorPage);
        add_other_layers_cbx->setObjectName("add_other_layers_cbx");

        gridLayout->addWidget(add_other_layers_cbx, 14, 1, 1, 3);


        retranslateUi(TechBaseEditorPage);

        QMetaObject::connectSlotsByName(TechBaseEditorPage);
    } // setupUi

    void retranslateUi(QWidget *TechBaseEditorPage)
    {
        TechBaseEditorPage->setWindowTitle(QCoreApplication::translate("TechBaseEditorPage", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("TechBaseEditorPage", "\302\265m", nullptr));
        label_11->setText(QCoreApplication::translate("TechBaseEditorPage", "Group", nullptr));
        lyp_grp->setTitle(QCoreApplication::translate("TechBaseEditorPage", "Load layer properties file", nullptr));
        label_6->setText(QCoreApplication::translate("TechBaseEditorPage", "Specify a layer properties file to be read when a layout with this technology is loaded. This setting overrides the global default layer properties file.", nullptr));
        browse_lyp_pb->setText(QCoreApplication::translate("TechBaseEditorPage", "...", nullptr));
        label_8->setText(QCoreApplication::translate("TechBaseEditorPage", "The default database unit is used as database unit for freshly created layouts", nullptr));
        label_4->setText(QCoreApplication::translate("TechBaseEditorPage", "Name", nullptr));
        label_14->setText(QCoreApplication::translate("TechBaseEditorPage", "\302\265m (g1,g2,...)", nullptr));
        label_10->setText(QCoreApplication::translate("TechBaseEditorPage", "Layer\n"
"properties", nullptr));
        label_3->setText(QCoreApplication::translate("TechBaseEditorPage", "The base path is used to locate auxiliary files if those are specified with a relative path. If none is specified, the default path is used. The default path is the one from which a technology was imported.", nullptr));
        label_15->setText(QCoreApplication::translate("TechBaseEditorPage", "These grids are available for selection from the \"View\" menu and will override the general ones. You can declare one grid as a strong default to enforce an editing grid from this list. To do so, add an exclamation mark to the grid - e.g. \"0.01!,0.02,0.05\".", nullptr));
        libs_lbl->setText(QCoreApplication::translate("TechBaseEditorPage", "Technology\n"
"specific\n"
"libraries", nullptr));
        label_2->setText(QCoreApplication::translate("TechBaseEditorPage", "Base path", nullptr));
        label_7->setText(QCoreApplication::translate("TechBaseEditorPage", "Database\n"
"unit", nullptr));
        label_12->setText(QCoreApplication::translate("TechBaseEditorPage", "(Used for creating tech groups)", nullptr));
        browse_pb->setText(QCoreApplication::translate("TechBaseEditorPage", "...", nullptr));
        label_13->setText(QCoreApplication::translate("TechBaseEditorPage", "Grids", nullptr));
        label->setText(QCoreApplication::translate("TechBaseEditorPage", "Description", nullptr));
        label_5->setText(QCoreApplication::translate("TechBaseEditorPage", "(Use the rename button to change this)", nullptr));
        add_other_layers_cbx->setText(QCoreApplication::translate("TechBaseEditorPage", "Initialize other layers with default properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechBaseEditorPage: public Ui_TechBaseEditorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHBASEEDITORPAGE_H
