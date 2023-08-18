//Human.h
#include "User.h"
#include "Job.h"
#include "Drama.h"

#pragma once
class Human : virtual public User {
public:
	Human();
	Human(string name, string two_name, int passw);
	virtual ~Human();

	string FullName();
	int showPurse();
	int goJob();
	string buyTicket(int p);
protected:
	string first_name;
	string last_name;
	int password;
	Job day;
	Purse pr;
};

