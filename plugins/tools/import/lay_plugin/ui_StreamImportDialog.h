/********************************************************************************
** Form generated from reading UI file 'StreamImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMIMPORTDIALOG_H
#define UI_STREAMIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StreamImportDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *last_pb;
    QSpacerItem *spacerItem;
    QPushButton *import_pb;
    QPushButton *next_pb;
    QPushButton *cancel_pb;
    QFrame *line_4;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QSpacerItem *spacerItem2;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QLabel *section_header_lbl;
    QSpacerItem *spacerItem3;
    QPushButton *reset_pb;
    QStackedWidget *central_stack;
    QWidget *page;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout1;
    QToolButton *file_pb;
    QLineEdit *topcell_le;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QPushButton *edit_options_pb;
    QPushButton *reset_options_pb;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QLabel *label_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QPlainTextEdit *files_te;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *import_simple_rb;
    QRadioButton *import_extra_rb;
    QRadioButton *import_instantiate_rb;
    QRadioButton *import_merge_rb;
    QSpacerItem *spacerItem6;
    QLabel *label_8;
    QSpacerItem *spacerItem7;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QFrame *frame;
    QGridLayout *gridLayout2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QLabel *label;
    QLineEdit *offset_le;
    QRadioButton *offset_rb;
    QRadioButton *no_mapping_rb;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QWidget *page_6;
    QVBoxLayout *vboxLayout3;
    QFrame *frame_5;
    QGridLayout *gridLayout4;
    QLineEdit *layout_x1_le;
    QLineEdit *pcb_y3_le;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_17;
    QLineEdit *pcb_y2_le;
    QLabel *Point_3;
    QLineEdit *layout_x2_le;
    QLabel *label_18;
    QLineEdit *layout_x3_le;
    QLineEdit *layout_y3_le;
    QLabel *label_23;
    QFrame *line_2;
    QLabel *label_25;
    QLineEdit *pcb_x2_le;
    QLabel *label_26;
    QLabel *label_21;
    QLineEdit *pcb_x3_le;
    QLineEdit *pcb_y1_le;
    QFrame *line_3;
    QLineEdit *pcb_x1_le;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_27;
    QLineEdit *layout_y2_le;
    QLineEdit *layout_y1_le;
    QSpacerItem *spacerItem10;
    QSpacerItem *spacerItem11;
    QSpacerItem *spacerItem12;
    QFrame *frame_6;
    QHBoxLayout *hboxLayout2;
    QLabel *label_30;
    QLineEdit *explicit_trans_le;
    QLabel *label_31;
    QLabel *label_29;
    QSpacerItem *spacerItem13;

    void setupUi(QDialog *StreamImportDialog)
    {
        if (StreamImportDialog->objectName().isEmpty())
            StreamImportDialog->setObjectName("StreamImportDialog");
        StreamImportDialog->resize(754, 604);
        gridLayout = new QGridLayout(StreamImportDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        last_pb = new QPushButton(StreamImportDialog);
        last_pb->setObjectName("last_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        last_pb->setIcon(icon);

        gridLayout->addWidget(last_pb, 6, 1, 1, 1);

        spacerItem = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 6, 0, 1, 1);

        import_pb = new QPushButton(StreamImportDialog);
        import_pb->setObjectName("import_pb");

        gridLayout->addWidget(import_pb, 6, 3, 1, 1);

        next_pb = new QPushButton(StreamImportDialog);
        next_pb->setObjectName("next_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/forward_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_pb->setIcon(icon1);

        gridLayout->addWidget(next_pb, 6, 2, 1, 1);

        cancel_pb = new QPushButton(StreamImportDialog);
        cancel_pb->setObjectName("cancel_pb");

        gridLayout->addWidget(cancel_pb, 6, 4, 1, 1);

        line_4 = new QFrame(StreamImportDialog);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 5, 0, 1, 5);

        spacerItem1 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 5);

        line = new QFrame(StreamImportDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 5);

        spacerItem2 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 1, 0, 1, 5);

        frame_3 = new QFrame(StreamImportDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        section_header_lbl = new QLabel(frame_3);
        section_header_lbl->setObjectName("section_header_lbl");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        section_header_lbl->setFont(font);

        hboxLayout->addWidget(section_header_lbl);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        reset_pb = new QPushButton(frame_3);
        reset_pb->setObjectName("reset_pb");

        hboxLayout->addWidget(reset_pb);


        gridLayout->addWidget(frame_3, 0, 0, 1, 5);

        central_stack = new QStackedWidget(StreamImportDialog);
        central_stack->setObjectName("central_stack");
        page = new QWidget();
        page->setObjectName("page");
        vboxLayout = new QVBoxLayout(page);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout1 = new QGridLayout(groupBox_4);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        file_pb = new QToolButton(groupBox_4);
        file_pb->setObjectName("file_pb");

        gridLayout1->addWidget(file_pb, 0, 3, 1, 1);

        topcell_le = new QLineEdit(groupBox_4);
        topcell_le->setObjectName("topcell_le");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topcell_le->sizePolicy().hasHeightForWidth());
        topcell_le->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(topcell_le, 2, 1, 1, 1);

        frame_2 = new QFrame(groupBox_4);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        hboxLayout1->addWidget(label_3);

        edit_options_pb = new QPushButton(frame_2);
        edit_options_pb->setObjectName("edit_options_pb");

        hboxLayout1->addWidget(edit_options_pb);

        reset_options_pb = new QPushButton(frame_2);
        reset_options_pb->setObjectName("reset_options_pb");

        hboxLayout1->addWidget(reset_options_pb);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        gridLayout1->addWidget(frame_2, 4, 0, 1, 4);

        spacerItem5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem5, 3, 0, 1, 4);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label_2, 2, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 0, 0, 2, 1);

        files_te = new QPlainTextEdit(groupBox_4);
        files_te->setObjectName("files_te");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(files_te->sizePolicy().hasHeightForWidth());
        files_te->setSizePolicy(sizePolicy2);
        files_te->setReadOnly(true);

        gridLayout1->addWidget(files_te, 0, 1, 2, 2);


        vboxLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        import_simple_rb = new QRadioButton(groupBox);
        import_simple_rb->setObjectName("import_simple_rb");

        vboxLayout1->addWidget(import_simple_rb);

        import_extra_rb = new QRadioButton(groupBox);
        import_extra_rb->setObjectName("import_extra_rb");

        vboxLayout1->addWidget(import_extra_rb);

        import_instantiate_rb = new QRadioButton(groupBox);
        import_instantiate_rb->setObjectName("import_instantiate_rb");

        vboxLayout1->addWidget(import_instantiate_rb);

        import_merge_rb = new QRadioButton(groupBox);
        import_merge_rb->setObjectName("import_merge_rb");

        vboxLayout1->addWidget(import_merge_rb);

        spacerItem6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        vboxLayout1->addWidget(label_8);


        vboxLayout->addWidget(groupBox);

        spacerItem7 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem7);

        central_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout3 = new QGridLayout(groupBox_2);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout3->addWidget(label, 2, 1, 1, 2);

        offset_le = new QLineEdit(groupBox_2);
        offset_le->setObjectName("offset_le");

        gridLayout3->addWidget(offset_le, 1, 1, 1, 1);

        offset_rb = new QRadioButton(groupBox_2);
        offset_rb->setObjectName("offset_rb");

        gridLayout3->addWidget(offset_rb, 1, 0, 1, 1);

        no_mapping_rb = new QRadioButton(groupBox_2);
        no_mapping_rb->setObjectName("no_mapping_rb");

        gridLayout3->addWidget(no_mapping_rb, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem8, 1, 2, 1, 1);


        gridLayout2->addWidget(groupBox_2, 0, 0, 5, 1);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem9, 5, 0, 1, 1);


        vboxLayout2->addWidget(frame);

        central_stack->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        vboxLayout3 = new QVBoxLayout(page_6);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName("vboxLayout3");
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(page_6);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Plain);
        gridLayout4 = new QGridLayout(frame_5);
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName("gridLayout4");
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        layout_x1_le = new QLineEdit(frame_5);
        layout_x1_le->setObjectName("layout_x1_le");

        gridLayout4->addWidget(layout_x1_le, 3, 5, 1, 1);

        pcb_y3_le = new QLineEdit(frame_5);
        pcb_y3_le->setObjectName("pcb_y3_le");

        gridLayout4->addWidget(pcb_y3_le, 5, 2, 1, 1);

        label_22 = new QLabel(frame_5);
        label_22->setObjectName("label_22");

        gridLayout4->addWidget(label_22, 3, 4, 1, 1);

        label_24 = new QLabel(frame_5);
        label_24->setObjectName("label_24");

        gridLayout4->addWidget(label_24, 2, 6, 1, 1);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");

        gridLayout4->addWidget(label_17, 0, 0, 1, 3);

        pcb_y2_le = new QLineEdit(frame_5);
        pcb_y2_le->setObjectName("pcb_y2_le");

        gridLayout4->addWidget(pcb_y2_le, 4, 2, 1, 1);

        Point_3 = new QLabel(frame_5);
        Point_3->setObjectName("Point_3");

        gridLayout4->addWidget(Point_3, 5, 4, 1, 1);

        layout_x2_le = new QLineEdit(frame_5);
        layout_x2_le->setObjectName("layout_x2_le");

        gridLayout4->addWidget(layout_x2_le, 4, 5, 1, 1);

        label_18 = new QLabel(frame_5);
        label_18->setObjectName("label_18");

        gridLayout4->addWidget(label_18, 0, 4, 1, 3);

        layout_x3_le = new QLineEdit(frame_5);
        layout_x3_le->setObjectName("layout_x3_le");

        gridLayout4->addWidget(layout_x3_le, 5, 5, 1, 1);

        layout_y3_le = new QLineEdit(frame_5);
        layout_y3_le->setObjectName("layout_y3_le");

        gridLayout4->addWidget(layout_y3_le, 5, 6, 1, 1);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");

        gridLayout4->addWidget(label_23, 2, 5, 1, 1);

        line_2 = new QFrame(frame_5);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout4->addWidget(line_2, 1, 0, 1, 3);

        label_25 = new QLabel(frame_5);
        label_25->setObjectName("label_25");

        gridLayout4->addWidget(label_25, 4, 0, 1, 1);

        pcb_x2_le = new QLineEdit(frame_5);
        pcb_x2_le->setObjectName("pcb_x2_le");

        gridLayout4->addWidget(pcb_x2_le, 4, 1, 1, 1);

        label_26 = new QLabel(frame_5);
        label_26->setObjectName("label_26");

        gridLayout4->addWidget(label_26, 5, 0, 1, 1);

        label_21 = new QLabel(frame_5);
        label_21->setObjectName("label_21");

        gridLayout4->addWidget(label_21, 3, 0, 1, 1);

        pcb_x3_le = new QLineEdit(frame_5);
        pcb_x3_le->setObjectName("pcb_x3_le");

        gridLayout4->addWidget(pcb_x3_le, 5, 1, 1, 1);

        pcb_y1_le = new QLineEdit(frame_5);
        pcb_y1_le->setObjectName("pcb_y1_le");

        gridLayout4->addWidget(pcb_y1_le, 3, 2, 1, 1);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout4->addWidget(line_3, 1, 4, 1, 3);

        pcb_x1_le = new QLineEdit(frame_5);
        pcb_x1_le->setObjectName("pcb_x1_le");

        gridLayout4->addWidget(pcb_x1_le, 3, 1, 1, 1);

        label_20 = new QLabel(frame_5);
        label_20->setObjectName("label_20");

        gridLayout4->addWidget(label_20, 2, 2, 1, 1);

        label_19 = new QLabel(frame_5);
        label_19->setObjectName("label_19");

        gridLayout4->addWidget(label_19, 2, 1, 1, 1);

        label_27 = new QLabel(frame_5);
        label_27->setObjectName("label_27");

        gridLayout4->addWidget(label_27, 4, 4, 1, 1);

        layout_y2_le = new QLineEdit(frame_5);
        layout_y2_le->setObjectName("layout_y2_le");

        gridLayout4->addWidget(layout_y2_le, 4, 6, 1, 1);

        layout_y1_le = new QLineEdit(frame_5);
        layout_y1_le->setObjectName("layout_y1_le");

        gridLayout4->addWidget(layout_y1_le, 3, 6, 1, 1);

        spacerItem10 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem10, 0, 3, 6, 1);

        spacerItem11 = new QSpacerItem(691, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout4->addItem(spacerItem11, 6, 0, 1, 7);

        spacerItem12 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout4->addItem(spacerItem12, 8, 0, 1, 7);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_6);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(frame_6);
        label_30->setObjectName("label_30");

        hboxLayout2->addWidget(label_30);

        explicit_trans_le = new QLineEdit(frame_6);
        explicit_trans_le->setObjectName("explicit_trans_le");

        hboxLayout2->addWidget(explicit_trans_le);

        label_31 = new QLabel(frame_6);
        label_31->setObjectName("label_31");

        hboxLayout2->addWidget(label_31);


        gridLayout4->addWidget(frame_6, 9, 0, 1, 7);

        label_29 = new QLabel(frame_5);
        label_29->setObjectName("label_29");
        label_29->setWordWrap(true);

        gridLayout4->addWidget(label_29, 7, 0, 1, 7);


        vboxLayout3->addWidget(frame_5);

        spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem13);

        central_stack->addWidget(page_6);

        gridLayout->addWidget(central_stack, 3, 0, 1, 5);

        QWidget::setTabOrder(file_pb, topcell_le);
        QWidget::setTabOrder(topcell_le, edit_options_pb);
        QWidget::setTabOrder(edit_options_pb, reset_options_pb);
        QWidget::setTabOrder(reset_options_pb, import_simple_rb);
        QWidget::setTabOrder(import_simple_rb, import_extra_rb);
        QWidget::setTabOrder(import_extra_rb, import_instantiate_rb);
        QWidget::setTabOrder(import_instantiate_rb, import_merge_rb);
        QWidget::setTabOrder(import_merge_rb, no_mapping_rb);
        QWidget::setTabOrder(no_mapping_rb, offset_rb);
        QWidget::setTabOrder(offset_rb, offset_le);
        QWidget::setTabOrder(offset_le, pcb_x1_le);
        QWidget::setTabOrder(pcb_x1_le, pcb_y1_le);
        QWidget::setTabOrder(pcb_y1_le, layout_x1_le);
        QWidget::setTabOrder(layout_x1_le, layout_y1_le);
        QWidget::setTabOrder(layout_y1_le, pcb_x2_le);
        QWidget::setTabOrder(pcb_x2_le, pcb_y2_le);
        QWidget::setTabOrder(pcb_y2_le, layout_x2_le);
        QWidget::setTabOrder(layout_x2_le, layout_y2_le);
        QWidget::setTabOrder(layout_y2_le, pcb_x3_le);
        QWidget::setTabOrder(pcb_x3_le, pcb_y3_le);
        QWidget::setTabOrder(pcb_y3_le, layout_x3_le);
        QWidget::setTabOrder(layout_x3_le, layout_y3_le);
        QWidget::setTabOrder(layout_y3_le, explicit_trans_le);
        QWidget::setTabOrder(explicit_trans_le, last_pb);
        QWidget::setTabOrder(last_pb, next_pb);
        QWidget::setTabOrder(next_pb, import_pb);
        QWidget::setTabOrder(import_pb, cancel_pb);

        retranslateUi(StreamImportDialog);
        QObject::connect(import_pb, &QPushButton::clicked, StreamImportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_pb, &QPushButton::clicked, StreamImportDialog, qOverload<>(&QDialog::reject));

        central_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StreamImportDialog);
    } // setupUi

    void retranslateUi(QDialog *StreamImportDialog)
    {
        StreamImportDialog->setWindowTitle(QCoreApplication::translate("StreamImportDialog", "Dialog", nullptr));
        last_pb->setText(QCoreApplication::translate("StreamImportDialog", "Back", nullptr));
        import_pb->setText(QCoreApplication::translate("StreamImportDialog", "Import", nullptr));
        next_pb->setText(QCoreApplication::translate("StreamImportDialog", "Next", nullptr));
        cancel_pb->setText(QCoreApplication::translate("StreamImportDialog", "Cancel", nullptr));
        section_header_lbl->setText(QCoreApplication::translate("StreamImportDialog", "SectionHeader", nullptr));
        reset_pb->setText(QCoreApplication::translate("StreamImportDialog", "Reset", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("StreamImportDialog", "Input", nullptr));
        file_pb->setText(QCoreApplication::translate("StreamImportDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("StreamImportDialog", "Stream reader options   ", nullptr));
        edit_options_pb->setText(QCoreApplication::translate("StreamImportDialog", "Edit ...", nullptr));
        reset_options_pb->setText(QCoreApplication::translate("StreamImportDialog", "Reset", nullptr));
        label_7->setText(QCoreApplication::translate("StreamImportDialog", "Top cell ", nullptr));
        label_2->setText(QCoreApplication::translate("StreamImportDialog", "(leave empty for selecting the top cell automatically)", nullptr));
        label_6->setText(QCoreApplication::translate("StreamImportDialog", "Files\n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StreamImportDialog", "Import Mode", nullptr));
        import_simple_rb->setText(QCoreApplication::translate("StreamImportDialog", "Merge - Merge new cell into current cell and create a new cell hierarchy below", nullptr));
        import_extra_rb->setText(QCoreApplication::translate("StreamImportDialog", "Extra cells - Import as extra cells", nullptr));
        import_instantiate_rb->setText(QCoreApplication::translate("StreamImportDialog", "Instantiate - Instantiate a new cell tree below the current cell", nullptr));
        import_merge_rb->setText(QCoreApplication::translate("StreamImportDialog", "Merge hierarchy - Merge into current cell's hierarchy (attempt to identify corresponding cells)", nullptr));
        label_8->setText(QCoreApplication::translate("StreamImportDialog", "Note: All modes except \"Extra cells\" require a unique top cell for the input file. Either one must be specified or the input file must have a single top cell.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("StreamImportDialog", "Layer mapping", nullptr));
        label->setText(QCoreApplication::translate("StreamImportDialog", "Use \"layer/datatype\" notation to specify an offset to be added to layer and/or datatype.", nullptr));
        offset_rb->setText(QCoreApplication::translate("StreamImportDialog", "On original layers plus offset", nullptr));
        no_mapping_rb->setText(QCoreApplication::translate("StreamImportDialog", "No mapping - use original layers", nullptr));
        label_22->setText(QCoreApplication::translate("StreamImportDialog", "Point 1", nullptr));
        label_24->setText(QCoreApplication::translate("StreamImportDialog", "y (micron)", nullptr));
        label_17->setText(QCoreApplication::translate("StreamImportDialog", "Reference points coordinates on layout to import", nullptr));
        Point_3->setText(QCoreApplication::translate("StreamImportDialog", "Point 3", nullptr));
        label_18->setText(QCoreApplication::translate("StreamImportDialog", "Reference point coordinates in existing layout", nullptr));
        label_23->setText(QCoreApplication::translate("StreamImportDialog", "x (micron)", nullptr));
        label_25->setText(QCoreApplication::translate("StreamImportDialog", "Point 2", nullptr));
        label_26->setText(QCoreApplication::translate("StreamImportDialog", "Point 3", nullptr));
        label_21->setText(QCoreApplication::translate("StreamImportDialog", "Point 1", nullptr));
        label_20->setText(QCoreApplication::translate("StreamImportDialog", "y (micron)", nullptr));
        label_19->setText(QCoreApplication::translate("StreamImportDialog", "x (micron)", nullptr));
        label_27->setText(QCoreApplication::translate("StreamImportDialog", "Point 2", nullptr));
        label_30->setText(QCoreApplication::translate("StreamImportDialog", "Explicit transformation", nullptr));
#if QT_CONFIG(tooltip)
        explicit_trans_le->setToolTip(QCoreApplication::translate("StreamImportDialog", "Examples: \"r90\", \"m45\", \"r90 (2000,-5000)\"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_31->setText(QCoreApplication::translate("StreamImportDialog", "(Reference points have higher priority)", nullptr));
        label_29->setText(QCoreApplication::translate("StreamImportDialog", "Leave fields empty to specify less reference points. One point is used to derive the displacement, further points are used to derive the orientation. Currently, no magnification is implied and only simple rotations are derived from the mapping points.\n"
"\n"
"Alternatively the transformation (imported to existing layout) can be specified using the explicit transformation below. This allows one to specify an arbitrary transformation. Use the common notation (i.e. \"*2 r90 10,-100\").", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamImportDialog: public Ui_StreamImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMIMPORTDIALOG_H
