#pragma once

#include "Vinhos.h"
#include <QtWidgets/QApplication>
#include "DBHandler.h"
#include <QDebug>
/**!
* This is the main cpp
* Using Qt amd start a new window
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv); /*!< I dont know*/
	Vinhos w;
	//w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	w.show();
	DBHandler teste;
	if (teste.openDB()) {
		qDebug() << "Abriu tabela";
	}
	else {
		qDebug() << "ERROR";
	}
	return a.exec();
}
