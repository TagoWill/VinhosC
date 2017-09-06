DROP DATABASE IF EXISTS db_vinhos;

#SET GLOBAL sql_mode = 'TRADITIONAL';
SET SESSION sql_mode = 'TRADITIONAL';

CREATE DATABASE IF NOT EXISTS db_wines CHARACTER SET utf8 COLLATE utf8_bin;

USE db_wines;

CREATE table Address
(
	ID_Address int auto_increment NOT NULL primary key,
    Street nvarchar(20) NOT NULL,
    NDoor nvarchar(20) NOT NULL,
    Floor nvarchar(20),
    Door nvarchar(20),
    CP nvarchar(20) NOT NULL,
    Locality nvarchar(20) NOT NULL
);

CREATE table Clients
(
	NIF int NOT NULL PRIMARY KEY,
    ID_Address int NOT NULL,
	Name nvarchar(50) NOT NULL,
	Surname nvarchar(50) NOT NULL,
	Mobile int NOT NULL,
	Email nvarchar(255),
    FOREIGN KEY (ID_Address) REFERENCES db_wines.Address(ID_Address)
);

######TEST#############

INSERT INTO db_wines.Address(Street, NDoor, CP, Locality)
VALUES (1,1,1,1);

INSERT INTO db_wines.Clients (NIF, ID_Address, Name, Surname, Mobile)
VALUES (999999999,1,'Tiago', 'Andrade', 912325454);


INSERT INTO db_wines.Clients (NIF, ID_Address, Name, Surname, Mobile)
VALUES (999999991,1,'José', 'Andrade', 912325454);

######END TEST#############

CREATE table WineTypes
(
	ID_WineTypes int NOT NULL auto_increment PRIMARY KEY,
	Year int NOT NULL,
	Volume int NOT NULL,
	Type nvarchar(35)
);

CREATE table Report
(
	ID_Report int NOT NULL auto_increment PRIMARY KEY,
	NIF int NOT NULL,
	ID_WineTypes int NOT NULL,
	Data Date,
	Ph float,
	VolumetricMass float,
	Acidity float,
	Degree float,
	Stratum float,
	Year int,
	Observations nvarchar(700),
	FOREIGN KEY (NIF) REFERENCES db_wines.Clients(NIF),
	FOREIGN KEY (ID_WineTypes) REFERENCES db_wines.WineTypes(ID_WineTypes)
);

commit;