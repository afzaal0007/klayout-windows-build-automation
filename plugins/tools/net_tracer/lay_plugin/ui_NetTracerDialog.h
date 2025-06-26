/********************************************************************************
** Form generated from reading UI file 'NetTracerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTRACERDIALOG_H
#define UI_NETTRACERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_NetTracerDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QLabel *label_2;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QPushButton *add_pb;
    QCheckBox *sticky_cbx;
    QSpacerItem *spacerItem;
    QPushButton *add2_pb;
    QSpacerItem *spacerItem1;
    QPushButton *del_pb;
    QPushButton *clear_all_pb;
    QSpacerItem *spacerItem2;
    QPushButton *redo_pb;
    QSplitter *splitter;
    QListWidget *net_list;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout1;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QSpacerItem *spacerItem3;
    QCheckBox *detailed_cb;
    QSpacerItem *spacerItem4;
    QLabel *label;
    lay::ColorButton *net_color;
    QTextBrowser *net_info_text;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout1;
    QPushButton *export_pb;
    QPushButton *export_text_pb;
    QSpacerItem *spacerItem5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *stack_selector;
    QPushButton *stack_pb;
    QPushButton *configure_pb;
    QPushButton *close_pb;
    QLabel *label_6;
    QLineEdit *depth_le;
    QLabel *label_5;
    QLabel *tech_info_label;

    void setupUi(QDialog *NetTracerDialog)
    {
        if (NetTracerDialog->objectName().isEmpty())
            NetTracerDialog->setObjectName("NetTracerDialog");
        NetTracerDialog->resize(827, 504);
        gridLayout = new QGridLayout(NetTracerDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        line = new QFrame(NetTracerDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 2, 9);

        label_2 = new QLabel(NetTracerDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 9);

        frame = new QFrame(NetTracerDialog);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        add_pb = new QPushButton(frame);
        add_pb->setObjectName("add_pb");
        add_pb->setCheckable(true);
        add_pb->setChecked(false);

        vboxLayout->addWidget(add_pb);

        sticky_cbx = new QCheckBox(frame);
        sticky_cbx->setObjectName("sticky_cbx");

        vboxLayout->addWidget(sticky_cbx);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        add2_pb = new QPushButton(frame);
        add2_pb->setObjectName("add2_pb");

        vboxLayout->addWidget(add2_pb);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem1);

        del_pb = new QPushButton(frame);
        del_pb->setObjectName("del_pb");

        vboxLayout->addWidget(del_pb);

        clear_all_pb = new QPushButton(frame);
        clear_all_pb->setObjectName("clear_all_pb");

        vboxLayout->addWidget(clear_all_pb);

        spacerItem2 = new QSpacerItem(11, 261, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        redo_pb = new QPushButton(frame);
        redo_pb->setObjectName("redo_pb");

        vboxLayout->addWidget(redo_pb);


        gridLayout->addWidget(frame, 2, 8, 1, 1);

        splitter = new QSplitter(NetTracerDialog);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        net_list = new QListWidget(splitter);
        net_list->setObjectName("net_list");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(net_list->sizePolicy().hasHeightForWidth());
        net_list->setSizePolicy(sizePolicy2);
        net_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        net_list->setUniformItemSizes(true);
        splitter->addWidget(net_list);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_4);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);

        hboxLayout->addWidget(label_4);

        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        detailed_cb = new QCheckBox(frame_4);
        detailed_cb->setObjectName("detailed_cb");

        hboxLayout->addWidget(detailed_cb);

        spacerItem4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);

        label = new QLabel(frame_4);
        label->setObjectName("label");

        hboxLayout->addWidget(label);

        net_color = new lay::ColorButton(frame_4);
        net_color->setObjectName("net_color");

        hboxLayout->addWidget(net_color);


        vboxLayout1->addWidget(frame_4);

        net_info_text = new QTextBrowser(frame_2);
        net_info_text->setObjectName("net_info_text");
        net_info_text->setAutoFillBackground(false);
        net_info_text->setFrameShape(QFrame::StyledPanel);
        net_info_text->setLineWrapMode(QTextEdit::NoWrap);
        net_info_text->setLineWrapColumnOrWidth(0);
        net_info_text->setCursorWidth(1);

        vboxLayout1->addWidget(net_info_text);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_3);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        export_pb = new QPushButton(frame_3);
        export_pb->setObjectName("export_pb");

        hboxLayout1->addWidget(export_pb);

        export_text_pb = new QPushButton(frame_3);
        export_text_pb->setObjectName("export_text_pb");

        hboxLayout1->addWidget(export_text_pb);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        vboxLayout1->addWidget(frame_3);

        splitter->addWidget(frame_2);

        gridLayout->addWidget(splitter, 2, 0, 1, 8);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 3, 1, 1);

        label_3 = new QLabel(NetTracerDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 0, 1, 9);

        stack_selector = new QComboBox(NetTracerDialog);
        stack_selector->setObjectName("stack_selector");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(stack_selector->sizePolicy().hasHeightForWidth());
        stack_selector->setSizePolicy(sizePolicy4);
        stack_selector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(stack_selector, 5, 2, 1, 1);

        stack_pb = new QPushButton(NetTracerDialog);
        stack_pb->setObjectName("stack_pb");
        stack_pb->setAutoDefault(false);

        gridLayout->addWidget(stack_pb, 5, 1, 1, 1);

        configure_pb = new QPushButton(NetTracerDialog);
        configure_pb->setObjectName("configure_pb");
        configure_pb->setAutoDefault(false);

        gridLayout->addWidget(configure_pb, 5, 0, 1, 1);

        close_pb = new QPushButton(NetTracerDialog);
        close_pb->setObjectName("close_pb");

        gridLayout->addWidget(close_pb, 5, 8, 1, 1);

        label_6 = new QLabel(NetTracerDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 6, 1, 1);

        depth_le = new QLineEdit(NetTracerDialog);
        depth_le->setObjectName("depth_le");
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(depth_le->sizePolicy().hasHeightForWidth());
        depth_le->setSizePolicy(sizePolicy5);
        depth_le->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(depth_le, 5, 5, 1, 1);

        label_5 = new QLabel(NetTracerDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 4, 1, 1);

        tech_info_label = new QLabel(NetTracerDialog);
        tech_info_label->setObjectName("tech_info_label");
        sizePolicy3.setHeightForWidth(tech_info_label->sizePolicy().hasHeightForWidth());
        tech_info_label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(tech_info_label, 5, 7, 1, 1);

        QWidget::setTabOrder(net_list, net_info_text);
        QWidget::setTabOrder(net_info_text, detailed_cb);
        QWidget::setTabOrder(detailed_cb, net_color);
        QWidget::setTabOrder(net_color, add_pb);
        QWidget::setTabOrder(add_pb, sticky_cbx);
        QWidget::setTabOrder(sticky_cbx, add2_pb);
        QWidget::setTabOrder(add2_pb, del_pb);
        QWidget::setTabOrder(del_pb, clear_all_pb);
        QWidget::setTabOrder(clear_all_pb, export_pb);
        QWidget::setTabOrder(export_pb, export_text_pb);
        QWidget::setTabOrder(export_text_pb, configure_pb);
        QWidget::setTabOrder(configure_pb, stack_pb);
        QWidget::setTabOrder(stack_pb, close_pb);

        retranslateUi(NetTracerDialog);
        QObject::connect(close_pb, &QPushButton::clicked, NetTracerDialog, qOverload<>(&QDialog::accept));

        add_pb->setDefault(true);


        QMetaObject::connectSlotsByName(NetTracerDialog);
    } // setupUi

    void retranslateUi(QDialog *NetTracerDialog)
    {
        NetTracerDialog->setWindowTitle(QCoreApplication::translate("NetTracerDialog", "Net Trace", nullptr));
        label_2->setText(QCoreApplication::translate("NetTracerDialog", "Choose \"Trace Net\" and click at one point in the net to trace the net and add it to the list.\n"
"Double-click the net entry to rename it.\n"
"Select one or multiple nets and choose \"Export\" to export the selected nets to a new layout or cell.", nullptr));
        add_pb->setText(QCoreApplication::translate("NetTracerDialog", "Trace Net", nullptr));
        sticky_cbx->setText(QCoreApplication::translate("NetTracerDialog", "Lock", nullptr));
        add2_pb->setText(QCoreApplication::translate("NetTracerDialog", "Trace Path", nullptr));
        del_pb->setText(QCoreApplication::translate("NetTracerDialog", "Delete", nullptr));
        clear_all_pb->setText(QCoreApplication::translate("NetTracerDialog", "Clear All", nullptr));
        redo_pb->setText(QCoreApplication::translate("NetTracerDialog", "Redo", nullptr));
        label_4->setText(QCoreApplication::translate("NetTracerDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Net Info</span></p></body></html>", nullptr));
        detailed_cb->setText(QCoreApplication::translate("NetTracerDialog", "Detailed", nullptr));
        label->setText(QCoreApplication::translate("NetTracerDialog", "Color", nullptr));
        net_color->setText(QCoreApplication::translate("NetTracerDialog", "Color", nullptr));
        export_pb->setText(QCoreApplication::translate("NetTracerDialog", "Export", nullptr));
        export_text_pb->setText(QCoreApplication::translate("NetTracerDialog", "Export To Text", nullptr));
        label_3->setText(QCoreApplication::translate("NetTracerDialog", "Net Tracer", nullptr));
        stack_pb->setText(QCoreApplication::translate("NetTracerDialog", "Layer Stack", nullptr));
        configure_pb->setText(QCoreApplication::translate("NetTracerDialog", "Configure", nullptr));
        close_pb->setText(QCoreApplication::translate("NetTracerDialog", "Close", nullptr));
        label_6->setText(QCoreApplication::translate("NetTracerDialog", "shapes", nullptr));
        label_5->setText(QCoreApplication::translate("NetTracerDialog", "Trace depth:", nullptr));
        tech_info_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NetTracerDialog: public Ui_NetTracerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTRACERDIALOG_H
