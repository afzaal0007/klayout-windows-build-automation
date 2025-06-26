/********************************************************************************
** Form generated from reading UI file 'MALYReaderOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MALYREADEROPTIONPAGE_H
#define UI_MALYREADEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MALYReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *dbu_le;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *layer_subset_grp;
    QGridLayout *_2;
    QCheckBox *read_all_cbx;
    QFrame *line;
    lay::LayerMappingWidget *layer_map;

    void setupUi(QWidget *MALYReaderOptionPage)
    {
        if (MALYReaderOptionPage->objectName().isEmpty())
            MALYReaderOptionPage->setObjectName("MALYReaderOptionPage");
        MALYReaderOptionPage->resize(584, 530);
        verticalLayout = new QVBoxLayout(MALYReaderOptionPage);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(MALYReaderOptionPage);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName("dbu_le");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dbu_le, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 1, 1, 2);


        verticalLayout->addWidget(groupBox);

        layer_subset_grp = new QGroupBox(MALYReaderOptionPage);
        layer_subset_grp->setObjectName("layer_subset_grp");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(layer_subset_grp->sizePolicy().hasHeightForWidth());
        layer_subset_grp->setSizePolicy(sizePolicy2);
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
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy3);
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        _2->addWidget(layer_map, 2, 0, 10, 2);


        verticalLayout->addWidget(layer_subset_grp);

        QWidget::setTabOrder(dbu_le, read_all_cbx);

        retranslateUi(MALYReaderOptionPage);
        QObject::connect(layer_map, SIGNAL(enable_all_layers(bool)), read_all_cbx, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(MALYReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *MALYReaderOptionPage)
    {
        MALYReaderOptionPage->setWindowTitle(QCoreApplication::translate("MALYReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MALYReaderOptionPage", "Input Options", nullptr));
        label_3->setText(QCoreApplication::translate("MALYReaderOptionPage", "Micron", nullptr));
        label_2->setText(QCoreApplication::translate("MALYReaderOptionPage", "Database unit   ", nullptr));
        label->setText(QCoreApplication::translate("MALYReaderOptionPage", "This is the database unit of the resulting layout. Mask pattern with a different grid are adapted to this database unit through scaling.", nullptr));
#if QT_CONFIG(tooltip)
        layer_subset_grp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        layer_subset_grp->setTitle(QCoreApplication::translate("MALYReaderOptionPage", "Layer Subset And Layer Mapping", nullptr));
        read_all_cbx->setText(QCoreApplication::translate("MALYReaderOptionPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MALYReaderOptionPage: public Ui_MALYReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MALYREADEROPTIONPAGE_H
