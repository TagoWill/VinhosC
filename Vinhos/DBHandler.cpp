#include "DBHandler.h"

DBHandler::DBHandler()
{
	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("db_vinhos");
	db.setUserName("pi");
	db.setPassword("13795atago");
}


bool DBHandler::openDB()
{
	bool ok = db.open();
	return ok;
}

void DBHandler::closeDB()
{
	db.close();
	return;
}

DBErrorHandler DBHandler::verfica()
{
	return DBErrorHandler();
}

