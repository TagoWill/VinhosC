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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Principal;
    QPushButton *bViewClientsInfo;
    QWidget *ViewClientsInfo;
    QListWidget *listWidget;

    void setupUi(QWidget *ConsultWindow)
    {
        if (ConsultWindow->objectName().isEmpty())
            ConsultWindow->setObjectName(QStringLiteral("ConsultWindow"));
        ConsultWindow->resize(800, 500);
        ConsultWindow->setMaximumSize(QSize(800, 500));
        stackedWidget = new QStackedWidget(ConsultWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 781, 481));
        stackedWidget->setAutoFillBackground(false);
        Principal = new QWidget();
        Principal->setObjectName(QStringLiteral("Principal"));
        bViewClientsInfo = new QPushButton(Principal);
        bViewClientsInfo->setObjectName(QStringLiteral("bViewClientsInfo"));
        bViewClientsInfo->setGeometry(QRect(510, 150, 121, 101));
        stackedWidget->addWidget(Principal);
        ViewClientsInfo = new QWidget();
        ViewClientsInfo->setObjectName(QStringLiteral("ViewClientsInfo"));
        listWidget = new QListWidget(ViewClientsInfo);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 80, 411, 231));
        stackedWidget->addWidget(ViewClientsInfo);

        retranslateUi(ConsultWindow);

        QMetaObject::connectSlotsByName(ConsultWindow);
    } // setupUi

    void retranslateUi(QWidget *ConsultWindow)
    {
        ConsultWindow->setWindowTitle(QApplication::translate("ConsultWindow", "ConsultWindow", Q_NULLPTR));
        bViewClientsInfo->setText(QApplication::translate("ConsultWindow", "View Client Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsultWindow: public Ui_ConsultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTWINDOW_H
