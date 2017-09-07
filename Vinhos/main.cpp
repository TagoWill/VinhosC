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

	//REMOVE THIS!!!!
	/*DBHandler teste;
	if (teste.openDB()) {
		qDebug() << "Abriu tabela e : " ;
		if (teste.verfica() == DBErrorHandler::Ok) {
			qDebug() << "Ok";
		}
		else {
			qDebug() << "Invalid";
		}
	}
	else {
		qDebug() << "ERROR";
	}*/

	//TESTE ListAllClients
	/*
	DBHandler test;
	test.ListAllClients(NULL);
	*/
	return a.exec();
}
