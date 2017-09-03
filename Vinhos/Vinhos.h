#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vinhos.h"
#include "Results.h"

class Vinhos : public QMainWindow
{
	Q_OBJECT

public:
	Vinhos(QWidget *parent = Q_NULLPTR);


public slots:
	void openResults();

private:
	Ui::VinhosClass ui;

	//Results MyNewWindow;

/*private slots:
	void on_mMyButton_clicked();*/
};
