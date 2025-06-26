/********************************************************************************
** Form generated from reading UI file 'MarkerBrowserPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKERBROWSERPAGE_H
#define UI_MARKERBROWSERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "rdbInfoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MarkerBrowserPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QToolButton *rerun_button;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QSplitter *splitter_2;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *cat_filter;
    QLabel *cat_filter_label;
    QLineEdit *cell_filter;
    QLabel *cell_filter_label;
    QToolButton *dir_down_pb;
    QToolButton *dir_up_pb;
    QTreeView *directory_tree;
    QLabel *label;
    QSplitter *splitter;
    QFrame *markers_frame;
    QGridLayout *gridLayout2;
    QLabel *markers_label;
    QToolButton *list_up_pb;
    QLabel *label_2;
    QToolButton *list_down_pb;
    QLabel *warn_label;
    QTreeView *markers_list;
    QFrame *frame_3;
    QGridLayout *gridLayout3;
    QToolButton *photo_pb;
    QToolButton *waive_pb;
    QFrame *frame_4;
    QVBoxLayout *vboxLayout;
    rdb::InfoWidget *info_text;
    QToolButton *important_pb;
    QToolButton *nophoto_pb;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *list_shapes_cb;
    QLabel *info_label;
    QToolButton *flags_pb;
    QToolButton *edit_pb;

    void setupUi(QFrame *MarkerBrowserPage)
    {
        if (MarkerBrowserPage->objectName().isEmpty())
            MarkerBrowserPage->setObjectName("MarkerBrowserPage");
        MarkerBrowserPage->resize(650, 570);
        verticalLayout = new QVBoxLayout(MarkerBrowserPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(MarkerBrowserPage);
        frame_5->setObjectName("frame_5");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rerun_button = new QToolButton(frame_5);
        rerun_button->setObjectName("rerun_button");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/run_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rerun_button->setIcon(icon);
        rerun_button->setAutoRaise(true);

        gridLayout->addWidget(rerun_button, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        line_2 = new QFrame(frame_5);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_5);

        splitter_2 = new QSplitter(MarkerBrowserPage);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter_2);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/find_16px@2x.png")));

        horizontalLayout->addWidget(label_4);

        cat_filter = new QLineEdit(frame_2);
        cat_filter->setObjectName("cat_filter");
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cat_filter->sizePolicy().hasHeightForWidth());
        cat_filter->setSizePolicy(sizePolicy3);
        cat_filter->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(cat_filter);

        cat_filter_label = new QLabel(frame_2);
        cat_filter_label->setObjectName("cat_filter_label");

        horizontalLayout->addWidget(cat_filter_label);

        cell_filter = new QLineEdit(frame_2);
        cell_filter->setObjectName("cell_filter");
        sizePolicy3.setHeightForWidth(cell_filter->sizePolicy().hasHeightForWidth());
        cell_filter->setSizePolicy(sizePolicy3);
        cell_filter->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(cell_filter);

        cell_filter_label = new QLabel(frame_2);
        cell_filter_label->setObjectName("cell_filter_label");

        horizontalLayout->addWidget(cell_filter_label);


        gridLayout1->addWidget(frame_2, 2, 2, 1, 2);

        dir_down_pb = new QToolButton(frame);
        dir_down_pb->setObjectName("dir_down_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/down_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        dir_down_pb->setIcon(icon1);

        gridLayout1->addWidget(dir_down_pb, 2, 1, 1, 1);

        dir_up_pb = new QToolButton(frame);
        dir_up_pb->setObjectName("dir_up_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        dir_up_pb->setIcon(icon2);

        gridLayout1->addWidget(dir_up_pb, 2, 0, 1, 1);

        directory_tree = new QTreeView(frame);
        directory_tree->setObjectName("directory_tree");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(directory_tree->sizePolicy().hasHeightForWidth());
        directory_tree->setSizePolicy(sizePolicy4);
        directory_tree->setBaseSize(QSize(0, 4));
        directory_tree->setContextMenuPolicy(Qt::ActionsContextMenu);
        directory_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        directory_tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        directory_tree->setUniformRowHeights(true);
        directory_tree->setSortingEnabled(true);
        directory_tree->setAllColumnsShowFocus(true);

        gridLayout1->addWidget(directory_tree, 1, 0, 1, 4);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 0, 0, 1, 4);

        splitter_2->addWidget(frame);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        markers_frame = new QFrame(splitter);
        markers_frame->setObjectName("markers_frame");
        sizePolicy2.setHeightForWidth(markers_frame->sizePolicy().hasHeightForWidth());
        markers_frame->setSizePolicy(sizePolicy2);
        markers_frame->setFrameShape(QFrame::NoFrame);
        markers_frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(markers_frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        markers_label = new QLabel(markers_frame);
        markers_label->setObjectName("markers_label");
        markers_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(markers_label, 2, 3, 1, 1);

        list_up_pb = new QToolButton(markers_frame);
        list_up_pb->setObjectName("list_up_pb");
        list_up_pb->setIcon(icon2);

        gridLayout2->addWidget(list_up_pb, 2, 0, 1, 1);

        label_2 = new QLabel(markers_frame);
        label_2->setObjectName("label_2");

        gridLayout2->addWidget(label_2, 0, 0, 1, 3);

        list_down_pb = new QToolButton(markers_frame);
        list_down_pb->setObjectName("list_down_pb");
        list_down_pb->setIcon(icon1);

        gridLayout2->addWidget(list_down_pb, 2, 1, 1, 1);

        warn_label = new QLabel(markers_frame);
        warn_label->setObjectName("warn_label");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        warn_label->setPalette(palette);
        QFont font;
        font.setBold(true);
        warn_label->setFont(font);

        gridLayout2->addWidget(warn_label, 2, 2, 1, 1);

        markers_list = new QTreeView(markers_frame);
        markers_list->setObjectName("markers_list");
        markers_list->setContextMenuPolicy(Qt::ActionsContextMenu);
        markers_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        markers_list->setRootIsDecorated(false);
        markers_list->setUniformRowHeights(true);
        markers_list->setSortingEnabled(true);
        markers_list->setAllColumnsShowFocus(true);

        gridLayout2->addWidget(markers_list, 1, 0, 1, 4);

        splitter->addWidget(markers_frame);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName("frame_3");
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(frame_3);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName("gridLayout3");
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        photo_pb = new QToolButton(frame_3);
        photo_pb->setObjectName("photo_pb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/photo_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        photo_pb->setIcon(icon3);

        gridLayout3->addWidget(photo_pb, 2, 7, 1, 1);

        waive_pb = new QToolButton(frame_3);
        waive_pb->setObjectName("waive_pb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/waived_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        waive_pb->setIcon(icon4);

        gridLayout3->addWidget(waive_pb, 2, 3, 1, 1);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy5);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Sunken);
        vboxLayout = new QVBoxLayout(frame_4);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        info_text = new rdb::InfoWidget(frame_4);
        info_text->setObjectName("info_text");
        info_text->setContextMenuPolicy(Qt::ActionsContextMenu);
        info_text->setFrameShape(QFrame::NoFrame);
        info_text->setLineWrapMode(QTextEdit::WidgetWidth);

        vboxLayout->addWidget(info_text);


        gridLayout3->addWidget(frame_4, 1, 0, 1, 8);

        important_pb = new QToolButton(frame_3);
        important_pb->setObjectName("important_pb");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/important_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        important_pb->setIcon(icon5);

        gridLayout3->addWidget(important_pb, 2, 5, 1, 1);

        nophoto_pb = new QToolButton(frame_3);
        nophoto_pb->setObjectName("nophoto_pb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/nophoto_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        nophoto_pb->setIcon(icon6);

        gridLayout3->addWidget(nophoto_pb, 2, 6, 1, 1);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        sizePolicy2.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy2);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_6);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        list_shapes_cb = new QCheckBox(frame_6);
        list_shapes_cb->setObjectName("list_shapes_cb");

        horizontalLayout_2->addWidget(list_shapes_cb);


        gridLayout3->addWidget(frame_6, 0, 0, 1, 8);

        info_label = new QLabel(frame_3);
        info_label->setObjectName("info_label");

        gridLayout3->addWidget(info_label, 2, 0, 1, 1);

        flags_pb = new QToolButton(frame_3);
        flags_pb->setObjectName("flags_pb");
        flags_pb->setPopupMode(QToolButton::MenuButtonPopup);

        gridLayout3->addWidget(flags_pb, 2, 2, 1, 1);

        edit_pb = new QToolButton(frame_3);
        edit_pb->setObjectName("edit_pb");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/edit_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_pb->setIcon(icon7);

        gridLayout3->addWidget(edit_pb, 2, 4, 1, 1);

        splitter->addWidget(frame_3);
        splitter_2->addWidget(splitter);

        verticalLayout->addWidget(splitter_2);

        QWidget::setTabOrder(directory_tree, markers_list);
        QWidget::setTabOrder(markers_list, list_up_pb);
        QWidget::setTabOrder(list_up_pb, list_down_pb);
        QWidget::setTabOrder(list_down_pb, info_text);
        QWidget::setTabOrder(info_text, dir_up_pb);
        QWidget::setTabOrder(dir_up_pb, dir_down_pb);
        QWidget::setTabOrder(dir_down_pb, cat_filter);
        QWidget::setTabOrder(cat_filter, cell_filter);
        QWidget::setTabOrder(cell_filter, flags_pb);
        QWidget::setTabOrder(flags_pb, waive_pb);
        QWidget::setTabOrder(waive_pb, important_pb);
        QWidget::setTabOrder(important_pb, nophoto_pb);
        QWidget::setTabOrder(nophoto_pb, photo_pb);

        retranslateUi(MarkerBrowserPage);

        QMetaObject::connectSlotsByName(MarkerBrowserPage);
    } // setupUi

    void retranslateUi(QFrame *MarkerBrowserPage)
    {
        MarkerBrowserPage->setWindowTitle(QCoreApplication::translate("MarkerBrowserPage", "Form", nullptr));
        rerun_button->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
#if QT_CONFIG(shortcut)
        rerun_button->setShortcut(QCoreApplication::translate("MarkerBrowserPage", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Configure filters", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QString());
        cat_filter_label->setText(QCoreApplication::translate("MarkerBrowserPage", "(Cat)", nullptr));
        cell_filter_label->setText(QCoreApplication::translate("MarkerBrowserPage", "(Cell)", nullptr));
        dir_down_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
        dir_up_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
        label->setText(QCoreApplication::translate("MarkerBrowserPage", "Directory", nullptr));
        markers_label->setText(QString());
        list_up_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MarkerBrowserPage", "Markers", nullptr));
        list_down_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
        warn_label->setText(QCoreApplication::translate("MarkerBrowserPage", "Not all entries are shown!", nullptr));
#if QT_CONFIG(tooltip)
        photo_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Add snapshot", nullptr));
#endif // QT_CONFIG(tooltip)
        photo_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "Photo", nullptr));
#if QT_CONFIG(tooltip)
        waive_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Waive", nullptr));
#endif // QT_CONFIG(tooltip)
        waive_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "W", nullptr));
#if QT_CONFIG(shortcut)
        waive_pb->setShortcut(QCoreApplication::translate("MarkerBrowserPage", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        important_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Important", nullptr));
#endif // QT_CONFIG(tooltip)
        important_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "Imp", nullptr));
#if QT_CONFIG(tooltip)
        nophoto_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Remove snapshot</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        nophoto_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
        label_3->setText(QCoreApplication::translate("MarkerBrowserPage", "Info", nullptr));
        list_shapes_cb->setText(QCoreApplication::translate("MarkerBrowserPage", "list shapes", nullptr));
        info_label->setText(QString());
#if QT_CONFIG(tooltip)
        flags_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Set or reset flag", nullptr));
#endif // QT_CONFIG(tooltip)
        flags_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "Flag", nullptr));
#if QT_CONFIG(tooltip)
        edit_pb->setToolTip(QCoreApplication::translate("MarkerBrowserPage", "Edit Comment", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_pb->setText(QCoreApplication::translate("MarkerBrowserPage", "...", nullptr));
#if QT_CONFIG(shortcut)
        edit_pb->setShortcut(QCoreApplication::translate("MarkerBrowserPage", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MarkerBrowserPage: public Ui_MarkerBrowserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKERBROWSERPAGE_H
