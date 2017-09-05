#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include "ui_Vinhos.h"
#include "ConsultWindow.h"

class Vinhos : public QMainWindow
{
	Q_OBJECT

public:
	Vinhos(QWidget *parent = Q_NULLPTR);


public slots:
	void openResults();

private:
	Ui::VinhosClass ui;

	ConsultWindow *myConsultWindow;

private slots:
	void on_actionExit_triggered();


};
