#include "ConsultWindow.h"

ConsultWindow::ConsultWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::ConsultWindow();
	ui->setupUi(this);

	ActiveWidgetInConsultWindow(StateOfConsultWindow::Principal);
}

ConsultWindow::~ConsultWindow()
{
	delete ui;
}

void ConsultWindow::ActiveWidgetInConsultWindow(StateOfConsultWindow State)
{
	if (State == StateOfConsultWindow::Principal) {
		ui->Principal->setVisible(true);
		ui->ViewClientsInfo->setVisible(false);
	}
	if (State == StateOfConsultWindow::ViewClientsInfo) {
		ui->Principal->setVisible(false);
		ui->ViewClientsInfo->setVisible(true);
	}
	
	return;
}

void ConsultWindow::on_bViewClientsInfo_clicked() {
	qDebug() << "Clicked on View Client Info";
	ActiveWidgetInConsultWindow(StateOfConsultWindow::ViewClientsInfo);
}
