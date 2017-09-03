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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VinhosClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton_start;
    QPushButton *pushButton_Results;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VinhosClass)
    {
        if (VinhosClass->objectName().isEmpty())
            VinhosClass->setObjectName(QStringLiteral("VinhosClass"));
        VinhosClass->resize(600, 400);
        actionExit = new QAction(VinhosClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(VinhosClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(VinhosClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(50, 90, 181, 151));
        pushButton_Results = new QPushButton(centralWidget);
        pushButton_Results->setObjectName(QStringLiteral("pushButton_Results"));
        pushButton_Results->setGeometry(QRect(320, 90, 201, 151));
        VinhosClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VinhosClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        VinhosClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VinhosClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VinhosClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VinhosClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VinhosClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(VinhosClass);
        QObject::connect(actionExit, SIGNAL(triggered()), VinhosClass, SLOT(close()));

        QMetaObject::connectSlotsByName(VinhosClass);
    } // setupUi

    void retranslateUi(QMainWindow *VinhosClass)
    {
        VinhosClass->setWindowTitle(QApplication::translate("VinhosClass", "Vinhos", Q_NULLPTR));
        actionExit->setText(QApplication::translate("VinhosClass", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("VinhosClass", "About", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("VinhosClass", "Start test", Q_NULLPTR));
        pushButton_Results->setText(QApplication::translate("VinhosClass", "Results", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("VinhosClass", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("VinhosClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VinhosClass: public Ui_VinhosClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VINHOS_H
