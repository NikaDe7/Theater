//User.cpp
#include "User.h"

User::User() :first_name(), last_name(), password() {

}

User::User(string name, string two_name, int passw) {
	first_name = name;
	last_name = two_name;
	password = passw;
}

User::~User() {

}