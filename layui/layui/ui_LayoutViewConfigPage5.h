/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage5.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE5_H
#define UI_LAYOUTVIEWCONFIGPAGE5_H

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

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage5
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *lyp_file_gbx;
    QGridLayout *gridLayout;
    QToolButton *browse_pb;
    QCheckBox *add_other_layers_cb;
    QLineEdit *lyp_file_le;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *source_display_cb;
    QCheckBox *ld_display_cb;
    QCheckBox *ly_index_cb;

    void setupUi(QFrame *LayoutViewConfigPage5)
    {
        if (LayoutViewConfigPage5->objectName().isEmpty())
            LayoutViewConfigPage5->setObjectName("LayoutViewConfigPage5");
        LayoutViewConfigPage5->resize(694, 301);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage5);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        lyp_file_gbx = new QGroupBox(LayoutViewConfigPage5);
        lyp_file_gbx->setObjectName("lyp_file_gbx");
        lyp_file_gbx->setCheckable(true);
        gridLayout = new QGridLayout(lyp_file_gbx);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName("gridLayout");
        browse_pb = new QToolButton(lyp_file_gbx);
        browse_pb->setObjectName("browse_pb");

        gridLayout->addWidget(browse_pb, 1, 1, 1, 1);

        add_other_layers_cb = new QCheckBox(lyp_file_gbx);
        add_other_layers_cb->setObjectName("add_other_layers_cb");

        gridLayout->addWidget(add_other_layers_cb, 4, 0, 1, 2);

        lyp_file_le = new QLineEdit(lyp_file_gbx);
        lyp_file_le->setObjectName("lyp_file_le");

        gridLayout->addWidget(lyp_file_le, 1, 0, 1, 1);

        label_2 = new QLabel(lyp_file_gbx);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        label = new QLabel(lyp_file_gbx);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);


        vboxLayout->addWidget(lyp_file_gbx);

        groupBox = new QGroupBox(LayoutViewConfigPage5);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        vboxLayout1->setObjectName("vboxLayout1");
        source_display_cb = new QCheckBox(groupBox);
        source_display_cb->setObjectName("source_display_cb");

        vboxLayout1->addWidget(source_display_cb);

        ld_display_cb = new QCheckBox(groupBox);
        ld_display_cb->setObjectName("ld_display_cb");

        vboxLayout1->addWidget(ld_display_cb);

        ly_index_cb = new QCheckBox(groupBox);
        ly_index_cb->setObjectName("ly_index_cb");

        vboxLayout1->addWidget(ly_index_cb);


        vboxLayout->addWidget(groupBox);

        QWidget::setTabOrder(lyp_file_gbx, lyp_file_le);
        QWidget::setTabOrder(lyp_file_le, browse_pb);

        retranslateUi(LayoutViewConfigPage5);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage5);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage5)
    {
        LayoutViewConfigPage5->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage5", "Application Settings", nullptr));
        lyp_file_gbx->setTitle(QCoreApplication::translate("LayoutViewConfigPage5", "Use default layer properties file", nullptr));
        browse_pb->setText(QCoreApplication::translate("LayoutViewConfigPage5", "...", nullptr));
        add_other_layers_cb->setText(QCoreApplication::translate("LayoutViewConfigPage5", "Automatically add other layers", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage5", "<html><body><b>Hint</b>: a technology or reader specific layer properties file (i.e. for PCB import) will override this setting.</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage5", "The following layer properties file is loaded into the layer view list every time a layout is opened or created:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage5", "Layer properties display", nullptr));
        source_display_cb->setText(QCoreApplication::translate("LayoutViewConfigPage5", "Always show layer source in layer list", nullptr));
        ld_display_cb->setText(QCoreApplication::translate("LayoutViewConfigPage5", "Always show layer and datatype together with database name in layer source", nullptr));
        ly_index_cb->setText(QCoreApplication::translate("LayoutViewConfigPage5", "Always show layout index in layer source", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage5: public Ui_LayoutViewConfigPage5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE5_H
