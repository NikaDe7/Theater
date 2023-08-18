//Purse.h
#pragma once
#include <iostream>
#include<fstream>
#include<iomanip>

class Purse {
public:
	Purse();
	Purse(int number);
	virtual ~Purse();
	int getPurse();
	int SavePurse();
	int SavePurse(int m);
	int getPurseAutor();
	int SavePurseAutor();
	int SavePurseAutor(int m);
protected:
	int money;
};
