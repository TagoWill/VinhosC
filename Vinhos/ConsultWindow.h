#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
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


private slots:
	void on_bViewClientInfo_clicked();

};
