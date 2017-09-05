#include "ConsultWindow.h"

ConsultWindow::ConsultWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::ConsultWindow();
	ui->setupUi(this);
}

ConsultWindow::~ConsultWindow()
{
	delete ui;
}

void ConsultWindow::on_bViewClientInfo_clicked() {
	qDebug() << "Clicked on View Client Info";
}