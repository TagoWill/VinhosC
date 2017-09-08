#include "DBHandler.h"

/** @brief Constructor  of the DB handler object with the mysql serve credentials*/
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

	//TODO Falta os outros erros
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
	WindowList->clear();

	if (!OpenDB()) {
		QMessageBox::critical(this, "Error", "Error while opening DB");
		qDebug() << "Error while opening DB";
		return;
	}

	QSqlQuery query;
	query.prepare("SELECT Name FROM Clients ORDER BY Name ASC");
	query.exec();

	if (query.size() <= 0) {
		WindowList->addItem("No names");
		qDebug() << "No names on the DB";
		return;
	}
	
	while (query.next())
	{

		WindowList->addItem(query.value(0).toString());
		qDebug() << query.value(0).toString();

	}

	CloseDB();
}

void DBHandler::ListClientsByName(QListWidget* WindowList, QString SearchName)
{
	/** @brief Clean the list to repopulate */
	WindowList->clear();

	if (!OpenDB()) {
		QMessageBox::critical(this, "Error", "Error while opening DB");
		qDebug() << "Error while opening DB";
		return;
	}

	QSqlQuery query;
	query.prepare("SELECT Name FROM Clients where Name LIKE '" + SearchName + "%' ORDER BY Name ASC");
	query.exec();
	if (query.size() <= 0) {
		WindowList->addItem("Name doesnt match!");
		qDebug() << "Name doesnt match!";
		return;
	}
	
	while (query.next())
	{
		
		WindowList->addItem(query.value(0).toString());
		qDebug() << query.value(0).toString();

	}
	CloseDB();
}

void DBHandler::ListClientsByNIF(QListWidget *WindowList, QString SearchNIF)
{
	/** @brief Clean the list to repopulate */
	WindowList->clear();

	if (!OpenDB()) {
		QMessageBox::critical(this, "Error", "Error while opening DB");
		qDebug() << "Error while opening DB";
		return;
	}

	QSqlQuery query;
	query.prepare("SELECT Name FROM Clients where NIF LIKE '" + SearchNIF + "%' ORDER BY Name ASC");
	query.exec();

	if (query.size() <= 0) {
		WindowList->addItem("NIF doesnt match!");
		qDebug() << "NIF doesnt match!";
		return;
	}
	
	while (query.next())
	{
		
		WindowList->addItem(query.value(0).toString());
		qDebug() << query.value(0).toString();

	}
	CloseDB();
}
