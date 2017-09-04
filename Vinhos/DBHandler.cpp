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
	QSqlQuery query;
	query.prepare("SELECT * FROM Clientes");
	query.exec();

	if (!query.next()) {
		return DBErrorHandler::Invalid;
	}
	while (query.next()) {
		int NIF = query.value(0).toInt();
		QString name = query.value(2).toString();
		qDebug() << "Name: " << name << " NIF: " << NIF;
	}
	return DBErrorHandler::Ok;
}

