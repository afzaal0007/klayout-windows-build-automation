/********************************************************************************
** Form generated from reading UI file 'ImageLandmarksDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGELANDMARKSDIALOG_H
#define UI_IMAGELANDMARKSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "imgNavigator.h"

QT_BEGIN_NAMESPACE

class Ui_ImageLandmarksDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QFrame *frame_4;
    QVBoxLayout *vboxLayout1;
    img::Navigator *navigator;
    QFrame *frame_3;
    QVBoxLayout *vboxLayout2;
    QToolButton *new_pb;
    QToolButton *delete_pb;
    QToolButton *move_pb;
    QSpacerItem *spacerItem;
    QLabel *label;
    QListWidget *landmark_list;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImageLandmarksDialog)
    {
        if (ImageLandmarksDialog->objectName().isEmpty())
            ImageLandmarksDialog->setObjectName("ImageLandmarksDialog");
        ImageLandmarksDialog->resize(713, 618);
        vboxLayout = new QVBoxLayout(ImageLandmarksDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        label_2 = new QLabel(ImageLandmarksDialog);
        label_2->setObjectName("label_2");

        vboxLayout->addWidget(label_2);

        frame = new QFrame(ImageLandmarksDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Sunken);
        vboxLayout1 = new QVBoxLayout(frame_4);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(5, 5, 5, 5);
        vboxLayout1->setObjectName("vboxLayout1");
        navigator = new img::Navigator(frame_4);
        navigator->setObjectName("navigator");
        navigator->setFrameShape(QFrame::NoFrame);
        navigator->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(navigator);


        hboxLayout->addWidget(frame_4);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frame_3);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        new_pb = new QToolButton(frame_3);
        new_pb->setObjectName("new_pb");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(new_pb->sizePolicy().hasHeightForWidth());
        new_pb->setSizePolicy(sizePolicy1);
        const QIcon icon = QIcon(QString::fromUtf8(":/add_16px.png"));
        new_pb->setIcon(icon);
        new_pb->setCheckable(true);
        new_pb->setAutoExclusive(true);
        new_pb->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        new_pb->setAutoRaise(true);

        vboxLayout2->addWidget(new_pb);

        delete_pb = new QToolButton(frame_3);
        delete_pb->setObjectName("delete_pb");
        sizePolicy1.setHeightForWidth(delete_pb->sizePolicy().hasHeightForWidth());
        delete_pb->setSizePolicy(sizePolicy1);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/clear_16px.png"));
        delete_pb->setIcon(icon1);
        delete_pb->setCheckable(true);
        delete_pb->setAutoExclusive(true);
        delete_pb->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        delete_pb->setAutoRaise(true);

        vboxLayout2->addWidget(delete_pb);

        move_pb = new QToolButton(frame_3);
        move_pb->setObjectName("move_pb");
        sizePolicy1.setHeightForWidth(move_pb->sizePolicy().hasHeightForWidth());
        move_pb->setSizePolicy(sizePolicy1);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/move_simple_16px.png"));
        move_pb->setIcon(icon2);
        move_pb->setCheckable(true);
        move_pb->setAutoExclusive(true);
        move_pb->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        move_pb->setAutoRaise(true);

        vboxLayout2->addWidget(move_pb);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout2->addItem(spacerItem);

        label = new QLabel(frame_3);
        label->setObjectName("label");

        vboxLayout2->addWidget(label);

        landmark_list = new QListWidget(frame_3);
        landmark_list->setObjectName("landmark_list");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(landmark_list->sizePolicy().hasHeightForWidth());
        landmark_list->setSizePolicy(sizePolicy2);
        landmark_list->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout2->addWidget(landmark_list);


        hboxLayout->addWidget(frame_3);


        vboxLayout->addWidget(frame);

        line = new QFrame(ImageLandmarksDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(ImageLandmarksDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ImageLandmarksDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ImageLandmarksDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ImageLandmarksDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ImageLandmarksDialog);
    } // setupUi

    void retranslateUi(QDialog *ImageLandmarksDialog)
    {
        ImageLandmarksDialog->setWindowTitle(QCoreApplication::translate("ImageLandmarksDialog", "Landmarks Editor", nullptr));
        label_2->setText(QCoreApplication::translate("ImageLandmarksDialog", "Use mouse wheel and zoom box (right mouse button) to change the display window.", nullptr));
        new_pb->setText(QCoreApplication::translate("ImageLandmarksDialog", "Add", nullptr));
        delete_pb->setText(QCoreApplication::translate("ImageLandmarksDialog", "Delete", nullptr));
        move_pb->setText(QCoreApplication::translate("ImageLandmarksDialog", "Move", nullptr));
        label->setText(QCoreApplication::translate("ImageLandmarksDialog", "List of landmarks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageLandmarksDialog: public Ui_ImageLandmarksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGELANDMARKSDIALOG_H
