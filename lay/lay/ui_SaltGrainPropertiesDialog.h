/********************************************************************************
** Form generated from reading UI file 'SaltGrainPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALTGRAINPROPERTIESDIALOG_H
#define UI_SALTGRAINPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "layLogViewerDialog.h"

QT_BEGIN_NAMESPACE

class Ui_SaltGrainPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *author;
    QLabel *label;
    QLabel *label_13;
    QLineEdit *title;
    QLabel *label_14;
    QLineEdit *author_contact;
    QLabel *open_label;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_5;
    QToolButton *remove_dependency;
    QToolButton *add_dependency;
    QTreeWidget *dependencies;
    lay::AlertLogButton *dependencies_alert;
    QLabel *label_2;
    QLabel *label_15;
    QLabel *label_8;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QToolButton *screenshot_delete_button;
    QLabel *label_10;
    QToolButton *icon_config_button;
    QToolButton *screenshot_config_button;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QToolButton *icon_delete_button;
    QLabel *label_11;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *version;
    lay::AlertLogButton *version_alert;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_9;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *license;
    lay::AlertLogButton *license_alert;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_5;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *doc_url;
    lay::AlertLogButton *doc_url_alert;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *doc;
    QLabel *label_7;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *api_version;
    lay::AlertLogButton *api_version_alert;
    QLabel *label_16;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaltGrainPropertiesDialog)
    {
        if (SaltGrainPropertiesDialog->objectName().isEmpty())
            SaltGrainPropertiesDialog->setObjectName("SaltGrainPropertiesDialog");
        SaltGrainPropertiesDialog->resize(693, 538);
        verticalLayout = new QVBoxLayout(SaltGrainPropertiesDialog);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(SaltGrainPropertiesDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        author = new QLineEdit(frame);
        author->setObjectName("author");

        gridLayout->addWidget(author, 4, 2, 1, 3);

        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label, 8, 0, 1, 1);

        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setItalic(true);
        label_13->setFont(font1);

        gridLayout->addWidget(label_13, 10, 2, 1, 3);

        title = new QLineEdit(frame);
        title->setObjectName("title");

        gridLayout->addWidget(title, 3, 2, 1, 3);

        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_14, 14, 0, 1, 1);

        author_contact = new QLineEdit(frame);
        author_contact->setObjectName("author_contact");

        gridLayout->addWidget(author_contact, 5, 2, 1, 3);

        open_label = new QLabel(frame);
        open_label->setObjectName("open_label");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(open_label->sizePolicy().hasHeightForWidth());
        open_label->setSizePolicy(sizePolicy2);
        open_label->setOpenExternalLinks(true);

        gridLayout->addWidget(open_label, 9, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 15, 2, 1, 3);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 2, 2, 1, 1);

        remove_dependency = new QToolButton(frame_3);
        remove_dependency->setObjectName("remove_dependency");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clear_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_dependency->setIcon(icon);
        remove_dependency->setAutoRaise(true);

        gridLayout_3->addWidget(remove_dependency, 1, 2, 1, 1);

        add_dependency = new QToolButton(frame_3);
        add_dependency->setObjectName("add_dependency");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_dependency->setIcon(icon1);
        add_dependency->setAutoRaise(true);

        gridLayout_3->addWidget(add_dependency, 0, 2, 1, 1);

        dependencies = new QTreeWidget(frame_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        dependencies->setHeaderItem(__qtreewidgetitem);
        dependencies->setObjectName("dependencies");
        dependencies->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        dependencies->setTabKeyNavigation(true);
        dependencies->setRootIsDecorated(false);
        dependencies->setAllColumnsShowFocus(true);

        gridLayout_3->addWidget(dependencies, 0, 0, 3, 1);

        dependencies_alert = new lay::AlertLogButton(frame_3);
        dependencies_alert->setObjectName("dependencies_alert");
        dependencies_alert->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/warn_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        dependencies_alert->setIcon(icon2);
        dependencies_alert->setAutoRaise(true);

        gridLayout_3->addWidget(dependencies_alert, 0, 1, 1, 1);


        gridLayout->addWidget(frame_3, 14, 2, 1, 3);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 7, 0, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        screenshot_delete_button = new QToolButton(frame_2);
        screenshot_delete_button->setObjectName("screenshot_delete_button");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/clear_edit_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        screenshot_delete_button->setIcon(icon3);
        screenshot_delete_button->setAutoRaise(true);

        gridLayout_2->addWidget(screenshot_delete_button, 1, 6, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        icon_config_button = new QToolButton(frame_2);
        icon_config_button->setObjectName("icon_config_button");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/salt_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon_config_button->setIcon(icon4);
        icon_config_button->setIconSize(QSize(64, 64));

        gridLayout_2->addWidget(icon_config_button, 1, 1, 4, 1);

        screenshot_config_button = new QToolButton(frame_2);
        screenshot_config_button->setObjectName("screenshot_config_button");
        screenshot_config_button->setIcon(icon1);
        screenshot_config_button->setIconSize(QSize(64, 64));

        gridLayout_2->addWidget(screenshot_config_button, 1, 5, 4, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 4, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 3, 1);

        icon_delete_button = new QToolButton(frame_2);
        icon_delete_button->setObjectName("icon_delete_button");
        icon_delete_button->setIcon(icon3);
        icon_delete_button->setAutoRaise(true);

        gridLayout_2->addWidget(icon_delete_button, 1, 2, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 1, 4, 1, 1);


        gridLayout->addWidget(frame_2, 12, 2, 1, 3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        sizePolicy2.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy2);
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        version = new QLineEdit(frame_4);
        version->setObjectName("version");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(version->sizePolicy().hasHeightForWidth());
        version->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(version);

        version_alert = new lay::AlertLogButton(frame_4);
        version_alert->setObjectName("version_alert");
        version_alert->setFocusPolicy(Qt::NoFocus);
        version_alert->setIcon(icon2);
        version_alert->setAutoRaise(true);

        horizontalLayout->addWidget(version_alert);


        gridLayout->addWidget(frame_4, 0, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 6, 3, 1, 2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_9, 12, 0, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        sizePolicy2.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy2);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        license = new QLineEdit(frame_5);
        license->setObjectName("license");
        sizePolicy4.setHeightForWidth(license->sizePolicy().hasHeightForWidth());
        license->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(license);

        license_alert = new lay::AlertLogButton(frame_5);
        license_alert->setObjectName("license_alert");
        license_alert->setFocusPolicy(Qt::NoFocus);
        license_alert->setIcon(icon2);
        license_alert->setAutoRaise(true);

        horizontalLayout_2->addWidget(license_alert);


        gridLayout->addWidget(frame_5, 6, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 11, 2, 1, 3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 3, 1, 2);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        doc_url = new QLineEdit(frame_6);
        doc_url->setObjectName("doc_url");
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(doc_url->sizePolicy().hasHeightForWidth());
        doc_url->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(doc_url);

        doc_url_alert = new lay::AlertLogButton(frame_6);
        doc_url_alert->setObjectName("doc_url_alert");
        doc_url_alert->setFocusPolicy(Qt::NoFocus);
        doc_url_alert->setIcon(icon2);
        doc_url_alert->setAutoRaise(true);

        horizontalLayout_3->addWidget(doc_url_alert);


        gridLayout->addWidget(frame_6, 9, 2, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 13, 2, 1, 3);

        doc = new QTextEdit(frame);
        doc->setObjectName("doc");
        doc->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(doc, 8, 2, 1, 3);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        sizePolicy2.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy2);
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        api_version = new QLineEdit(frame_7);
        api_version->setObjectName("api_version");

        horizontalLayout_4->addWidget(api_version);

        api_version_alert = new lay::AlertLogButton(frame_7);
        api_version_alert->setObjectName("api_version_alert");
        api_version_alert->setFocusPolicy(Qt::NoFocus);
        api_version_alert->setIcon(icon2);
        api_version_alert->setAutoRaise(true);

        horizontalLayout_4->addWidget(api_version_alert);


        gridLayout->addWidget(frame_7, 7, 2, 1, 1);

        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);

        gridLayout->addWidget(label_16, 7, 3, 1, 2);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(SaltGrainPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(version, title);
        QWidget::setTabOrder(title, author);
        QWidget::setTabOrder(author, author_contact);
        QWidget::setTabOrder(author_contact, license);
        QWidget::setTabOrder(license, doc);
        QWidget::setTabOrder(doc, doc_url);
        QWidget::setTabOrder(doc_url, icon_config_button);
        QWidget::setTabOrder(icon_config_button, icon_delete_button);
        QWidget::setTabOrder(icon_delete_button, screenshot_config_button);
        QWidget::setTabOrder(screenshot_config_button, screenshot_delete_button);
        QWidget::setTabOrder(screenshot_delete_button, dependencies);
        QWidget::setTabOrder(dependencies, add_dependency);
        QWidget::setTabOrder(add_dependency, remove_dependency);

        retranslateUi(SaltGrainPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SaltGrainPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaltGrainPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaltGrainPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *SaltGrainPropertiesDialog)
    {
        SaltGrainPropertiesDialog->setWindowTitle(QCoreApplication::translate("SaltGrainPropertiesDialog", "Package Properties", nullptr));
        label->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Description", nullptr));
        label_13->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "(enter an URL to provide a documentation link)", nullptr));
        label_14->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Depends on", nullptr));
        open_label->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "<a href=\"%1\">Open link</a>", nullptr));
#if QT_CONFIG(tooltip)
        remove_dependency->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Delete dependency", nullptr));
#endif // QT_CONFIG(tooltip)
        remove_dependency->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        add_dependency->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Add new dependency", nullptr));
#endif // QT_CONFIG(tooltip)
        add_dependency->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = dependencies->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("SaltGrainPropertiesDialog", "URL", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SaltGrainPropertiesDialog", "Version", nullptr));
        dependencies_alert->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Title", nullptr));
        label_15->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "API features", nullptr));
        label_8->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Author contact", nullptr));
#if QT_CONFIG(tooltip)
        screenshot_delete_button->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Reset Screenshot", nullptr));
#endif // QT_CONFIG(tooltip)
        screenshot_delete_button->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_10->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Icon\n"
"(64x64)", nullptr));
#if QT_CONFIG(tooltip)
        icon_config_button->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Select an Icon Image", nullptr));
#endif // QT_CONFIG(tooltip)
        icon_config_button->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        screenshot_config_button->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Select a Screenshot Image", nullptr));
#endif // QT_CONFIG(tooltip)
        screenshot_config_button->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        icon_delete_button->setToolTip(QCoreApplication::translate("SaltGrainPropertiesDialog", "Reset Icon", nullptr));
#endif // QT_CONFIG(tooltip)
        icon_delete_button->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_11->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Showcase image\n"
"(max 1024x1024)", nullptr));
        version_alert->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_6->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "(license information like \"GPLv3\" or \"MIT\")", nullptr));
        label_3->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Version", nullptr));
        label_9->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Images", nullptr));
        license_alert->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_4->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "(use numeric versions like \"1.5\" or \"2.1.3\")", nullptr));
        label_12->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "License", nullptr));
        label_5->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Documentation", nullptr));
        doc_url_alert->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_7->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "Author", nullptr));
        api_version_alert->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "...", nullptr));
        label_16->setText(QCoreApplication::translate("SaltGrainPropertiesDialog", "(API version and features - e.g. \"0.26; ruby 2.0\")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaltGrainPropertiesDialog: public Ui_SaltGrainPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALTGRAINPROPERTIESDIALOG_H
