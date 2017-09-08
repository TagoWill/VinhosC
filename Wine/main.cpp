#pragma once

#include <QtWidgets/QApplication>
#include "DBHandler.h"
#include <QDebug>
#include "Wine.h"
#include <QtWidgets/QApplication>

/**
@file main.cpp
*/

/**
@mainpage

This is a test application.

@author Tiago
@date 05/09/2017
@version 1.0
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv); /**< Initialize Application*/
	Wine w; /**< Initalize Welcome Window*/
	w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint); /**< REmove Frame from window*/
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
	test.ListAllClients(NULL);*/
	/*
	DBHandler test;
	test.ListClientsByName(NULL, "J");*/

	return a.exec();
}
