/********************************************************************************
** Form generated from reading UI file 'NetExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETEXPORTDIALOG_H
#define UI_NETEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NetExportDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLineEdit *layernum;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QGroupBox *produce_device_cells_cb;
    QGridLayout *gridLayout_4;
    QLineEdit *device_cell_prefix;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *net_propname;
    QLabel *help_label;
    QLineEdit *net_cell_prefix;
    QGroupBox *produce_circuit_cells_cb;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *circuit_cell_prefix;
    QLabel *label;

    void setupUi(QDialog *NetExportDialog)
    {
        if (NetExportDialog->objectName().isEmpty())
            NetExportDialog->setObjectName("NetExportDialog");
        NetExportDialog->resize(570, 521);
        gridLayout = new QGridLayout(NetExportDialog);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(NetExportDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame, 4, 1, 1, 2);

        groupBox_2 = new QGroupBox(NetExportDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName("gridLayout_5");
        layernum = new QLineEdit(groupBox_2);
        layernum->setObjectName("layernum");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layernum->sizePolicy().hasHeightForWidth());
        layernum->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(layernum, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 9, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 10, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(NetExportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 3);

        label_6 = new QLabel(NetExportDialog);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 0, 0, 1, 3);

        produce_device_cells_cb = new QGroupBox(NetExportDialog);
        produce_device_cells_cb->setObjectName("produce_device_cells_cb");
        produce_device_cells_cb->setCheckable(true);
        gridLayout_4 = new QGridLayout(produce_device_cells_cb);
        gridLayout_4->setObjectName("gridLayout_4");
        device_cell_prefix = new QLineEdit(produce_device_cells_cb);
        device_cell_prefix->setObjectName("device_cell_prefix");

        gridLayout_4->addWidget(device_cell_prefix, 0, 1, 1, 1);

        label_3 = new QLabel(produce_device_cells_cb);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(produce_device_cells_cb);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 2);


        gridLayout->addWidget(produce_device_cells_cb, 7, 0, 1, 3);

        groupBox = new QGroupBox(NetExportDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        net_propname = new QLineEdit(groupBox);
        net_propname->setObjectName("net_propname");

        gridLayout_2->addWidget(net_propname, 1, 1, 1, 1);

        help_label = new QLabel(groupBox);
        help_label->setObjectName("help_label");

        gridLayout_2->addWidget(help_label, 1, 2, 1, 1);

        net_cell_prefix = new QLineEdit(groupBox);
        net_cell_prefix->setObjectName("net_cell_prefix");

        gridLayout_2->addWidget(net_cell_prefix, 0, 1, 1, 2);


        gridLayout->addWidget(groupBox, 2, 0, 1, 3);

        produce_circuit_cells_cb = new QGroupBox(NetExportDialog);
        produce_circuit_cells_cb->setObjectName("produce_circuit_cells_cb");
        produce_circuit_cells_cb->setCheckable(true);
        gridLayout_3 = new QGridLayout(produce_circuit_cells_cb);
        gridLayout_3->setObjectName("gridLayout_3");
        label_2 = new QLabel(produce_circuit_cells_cb);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        circuit_cell_prefix = new QLineEdit(produce_circuit_cells_cb);
        circuit_cell_prefix->setObjectName("circuit_cell_prefix");

        gridLayout_3->addWidget(circuit_cell_prefix, 0, 1, 1, 1);

        label = new QLabel(produce_circuit_cells_cb);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 1, 0, 1, 2);


        gridLayout->addWidget(produce_circuit_cells_cb, 5, 0, 1, 3);

        QWidget::setTabOrder(net_cell_prefix, net_propname);
        QWidget::setTabOrder(net_propname, produce_circuit_cells_cb);
        QWidget::setTabOrder(produce_circuit_cells_cb, circuit_cell_prefix);
        QWidget::setTabOrder(circuit_cell_prefix, produce_device_cells_cb);
        QWidget::setTabOrder(produce_device_cells_cb, device_cell_prefix);
        QWidget::setTabOrder(device_cell_prefix, layernum);

        retranslateUi(NetExportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NetExportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetExportDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NetExportDialog);
    } // setupUi

    void retranslateUi(QDialog *NetExportDialog)
    {
        NetExportDialog->setWindowTitle(QCoreApplication::translate("NetExportDialog", "Export Net Options", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NetExportDialog", "Layer mapping", nullptr));
        label_7->setText(QCoreApplication::translate("NetExportDialog", "Starting layer number for unknown layers", nullptr));
        label_6->setText(QCoreApplication::translate("NetExportDialog", "This feature will export the nets to a new layout. Nets are associated with a circuit and are put into a corresponding cell. With the options below you can tailor the way nets, net parts from subcircuits and devices are annotated.", nullptr));
        produce_device_cells_cb->setTitle(QCoreApplication::translate("NetExportDialog", "Produce cells for de&vices", nullptr));
        label_3->setText(QCoreApplication::translate("NetExportDialog", "Cell name prefix", nullptr));
        label_4->setText(QCoreApplication::translate("NetExportDialog", "If this options is selected, each device will be represented by one cell made from the device name and the given prefix. Otherwise, device parts are exported as shapes inside the net.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NetExportDialog", "Net annotation", nullptr));
        label_5->setText(QCoreApplication::translate("NetExportDialog", "Net cell name prefix", nullptr));
        label_9->setText(QCoreApplication::translate("NetExportDialog", "Net property name", nullptr));
        help_label->setText(QCoreApplication::translate("NetExportDialog", "<html><body>(<a href=\"int:/about/variant_notation.xml\">See here for the name notation</a>)</body></html>", nullptr));
        produce_circuit_cells_cb->setTitle(QCoreApplication::translate("NetExportDialog", "Produce cells for circuits", nullptr));
        label_2->setText(QCoreApplication::translate("NetExportDialog", "Cell name prefix", nullptr));
        label->setText(QCoreApplication::translate("NetExportDialog", "If this option is selected, the subcircuits parts of a net are represented by individual cells. Otherwise the net with its subcircuit parts is exported as a whole (flattened).", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetExportDialog: public Ui_NetExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETEXPORTDIALOG_H
