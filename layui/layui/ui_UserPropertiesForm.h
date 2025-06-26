/********************************************************************************
** Form generated from reading UI file 'UserPropertiesForm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROPERTIESFORM_H
#define UI_USERPROPERTIESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPropertiesForm
{
public:
    QGridLayout *gridLayout;
    QLabel *title_lbl;
    QDialogButtonBox *buttonBox;
    QTabWidget *mode_tab;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QTreeWidget *prop_list;
    QFrame *edit_frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *spacer;
    QPushButton *remove_pb;
    QPushButton *add_pb;
    QPushButton *edit_pb;
    QSpacerItem *spacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *text_edit;
    QLabel *help_label;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTreeWidget *meta_info_list;

    void setupUi(QDialog *UserPropertiesForm)
    {
        if (UserPropertiesForm->objectName().isEmpty())
            UserPropertiesForm->setObjectName("UserPropertiesForm");
        UserPropertiesForm->resize(424, 428);
        gridLayout = new QGridLayout(UserPropertiesForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        title_lbl = new QLabel(UserPropertiesForm);
        title_lbl->setObjectName("title_lbl");

        gridLayout->addWidget(title_lbl, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(UserPropertiesForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        mode_tab = new QTabWidget(UserPropertiesForm);
        mode_tab->setObjectName("mode_tab");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        prop_list = new QTreeWidget(tab);
        prop_list->setObjectName("prop_list");
        prop_list->setRootIsDecorated(false);
        prop_list->setAllColumnsShowFocus(true);

        gridLayout1->addWidget(prop_list, 0, 0, 2, 1);

        edit_frame = new QFrame(tab);
        edit_frame->setObjectName("edit_frame");
        edit_frame->setMinimumSize(QSize(50, 0));
        edit_frame->setFrameShape(QFrame::NoFrame);
        edit_frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(edit_frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        spacer = new QSpacerItem(61, 211, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer, 3, 1, 1, 1);

        remove_pb = new QPushButton(edit_frame);
        remove_pb->setObjectName("remove_pb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/del_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_pb->setIcon(icon);

        gridLayout_2->addWidget(remove_pb, 1, 1, 1, 1);

        add_pb = new QPushButton(edit_frame);
        add_pb->setObjectName("add_pb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pb->setIcon(icon1);

        gridLayout_2->addWidget(add_pb, 0, 1, 1, 1);

        edit_pb = new QPushButton(edit_frame);
        edit_pb->setObjectName("edit_pb");

        gridLayout_2->addWidget(edit_pb, 2, 1, 1, 1);

        spacer_2 = new QSpacerItem(6, 201, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacer_2, 3, 0, 1, 1);


        gridLayout1->addWidget(edit_frame, 0, 2, 2, 1);

        mode_tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        text_edit = new QTextEdit(tab_2);
        text_edit->setObjectName("text_edit");

        verticalLayout->addWidget(text_edit);

        help_label = new QLabel(tab_2);
        help_label->setObjectName("help_label");
        help_label->setWordWrap(true);

        verticalLayout->addWidget(help_label);

        mode_tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(tab_3);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        meta_info_list = new QTreeWidget(tab_3);
        meta_info_list->setObjectName("meta_info_list");
        meta_info_list->setRootIsDecorated(false);
        meta_info_list->setAllColumnsShowFocus(true);

        verticalLayout_2->addWidget(meta_info_list);

        mode_tab->addTab(tab_3, QString());

        gridLayout->addWidget(mode_tab, 1, 0, 1, 1);


        retranslateUi(UserPropertiesForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UserPropertiesForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UserPropertiesForm, qOverload<>(&QDialog::reject));

        mode_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserPropertiesForm);
    } // setupUi

    void retranslateUi(QDialog *UserPropertiesForm)
    {
        UserPropertiesForm->setWindowTitle(QCoreApplication::translate("UserPropertiesForm", "User Properties", nullptr));
        title_lbl->setText(QCoreApplication::translate("UserPropertiesForm", "User properties", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = prop_list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("UserPropertiesForm", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("UserPropertiesForm", "Key", nullptr));
        remove_pb->setText(QString());
        add_pb->setText(QString());
        edit_pb->setText(QCoreApplication::translate("UserPropertiesForm", "Edit", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab), QCoreApplication::translate("UserPropertiesForm", "Table", nullptr));
        help_label->setText(QCoreApplication::translate("UserPropertiesForm", "<html>Use the Variant Notation for key and value (<a href=\"int:/about/variant_notation.xml\">See here for details</a>)</html>", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_2), QCoreApplication::translate("UserPropertiesForm", "Text Editor", nullptr));
        label->setText(QCoreApplication::translate("UserPropertiesForm", "Meta Info is additional system data shown here for information. Entries marked with a \"*\" are persisted in the layout file.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = meta_info_list->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("UserPropertiesForm", "Value", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("UserPropertiesForm", "Description", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("UserPropertiesForm", "Key", nullptr));
        mode_tab->setTabText(mode_tab->indexOf(tab_3), QCoreApplication::translate("UserPropertiesForm", "Meta Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPropertiesForm: public Ui_UserPropertiesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROPERTIESFORM_H
