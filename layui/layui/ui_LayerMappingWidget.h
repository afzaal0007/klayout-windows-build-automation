/********************************************************************************
** Form generated from reading UI file 'LayerMappingWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERMAPPINGWIDGET_H
#define UI_LAYERMAPPINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerMappingWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *load_pb;
    QLabel *help_label;
    QTabWidget *tabs;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QListWidget *layer_lv;
    QToolButton *add_pb;
    QToolButton *delete_pb;
    QToolButton *edit_pb;
    QSpacerItem *spacerItem;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *text_edit;

    void setupUi(QFrame *LayerMappingWidget)
    {
        if (LayerMappingWidget->objectName().isEmpty())
            LayerMappingWidget->setObjectName("LayerMappingWidget");
        LayerMappingWidget->resize(536, 290);
        gridLayout = new QGridLayout(LayerMappingWidget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        load_pb = new QPushButton(LayerMappingWidget);
        load_pb->setObjectName("load_pb");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(load_pb->sizePolicy().hasHeightForWidth());
        load_pb->setSizePolicy(sizePolicy);

        gridLayout->addWidget(load_pb, 2, 1, 1, 1);

        help_label = new QLabel(LayerMappingWidget);
        help_label->setObjectName("help_label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(help_label->sizePolicy().hasHeightForWidth());
        help_label->setSizePolicy(sizePolicy1);
        help_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(help_label, 2, 0, 1, 1);

        tabs = new QTabWidget(LayerMappingWidget);
        tabs->setObjectName("tabs");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setObjectName("gridLayout1");
        layer_lv = new QListWidget(tab);
        layer_lv->setObjectName("layer_lv");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layer_lv->sizePolicy().hasHeightForWidth());
        layer_lv->setSizePolicy(sizePolicy2);
        layer_lv->setDragEnabled(true);
        layer_lv->setDragDropMode(QAbstractItemView::InternalMove);
        layer_lv->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layer_lv->setUniformItemSizes(true);
        layer_lv->setSortingEnabled(false);

        gridLayout1->addWidget(layer_lv, 0, 0, 4, 1);

        add_pb = new QToolButton(tab);
        add_pb->setObjectName("add_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pb->setIcon(icon);

        gridLayout1->addWidget(add_pb, 0, 1, 1, 1);

        delete_pb = new QToolButton(tab);
        delete_pb->setObjectName("delete_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_pb->setIcon(icon1);

        gridLayout1->addWidget(delete_pb, 1, 1, 1, 1);

        edit_pb = new QToolButton(tab);
        edit_pb->setObjectName("edit_pb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_pb->setIcon(icon2);

        gridLayout1->addWidget(edit_pb, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 3, 1, 1, 1);

        tabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        text_edit = new QPlainTextEdit(tab_2);
        text_edit->setObjectName("text_edit");

        gridLayout_2->addWidget(text_edit, 0, 0, 1, 1);

        tabs->addTab(tab_2, QString());

        gridLayout->addWidget(tabs, 3, 0, 1, 3);


        retranslateUi(LayerMappingWidget);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LayerMappingWidget);
    } // setupUi

    void retranslateUi(QFrame *LayerMappingWidget)
    {
        LayerMappingWidget->setWindowTitle(QCoreApplication::translate("LayerMappingWidget", "Form", nullptr));
        load_pb->setText(QCoreApplication::translate("LayerMappingWidget", "Load File", nullptr));
        help_label->setText(QCoreApplication::translate("LayerMappingWidget", "<html><body>Selected layers or layer mapping (<a href=\"int:/about/layer_mapping.xml\">See here for details</a>)</body></html>", nullptr));
#if QT_CONFIG(tooltip)
        add_pb->setToolTip(QCoreApplication::translate("LayerMappingWidget", "Add a new layer to the list", nullptr));
#endif // QT_CONFIG(tooltip)
        add_pb->setText(QCoreApplication::translate("LayerMappingWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        delete_pb->setToolTip(QCoreApplication::translate("LayerMappingWidget", "Delete the selected layers from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_pb->setText(QCoreApplication::translate("LayerMappingWidget", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        edit_pb->setToolTip(QCoreApplication::translate("LayerMappingWidget", "Edit the current layer", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_pb->setText(QCoreApplication::translate("LayerMappingWidget", "Edit", nullptr));
        tabs->setTabText(tabs->indexOf(tab), QCoreApplication::translate("LayerMappingWidget", "List", nullptr));
        tabs->setTabText(tabs->indexOf(tab_2), QCoreApplication::translate("LayerMappingWidget", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerMappingWidget: public Ui_LayerMappingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERMAPPINGWIDGET_H
