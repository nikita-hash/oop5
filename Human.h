#pragma once
#include<iostream>
#include<string>
using namespace std;
class Human
{
protected:
	string name;
	string date;
	string tel;
public:
	void setName(string a)
	{
		name = a;
	}
	void setDate(string a)
	{
		date = a;
	}
	void settel(string a)
	{
		tel = a;
	}
	string getName() { return name; }
	string getDate() { return date; }
	string getTel() { return tel; }

};
