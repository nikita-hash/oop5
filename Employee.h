#pragma once
#include"Human.h"
class Employee : public Human
{
	string position;
public:
	friend istream& operator>>(istream& of, Employee& obj)
	{
		of >> obj.name >> obj.date >> obj.tel >> obj.position;
		return of;
	}
	void setPosition(string a) { position = a; }
	string getPosition() { return position; }
};
