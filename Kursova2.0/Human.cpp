//Human.cpp
#include "Human.h"

Human::Human() :User() {

}

Human::Human(std::string name, std::string two_name, int passw) : User(name, two_name, passw) {
	first_name = name;
	last_name = two_name;
	password = passw;
}

Human::~Human() {

}

int Human::goJob() {
	day.getPurse();
	day.GetMoneyJob();
	day.AddMoneyJob();
	day.SavePurse();
	return pr.getPurse();
}

int Human::showPurse() {
	return pr.getPurse();
}

string Human::FullName() {
	return first_name + " " + last_name;
}

string Human::buyTicket(int p) {
	int m = pr.getPurse();
	if (m > p && p != 0) {
		m = m - p;
		pr.SavePurse(m);
		string feedback[5] = { "������� �'���", "���� �� ����� �����",
"�������� �����", "����������, ��� ��� �������", "������ ���������, ��� ����� �� �������" };
		return feedback[rand() % (0 - 5)];
	}
	else {
		return "� ��� ����������� �����, ���� �� ������";
	}
}