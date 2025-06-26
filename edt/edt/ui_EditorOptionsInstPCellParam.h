/********************************************************************************
** Form generated from reading UI file 'EditorOptionsInstPCellParam.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOROPTIONSINSTPCELLPARAM_H
#define UI_EDITOROPTIONSINSTPCELLPARAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorOptionsInstPCellParam
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *EditorOptionsInstPCellParam)
    {
        if (EditorOptionsInstPCellParam->objectName().isEmpty())
            EditorOptionsInstPCellParam->setObjectName("EditorOptionsInstPCellParam");
        EditorOptionsInstPCellParam->resize(358, 481);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorOptionsInstPCellParam->sizePolicy().hasHeightForWidth());
        EditorOptionsInstPCellParam->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(EditorOptionsInstPCellParam);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(EditorOptionsInstPCellParam);

        QMetaObject::connectSlotsByName(EditorOptionsInstPCellParam);
    } // setupUi

    void retranslateUi(QWidget *EditorOptionsInstPCellParam)
    {
        EditorOptionsInstPCellParam->setWindowTitle(QCoreApplication::translate("EditorOptionsInstPCellParam", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorOptionsInstPCellParam: public Ui_EditorOptionsInstPCellParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOROPTIONSINSTPCELLPARAM_H
