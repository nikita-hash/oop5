#include "Client.h"



void Client::setAdress(string ad)
{
	adress = ad;
}

void Client::setArea(double a)
{
	area = a;
}

string Client::getadress()
{
	return adress;
}

double Client::getArea()
{
	return area;
}

istream& operator>>(istream& os, Client& obj)
{
	os >> obj.name >> obj.date >> obj.tel >> obj.adress >> obj.area;
	return os;
}
