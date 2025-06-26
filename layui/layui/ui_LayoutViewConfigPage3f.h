/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage3f.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE3F_H
#define UI_LAYOUTVIEWCONFIGPAGE3F_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage3f
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *drop_small_cells_cbx;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QComboBox *drop_small_cells_cond_cb;
    QLabel *label;
    QLineEdit *drop_small_cells_value_le;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout2;
    QCheckBox *array_border_insts_cbx;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QSpinBox *drawing_workers_spbx;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *text_lazy_rendering_cbx;
    QCheckBox *bitmap_caching_cbx;
    QLabel *label_5;
    QSpinBox *image_cache_size_spbx;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;

    void setupUi(QFrame *LayoutViewConfigPage3f)
    {
        if (LayoutViewConfigPage3f->objectName().isEmpty())
            LayoutViewConfigPage3f->setObjectName("LayoutViewConfigPage3f");
        LayoutViewConfigPage3f->resize(574, 386);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage3f);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        drop_small_cells_cbx = new QGroupBox(LayoutViewConfigPage3f);
        drop_small_cells_cbx->setObjectName("drop_small_cells_cbx");
        drop_small_cells_cbx->setCheckable(true);
        vboxLayout1 = new QVBoxLayout(drop_small_cells_cbx);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        vboxLayout1->setObjectName("vboxLayout1");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        drop_small_cells_cond_cb = new QComboBox(drop_small_cells_cbx);
        drop_small_cells_cond_cb->addItem(QString());
        drop_small_cells_cond_cb->addItem(QString());
        drop_small_cells_cond_cb->addItem(QString());
        drop_small_cells_cond_cb->setObjectName("drop_small_cells_cond_cb");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(drop_small_cells_cond_cb->sizePolicy().hasHeightForWidth());
        drop_small_cells_cond_cb->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(drop_small_cells_cond_cb);

        label = new QLabel(drop_small_cells_cbx);
        label->setObjectName("label");

        hboxLayout->addWidget(label);

        drop_small_cells_value_le = new QLineEdit(drop_small_cells_cbx);
        drop_small_cells_value_le->setObjectName("drop_small_cells_value_le");
        sizePolicy.setHeightForWidth(drop_small_cells_value_le->sizePolicy().hasHeightForWidth());
        drop_small_cells_value_le->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(drop_small_cells_value_le);

        label_2 = new QLabel(drop_small_cells_cbx);
        label_2->setObjectName("label_2");

        hboxLayout->addWidget(label_2);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(drop_small_cells_cbx);

        groupBox_3 = new QGroupBox(LayoutViewConfigPage3f);
        groupBox_3->setObjectName("groupBox_3");
        vboxLayout2 = new QVBoxLayout(groupBox_3);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        vboxLayout2->setObjectName("vboxLayout2");
        array_border_insts_cbx = new QCheckBox(groupBox_3);
        array_border_insts_cbx->setObjectName("array_border_insts_cbx");

        vboxLayout2->addWidget(array_border_insts_cbx);


        vboxLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(LayoutViewConfigPage3f);
        groupBox_4->setObjectName("groupBox_4");
        hboxLayout1 = new QHBoxLayout(groupBox_4);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout1->setObjectName("hboxLayout1");
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        hboxLayout1->addWidget(label_3);

        drawing_workers_spbx = new QSpinBox(groupBox_4);
        drawing_workers_spbx->setObjectName("drawing_workers_spbx");
        drawing_workers_spbx->setValue(1);

        hboxLayout1->addWidget(drawing_workers_spbx);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        hboxLayout1->addWidget(label_4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(LayoutViewConfigPage3f);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        text_lazy_rendering_cbx = new QCheckBox(groupBox);
        text_lazy_rendering_cbx->setObjectName("text_lazy_rendering_cbx");

        gridLayout->addWidget(text_lazy_rendering_cbx, 0, 0, 1, 4);

        bitmap_caching_cbx = new QCheckBox(groupBox);
        bitmap_caching_cbx->setObjectName("bitmap_caching_cbx");

        gridLayout->addWidget(bitmap_caching_cbx, 1, 0, 1, 4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        image_cache_size_spbx = new QSpinBox(groupBox);
        image_cache_size_spbx->setObjectName("image_cache_size_spbx");

        gridLayout->addWidget(image_cache_size_spbx, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(drop_small_cells_cbx, drop_small_cells_cond_cb);
        QWidget::setTabOrder(drop_small_cells_cond_cb, drop_small_cells_value_le);

        retranslateUi(LayoutViewConfigPage3f);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage3f);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage3f)
    {
        LayoutViewConfigPage3f->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage3f", "Settings", nullptr));
        drop_small_cells_cbx->setTitle(QCoreApplication::translate("LayoutViewConfigPage3f", "Drop Small Cells, If The ...", nullptr));
        drop_small_cells_cond_cb->setItemText(0, QCoreApplication::translate("LayoutViewConfigPage3f", "Width or height, whichever is larger", nullptr));
        drop_small_cells_cond_cb->setItemText(1, QCoreApplication::translate("LayoutViewConfigPage3f", "Width or height, whichever is smaller", nullptr));
        drop_small_cells_cond_cb->setItemText(2, QCoreApplication::translate("LayoutViewConfigPage3f", "Width plus height", nullptr));

        label->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "is less than", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "pixels", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LayoutViewConfigPage3f", "Arrays", nullptr));
        array_border_insts_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "Draw only border instances in detailed view", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LayoutViewConfigPage3f", "Multi-threaded Drawing", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "Number of threads to use for drawing", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "(0: not threaded at all)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage3f", "Other Optimizations", nullptr));
        text_lazy_rendering_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "Lazy text rendering (faster but less accurate)", nullptr));
        bitmap_caching_cbx->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "Bitmap caching (faster drawing of repeated instances but slightly less accurate)", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "Image cache depth", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutViewConfigPage3f", "(0: no caching)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage3f: public Ui_LayoutViewConfigPage3f {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE3F_H
