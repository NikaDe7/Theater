//Theater.ñpp
#include "Theater.h"

int CountLinesInFile(string filename) {
	ifstream F("Catalog.txt", ios::in);
	if (!F)
	{
		return -1;
	}
	int count = 0;
	char buffer[1000];
	while (!F.eof()) {
		count++;
		F.getline(buffer, 1000);
	}
	F.close();
	return count;
}

Theater::Theater() : size(), catalog() {
	size = CountLinesInFile("Catalog.txt");
}

Theater::Theater(int s) {
	size = s;
	for (int i = 0; i < size; i++) {
		catalog[i] = new Drama;
	}
}

Theater::~Theater() {
	if (catalog != nullptr) {
		for (int i = 0; i < size; i++) {
			if (catalog[i] != nullptr) {
				delete catalog[i];
			}
		}
	}
}

ostream& operator<< (ostream& output, const Theater& point) {
	output << point.catalog;
	return output;
}

int Theater::ShowCatalog() {
	ifstream infile;
	infile.open("Catalog.txt");
	if (!infile) {
		return -1;
	}
	for (int i = 0; i < size; i++) {
		infile >> *catalog[i];
	}
	infile.close();
	return 0;
}

int Theater::AddDrama(string n, string t, string a, string pr) {
	fstream outfile("Catalog.txt", ios::app);
	if (!outfile) {
		return -1;
	}
	outfile << setw(1) << left << n << ", ";
	outfile << setw(1) << left << t << ", ";
	outfile << setw(1) << left << a << ", ";
	outfile << setw(1) << left << pr << endl;
	outfile.close();
	catalog[size] = new Drama(n, t, a, pr);
	size++;
	return 0;
}

int GetStringsFromFileS(string filename, string** _lines) {
	string* lines;
	int n = CountLinesInFile(filename);
	if (n == -1) return -1;
	ifstream F(filename);
	if (!F) return -1;
	try {
		lines = new string[n];
	}
	catch (bad_alloc e) {
		e.what();
		F.close();
		return -2;
	}
	char buffer[1000];
	for (int i = 0; i < n; i++) {
		F.getline(buffer, 1000);
		int len;
		for (len = 0; buffer[len] != '\0'; len++);
		lines[i].assign(buffer, len);
	}
	F.close();
	*_lines = lines;
	return n;
}

bool SetStringsToFileS(string filename, string* lines, int count) {
	ofstream F(filename);
	if (!F) return false;
	for (int i = 0; i < count - 1; i++)
		F << lines[i] << endl;
	F << lines[count - 1];
	F.close();
	return true;
}

int Theater::RemoveDrama(int position) {
	if (position - 1 < 0) return false;
	string* lines;
	int n;

	n = size;

	if (n == -1) return false;

	if (position - 1 >= n) return false;

	string filename = "Catalog.txt";

	n = GetStringsFromFileS(filename, &lines);

	for (int i = position - 1; i < n - 1; i++)
		lines[i] = lines[i + 1];
	n--;
	bool res = SetStringsToFileS(filename, lines, n);

	if (n > 0) delete[] lines;
	size--;
	return res;
}

string Theater::Info(int i) {
	i = i - 1;
	return catalog[i]->InfoDrama();;
}

string Theater::InfoAutor(int i) {
	i = i - 1;
	return catalog[i]->AutorDrama();;
}

int** Theater::ShowPlace(int i) {
	i = i - 1;
	catalog[i]->CreatePlace();
	return catalog[i]->ShowPlace();
}
