/********************************************************************************
** Form generated from reading UI file 'LayoutViewConfigPage7.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTVIEWCONFIGPAGE7_H
#define UI_LAYOUTVIEWCONFIGPAGE7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutViewConfigPage7
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *oversampling;
    QCheckBox *highres_mode;
    QSpacerItem *spacerItem;
    QLabel *label_6;
    QCheckBox *subres_mode;
    QFrame *line;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QComboBox *default_font_size;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QComboBox *global_trans;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QLabel *label_13;
    QSpinBox *def_depth;
    QSpacerItem *spacerItem3;
    QLabel *label_14;

    void setupUi(QFrame *LayoutViewConfigPage7)
    {
        if (LayoutViewConfigPage7->objectName().isEmpty())
            LayoutViewConfigPage7->setObjectName("LayoutViewConfigPage7");
        LayoutViewConfigPage7->resize(613, 559);
        vboxLayout = new QVBoxLayout(LayoutViewConfigPage7);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(LayoutViewConfigPage7);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 5, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        oversampling = new QComboBox(groupBox);
        oversampling->addItem(QString());
        oversampling->addItem(QString());
        oversampling->addItem(QString());
        oversampling->setObjectName("oversampling");

        gridLayout->addWidget(oversampling, 1, 1, 1, 1);

        highres_mode = new QCheckBox(groupBox);
        highres_mode->setObjectName("highres_mode");

        gridLayout->addWidget(highres_mode, 6, 0, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 2, 0, 1, 3);

        subres_mode = new QCheckBox(groupBox);
        subres_mode->setObjectName("subres_mode");

        gridLayout->addWidget(subres_mode, 3, 0, 1, 3);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 3);


        vboxLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(LayoutViewConfigPage7);
        groupBox_4->setObjectName("groupBox_4");
        hboxLayout = new QHBoxLayout(groupBox_4);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        hboxLayout->addWidget(label_4);

        default_font_size = new QComboBox(groupBox_4);
        default_font_size->addItem(QString());
        default_font_size->addItem(QString());
        default_font_size->addItem(QString());
        default_font_size->setObjectName("default_font_size");

        hboxLayout->addWidget(default_font_size);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(LayoutViewConfigPage7);
        groupBox_2->setObjectName("groupBox_2");
        hboxLayout1 = new QHBoxLayout(groupBox_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        hboxLayout1->addWidget(label_3);

        global_trans = new QComboBox(groupBox_2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/r0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/r90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/r180_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/r270_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/m0_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/m45_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/m90_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/m135_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        global_trans->addItem(icon7, QString());
        global_trans->setObjectName("global_trans");

        hboxLayout1->addWidget(global_trans);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        vboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(LayoutViewConfigPage7);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout1 = new QGridLayout(groupBox_3);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        gridLayout1->addWidget(label_13, 0, 0, 1, 1);

        def_depth = new QSpinBox(groupBox_3);
        def_depth->setObjectName("def_depth");
        def_depth->setMaximum(1000);

        gridLayout1->addWidget(def_depth, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 0, 2, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setWordWrap(true);

        gridLayout1->addWidget(label_14, 1, 0, 1, 3);


        vboxLayout->addWidget(groupBox_3);


        retranslateUi(LayoutViewConfigPage7);

        QMetaObject::connectSlotsByName(LayoutViewConfigPage7);
    } // setupUi

    void retranslateUi(QFrame *LayoutViewConfigPage7)
    {
        LayoutViewConfigPage7->setWindowTitle(QCoreApplication::translate("LayoutViewConfigPage7", "Application Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutViewConfigPage7", "Display Quality", nullptr));
        label->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Oversampling increases the image quality by using an internal resolution larger than the image resolution. Drawing speed is somewhat reduced.", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutViewConfigPage7", "High resolution mode utilizes the full pixel density on high-DPI displays. Features may look smaller, but richer in details.", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Oversampling mode", nullptr));
        oversampling->setItemText(0, QCoreApplication::translate("LayoutViewConfigPage7", "No oversampling", nullptr));
        oversampling->setItemText(1, QCoreApplication::translate("LayoutViewConfigPage7", "2x oversampling", nullptr));
        oversampling->setItemText(2, QCoreApplication::translate("LayoutViewConfigPage7", "3x oversampling", nullptr));

        highres_mode->setText(QCoreApplication::translate("LayoutViewConfigPage7", "High resolution mode enabled", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutViewConfigPage7", "With small rendering, the line widths and stipples are scaled down - a single pixel line becomes half a pixel wide with 2x oversampling. This provides a virtual sub-pixel resolution with finer details.", nullptr));
        subres_mode->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Small rendering in oversampling mode", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LayoutViewConfigPage7", "Default Font Size", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Font size for \"Default\" font and rulers", nullptr));
        default_font_size->setItemText(0, QCoreApplication::translate("LayoutViewConfigPage7", "Small", nullptr));
        default_font_size->setItemText(1, QCoreApplication::translate("LayoutViewConfigPage7", "Medium", nullptr));
        default_font_size->setItemText(2, QCoreApplication::translate("LayoutViewConfigPage7", "Large", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("LayoutViewConfigPage7", "Global Transformation", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Transform the view globally with", nullptr));
        global_trans->setItemText(0, QCoreApplication::translate("LayoutViewConfigPage7", "(r0)", nullptr));
        global_trans->setItemText(1, QCoreApplication::translate("LayoutViewConfigPage7", "(r90)", nullptr));
        global_trans->setItemText(2, QCoreApplication::translate("LayoutViewConfigPage7", "(r180)", nullptr));
        global_trans->setItemText(3, QCoreApplication::translate("LayoutViewConfigPage7", "(r270)", nullptr));
        global_trans->setItemText(4, QCoreApplication::translate("LayoutViewConfigPage7", "(m0)", nullptr));
        global_trans->setItemText(5, QCoreApplication::translate("LayoutViewConfigPage7", "(m45)", nullptr));
        global_trans->setItemText(6, QCoreApplication::translate("LayoutViewConfigPage7", "(m90)", nullptr));
        global_trans->setItemText(7, QCoreApplication::translate("LayoutViewConfigPage7", "(m135)", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("LayoutViewConfigPage7", "Hierarchy Depth", nullptr));
        label_13->setText(QCoreApplication::translate("LayoutViewConfigPage7", "Initial hierarchy depth when opening a new panel", nullptr));
        label_14->setText(QCoreApplication::translate("LayoutViewConfigPage7", "(This setting is not active if \"select all hierarchy levels on new cell\" is checked on the \"Navigation/New Cell\" tab)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutViewConfigPage7: public Ui_LayoutViewConfigPage7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTVIEWCONFIGPAGE7_H
