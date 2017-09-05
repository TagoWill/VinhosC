/********************************************************************************
** Form generated from reading UI file 'ConsultWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTWINDOW_H
#define UI_CONSULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *bViewClientInfo;

    void setupUi(QWidget *ConsultWindow)
    {
        if (ConsultWindow->objectName().isEmpty())
            ConsultWindow->setObjectName(QStringLiteral("ConsultWindow"));
        ConsultWindow->resize(800, 500);
        ConsultWindow->setMaximumSize(QSize(800, 500));
        pushButton = new QPushButton(ConsultWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 181, 131));
        pushButton_2 = new QPushButton(ConsultWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 180, 181, 141));
        pushButton_3 = new QPushButton(ConsultWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 30, 181, 131));
        pushButton_4 = new QPushButton(ConsultWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(590, 30, 181, 131));
        bViewClientInfo = new QPushButton(ConsultWindow);
        bViewClientInfo->setObjectName(QStringLiteral("bViewClientInfo"));
        bViewClientInfo->setGeometry(QRect(590, 180, 181, 121));

        retranslateUi(ConsultWindow);

        QMetaObject::connectSlotsByName(ConsultWindow);
    } // setupUi

    void retranslateUi(QWidget *ConsultWindow)
    {
        ConsultWindow->setWindowTitle(QApplication::translate("ConsultWindow", "ConsultWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ConsultWindow", "View by Client Name", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ConsultWindow", "View by report", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ConsultWindow", "View by Client NIF", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ConsultWindow", "Add new Client", Q_NULLPTR));
        bViewClientInfo->setText(QApplication::translate("ConsultWindow", "View Client Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsultWindow: public Ui_ConsultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTWINDOW_H
