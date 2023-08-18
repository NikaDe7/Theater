//Drama.cpp
#include "Drama.h"

Drama::Drama() : name(), time(), autor(), price() {
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
}

Drama::Drama(string nm, string t, string a, string pr) {
	name = nm;
	time = t;
	autor = a;
	price = pr;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
}

Drama::~Drama() {
	if (arr != 0) {
		for (int i = 0; i < n; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
}

ostream& operator<<(ostream& out, const Drama& course) {
	out << course.name;
	out << course.time;
	out << course.autor;
	out << course.lastname;
	out << course.price;
	return out;
}

istream& operator>> (istream& in, Drama& course) {
	in >> course.name;
	in >> course.time;
	in >> course.autor;
	in >> course.lastname;
	in >> course.price;
	return in;
}

string Drama::AutorDrama() {
	return autor + " " + lastname;
}

string Drama::InfoDrama() {
	return name + " " + time + " " + AutorDrama() + " " + price;
}

void Drama::CreatePlace() {
	int pric = std::stoi(price);
	pric += 6;
	int a[2] = { 0, pric };
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			arr[k][i] = a[rand() % (0 - 2)];
		}
		if (k >= 3) {
			pric += 2;
			a[1] = pric;
		}
		else {
			pric -= 2;
			a[1] = pric;
		}
	}
}

int** Drama::ShowPlace() {
	return arr;
}

int Drama::BuyPlace(int x, int y, string obj) {
	int row = x - 1;
	int col = y - 1;
	int pr = 1;
	if (arr[row][col] == 0) {
		pr = 0;
	}
	else {
		if (autor + " " + lastname == obj) {
			pr = -1;
		}
		arr[row][col] = 0;
	}
	return pr;
}

int Drama::BuyPlace(int x, int y) {
	int row = x - 1;
	int col = y - 1;
	int pr = 1;
	if (arr[row][col] == 0) {
		pr = 0;
	}
	else {
		arr[row][col] = 0;
	}
	return pr;
}