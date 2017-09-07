#pragma once

#include <QtWidgets\QMainWindow>
#include "ui_Results.h"

class Results : public QMainWindow {
	Q_OBJECT

	public:
		Results(QWidget *parent = Q_NULLPTR);

	private:
		Ui::ResultsWindow ui;

};
