/********************************************************************************
** Form generated from reading UI file 'OASISWriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OASISWRITEROPTIONPAGE_H
#define UI_OASISWRITEROPTIONPAGE_H

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
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OASISWriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_7;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *subst_char;
    QLabel *label_8;
    QLabel *label_3;
    QComboBox *std_prop_mode;
    QCheckBox *strict_mode;
    QCheckBox *write_cblocks;
    QCheckBox *permissive;
    QLabel *label;
    QLabel *label_10;
    QSpacerItem *spacerItem;
    QFrame *cblock_warning_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *label_11;
    QSlider *compression_slider;
    QLabel *label_5;
    QLabel *label_4;
    QFrame *strict_mode_warning_frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *OASISWriterOptionPage)
    {
        if (OASISWriterOptionPage->objectName().isEmpty())
            OASISWriterOptionPage->setObjectName("OASISWriterOptionPage");
        OASISWriterOptionPage->resize(633, 338);
        vboxLayout = new QVBoxLayout(OASISWriterOptionPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(OASISWriterOptionPage);
        groupBox->setObjectName("groupBox");
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        subst_char = new QLineEdit(frame_2);
        subst_char->setObjectName("subst_char");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(subst_char->sizePolicy().hasHeightForWidth());
        subst_char->setSizePolicy(sizePolicy);
        subst_char->setMaximumSize(QSize(50, 16777215));

        hboxLayout->addWidget(subst_char);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(label_8);


        gridLayout->addWidget(frame_2, 8, 2, 1, 3);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        std_prop_mode = new QComboBox(frame);
        std_prop_mode->addItem(QString());
        std_prop_mode->addItem(QString());
        std_prop_mode->addItem(QString());
        std_prop_mode->setObjectName("std_prop_mode");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(std_prop_mode->sizePolicy().hasHeightForWidth());
        std_prop_mode->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(std_prop_mode, 7, 2, 1, 3);

        strict_mode = new QCheckBox(frame);
        strict_mode->setObjectName("strict_mode");

        gridLayout->addWidget(strict_mode, 5, 2, 1, 3);

        write_cblocks = new QCheckBox(frame);
        write_cblocks->setObjectName("write_cblocks");

        gridLayout->addWidget(write_cblocks, 2, 2, 1, 3);

        permissive = new QCheckBox(frame);
        permissive->setObjectName("permissive");

        gridLayout->addWidget(permissive, 9, 2, 1, 3);

        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 2, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        cblock_warning_frame = new QFrame(frame);
        cblock_warning_frame->setObjectName("cblock_warning_frame");
        cblock_warning_frame->setFrameShape(QFrame::NoFrame);
        cblock_warning_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(cblock_warning_frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(cblock_warning_frame);
        label_12->setObjectName("label_12");
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/warn_16px@2x.png")));

        horizontalLayout->addWidget(label_12);

        label_11 = new QLabel(cblock_warning_frame);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        label_11->setWordWrap(true);

        horizontalLayout->addWidget(label_11);


        gridLayout->addWidget(cblock_warning_frame, 3, 2, 1, 3);

        compression_slider = new QSlider(frame);
        compression_slider->setObjectName("compression_slider");
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(compression_slider->sizePolicy().hasHeightForWidth());
        compression_slider->setSizePolicy(sizePolicy6);
        compression_slider->setMaximum(10);
        compression_slider->setPageStep(1);
        compression_slider->setOrientation(Qt::Horizontal);
        compression_slider->setTickPosition(QSlider::TicksBelow);

        gridLayout->addWidget(compression_slider, 0, 2, 1, 3);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 4, 1, 1);

        strict_mode_warning_frame = new QFrame(frame);
        strict_mode_warning_frame->setObjectName("strict_mode_warning_frame");
        strict_mode_warning_frame->setFrameShape(QFrame::NoFrame);
        strict_mode_warning_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(strict_mode_warning_frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(strict_mode_warning_frame);
        label_13->setObjectName("label_13");
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/warn_16px@2x.png")));

        horizontalLayout_2->addWidget(label_13);

        label_14 = new QLabel(strict_mode_warning_frame);
        label_14->setObjectName("label_14");
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);
        label_14->setWordWrap(true);

        horizontalLayout_2->addWidget(label_14);


        gridLayout->addWidget(strict_mode_warning_frame, 6, 2, 1, 3);


        vboxLayout1->addWidget(frame);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(524, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        QWidget::setTabOrder(compression_slider, write_cblocks);
        QWidget::setTabOrder(write_cblocks, strict_mode);
        QWidget::setTabOrder(strict_mode, subst_char);

        retranslateUi(OASISWriterOptionPage);

        QMetaObject::connectSlotsByName(OASISWriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *OASISWriterOptionPage)
    {
        OASISWriterOptionPage->setWindowTitle(QCoreApplication::translate("OASISWriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OASISWriterOptionPage", "OASIS Writer Options", nullptr));
        label_2->setText(QString());
        label_6->setText(QCoreApplication::translate("OASISWriterOptionPage", "Strict mode", nullptr));
        label_9->setText(QCoreApplication::translate("OASISWriterOptionPage", "Standard properties", nullptr));
        label_7->setText(QCoreApplication::translate("OASISWriterOptionPage", "Substitution character", nullptr));
        label_8->setText(QCoreApplication::translate("OASISWriterOptionPage", "Used instead of invalid characters if not empty", nullptr));
        label_3->setText(QCoreApplication::translate("OASISWriterOptionPage", "0 (low)", nullptr));
        std_prop_mode->setItemText(0, QCoreApplication::translate("OASISWriterOptionPage", "No standard properties", nullptr));
        std_prop_mode->setItemText(1, QCoreApplication::translate("OASISWriterOptionPage", "Global standard properties", nullptr));
        std_prop_mode->setItemText(2, QCoreApplication::translate("OASISWriterOptionPage", "Global + per-cell bounding boxes", nullptr));

        strict_mode->setText(QCoreApplication::translate("OASISWriterOptionPage", "Write strict-mode OASIS files", nullptr));
        write_cblocks->setText(QCoreApplication::translate("OASISWriterOptionPage", "Use CBLOCK compression for each cell (RFC1951)", nullptr));
        permissive->setText(QCoreApplication::translate("OASISWriterOptionPage", "Don't fail on paths with odd width and other odd shapes", nullptr));
        label->setText(QCoreApplication::translate("OASISWriterOptionPage", "Compaction level\n"
"(repetition detection)", nullptr));
        label_10->setText(QCoreApplication::translate("OASISWriterOptionPage", "Permissive mode", nullptr));
        label_12->setText(QString());
        label_11->setText(QCoreApplication::translate("OASISWriterOptionPage", "File compression - i.e. \".gz\" - is discouraged in OASIS, please consider using CBLOCK compression", nullptr));
        label_5->setText(QCoreApplication::translate("OASISWriterOptionPage", "CBLOCK compression", nullptr));
        label_4->setText(QCoreApplication::translate("OASISWriterOptionPage", "(high) 10", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("OASISWriterOptionPage", "Strict mode is recommended as strict mode OASIS files can be read more efficiently by some readers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OASISWriterOptionPage: public Ui_OASISWriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OASISWRITEROPTIONPAGE_H
