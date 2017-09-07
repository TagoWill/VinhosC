#include "DBHandler.h"

DBHandler::DBHandler()
{
	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("db_wines");
	db.setUserName("pi");
	db.setPassword("13795atago");
}


bool DBHandler::OpenDB()
{
	bool ok = db.open();
	return ok;
}

void DBHandler::CloseDB()
{
	db.close();
	return;
}

DBErrorHandler DBHandler::Verfica()
{

	QSqlQuery query;
	query.prepare("SELECT * FROM Clients");
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

void DBHandler::ListAllClients(QListWidget* WindowList)
{
	/** @brief Clean the list to repopulate */
	//WindowList->clear();

	if (!OpenDB()) {
		QMessageBox::critical(this, "Error" ,"Error while opening DB");
		qDebug() << "Error while opening DB";
		return;
	}

	QSqlQuery query;
	query.prepare("SELECT Name FROM Clients ORDER BY Name ASC");
	query.exec();
	if (query.size() <= 0) {
		//WindowList->addItem("No names");
		qDebug() << "No names on the DB";
		return;
	}
	QString InsertName;
	while (query.next())
	{
		InsertName = query.value(0).toString();

		qDebug() << InsertName;

	}

}
