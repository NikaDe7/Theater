//Autor.cpp
#include "Autor.h"

Autor::Autor() :User() {

}

Autor::Autor(string name, string two_name, int passw) : User(name, two_name, passw) {
	first_name = name;
	last_name = two_name;
	password = passw;
}

Autor::~Autor() {

}

void Autor::goJob(string name, string time, string price, int n, int ch) {
	if (ch == 1) {
		th.AddDrama(name, time, FullName(), price);
		day.getPurseAutor();
		day.AutorJob(5);
		day.SavePurseAutor();
	}
	if (ch == 2) {
		th.RemoveDrama(n);
		day.getPurseAutor();
		day.AutorJob(-5);
		day.SavePurseAutor();
	}
}


int Autor::showPurse() {
	return pr.getPurseAutor();
}


string Autor::FullName() {
	return first_name + " " + last_name;
}

string Autor::buyTicket(int p, int f) {
	if (f == -1) {
		std::string feedback[5] = { "Шикарна п'єса", "Воно не варте уваги",
"Непогана драма", "Рекомендую", "Актори талановиті, але над сюжетом треба було попрацювати" };
		return feedback[rand() % (0 - 5)];
	}
	else {
		if (p > 0) {
			int m = pr.getPurseAutor();
			if (m > p) {
				m = m - p;
				pr.SavePurseAutor(m);
				std::string feedback[5] = { "Шикарна п'єса", "Воно не варте уваги",
		"Непогана драма", "Рекомендую, але ціні зависокі", "Актори талановиті, але сюжет не цікавий" };
				return feedback[rand() % (0 - 5)];
			}
			else {
				return "У вас недостатньо коштів, йдіть на роботу";
			}
		}
		else {
			return "У вас недостатньо коштів, йдіть на роботу";
		}
	}
}
