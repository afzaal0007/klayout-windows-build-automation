/********************************************************************************
** Form generated from reading UI file 'TechLayerMappingEditorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHLAYERMAPPINGEDITORPAGE_H
#define UI_TECHLAYERMAPPINGEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TechLayerMappingEditorPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *layer_mapping_grp;
    QVBoxLayout *vboxLayout1;
    QCheckBox *read_all_cbx;
    QFrame *line;
    lay::LayerMappingWidget *layer_map;
    QGroupBox *lyp_grp;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lyp_le;
    QToolButton *browse_pb;
    QCheckBox *add_other_layers_cbx;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *TechLayerMappingEditorPage)
    {
        if (TechLayerMappingEditorPage->objectName().isEmpty())
            TechLayerMappingEditorPage->setObjectName("TechLayerMappingEditorPage");
        TechLayerMappingEditorPage->resize(631, 277);
        vboxLayout = new QVBoxLayout(TechLayerMappingEditorPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        layer_mapping_grp = new QGroupBox(TechLayerMappingEditorPage);
        layer_mapping_grp->setObjectName("layer_mapping_grp");
        layer_mapping_grp->setCheckable(true);
        vboxLayout1 = new QVBoxLayout(layer_mapping_grp);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        read_all_cbx = new QCheckBox(layer_mapping_grp);
        read_all_cbx->setObjectName("read_all_cbx");

        vboxLayout1->addWidget(read_all_cbx);

        line = new QFrame(layer_mapping_grp);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line);

        layer_map = new lay::LayerMappingWidget(layer_mapping_grp);
        layer_map->setObjectName("layer_map");
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(layer_map);


        vboxLayout->addWidget(layer_mapping_grp);

        lyp_grp = new QGroupBox(TechLayerMappingEditorPage);
        lyp_grp->setObjectName("lyp_grp");
        lyp_grp->setCheckable(true);
        gridLayout = new QGridLayout(lyp_grp);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(lyp_grp);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        lyp_le = new QLineEdit(lyp_grp);
        lyp_le->setObjectName("lyp_le");

        gridLayout->addWidget(lyp_le, 1, 0, 1, 1);

        browse_pb = new QToolButton(lyp_grp);
        browse_pb->setObjectName("browse_pb");

        gridLayout->addWidget(browse_pb, 1, 1, 1, 1);

        add_other_layers_cbx = new QCheckBox(lyp_grp);
        add_other_layers_cbx->setObjectName("add_other_layers_cbx");

        gridLayout->addWidget(add_other_layers_cbx, 2, 0, 1, 2);


        vboxLayout->addWidget(lyp_grp);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(TechLayerMappingEditorPage);

        QMetaObject::connectSlotsByName(TechLayerMappingEditorPage);
    } // setupUi

    void retranslateUi(QWidget *TechLayerMappingEditorPage)
    {
        TechLayerMappingEditorPage->setWindowTitle(QCoreApplication::translate("TechLayerMappingEditorPage", "Form", nullptr));
        layer_mapping_grp->setTitle(QCoreApplication::translate("TechLayerMappingEditorPage", "Layer Mapping", nullptr));
        read_all_cbx->setText(QCoreApplication::translate("TechLayerMappingEditorPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
        lyp_grp->setTitle(QCoreApplication::translate("TechLayerMappingEditorPage", "Layer Properties", nullptr));
        label_2->setText(QCoreApplication::translate("TechLayerMappingEditorPage", "Specify a layer properties file to load when a layout with this technology is loaded. This setting overrides the global default layer properties file.", nullptr));
        browse_pb->setText(QCoreApplication::translate("TechLayerMappingEditorPage", "...", nullptr));
        add_other_layers_cbx->setText(QCoreApplication::translate("TechLayerMappingEditorPage", "Automatically add other layers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechLayerMappingEditorPage: public Ui_TechLayerMappingEditorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHLAYERMAPPINGEDITORPAGE_H
