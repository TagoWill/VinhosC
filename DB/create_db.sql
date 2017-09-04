DROP DATABASE IF EXISTS db_vinhos;

#SET GLOBAL sql_mode = 'TRADITIONAL';
SET SESSION sql_mode = 'TRADITIONAL';

CREATE DATABASE IF NOT EXISTS db_vinhos CHARACTER SET utf8 COLLATE utf8_bin;

USE db_vinhos;

CREATE table Morada
(
	ID_Morada int auto_increment NOT NULL primary key,
    Rua nvarchar(20) NOT NULL,
    NPorta nvarchar(20) NOT NULL,
    Andar nvarchar(20),
    Porta nvarchar(20),
    CP nvarchar(20) NOT NULL,
    Localidade nvarchar(20) NOT NULL
);

CREATE table Clientes
(
	NIF int NOT NULL PRIMARY KEY,
    ID_Morada int NOT NULL,
	nome nvarchar(50) NOT NULL,
	apelido nvarchar(50) NOT NULL,
	movel int NOT NULL,
	email nvarchar(255),
    FOREIGN KEY (ID_Morada) REFERENCES db_vinhos.Morada(ID_Morada)
);

######TEST#############

INSERT INTO db_vinhos.Morada(Rua, NPorta, CP, Localidade)
VALUES (1,1,1,1);

INSERT INTO db_vinhos.Clientes (NIF, ID_Morada,nome, apelido,movel)
VALUES (999999999,1,'Tiago', 'Andrade', 912325454);


INSERT INTO db_vinhos.Clientes (NIF, ID_Morada,nome, apelido,movel)
VALUES (999999991,1,'José', 'Andrade', 912325454);

######END TEST#############

CREATE table TipoVinhos
(
	ID_tipovinhos int NOT NULL auto_increment PRIMARY KEY,
	ano int NOT NULL,
	volume int NOT NULL,
	tipo nvarchar(35)
);

CREATE table Boletim
(
	ID_boletim int NOT NULL auto_increment PRIMARY KEY,
	NIF int NOT NULL,
	ID_tipovinhos int NOT NULL,
	data Date,
	ph float,
	massavolumetrica float,
	acidez float,
	grau float,
	estrato float,
	ano int,
	observacoes nvarchar(700),
	FOREIGN KEY (NIF) REFERENCES db_vinhos.Clientes(NIF),
	FOREIGN KEY (ID_tipovinhos) REFERENCES db_vinhos.TipoVinhos(ID_tipovinhos)
);

commit;