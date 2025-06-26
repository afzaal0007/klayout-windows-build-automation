/********************************************************************************
** Form generated from reading UI file 'LayoutStatistics.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTSTATISTICS_H
#define UI_LAYOUTSTATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "layBrowserPanel.h"

QT_BEGIN_NAMESPACE

class Ui_LayoutStatisticsForm
{
public:
    QGridLayout *gridLayout;
    QFrame *line_2;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QFrame *line;
    QLabel *label;
    QComboBox *layout_cbx;
    lay::BrowserPanel *browser;

    void setupUi(QDialog *LayoutStatisticsForm)
    {
        if (LayoutStatisticsForm->objectName().isEmpty())
            LayoutStatisticsForm->setObjectName("LayoutStatisticsForm");
        LayoutStatisticsForm->resize(584, 546);
        gridLayout = new QGridLayout(LayoutStatisticsForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        line_2 = new QFrame(LayoutStatisticsForm);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 2);

        frame5 = new QFrame(LayoutStatisticsForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ok_button = new QPushButton(frame5);
        ok_button->setObjectName("ok_button");

        hboxLayout->addWidget(ok_button);


        gridLayout->addWidget(frame5, 4, 0, 1, 2);

        line = new QFrame(LayoutStatisticsForm);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        label = new QLabel(LayoutStatisticsForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        layout_cbx = new QComboBox(LayoutStatisticsForm);
        layout_cbx->setObjectName("layout_cbx");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layout_cbx->sizePolicy().hasHeightForWidth());
        layout_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(layout_cbx, 0, 1, 1, 1);

        browser = new lay::BrowserPanel(LayoutStatisticsForm);
        browser->setObjectName("browser");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(browser->sizePolicy().hasHeightForWidth());
        browser->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(browser, 2, 0, 1, 2);


        retranslateUi(LayoutStatisticsForm);
        QObject::connect(ok_button, &QPushButton::clicked, LayoutStatisticsForm, qOverload<>(&QDialog::accept));

        ok_button->setDefault(true);


        QMetaObject::connectSlotsByName(LayoutStatisticsForm);
    } // setupUi

    void retranslateUi(QDialog *LayoutStatisticsForm)
    {
        LayoutStatisticsForm->setWindowTitle(QCoreApplication::translate("LayoutStatisticsForm", "Layout Statistics", nullptr));
        ok_button->setText(QCoreApplication::translate("LayoutStatisticsForm", "Close", nullptr));
        label->setText(QCoreApplication::translate("LayoutStatisticsForm", "Show properties of ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutStatisticsForm: public Ui_LayoutStatisticsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTSTATISTICS_H
