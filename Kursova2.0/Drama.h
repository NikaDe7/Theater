//Drama.h
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream> 

using namespace std;

class Drama {
public:
	Drama();
	Drama(string n, string t, string a, string pr);
	virtual ~Drama();

	friend ostream& operator<<(ostream& out, const Drama& course);
	friend istream& operator>> (istream& in, Drama& course);

	string InfoDrama();
	string AutorDrama();
	void CreatePlace();
	int** ShowPlace();
	int BuyPlace(int x, int y, string obj);
	int BuyPlace(int x, int y);
protected:
	string price;
	string name;
	string time;
	string autor;
	string lastname;
	int** arr;
	int n = 7;
};

