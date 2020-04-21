#include "Menu.h"

void Menu::startMenu()
{
	int a;
	while(1)
	{
		system("cls");
		cout << "Меню" << endl;
		cout << "1)Меню сотрудников" << endl;
		cout << "2)Меню клиентов" << endl;
		cout << "3)Статистика " << endl;
			cin >> a;
	      switch(a)
	      {
		  case 1:employeeMenu(); break;
		  case 2:clientMenu(); break;
		  case 3:statistickMenu(); break;
	      }
	}
}

void Menu::check_menu_employee()
{
	cout << "Нет людей с такими данными !!" << endl;
	return employeeMenu();
}

void Menu::check_menu_client()
{
	cout << "Нет людей с такими данными !!" << endl;
	return clientMenu();
}

void Menu::statistickMenu()
{
	system("cls");
	while (1)
	{
		Agancy obj;
		int a;
		cout << "Меню статистики >>" << endl;
		cout << "1)Сгенерировать статистику " << endl;
		cout << "2)Вывод статистика за все месяцы " << endl;
		cout << "3)Вернуться в главное меню " << endl;
		cin >> a;
		switch(a)
		{
		case 1:obj.addStatistick(); break;
		case 2:obj.printfStatistick(); break;
		case 3:return startMenu();
		}
	}
}

void Menu::clientMenu()
{
	int a;
	while (1)
	{
		cout << "Меню клиентов " << endl;
		cout << "1)Добавить клиента " << endl;
		cout << "2)Информация о всех клиентах" << endl;
		cout << "3)Поиск клиента " << endl;
		cout << "4)Удалить клиента " << endl;
		cout << "5)Вернться в главное меню " << endl;
		cin >> a;
		Agancy obj;
		switch (a)
		{
		case 1:obj.addClient(); break;
		case 2:obj.printClient(); break;
		case 3:obj.findClient(); break;
		case 4:obj.delClient(); obj.~Agancy(); break;
		case 5: return startMenu(); 
		}
	}
}

void Menu::employeeMenu()
{
	int a;
	while(1)
	{
		cout << "Меню сотрудников " << endl;
		cout << "1)Добавить сотрудника " << endl;
		cout << "2)Информация о всех сотрудниках" << endl;
		cout << "3)Поиск сотрудника " << endl;
		cout << "4)Удалить сотрудника " << endl;
		cout << "5)Вернться в главное меню " << endl;
			cin >> a;
		Agancy obj;
		switch(a)
			{
		case 1:obj.addEmployee(); break;
		case 2:obj.printEmployee(); break;
		case 3:obj.findEmployee(); break;
		case 4:obj.delEmployee(); break;
		case 5:return startMenu(); break;
			}
	}
}
