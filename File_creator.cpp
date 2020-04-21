#include "File_creator.h"


void File_creator::read_vector_Employee(string nameFile, vector<Employee>& vec)
{
	ifstream file;
	file.open(nameFile);
	if (file.peek() == EOF)
	{
	}
	else
	{
		while (!file.eof())
		{
			while (file.eof())
			{
				break;
			}
			Employee obj;
			file >> obj;
			vec.push_back(obj);
		}
	}
	file.close();
}

void File_creator::read_vector_Clietn(string namefile, vector<Client>& vec)
{
	ifstream file;
	file.open(namefile);
	if (file.peek() == EOF)
	{
	}
	else
	{
		while(!file.eof())
		{
		   while(file.eof())
			{
			break;
			}
		   Client obj;
		   file >> obj;
		   vec.push_back(obj);
		}
	}
	file.close();
}


void File_creator::save_vector_Employee(string nameFile, vector<Employee>& vec)
{
	ofstream file(nameFile);
	for (vector<Employee>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		file << i->getName() << "\t" << i->getDate() << "\t" << i->getTel() << "\t" << i->getPosition() << endl;
	}
	file.close();
}



void File_creator::save_vector_Client(string nameFile, vector<Client>& vec)
{
	ofstream file(nameFile);
	for (vector<Client>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		file << i->getName() << "\t" << i->getDate() << "\t" << i->getTel() << "\t" << i->getadress() << "\t" << i->getArea();
	}
	file.close();
}
