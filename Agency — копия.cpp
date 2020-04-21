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
	cout << "Меню добавления клиентов >>" << endl;
	cout << "Введите имя : ";
	cin >> name;
	obj.setName(name);
	cout << "Введите дату рождения : ";
	cin >> date;
	obj.setDate(date);
	cout << "Введите номер телефона :+375";
	cin >> tel;
	obj.settel(tel);
	cout << "Введиет адрес желаемой недвижимости : ";
	cin >> adress;
	obj.setAdress(adress);
	cout << "Введите размер недвижимости кватрадтнык метры : ";
	cin >> area;
	obj.setArea(area);
	vectorClient.push_back(obj);
	cout << "Клиетн добавлен !" << endl;
	system("pause");
	system("cls");
}

void Agancy::printClient()
{
	cout << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|площадь " << "адресс" << endl;
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
	cout << "меню удаления >>" << endl;
	cout << "введите номер клиента : +375";
	cin >> tel;
	cout << "введите имя клиента : ";
	cin >> name;
	for (int i = 0; i < vectorClient.size(); i++)
	{
		if (vectorClient[i].getName() == name && vectorClient[i].getTel() == tel)
		{
			system("cls");
			cout << "############################################################" << endl;
			cout << "имя : " << vectorClient[i].getName() << endl;
			cout << "дата рождения : " << vectorClient[i].getDate() << endl;
			cout << "номер телефона : +375" << vectorClient[i].getTel() << endl;
			cout << "адресс : " << vectorClient[i].getadress() << endl;
			cout << "площадь : " << vectorClient[i].getArea() << endl;
			cout << "############################################################" << endl;
			cout << "анкета будет удалена " << endl;
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
	cout << "Меню поиска >> " << endl;
	cout << "\tБаза данных клиентов " << endl;
	printClient();
	cout << endl;
	cout << "введите номер телефона :+375 ";
	cin >> tel;
	for (int i = 0; i < vectorClient.size(); i++)
	{
		if (vectorClient[i].getTel() == tel)
		{
			system("cls");
			cout << "############################################################" << endl;
			cout << "имя : " << vectorClient[i].getName() << endl;
			cout << "дата рождения : " << vectorClient[i].getDate() << endl;
			cout << "номер телефона : +375" << vectorClient[i].getTel() << endl;
			cout << "адресс : " << vectorClient[i].getadress() << endl;
			cout << "площадь : " << vectorClient[i].getArea() << endl;
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
	cout << "Меню добавления сотрудника >>" << endl;
	cout << "Введите имя : ";
	cin >> name;
	obj.setName(name);
	cout << "Введите дату рождения : ";
	cin >> date;
	obj.setDate(date);
	cout << "Введите номер телефона :+375";
	cin >> tel;
	obj.settel(tel);
	cout << "Введиет должность : ";
	cin >> positon;
	obj.setPosition(positon);
	vectorEmployee.push_back(obj);
	cout << "Работник добавлен !" << endl;
	system("pause");
	system("cls");
}

void Agancy::printEmployee()
{
	cout << "#" << "\tИмя " << "\t|дата рождения  |" << "номер телефона +375 " << "\t|должность " << endl;
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
	cout << "меню удаления >>" << endl;
	cout << "введите номер сотрудника : +375";
	cin >> tel;
	cout << "введите имя сотрудника : ";
	cin >> name;
	for(int i=0;i<vectorEmployee.size();i++)
	{
	if(vectorEmployee[i].getName()==name && vectorEmployee[i].getTel()==tel)
	{
		system("cls");
		cout << "############################################################" << endl;
		cout << "имя : " << vectorEmployee[i].getName() << endl;
		cout << "дата рождения : " << vectorEmployee[i].getDate() << endl;
		cout << "номер телефона : +375" << vectorEmployee[i].getTel() << endl;
		cout << "должность : " << vectorEmployee[i].getPosition() << endl;
		cout << "############################################################" << endl;
		cout << "анкета будет удалена " << endl;
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
	cout << "Меню поиска >> " << endl;
	cout << "\tБаза данных сотрудников " << endl;
	printEmployee();
	cout << endl;
	cout << "введите номер телефона :+375 ";
	cin >> tel;
	for(int i=0;i<vectorEmployee.size();i++)
	{
	if(vectorEmployee[i].getTel()==tel)
	{
		system("cls");
		cout << "############################################################" << endl;
		cout << "имя : " << vectorEmployee[i].getName() << endl;
		cout << "дата рождения : " << vectorEmployee[i].getDate() << endl;
		cout << "номер телефона :+375" << vectorEmployee[i].getTel() << endl;
		cout << "должность : " << vectorEmployee[i].getPosition() << endl;
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
	cout << "Введите текущий месяц : ";
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
	cout << "Статистика сгенерирована !" << endl;
}

void Agancy::printfStatistick()
{
	for(auto i =listStatistick.begin();i!=listStatistick.end();i++)
	{
		cout << "######################################################" << endl;
		cout << "месяц :" << i->getMonth() << endl;
		cout << "кол-во сотрудниклв : " << i->getSetcounterEmployee() << endl;
		cout << "кол-во клиентов : " << i->getSetCounterClient() << endl;
		cout << "денег на счете : " << i->getSalary() << endl;
		cout << "######################################################" << endl;
	}
}


Agancy::~Agancy()
{
	File_creator obj;
	obj.save_vector_Employee(FileEmploye, vectorEmployee);
	obj.save_vector_Client(FileClient, vectorClient);

}

