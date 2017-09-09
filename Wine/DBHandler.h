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

	/** Verifies if the DB is working
	* @return The return value is an enum. That could be OK or invalid_"NameOfTableError".
	*/
	DBVerifyError Verify();

	//All Street functions


	//All client functions
	void ListAllClients(QListWidget*);
	void ListClientsByName(QListWidget*, QString);
	void ListClientsByNIF(QListWidget*, QString);
	DBInsertError AddClient(QString, QString, QString, QString, QString, QString);

	//All report functions

private:
	QSqlDatabase db;

};