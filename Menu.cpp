#include "Menu.h"

void Menu::startMenu()
{
	int a;
	while(1)
	{
		system("cls");
		cout << "����" << endl;
		cout << "1)���� �����������" << endl;
		cout << "2)���� ��������" << endl;
		cout << "3)���������� " << endl;
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
	cout << "��� ����� � ������ ������� !!" << endl;
	return employeeMenu();
}

void Menu::check_menu_client()
{
	cout << "��� ����� � ������ ������� !!" << endl;
	return clientMenu();
}

void Menu::statistickMenu()
{
	system("cls");
	while (1)
	{
		Agancy obj;
		int a;
		cout << "���� ���������� >>" << endl;
		cout << "1)������������� ���������� " << endl;
		cout << "2)����� ���������� �� ��� ������ " << endl;
		cout << "3)��������� � ������� ���� " << endl;
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
		cout << "���� �������� " << endl;
		cout << "1)�������� ������� " << endl;
		cout << "2)���������� � ���� ��������" << endl;
		cout << "3)����� ������� " << endl;
		cout << "4)������� ������� " << endl;
		cout << "5)�������� � ������� ���� " << endl;
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
		cout << "���� ����������� " << endl;
		cout << "1)�������� ���������� " << endl;
		cout << "2)���������� � ���� �����������" << endl;
		cout << "3)����� ���������� " << endl;
		cout << "4)������� ���������� " << endl;
		cout << "5)�������� � ������� ���� " << endl;
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
