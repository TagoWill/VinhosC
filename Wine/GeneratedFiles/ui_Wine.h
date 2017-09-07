/********************************************************************************
** Form generated from reading UI file 'Wine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINE_H
#define UI_WINE_H

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

class Ui_WineClass
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

    void setupUi(QMainWindow *WineClass)
    {
        if (WineClass->objectName().isEmpty())
            WineClass->setObjectName(QStringLiteral("WineClass"));
        WineClass->resize(600, 400);
        actionExit = new QAction(WineClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(WineClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(WineClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(50, 90, 181, 151));
        pushButton_Results = new QPushButton(centralWidget);
        pushButton_Results->setObjectName(QStringLiteral("pushButton_Results"));
        pushButton_Results->setGeometry(QRect(320, 90, 201, 151));
        WineClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WineClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        WineClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WineClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        WineClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WineClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        WineClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(WineClass);

        QMetaObject::connectSlotsByName(WineClass);
    } // setupUi

    void retranslateUi(QMainWindow *WineClass)
    {
        WineClass->setWindowTitle(QApplication::translate("WineClass", "Wine", Q_NULLPTR));
        actionExit->setText(QApplication::translate("WineClass", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("WineClass", "About", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("WineClass", "Start test", Q_NULLPTR));
        pushButton_Results->setText(QApplication::translate("WineClass", "Results", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("WineClass", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("WineClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WineClass: public Ui_WineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINE_H
