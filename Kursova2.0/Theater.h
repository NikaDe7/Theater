//Theater.h
#pragma once
#include<fstream>
#include "Drama.h"

class Theater {
public:
	Theater();
	Theater(int s);
	virtual ~Theater();

	friend ostream& operator<<(ostream& out, const Theater& course);

	int ShowCatalog();
	int** ShowPlace(int i);
	int AddDrama(string n, string t, string a, string pr);
	int RemoveDrama(int position);
	string Info(int i);
	string InfoAutor(int i);

protected:
	int size;
	Drama* catalog[128];
};


