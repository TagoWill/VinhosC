#include "Vinhos.h"

Vinhos::Vinhos(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_Results, SIGNAL(clicked()), this, SLOT(openResults()));
	connect(ui.actionExit, SIGNAL(clicked()),this, SLOT(close()));
}


void Vinhos::openResults()
{
	MyNewWindow = new Results();
	//MyNewWindow.ReceiveParent(this);
	MyNewWindow->show();
}


void Vinhos::on_actionExit_clicked() {
	
	QMessageBox::information(this, "Test", "Teste");
	
	/*QMessageBox::StandardButton replay = QMessageBox::question(this, "You are exiting", 
		"Do you really want to exit the program?", QMessageBox::Yes | QMessageBox::No);

	if (replay = QMessageBox::Yes) {
		QApplication::quit();
	}
	else {
		qDebug() << "No was pressed";
	}*/

}
