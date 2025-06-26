/********************************************************************************
** Form generated from reading UI file 'EditorOptionsGeneric.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOROPTIONSGENERIC_H
#define UI_EDITOROPTIONSGENERIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorOptionsGeneric
{
public:
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *_5;
    QLineEdit *edit_grid_le;
    QLabel *label_6;
    QCheckBox *snap_objects_cbx;
    QComboBox *grid_cb;
    QLabel *label_5;
    QSpacerItem *spacerItem;
    QCheckBox *snap_objects_to_grid_cbx;
    QGroupBox *groupBox_2;
    QGridLayout *_2;
    QLabel *label_3;
    QComboBox *move_angle_cb;
    QLabel *label_2;
    QComboBox *conn_angle_cb;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *_3;
    QLabel *label;
    QLabel *label_4;
    QComboBox *hier_copy_mode_cbx;
    QSpacerItem *horizontalSpacer;
    QCheckBox *hier_sel_cbx;
    QGroupBox *groupBox_4;
    QHBoxLayout *_4;
    QCheckBox *show_shapes_cbx;
    QLineEdit *max_shapes_le;
    QLabel *label_13;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacer;

    void setupUi(QWidget *EditorOptionsGeneric)
    {
        if (EditorOptionsGeneric->objectName().isEmpty())
            EditorOptionsGeneric->setObjectName("EditorOptionsGeneric");
        EditorOptionsGeneric->resize(400, 446);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorOptionsGeneric->sizePolicy().hasHeightForWidth());
        EditorOptionsGeneric->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(EditorOptionsGeneric);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(EditorOptionsGeneric);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 446));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        _5 = new QGridLayout(groupBox);
        _5->setObjectName("_5");
        _5->setHorizontalSpacing(6);
        _5->setVerticalSpacing(2);
        _5->setContentsMargins(4, 4, 4, 4);
        edit_grid_le = new QLineEdit(groupBox);
        edit_grid_le->setObjectName("edit_grid_le");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(edit_grid_le->sizePolicy().hasHeightForWidth());
        edit_grid_le->setSizePolicy(sizePolicy1);

        _5->addWidget(edit_grid_le, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        _5->addWidget(label_6, 1, 0, 1, 1);

        snap_objects_cbx = new QCheckBox(groupBox);
        snap_objects_cbx->setObjectName("snap_objects_cbx");

        _5->addWidget(snap_objects_cbx, 1, 1, 1, 3);

        grid_cb = new QComboBox(groupBox);
        grid_cb->addItem(QString());
        grid_cb->addItem(QString());
        grid_cb->addItem(QString());
        grid_cb->setObjectName("grid_cb");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grid_cb->sizePolicy().hasHeightForWidth());
        grid_cb->setSizePolicy(sizePolicy2);
        grid_cb->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _5->addWidget(grid_cb, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        _5->addWidget(label_5, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(148, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _5->addItem(spacerItem, 0, 3, 1, 1);

        snap_objects_to_grid_cbx = new QCheckBox(groupBox);
        snap_objects_to_grid_cbx->setObjectName("snap_objects_to_grid_cbx");

        _5->addWidget(snap_objects_to_grid_cbx, 2, 1, 1, 3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        _2 = new QGridLayout(groupBox_2);
        _2->setObjectName("_2");
        _2->setHorizontalSpacing(6);
        _2->setVerticalSpacing(2);
        _2->setContentsMargins(4, 4, 4, 4);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        _2->addWidget(label_3, 1, 0, 1, 1);

        move_angle_cb = new QComboBox(groupBox_2);
        move_angle_cb->addItem(QString());
        move_angle_cb->addItem(QString());
        move_angle_cb->addItem(QString());
        move_angle_cb->setObjectName("move_angle_cb");
        sizePolicy2.setHeightForWidth(move_angle_cb->sizePolicy().hasHeightForWidth());
        move_angle_cb->setSizePolicy(sizePolicy2);
        move_angle_cb->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _2->addWidget(move_angle_cb, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        _2->addWidget(label_2, 0, 0, 1, 1);

        conn_angle_cb = new QComboBox(groupBox_2);
        conn_angle_cb->addItem(QString());
        conn_angle_cb->addItem(QString());
        conn_angle_cb->addItem(QString());
        conn_angle_cb->setObjectName("conn_angle_cb");
        sizePolicy2.setHeightForWidth(conn_angle_cb->sizePolicy().hasHeightForWidth());
        conn_angle_cb->setSizePolicy(sizePolicy2);
        conn_angle_cb->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _2->addWidget(conn_angle_cb, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName("groupBox_3");
        _3 = new QGridLayout(groupBox_3);
        _3->setObjectName("_3");
        _3->setHorizontalSpacing(6);
        _3->setVerticalSpacing(2);
        _3->setContentsMargins(4, 4, 4, 4);
        label = new QLabel(groupBox_3);
        label->setObjectName("label");

        _3->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        _3->addWidget(label_4, 0, 0, 1, 1);

        hier_copy_mode_cbx = new QComboBox(groupBox_3);
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->addItem(QString());
        hier_copy_mode_cbx->setObjectName("hier_copy_mode_cbx");
        sizePolicy2.setHeightForWidth(hier_copy_mode_cbx->sizePolicy().hasHeightForWidth());
        hier_copy_mode_cbx->setSizePolicy(sizePolicy2);
        hier_copy_mode_cbx->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        _3->addWidget(hier_copy_mode_cbx, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(horizontalSpacer, 1, 3, 1, 1);

        hier_sel_cbx = new QCheckBox(groupBox_3);
        hier_sel_cbx->setObjectName("hier_sel_cbx");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hier_sel_cbx->sizePolicy().hasHeightForWidth());
        hier_sel_cbx->setSizePolicy(sizePolicy3);

        _3->addWidget(hier_sel_cbx, 0, 1, 1, 3);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName("groupBox_4");
        _4 = new QHBoxLayout(groupBox_4);
        _4->setSpacing(2);
        _4->setObjectName("_4");
        _4->setContentsMargins(4, 4, 4, 4);
        show_shapes_cbx = new QCheckBox(groupBox_4);
        show_shapes_cbx->setObjectName("show_shapes_cbx");

        _4->addWidget(show_shapes_cbx);

        max_shapes_le = new QLineEdit(groupBox_4);
        max_shapes_le->setObjectName("max_shapes_le");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(max_shapes_le->sizePolicy().hasHeightForWidth());
        max_shapes_le->setSizePolicy(sizePolicy4);

        _4->addWidget(max_shapes_le);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");

        _4->addWidget(label_13);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem1);


        verticalLayout->addWidget(groupBox_4);

        spacer = new QSpacerItem(121, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, grid_cb);
        QWidget::setTabOrder(grid_cb, edit_grid_le);
        QWidget::setTabOrder(edit_grid_le, snap_objects_cbx);
        QWidget::setTabOrder(snap_objects_cbx, conn_angle_cb);
        QWidget::setTabOrder(conn_angle_cb, move_angle_cb);
        QWidget::setTabOrder(move_angle_cb, hier_sel_cbx);
        QWidget::setTabOrder(hier_sel_cbx, hier_copy_mode_cbx);
        QWidget::setTabOrder(hier_copy_mode_cbx, show_shapes_cbx);
        QWidget::setTabOrder(show_shapes_cbx, max_shapes_le);

        retranslateUi(EditorOptionsGeneric);

        QMetaObject::connectSlotsByName(EditorOptionsGeneric);
    } // setupUi

    void retranslateUi(QWidget *EditorOptionsGeneric)
    {
        EditorOptionsGeneric->setWindowTitle(QCoreApplication::translate("EditorOptionsGeneric", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorOptionsGeneric", "Snapping", nullptr));
#if QT_CONFIG(tooltip)
        edit_grid_le->setToolTip(QCoreApplication::translate("EditorOptionsGeneric", "Enter the grid in micron. Can be anisotropic (\"gx,gy\")", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("EditorOptionsGeneric", "Objects   ", nullptr));
        snap_objects_cbx->setText(QCoreApplication::translate("EditorOptionsGeneric", "Snap to other objects", nullptr));
        grid_cb->setItemText(0, QCoreApplication::translate("EditorOptionsGeneric", "No grid", nullptr));
        grid_cb->setItemText(1, QCoreApplication::translate("EditorOptionsGeneric", "Global grid", nullptr));
        grid_cb->setItemText(2, QCoreApplication::translate("EditorOptionsGeneric", "Other grid ...", nullptr));

        label_5->setText(QCoreApplication::translate("EditorOptionsGeneric", "Grid", nullptr));
        snap_objects_to_grid_cbx->setText(QCoreApplication::translate("EditorOptionsGeneric", "Snap to grid while moving", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorOptionsGeneric", "Angle Constraints", nullptr));
        label_3->setText(QCoreApplication::translate("EditorOptionsGeneric", "Movements   ", nullptr));
        move_angle_cb->setItemText(0, QCoreApplication::translate("EditorOptionsGeneric", "Any Direction", nullptr));
        move_angle_cb->setItemText(1, QCoreApplication::translate("EditorOptionsGeneric", "Diagonal", nullptr));
        move_angle_cb->setItemText(2, QCoreApplication::translate("EditorOptionsGeneric", "Manhattan", nullptr));

        label_2->setText(QCoreApplication::translate("EditorOptionsGeneric", "Connections   ", nullptr));
        conn_angle_cb->setItemText(0, QCoreApplication::translate("EditorOptionsGeneric", "Any Angle", nullptr));
        conn_angle_cb->setItemText(1, QCoreApplication::translate("EditorOptionsGeneric", "Diagonal", nullptr));
        conn_angle_cb->setItemText(2, QCoreApplication::translate("EditorOptionsGeneric", "Manhattan", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("EditorOptionsGeneric", "Hierarchical Features", nullptr));
        label->setText(QCoreApplication::translate("EditorOptionsGeneric", "Copy mode", nullptr));
        label_4->setText(QCoreApplication::translate("EditorOptionsGeneric", "Shallow select", nullptr));
        hier_copy_mode_cbx->setItemText(0, QCoreApplication::translate("EditorOptionsGeneric", "Shallow mode (instance only)", nullptr));
        hier_copy_mode_cbx->setItemText(1, QCoreApplication::translate("EditorOptionsGeneric", "Deep mode (instance and cell)", nullptr));
        hier_copy_mode_cbx->setItemText(2, QCoreApplication::translate("EditorOptionsGeneric", "Ask", nullptr));

        hier_sel_cbx->setText(QCoreApplication::translate("EditorOptionsGeneric", "Select top level objects only", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("EditorOptionsGeneric", "Instance Display", nullptr));
        show_shapes_cbx->setText(QCoreApplication::translate("EditorOptionsGeneric", "Show shapes while moving (max.", nullptr));
        label_13->setText(QCoreApplication::translate("EditorOptionsGeneric", " shapes)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorOptionsGeneric: public Ui_EditorOptionsGeneric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOROPTIONSGENERIC_H
