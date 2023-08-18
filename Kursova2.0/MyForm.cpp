//MyForm.cpp/main.cpp
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

bool check_password(int number) {
	if (number >= 1000 && number <= 9999) {

		while (number > 0) {
			number -= 1111;
		}

		if (number == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

int CountLinesInFile() {
	std::ifstream F("Catalog.txt", std::ios::in);
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


int i, pass1;
int x = 1;

string name1;
string lastna1;
int size = CountLinesInFile();


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Kursova20::MyForm myform;
	Application::Run(% myform);

	int a = clock();

	float а = ((float)a / CLOCKS_PER_SEC);

	return 0;
}

System::Void Kursova20::MyForm::startProgram(System::Object^ sender, System::EventArgs^ e) {

	msclr::interop::marshal_context context;

	String^ name = Convert::ToString(nameBox->Text);
	string nam = context.marshal_as<string>(name);
	String^ lastname = Convert::ToString(lastnameBox->Text);
	string lastna = context.marshal_as<string>(lastname);
	int pass = Convert::ToInt32(passBox->Text);

	::name1 = nam;
	::lastna1 = lastna;
	::pass1 = pass;

	if (check_password(pass)) {
		Autor a1(::name1, ::lastna1, ::pass1);
		String^ str = Convert::ToString(a1.showPurse());
		i = 1;
		this->purseLabel->Text = str;
	}
	else {
		Human h1(nam, lastna, pass);
		i = 0;
		String^ str = Convert::ToString(h1.showPurse());
		this->purseLabel->Text = str;
	}

	this->nameBox->Visible = false;
	this->lastnameBox->Visible = false;
	this->passBox->Visible = false;
	this->start->Visible = false;
	this->startPictureBox->Visible = false;
	this->start_label->Visible = false;

	this->waitPictureBox->Visible = true;
	this->jobButton->Visible = true;
	this->holidayButton->Visible = true;
	this->purse1label->Visible = true;
	this->purseLabel->Visible = true;

	this->purseLabel->Location = System::Drawing::Point(463, 198);
	this->purse1label->Location = System::Drawing::Point(377, 198);
}

System::Void Kursova20::MyForm::jobHumanButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Human h1;
	String^ str = Convert::ToString(h1.goJob());
	this->purseLabel->Text = str;
}

System::Void Kursova20::MyForm::jobButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == 0) {
		this->waitPictureBox->Visible = false;
		this->holidayButton->Visible = false;
		this->jobButton->Visible = false;

		this->jobPictureBox->Visible = true;
		this->backWaitJobHumanButton->Visible = true;
		this->jobHumanButton->Visible = true;
		this->purse1label->Visible = true;
		this->purseLabel->Visible = true;
	}
	else {
		this->CatalogA->Visible = true;
		this->titleBox->Visible = true;
		this->timeBox->Visible = true;
		this->priceBox->Visible = true;
		this->IdBox->Visible = true;
		this->addDramaButton->Visible = true;
		this->removeDramaButton->Visible = true;
		this->backWaitJobAutorButton->Visible = true;

		this->waitPictureBox->Visible = false;
		this->holidayButton->Visible = false;
		this->jobButton->Visible = false;

		CatalogA->TopLeftHeaderCell->Value = "Id";

		ifstream file("Catalog.txt");
		vector<std::string> rows;
		string row;

		Autor a1(::name1, ::lastna1, ::pass1);

		vector<int> myArray;
		int count = 0;

		if (file.is_open()) {
			while (std::getline(file, row)) {
				count++;
				size_t found = row.find(::name1 + " " + ::lastna1);
				if (found != std::string::npos){
					myArray.push_back(count);
					rows.push_back(row);
				}
			}
			file.close();
		}

		std::vector<std::vector<std::string>> data;
		for (const std::string& row : rows) {
			std::vector<std::string> values;
			std::istringstream iss(row);
			std::string value;

			while (std::getline(iss, value, ',')) {
				values.push_back(value);
			}
			data.push_back(values);
		}
		int rowCount = data.size();
		if (rowCount != 0) {
			int columnCount = 4;
			CatalogA->RowCount = rowCount;
			CatalogA->ColumnCount = columnCount;

			for (int i = 0; i < rowCount; i++) {
				for (int j = 0; j < columnCount; j++) {
					if (j < data[i].size()) {
						String^ cellValue = msclr::interop::marshal_as<String^>(data[i][j]);
						CatalogA->Rows[i]->Cells[j]->Value = cellValue;
					}
				}
			}

			for (int u = 0; u < CatalogA->RowCount; u++) {
				CatalogA->Rows[u]->HeaderCell->Value = myArray[u].ToString();
			}
		}
	}
}

System::Void Kursova20::MyForm::holidayButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Catalog->TopLeftHeaderCell->Value = "Id";

	std::ifstream file("Catalog.txt");
	std::vector<std::string> rows;
	std::string row;

	if (file.is_open()) {
		while (std::getline(file, row)) {
			rows.push_back(row);
		}
		file.close();
	}

	std::vector<std::vector<std::string>> data;
	for (const std::string& row : rows) {
		std::vector<std::string> values;
		std::istringstream iss(row);
		std::string value;
		while (std::getline(iss, value, ',')) {
			values.push_back(value);
		}
		data.push_back(values);
	}

	int rowCount = data.size();
	int columnCount = 4; 
	Catalog->RowCount = rowCount;
	Catalog->ColumnCount = columnCount;

	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < columnCount; j++) {
			if (j < data[i].size()) {
				String^ cellValue = msclr::interop::marshal_as<String^>(data[i][j]);
				Catalog->Rows[i]->Cells[j]->Value = cellValue;
			}
		}
	}

	for (int u = 0; u < Catalog->RowCount; u++){
		Catalog->Rows[u]->HeaderCell->Value = (u + 1).ToString();
	}
	this->waitPictureBox->Visible = false;
	this->jobButton->Visible = false;
	this->holidayButton->Visible = false;
	this->purse1label->Visible = false;
	this->purseLabel->Visible = false;

	this->Catalog->Visible = true;
	this->choiceBox->Visible = true;
	this->choiceButton->Visible = true;
	this->backCatalogButton->Visible = true;
}

System::Void Kursova20::MyForm::backWaitJobHumanButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->waitPictureBox->Visible = true;
	this->holidayButton->Visible = true;
	this->jobButton->Visible = true;
	this->purse1label->Visible = true;
	this->purseLabel->Visible = true;

	this->jobPictureBox->Visible = false;
	this->backWaitJobHumanButton->Visible = false;
	this->jobHumanButton->Visible = false;
}

System::Void Kursova20::MyForm::backCatalogButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->waitPictureBox->Visible = true;
	this->jobButton->Visible = true;
	this->holidayButton->Visible = true;
	this->purse1label->Visible = true;
	this->purseLabel->Visible = true;

	this->Catalog->Visible = false;
	this->choiceBox->Visible = false;
	this->choiceButton->Visible = false;
	this->backCatalogButton->Visible = false;
}

Theater th(CountLinesInFile());

System::Void Kursova20::MyForm::choiceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int pas = Convert::ToInt32(choiceBox->Text);

	if (pas < CountLinesInFile()) {

		::x = pas;
		th.ShowCatalog();

		string myString = th.Info(::x);

		int** arr = th.ShowPlace(::x);

		System::String^ convertedString = msclr::interop::marshal_as<System::String^>(myString);
		this->infoLabel->Text = convertedString;

		int rows = 7;
		int columns = 7;

		Place->RowCount = rows;
		Place->ColumnCount = columns;

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				int value = *(*(arr + i) + j);
				if (value == 0) {
					Place->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Crimson;
					Place->Rows[i]->Cells[j]->Value = Convert::ToString("-");
				}
				else {
					Place->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::ForestGreen;
					Place->Rows[i]->Cells[j]->Value = value;
				}
			}
		}

		this->rowBox->Visible = true;
		this->columnBox->Visible = true;
		this->ticketButton->Visible = true;
		this->backCatalog1Button->Visible = true;
		this->Place->Visible = true;
		this->infoLabel->Visible = true;

		this->purseLabel->Visible = true;
		this->purse1label->Visible = true;

		this->purseLabel->Location = System::Drawing::Point(419, 237);
		this->purse1label->Location = System::Drawing::Point(334, 237);

		this->Catalog->Visible = false;
		this->choiceBox->Visible = false;
		this->choiceButton->Visible = false;
		this->backCatalogButton->Visible = false;
	}
}

System::Void Kursova20::MyForm::backCatalog1Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->rowBox->Visible = false;
	this->columnBox->Visible = false;
	this->ticketButton->Visible = false;
	this->backCatalog1Button->Visible = false;
	this->Place->Visible = false;
	this->infoLabel->Visible = false;
	this->feedLabel->Visible = false;
	this->purseLabel->Visible = false;
	this->purse1label->Visible = false;

	this->purseLabel->Location = System::Drawing::Point(463, 198);
	this->purse1label->Location = System::Drawing::Point(377, 198);
	this->Catalog->Visible = true;
	this->choiceBox->Visible = true;
	this->choiceButton->Visible = true;
	this->backCatalogButton->Visible = true;
}

System::Void Kursova20::MyForm::backWaitJobAutorButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->titleBox->Visible = false;
	this->timeBox->Visible = false;
	this->priceBox->Visible = false;
	this->IdBox->Visible = false;
	this->backWaitJobAutorButton->Visible = false;
	this->addDramaButton->Visible = false;
	this->removeDramaButton->Visible = false;
	this->CatalogA->Visible = false;

	this->waitPictureBox->Visible = true;
	this->jobButton->Visible = true;
	this->holidayButton->Visible = true;
}

System::Void Kursova20::MyForm::addDrama_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	String^ name = Convert::ToString(titleBox->Text);
	std::string na = context.marshal_as<std::string>(name);
	String^ time = Convert::ToString(timeBox->Text);
	std::string tim = context.marshal_as<std::string>(time);
	String^ pr = Convert::ToString(priceBox->Text);
	std::string pri = context.marshal_as<std::string>(pr);

	Theater th(CountLinesInFile());
	th.ShowCatalog();

	Autor a1(::name1, ::lastna1, ::pass1);

	a1.goJob(na, tim, pri, 0, 1);
	String^ str = Convert::ToString(a1.showPurse());
	this->purseLabel->Text = str;

	CatalogA->TopLeftHeaderCell->Value = "Id";

	ifstream file("Catalog.txt");
	vector<std::string> rows;
	string row;

	vector<int> myArray;
	int count = 0;

	if (file.is_open()) {
		while (std::getline(file, row)) {
			count++;
			size_t found = row.find(::name1 + " " + ::lastna1);
			if (found != std::string::npos) {
				myArray.push_back(count);
				rows.push_back(row);
			}
		}
		file.close();
	}

	std::vector<std::vector<std::string>> data;
	for (const std::string& row : rows) {
		std::vector<std::string> values;
		std::istringstream iss(row);
		std::string value;

		while (std::getline(iss, value, ',')) {
			values.push_back(value);
		}
		data.push_back(values);
	}
	int rowCount = data.size();
	if (rowCount != 0) {
		int columnCount = 4;
		CatalogA->RowCount = rowCount;
		CatalogA->ColumnCount = columnCount;

		for (int i = 0; i < rowCount; i++) {
			for (int j = 0; j < columnCount; j++) {
				if (j < data[i].size()) {
					String^ cellValue = msclr::interop::marshal_as<String^>(data[i][j]);
					CatalogA->Rows[i]->Cells[j]->Value = cellValue;
				}
			}
		}

		for (int u = 0; u < CatalogA->RowCount; u++) {
			CatalogA->Rows[u]->HeaderCell->Value = myArray[u].ToString();
		}
	}
}

System::Void Kursova20::MyForm::removeDrama_Click(System::Object^ sender, System::EventArgs^ e) {

	ifstream file("Catalog.txt");
	
	string row;

	vector<int> myArray;
	int count = 0;

	if (file.is_open()) {
		while (std::getline(file, row)) {
			count++;
			size_t found = row.find(::name1 + " " + ::lastna1);
			if (found != std::string::npos) {
				myArray.push_back(count);
			}
		}
		file.close();
	}

	int n = Convert::ToInt32(IdBox->Text);

	for (int i = 0; i < myArray.size(); i++) {
		if (n == myArray[i]) {
			ifstream file("Catalog.txt");

			string row;

			vector<int> myArray;

			vector<std::string> rows;
			count = 0;

			Autor a1(::name1, ::lastna1, ::pass1);
			a1.goJob("", "", "", n, 2);
			String^ str = Convert::ToString(a1.showPurse());
			this->purseLabel->Text = str;

			CatalogA->TopLeftHeaderCell->Value = "Id";

			if (file.is_open()) {
				while (std::getline(file, row)) {
					count++;
					size_t found = row.find(::name1 + " " + ::lastna1);
					if (found != std::string::npos) {
						rows.push_back(row);
						myArray.push_back(count);
					}
				}
				file.close();
			}

			std::vector<std::vector<std::string>> data;
			for (const std::string& row : rows) {
				std::vector<std::string> values;
				std::istringstream iss(row);
				std::string value;

				while (std::getline(iss, value, ',')) {
					values.push_back(value);
				}
				data.push_back(values);
			}
			int rowCount = data.size();
			if (rowCount != 0) {
				int columnCount = 4;
				CatalogA->RowCount = rowCount;
				CatalogA->ColumnCount = columnCount;

				for (int i = 0; i < rowCount; i++) {
					for (int j = 0; j < columnCount; j++) {
						if (j < data[i].size()) {
							String^ cellValue = msclr::interop::marshal_as<String^>(data[i][j]);
							CatalogA->Rows[i]->Cells[j]->Value = cellValue;
						}
					}
				}

				for (int u = 0; u < CatalogA->RowCount; u++) {
					CatalogA->Rows[u]->HeaderCell->Value = myArray[u].ToString();
				}
			}
		}
	}
	
}

System::Void Kursova20::MyForm::ticketButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int pr = 0;
	int f=0;
	int rowIndex = Convert::ToInt32(rowBox->Text);
	int columnIndex = Convert::ToInt32(columnBox->Text);

	if (rowIndex > 7 || columnIndex > 7) {
		this->feedLabel->Visible = true;
		this->feedLabel->Text = "Уважно порахуйте кількість місць і рядів";
	}
	else {
		Object^ value = Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Value;

		if (value->GetType() == int::typeid) {
			pr = static_cast<int>(value);
		}
		Autor a1;
		Human h1;
		Theater th(CountLinesInFile());
		th.ShowCatalog();
		string myString = th.InfoAutor(::x);
		string au = ::name1 + " " + ::lastna1 + ",";

		if (au == myString) {
			f = -1;
		}

		if (i == 0) {
			string feed = h1.buyTicket(pr);
			if (pr > 0) {
				this->feedLabel->Visible = true;
				if (feed != "У вас недостатньо коштів, йдіть на роботу") {
					Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Style->BackColor = System::Drawing::Color::Gold;
					Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Value = Convert::ToString("+");
					System::String^ convertedString = msclr::interop::marshal_as<System::String^>(feed);
					this->feedLabel->Text = convertedString;
					String^ str = Convert::ToString(h1.showPurse());
					this->purseLabel->Text = str;
				}
				else {
					System::String^ convertedString = msclr::interop::marshal_as<System::String^>(feed);
					this->feedLabel->Text = convertedString;
				}
			}
			else {
				this->feedLabel->Visible = true;
				this->feedLabel->Text = Convert::ToString("Місце зайнято, будь ласка виберіть інше місце");
			}
		}
		else {
			string feed = a1.buyTicket(pr, f);
			this->feedLabel->Visible = true;
			if (f != -1) {
				if (pr > 0) {
					if (feed != "У вас недостатньо коштів, йдіть на роботу") {
						Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Style->BackColor = System::Drawing::Color::Gold;
						Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Value = Convert::ToString("+");
						System::String^ convertedString = msclr::interop::marshal_as<System::String^>(feed);
						this->feedLabel->Text = convertedString;
						String^ str = Convert::ToString(a1.showPurse());
						this->purseLabel->Text = str;
					}
					else {
						System::String^ convertedString = msclr::interop::marshal_as<System::String^>(feed);
						this->feedLabel->Text = convertedString;
					}
				}
				else {
					this->feedLabel->Text = Convert::ToString("Місце зайнято, будь ласка виберіть інше місце");
				}
			}
			else {
				Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Style->BackColor = System::Drawing::Color::Gold;
				Place->Rows[rowIndex - 1]->Cells[columnIndex - 1]->Value = Convert::ToString("+");
				System::String^ convertedString = msclr::interop::marshal_as<System::String^>(feed);
				this->feedLabel->Text = convertedString;
			}
		}
	}
}