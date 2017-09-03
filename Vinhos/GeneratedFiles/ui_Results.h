/********************************************************************************
** Form generated from reading UI file 'Results.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultsWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ResultsWindow)
    {
        if (ResultsWindow->objectName().isEmpty())
            ResultsWindow->setObjectName(QStringLiteral("ResultsWindow"));
        ResultsWindow->resize(800, 600);
        centralwidget = new QWidget(ResultsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 160, 241, 171));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(610, 470, 75, 23));
        ResultsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ResultsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ResultsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ResultsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ResultsWindow->setStatusBar(statusbar);

        retranslateUi(ResultsWindow);

        QMetaObject::connectSlotsByName(ResultsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ResultsWindow)
    {
        ResultsWindow->setWindowTitle(QApplication::translate("ResultsWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ResultsWindow", "Results", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("ResultsWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResultsWindow: public Ui_ResultsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
