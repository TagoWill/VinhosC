#pragma once

#include "Vinhos.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Vinhos w;
	w.show();
	return a.exec();
}
