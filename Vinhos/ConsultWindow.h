#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include "EnumWindowState.h"
#include "ui_ConsultWindow.h"

namespace Ui { class ConsultWindow; };

class ConsultWindow : public QMainWindow
{
	Q_OBJECT

public:
	ConsultWindow(QWidget *parent = Q_NULLPTR);
	~ConsultWindow();

private:
	Ui::ConsultWindow *ui;

	void ActiveWidgetInConsultWindow(StateOfConsultWindow);

private slots:
	void on_bViewClientsInfo_clicked();

};
