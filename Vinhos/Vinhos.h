#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vinhos.h"

class Vinhos : public QMainWindow
{
	Q_OBJECT

public:
	Vinhos(QWidget *parent = Q_NULLPTR);

private:
	Ui::VinhosClass ui;
};
