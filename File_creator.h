#pragma once
#include"Agency.h"
class File_creator
{
public:
	//void read_list_statistick(string namefile, list<Statictick>& list);
	void read_vector_Employee(string nameFile, vector <Employee>& vec);
	void read_vector_Clietn(string namefile, vector<Client>& vec);
	void save_vector_Employee(string nameFile, vector<Employee>& vec);
	void save_vector_Client(string nameFile, vector<Client>& vec);

};

