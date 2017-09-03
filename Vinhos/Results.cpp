#pragma once

#include "Results.h"

Results::Results(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);


	connect(ui.pushButton_back, SIGNAL(clicked()), this, SLOT(BackByClosing()));
	
}


void Results::BackByClosing()
{
	//lol.show();
	//this->close();
}

