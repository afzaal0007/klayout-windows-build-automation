/********************************************************************************
** Form generated from reading UI file 'Console.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConsoleForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QTextBrowser *text_widget;
    QComboBox *input_field;
    QFrame *line_4;
    QFrame *frame5;
    QGridLayout *gridLayout;
    QPushButton *close_button;
    QSpacerItem *spacerItem;
    QPushButton *clear_button;

    void setupUi(QDialog *ConsoleForm)
    {
        if (ConsoleForm->objectName().isEmpty())
            ConsoleForm->setObjectName("ConsoleForm");
        ConsoleForm->resize(536, 465);
        vboxLayout = new QVBoxLayout(ConsoleForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName("vboxLayout");
        frame = new QFrame(ConsoleForm);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName("vboxLayout1");
        text_widget = new QTextBrowser(frame);
        text_widget->setObjectName("text_widget");
        text_widget->setLineWrapMode(QTextEdit::NoWrap);

        vboxLayout1->addWidget(text_widget);

        input_field = new QComboBox(frame);
        input_field->setObjectName("input_field");
        input_field->setEditable(true);

        vboxLayout1->addWidget(input_field);


        vboxLayout->addWidget(frame);

        line_4 = new QFrame(ConsoleForm);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_4);

        frame5 = new QFrame(ConsoleForm);
        frame5->setObjectName("frame5");
        frame5->setFrameShape(QFrame::NoFrame);
        frame5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame5);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        close_button = new QPushButton(frame5);
        close_button->setObjectName("close_button");

        gridLayout->addWidget(close_button, 0, 4, 1, 1);

        spacerItem = new QSpacerItem(91, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        clear_button = new QPushButton(frame5);
        clear_button->setObjectName("clear_button");

        gridLayout->addWidget(clear_button, 0, 0, 1, 1);


        vboxLayout->addWidget(frame5);


        retranslateUi(ConsoleForm);

        QMetaObject::connectSlotsByName(ConsoleForm);
    } // setupUi

    void retranslateUi(QDialog *ConsoleForm)
    {
        ConsoleForm->setWindowTitle(QCoreApplication::translate("ConsoleForm", "RBA Console", nullptr));
        close_button->setText(QCoreApplication::translate("ConsoleForm", "Close", nullptr));
        clear_button->setText(QCoreApplication::translate("ConsoleForm", "Clear log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleForm: public Ui_ConsoleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
