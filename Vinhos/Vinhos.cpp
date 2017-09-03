#include "Vinhos.h"

Vinhos::Vinhos(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_Results, SIGNAL(clicked()), this, SLOT(openResults()));
	
}


void Vinhos::openResults()
{
	//MyNewWindow = new Results();
	//MyNewWindow.ReceiveParent(this);
	//MyNewWindow.show();

	this->hide();
}
