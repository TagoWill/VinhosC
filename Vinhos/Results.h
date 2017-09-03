#pragma once

#include <QtWidgets\QMainWindow>
#include "ui_Results.h"

class Results : public QMainWindow {
	Q_OBJECT

	public:
		Results(QWidget *parent = 0);

	private:
		Ui::ResultsWindow ui;


	public slots:
		void BackByClosing();
};
