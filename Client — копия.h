#pragma once
#include"Human.h"
class Client : public Human
{
	string adress;
	double area;
public:
	
	void setAdress(string ad);
	void setArea(double a);
	string getadress();
	double getArea();
	friend istream& operator>>(istream& os, Client& obj);
};
