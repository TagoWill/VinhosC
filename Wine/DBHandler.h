#pragma once

#include <QtWidgets/QMainWindow>
#include <QSqlDriver>
#include <QWidget>
#include <QtSql>

#include "EnumErrorHandelrs.h"
#include <QMessageBox>
#include <QListWidget>

class DBHandler : public QMainWindow {

public:
	DBHandler();
	bool OpenDB();
	void CloseDB();
	DBErrorHandler Verfica();
	void ListAllClients(QListWidget*);


private:
	QSqlDatabase db;

};