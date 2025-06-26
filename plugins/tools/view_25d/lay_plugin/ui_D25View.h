/********************************************************************************
** Form generated from reading UI file 'D25View.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D25VIEW_H
#define UI_D25VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layD25ViewWidget.h"

QT_BEGIN_NAMESPACE

class Ui_D25View
{
public:
    QAction *select_all_action;
    QAction *unselect_all_action;
    QAction *show_all_action;
    QAction *hide_all_action;
    QAction *show_selected_action;
    QAction *hide_selected_action;
    QAction *visibility_follows_selection_action;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *rerun_button;
    QSpacerItem *horizontalSpacer_4;
    QSlider *zoom_slider;
    QLabel *percent_label;
    QLineEdit *zoom_factor;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSlider *vzoom_slider;
    QLabel *label;
    QLineEdit *vzoom_factor;
    QSpacerItem *horizontalSpacer;
    QToolButton *fit_left;
    QToolButton *fit_front;
    QToolButton *fit_right;
    QToolButton *fit_back;
    QToolButton *fit_top;
    QToolButton *fit_bottom;
    QStackedWidget *gl_stack;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    lay::D25ViewWidget *d25_view;
    QListWidget *material_list;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *error_text;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *empty_label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *doc_label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;

    void setupUi(QDialog *D25View)
    {
        if (D25View->objectName().isEmpty())
            D25View->setObjectName("D25View");
        D25View->resize(854, 665);
        select_all_action = new QAction(D25View);
        select_all_action->setObjectName("select_all_action");
        unselect_all_action = new QAction(D25View);
        unselect_all_action->setObjectName("unselect_all_action");
        show_all_action = new QAction(D25View);
        show_all_action->setObjectName("show_all_action");
        hide_all_action = new QAction(D25View);
        hide_all_action->setObjectName("hide_all_action");
        show_selected_action = new QAction(D25View);
        show_selected_action->setObjectName("show_selected_action");
        hide_selected_action = new QAction(D25View);
        hide_selected_action->setObjectName("hide_selected_action");
        visibility_follows_selection_action = new QAction(D25View);
        visibility_follows_selection_action->setObjectName("visibility_follows_selection_action");
        visibility_follows_selection_action->setCheckable(true);
        vboxLayout = new QVBoxLayout(D25View);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(D25View);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rerun_button = new QToolButton(frame);
        rerun_button->setObjectName("rerun_button");
        rerun_button->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/run_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        rerun_button->setIcon(icon);
        rerun_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(rerun_button);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        zoom_slider = new QSlider(frame);
        zoom_slider->setObjectName("zoom_slider");
        sizePolicy.setHeightForWidth(zoom_slider->sizePolicy().hasHeightForWidth());
        zoom_slider->setSizePolicy(sizePolicy);
        zoom_slider->setMaximumSize(QSize(150, 16777215));
        zoom_slider->setFocusPolicy(Qt::NoFocus);
        zoom_slider->setMinimum(-300);
        zoom_slider->setMaximum(300);
        zoom_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(zoom_slider);

        percent_label = new QLabel(frame);
        percent_label->setObjectName("percent_label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(percent_label->sizePolicy().hasHeightForWidth());
        percent_label->setSizePolicy(sizePolicy1);
        percent_label->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(percent_label);

        zoom_factor = new QLineEdit(frame);
        zoom_factor->setObjectName("zoom_factor");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zoom_factor->sizePolicy().hasHeightForWidth());
        zoom_factor->setSizePolicy(sizePolicy2);
        zoom_factor->setMinimumSize(QSize(60, 0));
        zoom_factor->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(zoom_factor);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        vzoom_slider = new QSlider(frame);
        vzoom_slider->setObjectName("vzoom_slider");
        sizePolicy.setHeightForWidth(vzoom_slider->sizePolicy().hasHeightForWidth());
        vzoom_slider->setSizePolicy(sizePolicy);
        vzoom_slider->setFocusPolicy(Qt::NoFocus);
        vzoom_slider->setMinimum(-300);
        vzoom_slider->setMaximum(300);
        vzoom_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(vzoom_slider);

        label = new QLabel(frame);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        vzoom_factor = new QLineEdit(frame);
        vzoom_factor->setObjectName("vzoom_factor");
        sizePolicy2.setHeightForWidth(vzoom_factor->sizePolicy().hasHeightForWidth());
        vzoom_factor->setSizePolicy(sizePolicy2);
        vzoom_factor->setMinimumSize(QSize(0, 0));
        vzoom_factor->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(vzoom_factor);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        fit_left = new QToolButton(frame);
        fit_left->setObjectName("fit_left");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fit_left_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_left->setIcon(icon1);
        fit_left->setIconSize(QSize(24, 24));
        fit_left->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_left);

        fit_front = new QToolButton(frame);
        fit_front->setObjectName("fit_front");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/fit_front_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_front->setIcon(icon2);
        fit_front->setIconSize(QSize(24, 24));
        fit_front->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_front);

        fit_right = new QToolButton(frame);
        fit_right->setObjectName("fit_right");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/fit_right_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_right->setIcon(icon3);
        fit_right->setIconSize(QSize(24, 24));
        fit_right->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_right);

        fit_back = new QToolButton(frame);
        fit_back->setObjectName("fit_back");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fit_back_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_back->setIcon(icon4);
        fit_back->setIconSize(QSize(24, 24));
        fit_back->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_back);

        fit_top = new QToolButton(frame);
        fit_top->setObjectName("fit_top");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/fit_top_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_top->setIcon(icon5);
        fit_top->setIconSize(QSize(24, 24));
        fit_top->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_top);

        fit_bottom = new QToolButton(frame);
        fit_bottom->setObjectName("fit_bottom");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/fit_bottom_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_bottom->setIcon(icon6);
        fit_bottom->setIconSize(QSize(24, 24));
        fit_bottom->setAutoRaise(true);

        horizontalLayout_2->addWidget(fit_bottom);


        vboxLayout->addWidget(frame);

        gl_stack = new QStackedWidget(D25View);
        gl_stack->setObjectName("gl_stack");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(page);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame_3);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        d25_view = new lay::D25ViewWidget(splitter);
        d25_view->setObjectName("d25_view");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(d25_view->sizePolicy().hasHeightForWidth());
        d25_view->setSizePolicy(sizePolicy3);
        splitter->addWidget(d25_view);
        material_list = new QListWidget(splitter);
        material_list->setObjectName("material_list");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(material_list->sizePolicy().hasHeightForWidth());
        material_list->setSizePolicy(sizePolicy4);
        material_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        material_list->setSpacing(0);
        material_list->setUniformItemSizes(true);
        splitter->addWidget(material_list);

        verticalLayout_3->addWidget(splitter);


        verticalLayout->addWidget(frame_3);

        gl_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        error_text = new QTextBrowser(page_2);
        error_text->setObjectName("error_text");
        QPalette palette;
        QBrush brush(QColor(255, 213, 213, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        error_text->setPalette(palette);

        verticalLayout_2->addWidget(error_text);

        gl_stack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        empty_label = new QLabel(page_3);
        empty_label->setObjectName("empty_label");
        empty_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(empty_label);

        gl_stack->addWidget(page_3);

        vboxLayout->addWidget(gl_stack);

        frame_2 = new QFrame(D25View);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doc_label = new QLabel(frame_2);
        doc_label->setObjectName("doc_label");

        horizontalLayout->addWidget(doc_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);


        vboxLayout->addWidget(frame_2);


        retranslateUi(D25View);
        QObject::connect(pushButton, &QPushButton::clicked, D25View, qOverload<>(&QDialog::hide));
        QObject::connect(select_all_action, &QAction::triggered, material_list, qOverload<>(&QListWidget::selectAll));
        QObject::connect(unselect_all_action, &QAction::triggered, material_list, qOverload<>(&QListWidget::clearSelection));

        gl_stack->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(D25View);
    } // setupUi

    void retranslateUi(QDialog *D25View)
    {
        D25View->setWindowTitle(QCoreApplication::translate("D25View", "2.5d View", nullptr));
        select_all_action->setText(QCoreApplication::translate("D25View", "Select All", nullptr));
        unselect_all_action->setText(QCoreApplication::translate("D25View", "Unselect All", nullptr));
        show_all_action->setText(QCoreApplication::translate("D25View", "Show All", nullptr));
        hide_all_action->setText(QCoreApplication::translate("D25View", "Hide All", nullptr));
        show_selected_action->setText(QCoreApplication::translate("D25View", "Show Selected", nullptr));
        hide_selected_action->setText(QCoreApplication::translate("D25View", "Hide Selected", nullptr));
        visibility_follows_selection_action->setText(QCoreApplication::translate("D25View", "Visibility Follows Selection", nullptr));
#if QT_CONFIG(tooltip)
        rerun_button->setToolTip(QCoreApplication::translate("D25View", "Execute script again", nullptr));
#endif // QT_CONFIG(tooltip)
        rerun_button->setText(QCoreApplication::translate("D25View", "...", nullptr));
        percent_label->setText(QCoreApplication::translate("D25View", "x", nullptr));
        label_2->setText(QCoreApplication::translate("D25View", "Z", nullptr));
        label->setText(QCoreApplication::translate("D25View", "x", nullptr));
        fit_left->setText(QCoreApplication::translate("D25View", "...", nullptr));
        fit_front->setText(QCoreApplication::translate("D25View", "...", nullptr));
        fit_right->setText(QCoreApplication::translate("D25View", "...", nullptr));
        fit_back->setText(QCoreApplication::translate("D25View", "...", nullptr));
        fit_top->setText(QCoreApplication::translate("D25View", "...", nullptr));
        fit_bottom->setText(QCoreApplication::translate("D25View", "...", nullptr));
        empty_label->setText(QCoreApplication::translate("D25View", "In order to use the 2.5d view you will need a script which generates the view.<br/>\n"
"See here for more information: <a href=\"int:/about/25d_view.xml\">The 2.5d View</a>.", nullptr));
        doc_label->setText(QCoreApplication::translate("D25View", "Press and hold SHIFT for top view (<a href=\"int:/about/25d_view.xml\">more</a>)", nullptr));
        pushButton->setText(QCoreApplication::translate("D25View", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class D25View: public Ui_D25View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D25VIEW_H
