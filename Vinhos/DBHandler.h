#pragma once

#include <QtWidgets/QMainWindow>
#include <QSqlDriver>
#include <QtSql>

#include "EnumErrorHandelrs.h"

class DBHandler : public QMainWindow {

public:
	DBHandler();
	bool openDB();
	void closeDB();
	DBErrorHandler verfica();


private:
	QSqlDatabase db;

};