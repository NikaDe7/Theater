//Purse.cpp
#include "Purse.h"

Purse::Purse() :money() {
	money = 10;
}

Purse::Purse(int number) {
	money = number;
}

Purse::~Purse() {

}

int Purse::getPurse() {
	std::ifstream infile;
	infile.open("PurseHuman.txt");
	if (!infile) {
		return -1;
	}
	infile >> money;
	while (!infile.eof()) {
		infile >> money;
	}
	infile.close();
	return money;
}

int Purse::SavePurse() {
	std::fstream outfile("PurseHuman.txt", std::ios::app);
	if (!outfile) {
		return -1;
	}
	outfile.setf(std::ios::left);
	outfile.width(2);
	outfile << money << std::endl;
	return 0;
}

int Purse::SavePurse(int m) {
	std::fstream outfile("PurseHuman.txt", std::ios::app);
	if (!outfile) {
		return -1;
	}
	outfile.setf(std::ios::left);
	outfile.width(2);
	outfile << m << std::endl;
	return m;
}

int Purse::getPurseAutor() {
	std::ifstream infile;
	infile.open("PurseAutor.txt");
	if (!infile) {
		return -1;
	}
	infile >> money;
	while (!infile.eof()) {
		infile >> money;
	}
	infile.close();
	return money;
}

int Purse::SavePurseAutor() {
	std::fstream outfile("PurseAutor.txt", std::ios::app);
	if (!outfile) {
		return -1;
	}
	outfile.setf(std::ios::left);
	outfile.width(2);
	outfile << money << std::endl;
	return 0;
}

int Purse::SavePurseAutor(int m) {
	std::fstream outfile("PurseAutor.txt", std::ios::app);
	if (!outfile) {
		return -1;
	}
	outfile.setf(std::ios::left);
	outfile.width(2);
	outfile << m << std::endl;
	return m;
}