#include "Wine.h"

Wine::Wine(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_Results, SIGNAL(clicked()), this, SLOT(openResults()));
}

void Wine::openResults()
{
	myConsultWindow = new ConsultWindow();
	myConsultWindow->show();
}


void Wine::on_actionExit_triggered() {


	QMessageBox::StandardButton replay = QMessageBox::question(this, "Close Application", 
		"Do you really want to exit?", QMessageBox::Yes | QMessageBox::No);

	if (replay == QMessageBox::Yes) {
		QApplication::quit();
	}
	else {
		qDebug() << "No was pressed";
	}

}