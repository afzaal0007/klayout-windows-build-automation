/********************************************************************************
** Form generated from reading UI file 'BrowserPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSERPANEL_H
#define UI_BROWSERPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layBrowserPanel.h"

QT_BEGIN_NAMESPACE

class Ui_BrowserPanel
{
public:
    QAction *action_find;
    QAction *action_bookmark;
    QAction *action_delete_bookmark;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QFrame *navigation_frame;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QTreeWidget *outline_tree;
    QTreeWidget *browser_bookmark_view;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    lay::BrowserTextWidget *browser;
    QFrame *search_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QToolButton *on_page_search_next;
    QLineEdit *on_page_search_edit;
    QToolButton *search_close_button;
    QToolButton *forward_pb;
    QToolButton *back_pb;
    QToolButton *home_pb;
    QSpacerItem *spacerItem1;
    QToolButton *prev_topic_pb;
    QSpacerItem *horizontalSpacer;
    QToolButton *search_button;
    QToolButton *next_topic_pb;
    QLineEdit *search_edit;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QToolButton *bookmark_pb;

    void setupUi(QWidget *BrowserPanel)
    {
        if (BrowserPanel->objectName().isEmpty())
            BrowserPanel->setObjectName("BrowserPanel");
        BrowserPanel->resize(826, 580);
        action_find = new QAction(BrowserPanel);
        action_find->setObjectName("action_find");
        action_bookmark = new QAction(BrowserPanel);
        action_bookmark->setObjectName("action_bookmark");
        action_delete_bookmark = new QAction(BrowserPanel);
        action_delete_bookmark->setObjectName("action_delete_bookmark");
        gridLayout = new QGridLayout(BrowserPanel);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 5, 1, 1);

        frame = new QFrame(BrowserPanel);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        navigation_frame = new QFrame(splitter);
        navigation_frame->setObjectName("navigation_frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(navigation_frame->sizePolicy().hasHeightForWidth());
        navigation_frame->setSizePolicy(sizePolicy);
        navigation_frame->setFrameShape(QFrame::NoFrame);
        navigation_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(navigation_frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(navigation_frame);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        outline_tree = new QTreeWidget(splitter_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        outline_tree->setHeaderItem(__qtreewidgetitem);
        outline_tree->setObjectName("outline_tree");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outline_tree->sizePolicy().hasHeightForWidth());
        outline_tree->setSizePolicy(sizePolicy1);
        outline_tree->setBaseSize(QSize(0, 0));
        outline_tree->setRootIsDecorated(false);
        outline_tree->setItemsExpandable(true);
        outline_tree->setExpandsOnDoubleClick(false);
        splitter_2->addWidget(outline_tree);
        browser_bookmark_view = new QTreeWidget(splitter_2);
        browser_bookmark_view->setObjectName("browser_bookmark_view");
        browser_bookmark_view->setRootIsDecorated(false);
        splitter_2->addWidget(browser_bookmark_view);

        verticalLayout_3->addWidget(splitter_2);

        splitter->addWidget(navigation_frame);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        browser = new lay::BrowserTextWidget(frame_3);
        browser->setObjectName("browser");
        sizePolicy1.setHeightForWidth(browser->sizePolicy().hasHeightForWidth());
        browser->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(browser);

        search_frame = new QFrame(frame_3);
        search_frame->setObjectName("search_frame");
        search_frame->setFrameShape(QFrame::NoFrame);
        search_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(search_frame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(search_frame);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        on_page_search_next = new QToolButton(search_frame);
        on_page_search_next->setObjectName("on_page_search_next");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/find_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        on_page_search_next->setIcon(icon);
        on_page_search_next->setAutoRaise(true);

        horizontalLayout->addWidget(on_page_search_next);

        on_page_search_edit = new QLineEdit(search_frame);
        on_page_search_edit->setObjectName("on_page_search_edit");

        horizontalLayout->addWidget(on_page_search_edit);

        search_close_button = new QToolButton(search_frame);
        search_close_button->setObjectName("search_close_button");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_edit_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_close_button->setIcon(icon1);
        search_close_button->setAutoRaise(true);

        horizontalLayout->addWidget(search_close_button);


        verticalLayout_2->addWidget(search_frame);

        splitter->addWidget(frame_3);

        verticalLayout->addWidget(splitter);


        gridLayout->addWidget(frame, 1, 0, 1, 14);

        forward_pb = new QToolButton(BrowserPanel);
        forward_pb->setObjectName("forward_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/forward_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward_pb->setIcon(icon2);
        forward_pb->setIconSize(QSize(24, 24));
        forward_pb->setAutoRaise(true);

        gridLayout->addWidget(forward_pb, 0, 3, 1, 1);

        back_pb = new QToolButton(BrowserPanel);
        back_pb->setObjectName("back_pb");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/back_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_pb->setIcon(icon3);
        back_pb->setIconSize(QSize(24, 24));
        back_pb->setAutoRaise(true);

        gridLayout->addWidget(back_pb, 0, 2, 1, 1);

        home_pb = new QToolButton(BrowserPanel);
        home_pb->setObjectName("home_pb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/home_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        home_pb->setIcon(icon4);
        home_pb->setIconSize(QSize(24, 24));
        home_pb->setAutoRaise(true);

        gridLayout->addWidget(home_pb, 0, 4, 1, 1);

        spacerItem1 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 1, 1, 1);

        prev_topic_pb = new QToolButton(BrowserPanel);
        prev_topic_pb->setObjectName("prev_topic_pb");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/prev_topic_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        prev_topic_pb->setIcon(icon5);
        prev_topic_pb->setIconSize(QSize(24, 24));
        prev_topic_pb->setAutoRaise(true);

        gridLayout->addWidget(prev_topic_pb, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 8, 1, 1);

        search_button = new QToolButton(BrowserPanel);
        search_button->setObjectName("search_button");
        search_button->setIcon(icon);
        search_button->setAutoRaise(true);

        gridLayout->addWidget(search_button, 0, 11, 1, 1);

        next_topic_pb = new QToolButton(BrowserPanel);
        next_topic_pb->setObjectName("next_topic_pb");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/next_topic_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_topic_pb->setIcon(icon6);
        next_topic_pb->setIconSize(QSize(24, 24));
        next_topic_pb->setAutoRaise(true);

        gridLayout->addWidget(next_topic_pb, 0, 7, 1, 1);

        search_edit = new QLineEdit(BrowserPanel);
        search_edit->setObjectName("search_edit");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(search_edit->sizePolicy().hasHeightForWidth());
        search_edit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(search_edit, 0, 12, 1, 1);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 10, 1, 1);

        label = new QLabel(BrowserPanel);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bookmark_pb = new QToolButton(BrowserPanel);
        bookmark_pb->setObjectName("bookmark_pb");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/bookmark_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        bookmark_pb->setIcon(icon7);
        bookmark_pb->setIconSize(QSize(24, 24));
        bookmark_pb->setAutoRaise(true);

        gridLayout->addWidget(bookmark_pb, 0, 9, 1, 1);

        QWidget::setTabOrder(search_edit, back_pb);
        QWidget::setTabOrder(back_pb, forward_pb);
        QWidget::setTabOrder(forward_pb, home_pb);

        retranslateUi(BrowserPanel);
        QObject::connect(search_close_button, &QToolButton::clicked, search_frame, qOverload<>(&QFrame::hide));

        QMetaObject::connectSlotsByName(BrowserPanel);
    } // setupUi

    void retranslateUi(QWidget *BrowserPanel)
    {
        BrowserPanel->setWindowTitle(QCoreApplication::translate("BrowserPanel", "Form", nullptr));
        action_find->setText(QCoreApplication::translate("BrowserPanel", "Find", nullptr));
#if QT_CONFIG(shortcut)
        action_find->setShortcut(QCoreApplication::translate("BrowserPanel", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_bookmark->setText(QCoreApplication::translate("BrowserPanel", "Bookmark", nullptr));
#if QT_CONFIG(shortcut)
        action_bookmark->setShortcut(QCoreApplication::translate("BrowserPanel", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_delete_bookmark->setText(QCoreApplication::translate("BrowserPanel", "Delete Entry", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = browser_bookmark_view->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BrowserPanel", "Favorites", nullptr));
        label_3->setText(QCoreApplication::translate("BrowserPanel", "  Find on page  ", nullptr));
        on_page_search_next->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
        search_close_button->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
#if QT_CONFIG(tooltip)
        forward_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Forward", nullptr));
#endif // QT_CONFIG(tooltip)
        forward_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
#if QT_CONFIG(tooltip)
        back_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Back", nullptr));
#endif // QT_CONFIG(tooltip)
        back_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
#if QT_CONFIG(tooltip)
        home_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Home", nullptr));
#endif // QT_CONFIG(tooltip)
        home_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
#if QT_CONFIG(tooltip)
        prev_topic_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Previous Topic", nullptr));
#endif // QT_CONFIG(tooltip)
        prev_topic_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
        search_button->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
#if QT_CONFIG(tooltip)
        next_topic_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Next Topic", nullptr));
#endif // QT_CONFIG(tooltip)
        next_topic_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
        label->setText(QCoreApplication::translate("BrowserPanel", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        bookmark_pb->setToolTip(QCoreApplication::translate("BrowserPanel", "Add this location to the favorites list", nullptr));
#endif // QT_CONFIG(tooltip)
        bookmark_pb->setText(QCoreApplication::translate("BrowserPanel", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowserPanel: public Ui_BrowserPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSERPANEL_H
