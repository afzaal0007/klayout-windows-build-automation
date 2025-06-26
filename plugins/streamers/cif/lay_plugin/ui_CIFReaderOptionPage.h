/********************************************************************************
** Form generated from reading UI file 'CIFReaderOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIFREADEROPTIONPAGE_H
#define UI_CIFREADEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CIFReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *wire_mode_cb;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *dbu_le;
    QLabel *label;
    QCheckBox *keep_names_cbx;
    QLabel *label_4;
    QGroupBox *layer_subset_grp;
    QGridLayout *_2;
    QCheckBox *read_all_cbx;
    QFrame *line;
    lay::LayerMappingWidget *layer_map;

    void setupUi(QWidget *CIFReaderOptionPage)
    {
        if (CIFReaderOptionPage->objectName().isEmpty())
            CIFReaderOptionPage->setObjectName("CIFReaderOptionPage");
        CIFReaderOptionPage->resize(629, 385);
        verticalLayout = new QVBoxLayout(CIFReaderOptionPage);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(CIFReaderOptionPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        wire_mode_cb = new QComboBox(groupBox);
        wire_mode_cb->addItem(QString());
        wire_mode_cb->addItem(QString());
        wire_mode_cb->addItem(QString());
        wire_mode_cb->setObjectName("wire_mode_cb");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wire_mode_cb->sizePolicy().hasHeightForWidth());
        wire_mode_cb->setSizePolicy(sizePolicy);

        gridLayout->addWidget(wire_mode_cb, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName("dbu_le");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(dbu_le, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        keep_names_cbx = new QCheckBox(groupBox);
        keep_names_cbx->setObjectName("keep_names_cbx");

        gridLayout->addWidget(keep_names_cbx, 2, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        layer_subset_grp = new QGroupBox(CIFReaderOptionPage);
        layer_subset_grp->setObjectName("layer_subset_grp");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(layer_subset_grp->sizePolicy().hasHeightForWidth());
        layer_subset_grp->setSizePolicy(sizePolicy3);
        layer_subset_grp->setCheckable(false);
        _2 = new QGridLayout(layer_subset_grp);
        _2->setSpacing(6);
        _2->setObjectName("_2");
        _2->setContentsMargins(9, 9, 9, 9);
        read_all_cbx = new QCheckBox(layer_subset_grp);
        read_all_cbx->setObjectName("read_all_cbx");

        _2->addWidget(read_all_cbx, 0, 0, 1, 2);

        line = new QFrame(layer_subset_grp);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line, 1, 0, 1, 2);

        layer_map = new lay::LayerMappingWidget(layer_subset_grp);
        layer_map->setObjectName("layer_map");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy4);
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        _2->addWidget(layer_map, 2, 0, 10, 2);


        verticalLayout->addWidget(layer_subset_grp);

        QWidget::setTabOrder(wire_mode_cb, dbu_le);

        retranslateUi(CIFReaderOptionPage);
        QObject::connect(layer_map, SIGNAL(enable_all_layers(bool)), read_all_cbx, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(CIFReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *CIFReaderOptionPage)
    {
        CIFReaderOptionPage->setWindowTitle(QCoreApplication::translate("CIFReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CIFReaderOptionPage", "Input Options", nullptr));
        wire_mode_cb->setItemText(0, QCoreApplication::translate("CIFReaderOptionPage", "Square-ended paths", nullptr));
        wire_mode_cb->setItemText(1, QCoreApplication::translate("CIFReaderOptionPage", "Flush paths", nullptr));
        wire_mode_cb->setItemText(2, QCoreApplication::translate("CIFReaderOptionPage", "Round-ended paths", nullptr));

        label_2->setText(QCoreApplication::translate("CIFReaderOptionPage", "Database unit   ", nullptr));
        label_3->setText(QCoreApplication::translate("CIFReaderOptionPage", "Micron", nullptr));
        label->setText(QCoreApplication::translate("CIFReaderOptionPage", "Wire objects", nullptr));
        keep_names_cbx->setText(QCoreApplication::translate("CIFReaderOptionPage", "Don't attempt to translate into layer/datatype numbers", nullptr));
        label_4->setText(QCoreApplication::translate("CIFReaderOptionPage", "Keep layer names", nullptr));
#if QT_CONFIG(tooltip)
        layer_subset_grp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        layer_subset_grp->setTitle(QCoreApplication::translate("CIFReaderOptionPage", "Layer Subset And Layer Mapping", nullptr));
        read_all_cbx->setText(QCoreApplication::translate("CIFReaderOptionPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CIFReaderOptionPage: public Ui_CIFReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIFREADEROPTIONPAGE_H
