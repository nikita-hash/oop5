#pragma once
#include"Employee.h"
#include"Client.h"
#include"Statistick.h"
#include<iomanip>
#include<vector>
#include<map>
#include"Menu.h"
#include<list>
#include"File_creator.h"
#include<fstream>
static string FileEmploye = "Employee.txt";
static string FileStatistick = "Statistick.txt";
static string FileClient = "Client.txt";
class Agancy
{
	list<Statictick>listStatistick;
	vector<Client>vectorClient;
	vector<Employee>vectorEmployee;
public:
	Agancy();
	void addClient();
	void printClient();
	void delClient();
	void findClient();
	void addEmployee();
	void printEmployee();
	void delEmployee();
	void findEmployee();
	void addStatistick();
	void printfStatistick();
	~Agancy();
};
