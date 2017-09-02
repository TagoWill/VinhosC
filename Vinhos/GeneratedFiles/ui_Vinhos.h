/********************************************************************************
** Form generated from reading UI file 'Vinhos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VINHOS_H
#define UI_VINHOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VinhosClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VinhosClass)
    {
        if (VinhosClass->objectName().isEmpty())
            VinhosClass->setObjectName(QStringLiteral("VinhosClass"));
        VinhosClass->resize(600, 400);
        menuBar = new QMenuBar(VinhosClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        VinhosClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VinhosClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VinhosClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VinhosClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VinhosClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VinhosClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VinhosClass->setStatusBar(statusBar);

        retranslateUi(VinhosClass);

        QMetaObject::connectSlotsByName(VinhosClass);
    } // setupUi

    void retranslateUi(QMainWindow *VinhosClass)
    {
        VinhosClass->setWindowTitle(QApplication::translate("VinhosClass", "Vinhos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VinhosClass: public Ui_VinhosClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VINHOS_H
