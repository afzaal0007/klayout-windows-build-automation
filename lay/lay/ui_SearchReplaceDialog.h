/********************************************************************************
** Form generated from reading UI file 'SearchReplaceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHREPLACEDIALOG_H
#define UI_SEARCHREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchReplaceDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout1;
    QSplitter *splitter;
    QTabWidget *mode_tab;
    QWidget *tab;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *hint_label1;
    QLabel *label_2;
    QStackedWidget *find_properties;
    QWidget *page;
    QWidget *page_2;
    QComboBox *find_context;
    QLabel *label_17;
    QComboBox *find_objects;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *find_all_button;
    QSpacerItem *spacerItem2;
    QWidget *tab_4;
    QGridLayout *gridLayout1;
    QLabel *hint_label2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem4;
    QPushButton *delete_all_button;
    QPushButton *delete_button;
    QLabel *label_34;
    QComboBox *delete_context;
    QLabel *label_33;
    QComboBox *delete_objects;
    QSpacerItem *spacerItem5;
    QStackedWidget *delete_properties;
    QWidget *page_3;
    QWidget *page_4;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    QLabel *hint_label3;
    QComboBox *replace_context;
    QLabel *label_40;
    QLabel *label_39;
    QFrame *frame_8;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem6;
    QPushButton *replace_all_button;
    QPushButton *replace_button;
    QComboBox *replace_objects;
    QSpacerItem *spacerItem7;
    QLabel *label_4;
    QStackedWidget *find_replace_properties;
    QWidget *page_5;
    QWidget *page_6;
    QLabel *label_42;
    QSpacerItem *spacerItem8;
    QStackedWidget *replace_properties;
    QWidget *page_7;
    QWidget *page_8;
    QWidget *tab_3;
    QGridLayout *gridLayout3;
    QLabel *label_16;
    QLabel *label_15;
    QSpacerItem *spacerItem9;
    QFrame *line;
    QLabel *hint_label4;
    QFrame *frame_7;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem10;
    QPushButton *execute_all_button;
    QSpacerItem *spacerItem11;
    QComboBox *recent_queries;
    QFrame *frame_6;
    QGridLayout *gridLayout4;
    QToolButton *add_saved_button;
    QSpacerItem *spacerItem12;
    QToolButton *rename_saved_button;
    QToolButton *delete_saved_button;
    QToolButton *replace_saved_button;
    QListWidget *saved_queries;
    QTextEdit *custom_query;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout2;
    QFrame *frame_5;
    QHBoxLayout *hboxLayout4;
    QLabel *label_8;
    QToolButton *export_b;
    QStackedWidget *results_stack;
    QWidget *page_9;
    QVBoxLayout *vboxLayout3;
    QTreeView *results;
    QWidget *page_10;
    QVBoxLayout *vboxLayout4;
    QLabel *hint_label;
    QWidget *page_11;
    QVBoxLayout *vboxLayout5;
    QLabel *label_6;
    QWidget *page_12;
    QVBoxLayout *vboxLayout6;
    QLabel *label_7;
    QWidget *page_13;
    QVBoxLayout *vboxLayout7;
    QLabel *label_9;
    QFrame *execute_panel;
    QGridLayout *gridLayout5;
    QLabel *label_5;
    QFrame *frame_4;
    QHBoxLayout *hboxLayout5;
    QPushButton *delete_selected_button;
    QPushButton *replace_selected_button;
    QPushButton *cancel_button;
    QSpacerItem *spacerItem13;
    QFrame *frame;
    QHBoxLayout *hboxLayout6;
    QPushButton *configure_button;
    QSpacerItem *spacerItem14;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SearchReplaceDialog)
    {
        if (SearchReplaceDialog->objectName().isEmpty())
            SearchReplaceDialog->setObjectName("SearchReplaceDialog");
        SearchReplaceDialog->resize(837, 590);
        vboxLayout = new QVBoxLayout(SearchReplaceDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        frame_2 = new QFrame(SearchReplaceDialog);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame_2);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        splitter = new QSplitter(frame_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        mode_tab = new QTabWidget(splitter);
        mode_tab->setObjectName("mode_tab");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 2);

        hint_label1 = new QLabel(tab);
        hint_label1->setObjectName("hint_label1");
        hint_label1->setWordWrap(true);

        gridLayout->addWidget(hint_label1, 6, 0, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        find_properties = new QStackedWidget(tab);
        find_properties->setObjectName("find_properties");
        page = new QWidget();
        page->setObjectName("page");
        find_properties->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        find_properties->addWidget(page_2);

        gridLayout->addWidget(find_properties, 4, 0, 1, 2);

        find_context = new QComboBox(tab);
        find_context->setObjectName("find_context");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(find_context->sizePolicy().hasHeightForWidth());
        find_context->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(find_context, 1, 1, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 1, 0, 1, 1);

        find_objects = new QComboBox(tab);
        find_objects->setObjectName("find_objects");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(find_objects->sizePolicy().hasHeightForWidth());
        find_objects->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(find_objects, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        find_all_button = new QPushButton(tab);
        find_all_button->setObjectName("find_all_button");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(find_all_button->sizePolicy().hasHeightForWidth());
        find_all_button->setSizePolicy(sizePolicy3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/run_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_all_button->setIcon(icon);
        find_all_button->setAutoDefault(true);

        hboxLayout->addWidget(find_all_button);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 2);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 2, 1, 1, 1);

        mode_tab->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout1 = new QGridLayout(tab_4);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName("gridLayout1");
        hint_label2 = new QLabel(tab_4);
        hint_label2->setObjectName("hint_label2");
        hint_label2->setWordWrap(true);

        gridLayout1->addWidget(hint_label2, 6, 0, 1, 2);

        spacerItem3 = new QSpacerItem(311, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem3, 5, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        delete_all_button = new QPushButton(tab_4);
        delete_all_button->setObjectName("delete_all_button");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/runthis.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_all_button->setIcon(icon1);

        hboxLayout1->addWidget(delete_all_button);

        delete_button = new QPushButton(tab_4);
        delete_button->setObjectName("delete_button");
        delete_button->setIcon(icon);
        delete_button->setAutoDefault(true);

        hboxLayout1->addWidget(delete_button);


        gridLayout1->addLayout(hboxLayout1, 8, 0, 1, 2);

        label_34 = new QLabel(tab_4);
        label_34->setObjectName("label_34");

        gridLayout1->addWidget(label_34, 0, 0, 1, 1);

        delete_context = new QComboBox(tab_4);
        delete_context->setObjectName("delete_context");
        sizePolicy1.setHeightForWidth(delete_context->sizePolicy().hasHeightForWidth());
        delete_context->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(delete_context, 1, 1, 1, 1);

        label_33 = new QLabel(tab_4);
        label_33->setObjectName("label_33");

        gridLayout1->addWidget(label_33, 1, 0, 1, 1);

        delete_objects = new QComboBox(tab_4);
        delete_objects->setObjectName("delete_objects");
        sizePolicy2.setHeightForWidth(delete_objects->sizePolicy().hasHeightForWidth());
        delete_objects->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(delete_objects, 0, 1, 1, 1);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem5, 2, 0, 1, 2);

        delete_properties = new QStackedWidget(tab_4);
        delete_properties->setObjectName("delete_properties");
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        delete_properties->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        delete_properties->addWidget(page_4);

        gridLayout1->addWidget(delete_properties, 4, 0, 1, 2);

        label_3 = new QLabel(tab_4);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 3, 0, 1, 2);

        mode_tab->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout2 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName("gridLayout2");
        hint_label3 = new QLabel(tab_2);
        hint_label3->setObjectName("hint_label3");
        hint_label3->setWordWrap(true);

        gridLayout2->addWidget(hint_label3, 8, 0, 1, 2);

        replace_context = new QComboBox(tab_2);
        replace_context->setObjectName("replace_context");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(replace_context->sizePolicy().hasHeightForWidth());
        replace_context->setSizePolicy(sizePolicy4);

        gridLayout2->addWidget(replace_context, 1, 1, 1, 1);

        label_40 = new QLabel(tab_2);
        label_40->setObjectName("label_40");

        gridLayout2->addWidget(label_40, 1, 0, 1, 1);

        label_39 = new QLabel(tab_2);
        label_39->setObjectName("label_39");

        gridLayout2->addWidget(label_39, 0, 0, 1, 1);

        frame_8 = new QFrame(tab_2);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_8);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName("hboxLayout2");
        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        replace_all_button = new QPushButton(frame_8);
        replace_all_button->setObjectName("replace_all_button");
        replace_all_button->setIcon(icon1);

        hboxLayout2->addWidget(replace_all_button);

        replace_button = new QPushButton(frame_8);
        replace_button->setObjectName("replace_button");
        replace_button->setIcon(icon);
        replace_button->setAutoDefault(true);

        hboxLayout2->addWidget(replace_button);


        gridLayout2->addWidget(frame_8, 9, 0, 1, 2);

        replace_objects = new QComboBox(tab_2);
        replace_objects->setObjectName("replace_objects");
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(replace_objects->sizePolicy().hasHeightForWidth());
        replace_objects->setSizePolicy(sizePolicy5);

        gridLayout2->addWidget(replace_objects, 0, 1, 1, 1);

        spacerItem7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout2->addItem(spacerItem7, 2, 0, 1, 2);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");

        gridLayout2->addWidget(label_4, 3, 0, 1, 2);

        find_replace_properties = new QStackedWidget(tab_2);
        find_replace_properties->setObjectName("find_replace_properties");
        sizePolicy.setHeightForWidth(find_replace_properties->sizePolicy().hasHeightForWidth());
        find_replace_properties->setSizePolicy(sizePolicy);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        find_replace_properties->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        find_replace_properties->addWidget(page_6);

        gridLayout2->addWidget(find_replace_properties, 4, 0, 1, 2);

        label_42 = new QLabel(tab_2);
        label_42->setObjectName("label_42");

        gridLayout2->addWidget(label_42, 6, 0, 1, 2);

        spacerItem8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout2->addItem(spacerItem8, 5, 0, 1, 2);

        replace_properties = new QStackedWidget(tab_2);
        replace_properties->setObjectName("replace_properties");
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(replace_properties->sizePolicy().hasHeightForWidth());
        replace_properties->setSizePolicy(sizePolicy6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        replace_properties->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        replace_properties->addWidget(page_8);

        gridLayout2->addWidget(replace_properties, 7, 0, 1, 2);

        mode_tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout3 = new QGridLayout(tab_3);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName("gridLayout3");
        label_16 = new QLabel(tab_3);
        label_16->setObjectName("label_16");

        gridLayout3->addWidget(label_16, 4, 0, 1, 1);

        label_15 = new QLabel(tab_3);
        label_15->setObjectName("label_15");

        gridLayout3->addWidget(label_15, 2, 0, 1, 1);

        spacerItem9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem9, 5, 0, 1, 1);

        line = new QFrame(tab_3);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout3->addWidget(line, 3, 0, 1, 2);

        hint_label4 = new QLabel(tab_3);
        hint_label4->setObjectName("hint_label4");

        gridLayout3->addWidget(hint_label4, 0, 0, 1, 2);

        frame_7 = new QFrame(tab_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frame_7);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName("hboxLayout3");
        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem10);

        execute_all_button = new QPushButton(frame_7);
        execute_all_button->setObjectName("execute_all_button");
        execute_all_button->setIcon(icon);
        execute_all_button->setAutoDefault(true);

        hboxLayout3->addWidget(execute_all_button);


        gridLayout3->addWidget(frame_7, 7, 0, 1, 2);

        spacerItem11 = new QSpacerItem(16, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem11, 6, 0, 1, 2);

        recent_queries = new QComboBox(tab_3);
        recent_queries->setObjectName("recent_queries");
        sizePolicy1.setHeightForWidth(recent_queries->sizePolicy().hasHeightForWidth());
        recent_queries->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(recent_queries, 2, 1, 1, 1);

        frame_6 = new QFrame(tab_3);
        frame_6->setObjectName("frame_6");
        QSizePolicy sizePolicy7(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy7);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout4 = new QGridLayout(frame_6);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName("gridLayout4");
        add_saved_button = new QToolButton(frame_6);
        add_saved_button->setObjectName("add_saved_button");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_saved_button->setIcon(icon2);
        add_saved_button->setAutoRaise(true);

        gridLayout4->addWidget(add_saved_button, 0, 1, 1, 1);

        spacerItem12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem12, 4, 1, 2, 1);

        rename_saved_button = new QToolButton(frame_6);
        rename_saved_button->setObjectName("rename_saved_button");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rename_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rename_saved_button->setIcon(icon3);
        rename_saved_button->setAutoRaise(true);

        gridLayout4->addWidget(rename_saved_button, 3, 1, 1, 1);

        delete_saved_button = new QToolButton(frame_6);
        delete_saved_button->setObjectName("delete_saved_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_saved_button->setIcon(icon4);
        delete_saved_button->setAutoRaise(true);

        gridLayout4->addWidget(delete_saved_button, 2, 1, 1, 1);

        replace_saved_button = new QToolButton(frame_6);
        replace_saved_button->setObjectName("replace_saved_button");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/left_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        replace_saved_button->setIcon(icon5);
        replace_saved_button->setAutoRaise(true);

        gridLayout4->addWidget(replace_saved_button, 1, 1, 1, 1);

        saved_queries = new QListWidget(frame_6);
        saved_queries->setObjectName("saved_queries");

        gridLayout4->addWidget(saved_queries, 0, 0, 6, 1);


        gridLayout3->addWidget(frame_6, 4, 1, 2, 1);

        custom_query = new QTextEdit(tab_3);
        custom_query->setObjectName("custom_query");
        QFont font;
        font.setFamilies({QString::fromUtf8("Liberation Mono")});
        custom_query->setFont(font);

        gridLayout3->addWidget(custom_query, 1, 0, 1, 2);

        mode_tab->addTab(tab_3, QString());
        splitter->addWidget(mode_tab);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy8);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame_3);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        hboxLayout4 = new QHBoxLayout(frame_5);
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName("hboxLayout4");
        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy9);

        hboxLayout4->addWidget(label_8);

        export_b = new QToolButton(frame_5);
        export_b->setObjectName("export_b");
        export_b->setPopupMode(QToolButton::InstantPopup);

        hboxLayout4->addWidget(export_b);


        vboxLayout2->addWidget(frame_5);

        results_stack = new QStackedWidget(frame_3);
        results_stack->setObjectName("results_stack");
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        vboxLayout3 = new QVBoxLayout(page_9);
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName("vboxLayout3");
        results = new QTreeView(page_9);
        results->setObjectName("results");
        results->setAlternatingRowColors(false);
        results->setSelectionMode(QAbstractItemView::ExtendedSelection);
        results->setRootIsDecorated(false);

        vboxLayout3->addWidget(results);

        results_stack->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        vboxLayout4 = new QVBoxLayout(page_10);
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(20, 20, 20, 20);
        vboxLayout4->setObjectName("vboxLayout4");
        hint_label = new QLabel(page_10);
        hint_label->setObjectName("hint_label");
        hint_label->setAlignment(Qt::AlignCenter);
        hint_label->setWordWrap(true);

        vboxLayout4->addWidget(hint_label);

        results_stack->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        vboxLayout5 = new QVBoxLayout(page_11);
#ifndef Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
        vboxLayout5->setContentsMargins(20, 20, 20, 20);
        vboxLayout5->setObjectName("vboxLayout5");
        label_6 = new QLabel(page_11);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        vboxLayout5->addWidget(label_6);

        results_stack->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        vboxLayout6 = new QVBoxLayout(page_12);
#ifndef Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
        vboxLayout6->setContentsMargins(20, 20, 20, 20);
        vboxLayout6->setObjectName("vboxLayout6");
        label_7 = new QLabel(page_12);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(true);

        vboxLayout6->addWidget(label_7);

        results_stack->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        vboxLayout7 = new QVBoxLayout(page_13);
#ifndef Q_OS_MAC
        vboxLayout7->setSpacing(6);
#endif
        vboxLayout7->setContentsMargins(20, 20, 20, 20);
        vboxLayout7->setObjectName("vboxLayout7");
        label_9 = new QLabel(page_13);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        vboxLayout7->addWidget(label_9);

        results_stack->addWidget(page_13);

        vboxLayout2->addWidget(results_stack);

        execute_panel = new QFrame(frame_3);
        execute_panel->setObjectName("execute_panel");
        execute_panel->setFrameShape(QFrame::StyledPanel);
        execute_panel->setFrameShadow(QFrame::Raised);
        gridLayout5 = new QGridLayout(execute_panel);
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout5->setObjectName("gridLayout5");
        label_5 = new QLabel(execute_panel);
        label_5->setObjectName("label_5");

        gridLayout5->addWidget(label_5, 0, 0, 1, 5);

        frame_4 = new QFrame(execute_panel);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        hboxLayout5 = new QHBoxLayout(frame_4);
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName("hboxLayout5");
        delete_selected_button = new QPushButton(frame_4);
        delete_selected_button->setObjectName("delete_selected_button");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/execmark_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_selected_button->setIcon(icon6);

        hboxLayout5->addWidget(delete_selected_button);

        replace_selected_button = new QPushButton(frame_4);
        replace_selected_button->setObjectName("replace_selected_button");
        replace_selected_button->setIcon(icon6);

        hboxLayout5->addWidget(replace_selected_button);

        cancel_button = new QPushButton(frame_4);
        cancel_button->setObjectName("cancel_button");

        hboxLayout5->addWidget(cancel_button);

        spacerItem13 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem13);


        gridLayout5->addWidget(frame_4, 1, 0, 1, 5);


        vboxLayout2->addWidget(execute_panel);

        splitter->addWidget(frame_3);

        vboxLayout1->addWidget(splitter);


        vboxLayout->addWidget(frame_2);

        frame = new QFrame(SearchReplaceDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName("hboxLayout6");
        configure_button = new QPushButton(frame);
        configure_button->setObjectName("configure_button");
        configure_button->setAutoDefault(false);

        hboxLayout6->addWidget(configure_button);

        spacerItem14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem14);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setAutoDefault(false);

        hboxLayout6->addWidget(pushButton_2);


        vboxLayout->addWidget(frame);

        QWidget::setTabOrder(mode_tab, find_objects);
        QWidget::setTabOrder(find_objects, find_context);
        QWidget::setTabOrder(find_context, find_all_button);
        QWidget::setTabOrder(find_all_button, delete_objects);
        QWidget::setTabOrder(delete_objects, delete_context);
        QWidget::setTabOrder(delete_context, delete_all_button);
        QWidget::setTabOrder(delete_all_button, delete_button);
        QWidget::setTabOrder(delete_button, replace_objects);
        QWidget::setTabOrder(replace_objects, replace_context);
        QWidget::setTabOrder(replace_context, replace_all_button);
        QWidget::setTabOrder(replace_all_button, replace_button);
        QWidget::setTabOrder(replace_button, custom_query);
        QWidget::setTabOrder(custom_query, recent_queries);
        QWidget::setTabOrder(recent_queries, saved_queries);
        QWidget::setTabOrder(saved_queries, add_saved_button);
        QWidget::setTabOrder(add_saved_button, replace_saved_button);
        QWidget::setTabOrder(replace_saved_button, delete_saved_button);
        QWidget::setTabOrder(delete_saved_button, rename_saved_button);
        QWidget::setTabOrder(rename_saved_button, execute_all_button);
        QWidget::setTabOrder(execute_all_button, delete_selected_button);
        QWidget::setTabOrder(delete_selected_button, replace_selected_button);
        QWidget::setTabOrder(replace_selected_button, cancel_button);
        QWidget::setTabOrder(cancel_button, configure_button);
        QWidget::setTabOrder(configure_button, pushButton_2);
        QWidget::setTabOrder(pushButton_2, results);

        retranslateUi(SearchReplaceDialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, SearchReplaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(find_objects, &QComboBox::currentIndexChanged, find_properties, &QStackedWidget::setCurrentIndex);
        QObject::connect(delete_objects, &QComboBox::currentIndexChanged, delete_properties, &QStackedWidget::setCurrentIndex);
        QObject::connect(replace_objects, &QComboBox::currentIndexChanged, find_replace_properties, &QStackedWidget::setCurrentIndex);
        QObject::connect(replace_objects, &QComboBox::currentIndexChanged, replace_properties, &QStackedWidget::setCurrentIndex);

        mode_tab->setCurrentIndex(3);
        find_all_button->setDefault(false);
        delete_button->setDefault(false);
        replace_button->setDefault(false);
        execute_all_button->setDefault(false);
        results_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SearchReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchReplaceDialog)
    {
        SearchReplaceDialog->setWindowTitle(QCoreApplication::translate("SearchReplaceDialog", "Search and Replace", nullptr));
        hint_label1->setText(QCoreApplication::translate("SearchReplaceDialog", "<html><body>You can do much more with custom queries.<br/><a href=\"int:/about/custom_queries.xml\">Click here for details</a>.</body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SearchReplaceDialog", "With ...", nullptr));
        label_17->setText(QCoreApplication::translate("SearchReplaceDialog", "In ...    ", nullptr));
        label->setText(QCoreApplication::translate("SearchReplaceDialog", "Object", nullptr));
#if QT_CONFIG(tooltip)
        find_all_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Find all</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        find_all_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Find", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab), QCoreApplication::translate("SearchReplaceDialog", "Find", nullptr));
        hint_label2->setText(QCoreApplication::translate("SearchReplaceDialog", "<html><body>You can do much more with custom queries. <br/><a href=\"int:/about/custom_queries.xml\">Click here for details</a>.</body></html>", nullptr));
        delete_all_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Delete All", nullptr));
#if QT_CONFIG(tooltip)
        delete_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Find all</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Select + Delete", nullptr));
        label_34->setText(QCoreApplication::translate("SearchReplaceDialog", "Object", nullptr));
        label_33->setText(QCoreApplication::translate("SearchReplaceDialog", "In ...    ", nullptr));
        label_3->setText(QCoreApplication::translate("SearchReplaceDialog", "With ...", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_4), QCoreApplication::translate("SearchReplaceDialog", "Delete", nullptr));
        hint_label3->setText(QCoreApplication::translate("SearchReplaceDialog", "<html><body>You can do much more with custom queries. <br/><a href=\"int:/about/custom_queries.xml\">Click here for details</a>.</body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("SearchReplaceDialog", "In ...    ", nullptr));
        label_39->setText(QCoreApplication::translate("SearchReplaceDialog", "Object", nullptr));
        replace_all_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Replace All", nullptr));
#if QT_CONFIG(tooltip)
        replace_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execute and ask on each action</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        replace_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Select + Replace", nullptr));
        label_4->setText(QCoreApplication::translate("SearchReplaceDialog", "With ...", nullptr));
        label_42->setText(QCoreApplication::translate("SearchReplaceDialog", "Replace ...", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_2), QCoreApplication::translate("SearchReplaceDialog", "Replace", nullptr));
        label_16->setText(QCoreApplication::translate("SearchReplaceDialog", "Saved", nullptr));
        label_15->setText(QCoreApplication::translate("SearchReplaceDialog", "Recent", nullptr));
        hint_label4->setText(QCoreApplication::translate("SearchReplaceDialog", "<html><body>Query (Search/Action) - <a href=\"int:/about/custom_queries.xml\">Click here for details</a></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        execute_all_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execute and ask on each action</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        execute_all_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Execute", nullptr));
#if QT_CONFIG(tooltip)
        add_saved_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Save current query to list</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_saved_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Save", nullptr));
#if QT_CONFIG(tooltip)
        rename_saved_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rename saved query</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rename_saved_button->setText(QCoreApplication::translate("SearchReplaceDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        delete_saved_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Remove from list</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_saved_button->setText(QCoreApplication::translate("SearchReplaceDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        replace_saved_button->setToolTip(QCoreApplication::translate("SearchReplaceDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:11pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Replace with current query</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        replace_saved_button->setText(QCoreApplication::translate("SearchReplaceDialog", "...", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_3), QCoreApplication::translate("SearchReplaceDialog", "Custom", nullptr));
        label_8->setText(QCoreApplication::translate("SearchReplaceDialog", "Results", nullptr));
        export_b->setText(QCoreApplication::translate("SearchReplaceDialog", "Export", nullptr));
        hint_label->setText(QCoreApplication::translate("SearchReplaceDialog", "Press 'Find' button to show results", nullptr));
        label_6->setText(QCoreApplication::translate("SearchReplaceDialog", "Press 'Delete All' button to delete all selected items\n"
"Press 'Select+Delete' button to show items found, select some and delete them", nullptr));
        label_7->setText(QCoreApplication::translate("SearchReplaceDialog", "Press 'Replace All' button to delete all selected items\n"
"Press 'Select+Replace' button to show items found, select some and replace them", nullptr));
        label_9->setText(QCoreApplication::translate("SearchReplaceDialog", "Press 'Execute' button to execute the query", nullptr));
        label_5->setText(QCoreApplication::translate("SearchReplaceDialog", "Apply action ...", nullptr));
        delete_selected_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Delete", nullptr));
        replace_selected_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Replace", nullptr));
        cancel_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Cancel", nullptr));
        configure_button->setText(QCoreApplication::translate("SearchReplaceDialog", "Configure", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchReplaceDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchReplaceDialog: public Ui_SearchReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHREPLACEDIALOG_H
