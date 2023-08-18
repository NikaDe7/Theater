//Autor.h
#include "User.h"
#include "Job.h"
#include "Theater.h"

#pragma once
class Autor : virtual public User {
public:
	Autor();
	Autor(string name, string two_name, int passw);
	virtual ~Autor();

	string FullName();
	int showPurse();
	void goJob(string name, string time, string price, int n, int ch);
	string buyTicket(int p, int f);
private:
	string first_name;
	string last_name;
	int password;
	Job day;
	Purse pr;
	Theater th;
};
