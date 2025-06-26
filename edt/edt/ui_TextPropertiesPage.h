/********************************************************************************
** Form generated from reading UI file 'TextPropertiesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTPROPERTIESPAGE_H
#define UI_TEXTPROPERTIESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextPropertiesPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *x_le;
    QSpacerItem *spacerItem;
    QLabel *Text_size;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QSpacerItem *spacerItem2;
    QLabel *label_5;
    QFrame *button_frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem3;
    QPushButton *prop_pb;
    QPushButton *inst_pb;
    QLabel *label_3;
    QLabel *Orientation;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *text_le;
    QCheckBox *abs_cb;
    QLineEdit *y_le;
    QCheckBox *dbu_cb;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QLabel *label_12;
    QLabel *layer_lbl;
    QComboBox *orient_cbx;
    QLineEdit *size_le;
    QComboBox *halign_cbx;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *valign_cbx;

    void setupUi(QWidget *TextPropertiesPage)
    {
        if (TextPropertiesPage->objectName().isEmpty())
            TextPropertiesPage->setObjectName("TextPropertiesPage");
        TextPropertiesPage->resize(555, 366);
        gridLayout = new QGridLayout(TextPropertiesPage);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(TextPropertiesPage);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 3, 1, 1);

        x_le = new QLineEdit(TextPropertiesPage);
        x_le->setObjectName("x_le");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(x_le->sizePolicy().hasHeightForWidth());
        x_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(x_le, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 3, 0, 1, 5);

        Text_size = new QLabel(TextPropertiesPage);
        Text_size->setObjectName("Text_size");

        gridLayout->addWidget(Text_size, 6, 0, 1, 1);

        spacerItem1 = new QSpacerItem(457, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 11, 0, 1, 5);

        label_2 = new QLabel(TextPropertiesPage);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(431, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 8, 0, 1, 5);

        label_5 = new QLabel(TextPropertiesPage);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        button_frame = new QFrame(TextPropertiesPage);
        button_frame->setObjectName("button_frame");
        button_frame->setFrameShape(QFrame::NoFrame);
        button_frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(button_frame);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem3 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        prop_pb = new QPushButton(button_frame);
        prop_pb->setObjectName("prop_pb");

        hboxLayout->addWidget(prop_pb);

        inst_pb = new QPushButton(button_frame);
        inst_pb->setObjectName("inst_pb");

        hboxLayout->addWidget(inst_pb);


        gridLayout->addWidget(button_frame, 12, 0, 1, 5);

        label_3 = new QLabel(TextPropertiesPage);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 7, 1, 1, 4);

        Orientation = new QLabel(TextPropertiesPage);
        Orientation->setObjectName("Orientation");

        gridLayout->addWidget(Orientation, 4, 0, 1, 1);

        label = new QLabel(TextPropertiesPage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_6 = new QLabel(TextPropertiesPage);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 3, 1, 2);

        text_le = new QLineEdit(TextPropertiesPage);
        text_le->setObjectName("text_le");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_le->sizePolicy().hasHeightForWidth());
        text_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(text_le, 1, 1, 1, 4);

        abs_cb = new QCheckBox(TextPropertiesPage);
        abs_cb->setObjectName("abs_cb");

        gridLayout->addWidget(abs_cb, 10, 2, 1, 3);

        y_le = new QLineEdit(TextPropertiesPage);
        y_le->setObjectName("y_le");
        sizePolicy.setHeightForWidth(y_le->sizePolicy().hasHeightForWidth());
        y_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(y_le, 2, 4, 1, 1);

        dbu_cb = new QCheckBox(TextPropertiesPage);
        dbu_cb->setObjectName("dbu_cb");

        gridLayout->addWidget(dbu_cb, 9, 2, 1, 3);

        frame = new QFrame(TextPropertiesPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_12->setFont(font);

        hboxLayout1->addWidget(label_12);

        layer_lbl = new QLabel(frame);
        layer_lbl->setObjectName("layer_lbl");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layer_lbl->sizePolicy().hasHeightForWidth());
        layer_lbl->setSizePolicy(sizePolicy2);
        layer_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(layer_lbl);


        gridLayout->addWidget(frame, 0, 0, 1, 5);

        orient_cbx = new QComboBox(TextPropertiesPage);
        const QIcon icon = QIcon(QString::fromUtf8(":/r0_24px.png"));
        orient_cbx->addItem(icon, QString());
        const QIcon icon1 = QIcon(QString::fromUtf8(":/r90_24px.png"));
        orient_cbx->addItem(icon1, QString());
        const QIcon icon2 = QIcon(QString::fromUtf8(":/r180_24px.png"));
        orient_cbx->addItem(icon2, QString());
        const QIcon icon3 = QIcon(QString::fromUtf8(":/r270_24px.png"));
        orient_cbx->addItem(icon3, QString());
        const QIcon icon4 = QIcon(QString::fromUtf8(":/m0_24px.png"));
        orient_cbx->addItem(icon4, QString());
        const QIcon icon5 = QIcon(QString::fromUtf8(":/m45_24px.png"));
        orient_cbx->addItem(icon5, QString());
        const QIcon icon6 = QIcon(QString::fromUtf8(":/m90_24px.png"));
        orient_cbx->addItem(icon6, QString());
        const QIcon icon7 = QIcon(QString::fromUtf8(":/m135_24px.png"));
        orient_cbx->addItem(icon7, QString());
        orient_cbx->setObjectName("orient_cbx");

        gridLayout->addWidget(orient_cbx, 4, 1, 1, 2);

        size_le = new QLineEdit(TextPropertiesPage);
        size_le->setObjectName("size_le");

        gridLayout->addWidget(size_le, 6, 1, 1, 2);

        halign_cbx = new QComboBox(TextPropertiesPage);
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->addItem(QString());
        halign_cbx->setObjectName("halign_cbx");

        gridLayout->addWidget(halign_cbx, 5, 2, 1, 1);

        label_4 = new QLabel(TextPropertiesPage);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_8 = new QLabel(TextPropertiesPage);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 5, 1, 1, 1);

        label_9 = new QLabel(TextPropertiesPage);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 5, 3, 1, 1);

        valign_cbx = new QComboBox(TextPropertiesPage);
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->addItem(QString());
        valign_cbx->setObjectName("valign_cbx");

        gridLayout->addWidget(valign_cbx, 5, 4, 1, 1);

        QWidget::setTabOrder(text_le, x_le);
        QWidget::setTabOrder(x_le, y_le);
        QWidget::setTabOrder(y_le, orient_cbx);
        QWidget::setTabOrder(orient_cbx, halign_cbx);
        QWidget::setTabOrder(halign_cbx, valign_cbx);
        QWidget::setTabOrder(valign_cbx, size_le);
        QWidget::setTabOrder(size_le, dbu_cb);
        QWidget::setTabOrder(dbu_cb, abs_cb);
        QWidget::setTabOrder(abs_cb, prop_pb);
        QWidget::setTabOrder(prop_pb, inst_pb);

        retranslateUi(TextPropertiesPage);

        QMetaObject::connectSlotsByName(TextPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *TextPropertiesPage)
    {
        TextPropertiesPage->setWindowTitle(QCoreApplication::translate("TextPropertiesPage", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("TextPropertiesPage", "y = ", nullptr));
        Text_size->setText(QCoreApplication::translate("TextPropertiesPage", "Text size", nullptr));
        label_2->setText(QCoreApplication::translate("TextPropertiesPage", "Text", nullptr));
        label_5->setText(QCoreApplication::translate("TextPropertiesPage", "x = ", nullptr));
        prop_pb->setText(QCoreApplication::translate("TextPropertiesPage", "User Properties", nullptr));
        inst_pb->setText(QCoreApplication::translate("TextPropertiesPage", "Instantiation", nullptr));
        label_3->setText(QCoreApplication::translate("TextPropertiesPage", "Hint: orientation, alignments and size cannot be saved to OASIS files\n"
"Enable a vector font and text scaling in the setup dialog \n"
"to show text objects scaled and rotated", nullptr));
        Orientation->setText(QCoreApplication::translate("TextPropertiesPage", "Orientation", nullptr));
        label->setText(QCoreApplication::translate("TextPropertiesPage", "Position (x/y)", nullptr));
        label_6->setText(QCoreApplication::translate("TextPropertiesPage", "(Leave empty for default)", nullptr));
        abs_cb->setText(QCoreApplication::translate("TextPropertiesPage", "Absolute (accumulated) transformations", nullptr));
        dbu_cb->setText(QCoreApplication::translate("TextPropertiesPage", "Coordinates in database units", nullptr));
        label_12->setText(QCoreApplication::translate("TextPropertiesPage", "Text Properties", nullptr));
        layer_lbl->setText(QString());
        orient_cbx->setItemText(0, QCoreApplication::translate("TextPropertiesPage", "(r0)", nullptr));
        orient_cbx->setItemText(1, QCoreApplication::translate("TextPropertiesPage", "(r90)", nullptr));
        orient_cbx->setItemText(2, QCoreApplication::translate("TextPropertiesPage", "(r180)", nullptr));
        orient_cbx->setItemText(3, QCoreApplication::translate("TextPropertiesPage", "(r270)", nullptr));
        orient_cbx->setItemText(4, QCoreApplication::translate("TextPropertiesPage", "(m0)", nullptr));
        orient_cbx->setItemText(5, QCoreApplication::translate("TextPropertiesPage", "(m45)", nullptr));
        orient_cbx->setItemText(6, QCoreApplication::translate("TextPropertiesPage", "(m90)", nullptr));
        orient_cbx->setItemText(7, QCoreApplication::translate("TextPropertiesPage", "(m135)", nullptr));

        halign_cbx->setItemText(0, QCoreApplication::translate("TextPropertiesPage", "(Default)", nullptr));
        halign_cbx->setItemText(1, QCoreApplication::translate("TextPropertiesPage", "Left", nullptr));
        halign_cbx->setItemText(2, QCoreApplication::translate("TextPropertiesPage", "Center", nullptr));
        halign_cbx->setItemText(3, QCoreApplication::translate("TextPropertiesPage", "Right", nullptr));

        label_4->setText(QCoreApplication::translate("TextPropertiesPage", "Alignment", nullptr));
        label_8->setText(QCoreApplication::translate("TextPropertiesPage", "h =", nullptr));
        label_9->setText(QCoreApplication::translate("TextPropertiesPage", "v =", nullptr));
        valign_cbx->setItemText(0, QCoreApplication::translate("TextPropertiesPage", "(Default)", nullptr));
        valign_cbx->setItemText(1, QCoreApplication::translate("TextPropertiesPage", "Top", nullptr));
        valign_cbx->setItemText(2, QCoreApplication::translate("TextPropertiesPage", "Center", nullptr));
        valign_cbx->setItemText(3, QCoreApplication::translate("TextPropertiesPage", "Bottom", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TextPropertiesPage: public Ui_TextPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTPROPERTIESPAGE_H
