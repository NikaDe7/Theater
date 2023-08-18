//User.h
#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class User{
	public:
		User();
		User(string name, string two_name, int passw);
		virtual ~User();
	private:
		string first_name;
		string last_name;
		int password;
};

