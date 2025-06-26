/********************************************************************************
** Form generated from reading UI file 'SaveLayoutAsOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELAYOUTASOPTIONSDIALOG_H
#define UI_SAVELAYOUTASOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveLayoutAsOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QComboBox *fmt_cbx;
    QLabel *filename_lbl;
    QComboBox *compression;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *sf_le;
    QSpacerItem *spacerItem1;
    QLabel *label_6;
    QFrame *frame_2;
    QGridLayout *gridLayout2;
    QCheckBox *no_hidden_cells_cb;
    QCheckBox *keep_instances_cb;
    QSpacerItem *spacerItem2;
    QCheckBox *no_empty_cells_cb;
    QLabel *label_3;
    QComboBox *layersel_cbx;
    QLabel *label_8;
    QSpacerItem *spacerItem3;
    QLineEdit *dbu_le;
    QCheckBox *store_context_cb;
    QLabel *label_4;
    QStackedWidget *options_stack;
    QWidget *page_3;
    QWidget *page_4;
    QSpacerItem *spacerItem4;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveLayoutAsOptionsDialog)
    {
        if (SaveLayoutAsOptionsDialog->objectName().isEmpty())
            SaveLayoutAsOptionsDialog->setObjectName("SaveLayoutAsOptionsDialog");
        SaveLayoutAsOptionsDialog->setWindowModality(Qt::ApplicationModal);
        SaveLayoutAsOptionsDialog->resize(632, 599);
        vboxLayout = new QVBoxLayout(SaveLayoutAsOptionsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(SaveLayoutAsOptionsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        fmt_cbx = new QComboBox(frame);
        fmt_cbx->setObjectName("fmt_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fmt_cbx->sizePolicy().hasHeightForWidth());
        fmt_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fmt_cbx, 1, 1, 1, 1);

        filename_lbl = new QLabel(frame);
        filename_lbl->setObjectName("filename_lbl");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filename_lbl->sizePolicy().hasHeightForWidth());
        filename_lbl->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(filename_lbl, 0, 1, 1, 3);

        compression = new QComboBox(frame);
        compression->addItem(QString());
        compression->addItem(QString());
        compression->addItem(QString());
        compression->setObjectName("compression");

        gridLayout->addWidget(compression, 1, 3, 1, 2);


        vboxLayout->addWidget(frame);

        groupBox = new QGroupBox(SaveLayoutAsOptionsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        sf_le = new QLineEdit(groupBox);
        sf_le->setObjectName("sf_le");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sf_le->sizePolicy().hasHeightForWidth());
        sf_le->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(sf_le, 1, 5, 1, 1);

        spacerItem1 = new QSpacerItem(51, 32, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 6, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 1, 4, 1, 1);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        no_hidden_cells_cb = new QCheckBox(frame_2);
        no_hidden_cells_cb->setObjectName("no_hidden_cells_cb");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(no_hidden_cells_cb->sizePolicy().hasHeightForWidth());
        no_hidden_cells_cb->setSizePolicy(sizePolicy3);

        gridLayout2->addWidget(no_hidden_cells_cb, 1, 0, 1, 4);

        keep_instances_cb = new QCheckBox(frame_2);
        keep_instances_cb->setObjectName("keep_instances_cb");
        sizePolicy2.setHeightForWidth(keep_instances_cb->sizePolicy().hasHeightForWidth());
        keep_instances_cb->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(keep_instances_cb, 2, 1, 1, 3);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 2, 0, 1, 1);

        no_empty_cells_cb = new QCheckBox(frame_2);
        no_empty_cells_cb->setObjectName("no_empty_cells_cb");

        gridLayout2->addWidget(no_empty_cells_cb, 0, 0, 1, 4);


        gridLayout1->addWidget(frame_2, 2, 1, 1, 6);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        layersel_cbx = new QComboBox(groupBox);
        layersel_cbx->addItem(QString());
        layersel_cbx->addItem(QString());
        layersel_cbx->addItem(QString());
        layersel_cbx->setObjectName("layersel_cbx");

        gridLayout1->addWidget(layersel_cbx, 0, 1, 1, 6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout1->addWidget(label_8, 2, 0, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 3, 1, 1);

        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName("dbu_le");
        sizePolicy2.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(dbu_le, 1, 1, 1, 1);

        store_context_cb = new QCheckBox(groupBox);
        store_context_cb->setObjectName("store_context_cb");
        store_context_cb->setChecked(true);

        gridLayout1->addWidget(store_context_cb, 3, 1, 1, 6);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 3, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        options_stack = new QStackedWidget(SaveLayoutAsOptionsDialog);
        options_stack->setObjectName("options_stack");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(options_stack->sizePolicy().hasHeightForWidth());
        options_stack->setSizePolicy(sizePolicy4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        options_stack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        options_stack->addWidget(page_4);

        vboxLayout->addWidget(options_stack);

        spacerItem4 = new QSpacerItem(509, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        line = new QFrame(SaveLayoutAsOptionsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(SaveLayoutAsOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(fmt_cbx, compression);
        QWidget::setTabOrder(compression, layersel_cbx);
        QWidget::setTabOrder(layersel_cbx, dbu_le);
        QWidget::setTabOrder(dbu_le, sf_le);
        QWidget::setTabOrder(sf_le, no_empty_cells_cb);
        QWidget::setTabOrder(no_empty_cells_cb, no_hidden_cells_cb);
        QWidget::setTabOrder(no_hidden_cells_cb, keep_instances_cb);
        QWidget::setTabOrder(keep_instances_cb, store_context_cb);
        QWidget::setTabOrder(store_context_cb, buttonBox);

        retranslateUi(SaveLayoutAsOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaveLayoutAsOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaveLayoutAsOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveLayoutAsOptionsDialog)
    {
        SaveLayoutAsOptionsDialog->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "File", nullptr));
        label_2->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Format", nullptr));
        filename_lbl->setText(QString());
        compression->setItemText(0, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Auto compression", nullptr));
        compression->setItemText(1, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "No compression", nullptr));
        compression->setItemText(2, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "ZLib compression", nullptr));

        groupBox->setTitle(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Generic Options", nullptr));
        label_7->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "\302\265m", nullptr));
        label_5->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Database unit", nullptr));
        sf_le->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "1.0", nullptr));
        label_6->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Scaling factor", nullptr));
        no_hidden_cells_cb->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Write visible cells only (skip cells not shown with content)", nullptr));
        keep_instances_cb->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Keep instances for dropped cells (make ghost cells)", nullptr));
        no_empty_cells_cb->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Don't write empty cells", nullptr));
        label_3->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Layers to save", nullptr));
        layersel_cbx->setItemText(0, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "All layers", nullptr));
        layersel_cbx->setItemText(1, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Layers shown in list", nullptr));
        layersel_cbx->setItemText(2, QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Visible layers only", nullptr));

        label_8->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Cell tree", nullptr));
        store_context_cb->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Store PCell and library context information (format specific)", nullptr));
        label_4->setText(QCoreApplication::translate("SaveLayoutAsOptionsDialog", "Cell context", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveLayoutAsOptionsDialog: public Ui_SaveLayoutAsOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELAYOUTASOPTIONSDIALOG_H
