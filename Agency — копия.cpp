#include "Agency.h"



Agancy::Agancy()
{
	File_creator obj;
	obj.read_vector_Employee(FileEmploye, vectorEmployee);
	//obj.read_list_statistick(FileStatistick, listStatistick);
	obj.read_vector_Clietn(FileClient, vectorClient);
}


void Agancy::addClient()
{
	string name, date, tel, adress;
	double area;
	Client obj;
	system("cls");
	cout << "���� ���������� �������� >>" << endl;
	cout << "������� ��� : ";
	cin >> name;
	obj.setName(name);
	cout << "������� ���� �������� : ";
	cin >> date;
	obj.setDate(date);
	cout << "������� ����� �������� :+375";
	cin >> tel;
	obj.settel(tel);
	cout << "������� ����� �������� ������������ : ";
	cin >> adress;
	obj.setAdress(adress);
	cout << "������� ������ ������������ ����������� ����� : ";
	cin >> area;
	obj.setArea(area);
	vectorClient.push_back(obj);
	cout << "������ �������� !" << endl;
	system("pause");
	system("cls");
}

void Agancy::printClient()
{
	cout << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|������� " << "������" << endl;
	for (int i = 0; i < vectorClient.size(); i++)
	{
		cout << i + 1 << "\t" << vectorClient[i].getName() << "\t|" << vectorClient[i].getDate() << "\t|" << vectorClient[i].getTel() << setw(11) << "\t|" << vectorClient[i].getArea() << "\t" << vectorClient[i].getadress() << endl;
	}
}

void Agancy::delClient()
{
	File_creator obj;
	string tel;
	string name;
	int k = 0;
	cout << "���� �������� >>" << endl;
	cout << "������� ����� ������� : +375";
	cin >> tel;
	cout << "������� ��� ������� : ";
	cin >> name;
	for (int i = 0; i < vectorClient.size(); i++)
	{
		if (vectorClient[i].getName() == name && vectorClient[i].getTel() == tel)
		{
			system("cls");
			cout << "############################################################" << endl;
			cout << "��� : " << vectorClient[i].getName() << endl;
			cout << "���� �������� : " << vectorClient[i].getDate() << endl;
			cout << "����� �������� : +375" << vectorClient[i].getTel() << endl;
			cout << "������ : " << vectorClient[i].getadress() << endl;
			cout << "������� : " << vectorClient[i].getArea() << endl;
			cout << "############################################################" << endl;
			cout << "������ ����� ������� " << endl;
			system("pause");
			auto res = vectorClient.begin();
			vectorClient.erase(res +i);
			obj.save_vector_Client(FileClient, vectorClient);
			break;
		}
		k++;
	}
	if (k == vectorClient.size())
	{
		Menu obj;
		obj.check_menu_client();
	}
}

void Agancy::findClient()
{
	string tel;
	int k = 0;
	cout << "���� ������ >> " << endl;
	cout << "\t���� ������ �������� " << endl;
	printClient();
	cout << endl;
	cout << "������� ����� �������� :+375 ";
	cin >> tel;
	for (int i = 0; i < vectorClient.size(); i++)
	{
		if (vectorClient[i].getTel() == tel)
		{
			system("cls");
			cout << "############################################################" << endl;
			cout << "��� : " << vectorClient[i].getName() << endl;
			cout << "���� �������� : " << vectorClient[i].getDate() << endl;
			cout << "����� �������� : +375" << vectorClient[i].getTel() << endl;
			cout << "������ : " << vectorClient[i].getadress() << endl;
			cout << "������� : " << vectorClient[i].getArea() << endl;
			cout << "############################################################" << endl;
			system("pause");
		}
		k++;
	}
	if (k == vectorClient.size())
	{
		Menu obj;
		obj.check_menu_client();
	}
}

void Agancy::addEmployee()
{ 
	string name, date, tel, positon;
	Employee obj;
	system("cls");
	cout << "���� ���������� ���������� >>" << endl;
	cout << "������� ��� : ";
	cin >> name;
	obj.setName(name);
	cout << "������� ���� �������� : ";
	cin >> date;
	obj.setDate(date);
	cout << "������� ����� �������� :+375";
	cin >> tel;
	obj.settel(tel);
	cout << "������� ��������� : ";
	cin >> positon;
	obj.setPosition(positon);
	vectorEmployee.push_back(obj);
	cout << "�������� �������� !" << endl;
	system("pause");
	system("cls");
}

void Agancy::printEmployee()
{
	cout << "#" << "\t��� " << "\t|���� ��������  |" << "����� �������� +375 " << "\t|��������� " << endl;
	for (int i = 0; i < vectorEmployee.size(); i++)
	{
		cout << i+1 << "\t" << vectorEmployee[i].getName() << "\t|" << vectorEmployee[i].getDate() << "\t|" << vectorEmployee[i].getTel() << setw(11) <<  "\t|" << vectorEmployee[i].getPosition() << endl;
	}
}

void Agancy::delEmployee()
{
	 string tel;
	 string name;
	int k = 0;
	cout << "���� �������� >>" << endl;
	cout << "������� ����� ���������� : +375";
	cin >> tel;
	cout << "������� ��� ���������� : ";
	cin >> name;
	for(int i=0;i<vectorEmployee.size();i++)
	{
	if(vectorEmployee[i].getName()==name && vectorEmployee[i].getTel()==tel)
	{
		system("cls");
		cout << "############################################################" << endl;
		cout << "��� : " << vectorEmployee[i].getName() << endl;
		cout << "���� �������� : " << vectorEmployee[i].getDate() << endl;
		cout << "����� �������� : +375" << vectorEmployee[i].getTel() << endl;
		cout << "��������� : " << vectorEmployee[i].getPosition() << endl;
		cout << "############################################################" << endl;
		cout << "������ ����� ������� " << endl;
		system("pause");
		auto res = vectorEmployee.begin();
		vectorEmployee.erase(res + i);
		File_creator obj;
		obj.save_vector_Employee(FileEmploye, vectorEmployee);
		break;
	}
	k++;
	}
	if(k==vectorEmployee.size())
	{
		Menu obj;
		obj.check_menu_employee();
	}
}

void Agancy::findEmployee()
{
	string tel;
	int k = 0;
	cout << "���� ������ >> " << endl;
	cout << "\t���� ������ ����������� " << endl;
	printEmployee();
	cout << endl;
	cout << "������� ����� �������� :+375 ";
	cin >> tel;
	for(int i=0;i<vectorEmployee.size();i++)
	{
	if(vectorEmployee[i].getTel()==tel)
	{
		system("cls");
		cout << "############################################################" << endl;
		cout << "��� : " << vectorEmployee[i].getName() << endl;
		cout << "���� �������� : " << vectorEmployee[i].getDate() << endl;
		cout << "����� �������� :+375" << vectorEmployee[i].getTel() << endl;
		cout << "��������� : " << vectorEmployee[i].getPosition() << endl;
		cout << "############################################################" << endl;
		system("pause");
	}
	k++;
	}
	if(k==vectorEmployee.size())
	{
		Menu obj;
		obj.check_menu_employee();
	}
}

void Agancy::addStatistick()
{
	string mon;
	Statictick obj;
	double sum=0;
	int a, b;
	a = vectorEmployee.size();
	b = vectorClient.size();
	cout << "������� ������� ����� : ";
	cin >> mon;
	obj.setMonth(mon);
	obj.setCounterEmployee(a);
	obj.setCounterClient(b);
	for(int i=0;i<vectorClient.size();i++)
	{
		sum = vectorClient[i].getArea() + sum;
	}
	obj.setSalar(sum);
	ofstream file;
	file.open(FileStatistick, ios::app);
	file << obj;
	cout << "���������� ������������� !" << endl;
}

void Agancy::printfStatistick()
{
	for(auto i =listStatistick.begin();i!=listStatistick.end();i++)
	{
		cout << "######################################################" << endl;
		cout << "����� :" << i->getMonth() << endl;
		cout << "���-�� ����������� : " << i->getSetcounterEmployee() << endl;
		cout << "���-�� �������� : " << i->getSetCounterClient() << endl;
		cout << "����� �� ����� : " << i->getSalary() << endl;
		cout << "######################################################" << endl;
	}
}


Agancy::~Agancy()
{
	File_creator obj;
	obj.save_vector_Employee(FileEmploye, vectorEmployee);
	obj.save_vector_Client(FileClient, vectorClient);

}

