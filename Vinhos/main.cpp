#pragma once

#include "Vinhos.h"
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
	Vinhos w; /**< Initalize Welcome Window*/
	w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint); /**< REmove Frame from window*/
	w.show();
	return a.exec();
}
