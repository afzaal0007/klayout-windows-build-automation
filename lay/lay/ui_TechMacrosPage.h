/********************************************************************************
** Form generated from reading UI file 'TechMacrosPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHMACROSPAGE_H
#define UI_TECHMACROSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechMacrosPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *title_label;
    QFrame *macro_frame;
    QVBoxLayout *vboxLayout1;
    QSplitter *splitter;
    QTreeView *folder_tree;
    QFrame *frame;
    QVBoxLayout *vboxLayout2;
    QTextBrowser *macro_text;
    QLabel *note_label;
    QLabel *empty_label1;
    QFrame *empty_label2_frame;
    QGridLayout *gridLayout;
    QPushButton *create_folder_button;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QLabel *empty_label2;
    QLabel *empty_label3;

    void setupUi(QWidget *TechMacrosPage)
    {
        if (TechMacrosPage->objectName().isEmpty())
            TechMacrosPage->setObjectName("TechMacrosPage");
        TechMacrosPage->resize(715, 492);
        vboxLayout = new QVBoxLayout(TechMacrosPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        title_label = new QLabel(TechMacrosPage);
        title_label->setObjectName("title_label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title_label->sizePolicy().hasHeightForWidth());
        title_label->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(title_label);

        macro_frame = new QFrame(TechMacrosPage);
        macro_frame->setObjectName("macro_frame");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(macro_frame->sizePolicy().hasHeightForWidth());
        macro_frame->setSizePolicy(sizePolicy1);
        macro_frame->setFrameShape(QFrame::NoFrame);
        macro_frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(macro_frame);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        splitter = new QSplitter(macro_frame);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        folder_tree = new QTreeView(splitter);
        folder_tree->setObjectName("folder_tree");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(folder_tree->sizePolicy().hasHeightForWidth());
        folder_tree->setSizePolicy(sizePolicy2);
        splitter->addWidget(folder_tree);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        macro_text = new QTextBrowser(frame);
        macro_text->setObjectName("macro_text");
        macro_text->setLineWrapMode(QTextEdit::NoWrap);

        vboxLayout2->addWidget(macro_text);

        splitter->addWidget(frame);

        vboxLayout1->addWidget(splitter);


        vboxLayout->addWidget(macro_frame);

        note_label = new QLabel(TechMacrosPage);
        note_label->setObjectName("note_label");
        note_label->setWordWrap(true);

        vboxLayout->addWidget(note_label);

        empty_label1 = new QLabel(TechMacrosPage);
        empty_label1->setObjectName("empty_label1");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(empty_label1->sizePolicy().hasHeightForWidth());
        empty_label1->setSizePolicy(sizePolicy4);
        empty_label1->setAlignment(Qt::AlignCenter);
        empty_label1->setWordWrap(true);

        vboxLayout->addWidget(empty_label1);

        empty_label2_frame = new QFrame(TechMacrosPage);
        empty_label2_frame->setObjectName("empty_label2_frame");
        empty_label2_frame->setMinimumSize(QSize(16, 200));
        empty_label2_frame->setFrameShape(QFrame::NoFrame);
        empty_label2_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(empty_label2_frame);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        create_folder_button = new QPushButton(empty_label2_frame);
        create_folder_button->setObjectName("create_folder_button");

        gridLayout->addWidget(create_folder_button, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 2, 1, 1);

        spacerItem1 = new QSpacerItem(231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 1);

        spacerItem2 = new QSpacerItem(651, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 3, 0, 1, 3);

        spacerItem3 = new QSpacerItem(671, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 0, 0, 1, 3);

        empty_label2 = new QLabel(empty_label2_frame);
        empty_label2->setObjectName("empty_label2");
        sizePolicy4.setHeightForWidth(empty_label2->sizePolicy().hasHeightForWidth());
        empty_label2->setSizePolicy(sizePolicy4);
        empty_label2->setAlignment(Qt::AlignCenter);
        empty_label2->setWordWrap(true);

        gridLayout->addWidget(empty_label2, 1, 0, 1, 3);


        vboxLayout->addWidget(empty_label2_frame);

        empty_label3 = new QLabel(TechMacrosPage);
        empty_label3->setObjectName("empty_label3");
        empty_label3->setAlignment(Qt::AlignCenter);
        empty_label3->setWordWrap(true);

        vboxLayout->addWidget(empty_label3);


        retranslateUi(TechMacrosPage);

        QMetaObject::connectSlotsByName(TechMacrosPage);
    } // setupUi

    void retranslateUi(QWidget *TechMacrosPage)
    {
        TechMacrosPage->setWindowTitle(QCoreApplication::translate("TechMacrosPage", "Form", nullptr));
        title_label->setText(QCoreApplication::translate("TechMacrosPage", "%CAT_DESC%", nullptr));
        note_label->setText(QCoreApplication::translate("TechMacrosPage", "<html><body><span style=\" font-weight:600;\">Note</span>: to edit, add or delete scripts, use the macro development facility in \"Tools/Macro Development\". You will find a branch for this technology there.</p></body></html>", nullptr));
        empty_label1->setText(QCoreApplication::translate("TechMacrosPage", "<html><body><span style=\" font-weight:600;\">Note</span>: this page is empty because no valid base path is set.<br/>Select a base path on the \"General\" page to establish one.</p></body></html>", nullptr));
        create_folder_button->setText(QCoreApplication::translate("TechMacrosPage", "Create Folder Now", nullptr));
        empty_label2->setText(QCoreApplication::translate("TechMacrosPage", "<html><body><span style=\" font-weight:600;\">Note</span>: this page is empty, because the corresponding macro folder</p><p style=\" margin-top:5px; margin-bottom:5px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><i>%BASE_PATH%/%CAT%</i></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">cannot be found or is not accessible.</p></body></html>", nullptr));
        empty_label3->setText(QCoreApplication::translate("TechMacrosPage", "<html><body>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note</span>: this page is empty, because the macro location is shared by a different macro site (specifically \"<i>%ALT_DESC%</i>\"). Such a site cannot be made technology specific. Choose a base path that points to a different location.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechMacrosPage: public Ui_TechMacrosPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHMACROSPAGE_H
