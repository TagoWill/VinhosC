#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include "ConsultWindow.h"
#include "ui_Wine.h"

class Wine : public QMainWindow
{
	Q_OBJECT

public:
	Wine(QWidget *parent = Q_NULLPTR);


public slots:
	void openResults();

private:
	Ui::WineClass ui;

	ConsultWindow *myConsultWindow;

private slots:
	void on_actionExit_triggered();


};
