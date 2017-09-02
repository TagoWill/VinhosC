#pragma once

#include "Vinhos.h"
#include <QtWidgets/QApplication>

/**!
* This is the main cpp
* Using Qt amd start a new window
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv); /*!< I dont know*/
	Vinhos w;
	w.show();
	return a.exec();
}
