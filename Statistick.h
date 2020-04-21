#pragma once
#include<iostream>
using namespace std;
class Statictick
{
	string month;
	int counterEmployee;
	int counterClient;
	double salary;
public:
	void setMonth(string a) { month = a; }
	void setCounterEmployee(int a) { counterEmployee = a; }
	void setCounterClient(int a) { counterClient = a; }
	void setSalar(double a) { salary = a + salary; }
	string getMonth() { return month; }
	int getSetcounterEmployee() { return counterEmployee; }
	int getSetCounterClient() { return counterClient; }
	double getSalary() { return salary; }
	friend ostream& operator <<(ostream& os, Statictick& obj)
	{
		os << "###########################################################" << endl;
		os << "мес€ц : " << obj.getMonth() << endl;
		os << "количестов работкников : " << obj.getSetcounterEmployee() << endl;
		os << "количество клиентов : " << obj.getSetCounterClient() << endl;
		os << "cумма заработок : " << obj.getSalary() << endl;
		os << "###########################################################" << endl;
		return os;
	}
	friend istream& operator >>(istream& os, Statictick& obj)
	{
		os >> obj.month >> obj.counterEmployee >> obj.counterClient >> obj.salary;
		return os;
	}
};
