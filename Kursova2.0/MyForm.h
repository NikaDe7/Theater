//MyForm.h
#pragma once
#include "Job.h"
#include "Theater.h"
#include "Human.h"
#include "Autor.h"
#include "Drama.h"
#include <msclr\marshal_cppstd.h>
#include  <ctime>
#include <Windows.h>

namespace Kursova20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::TextBox^ lastnameBox;
	private: System::Windows::Forms::TextBox^ passBox;
	protected:






	private: System::Windows::Forms::PictureBox^ startPictureBox;
	private: System::Windows::Forms::Button^ jobButton;
	private: System::Windows::Forms::Button^ holidayButton;
	private: System::Windows::Forms::PictureBox^ jobPictureBox;
	private: System::Windows::Forms::Button^ backWaitJobHumanButton;









	private: System::Windows::Forms::Button^ jobHumanButton;

	private: System::Windows::Forms::PictureBox^ waitPictureBox;
	private: System::Windows::Forms::TextBox^ choiceBox;
	private: System::Windows::Forms::Button^ choiceButton;
	private: System::Windows::Forms::Button^ backCatalogButton;
	private: System::Windows::Forms::Button^ ticketButton;
	private: System::Windows::Forms::TextBox^ rowBox;
	private: System::Windows::Forms::TextBox^ columnBox;











	private: System::Windows::Forms::Button^ backCatalog1Button;

	private: System::Windows::Forms::Button^ backWaitJobAutorButton;
	private: System::Windows::Forms::TextBox^ titleBox;
	private: System::Windows::Forms::TextBox^ timeBox;
	private: System::Windows::Forms::TextBox^ priceBox;
	private: System::Windows::Forms::TextBox^ IdBox;








	private: System::Windows::Forms::Button^ addDramaButton;
	private: System::Windows::Forms::Button^ removeDramaButton;


	private: System::Windows::Forms::Label^ purseLabel;



	private:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ purse1label;

	private: System::Windows::Forms::DataGridView^ Catalog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ autor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridView^ CatalogA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ autor1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price1;
	private: System::Windows::Forms::DataGridView^ Place;
private: System::Windows::Forms::Label^ infoLabel;
private: System::Windows::Forms::Label^ feedLabel;



	private: System::Windows::Forms::Label^ start_label;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->start = (gcnew System::Windows::Forms::Button());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->lastnameBox = (gcnew System::Windows::Forms::TextBox());
			this->passBox = (gcnew System::Windows::Forms::TextBox());
			this->startPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->jobButton = (gcnew System::Windows::Forms::Button());
			this->holidayButton = (gcnew System::Windows::Forms::Button());
			this->jobPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->backWaitJobHumanButton = (gcnew System::Windows::Forms::Button());
			this->jobHumanButton = (gcnew System::Windows::Forms::Button());
			this->waitPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->choiceBox = (gcnew System::Windows::Forms::TextBox());
			this->choiceButton = (gcnew System::Windows::Forms::Button());
			this->backCatalogButton = (gcnew System::Windows::Forms::Button());
			this->ticketButton = (gcnew System::Windows::Forms::Button());
			this->rowBox = (gcnew System::Windows::Forms::TextBox());
			this->columnBox = (gcnew System::Windows::Forms::TextBox());
			this->backCatalog1Button = (gcnew System::Windows::Forms::Button());
			this->backWaitJobAutorButton = (gcnew System::Windows::Forms::Button());
			this->titleBox = (gcnew System::Windows::Forms::TextBox());
			this->timeBox = (gcnew System::Windows::Forms::TextBox());
			this->priceBox = (gcnew System::Windows::Forms::TextBox());
			this->IdBox = (gcnew System::Windows::Forms::TextBox());
			this->addDramaButton = (gcnew System::Windows::Forms::Button());
			this->removeDramaButton = (gcnew System::Windows::Forms::Button());
			this->purseLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->purse1label = (gcnew System::Windows::Forms::Label());
			this->Catalog = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->autor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CatalogA = (gcnew System::Windows::Forms::DataGridView());
			this->name1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->autor1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Place = (gcnew System::Windows::Forms::DataGridView());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->feedLabel = (gcnew System::Windows::Forms::Label());
			this->start_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jobPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waitPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place))->BeginInit();
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->start, L"start");
			this->start->Name = L"start";
			this->start->UseVisualStyleBackColor = false;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::startProgram);
			// 
			// nameBox
			// 
			this->nameBox->BackColor = System::Drawing::Color::White;
			this->nameBox->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->nameBox, L"nameBox");
			this->nameBox->Name = L"nameBox";
			// 
			// lastnameBox
			// 
			this->lastnameBox->BackColor = System::Drawing::Color::White;
			this->lastnameBox->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->lastnameBox, L"lastnameBox");
			this->lastnameBox->Name = L"lastnameBox";
			// 
			// passBox
			// 
			this->passBox->BackColor = System::Drawing::Color::White;
			this->passBox->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->passBox, L"passBox");
			this->passBox->Name = L"passBox";
			// 
			// startPictureBox
			// 
			resources->ApplyResources(this->startPictureBox, L"startPictureBox");
			this->startPictureBox->Name = L"startPictureBox";
			this->startPictureBox->TabStop = false;
			// 
			// jobButton
			// 
			this->jobButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->jobButton, L"jobButton");
			this->jobButton->Name = L"jobButton";
			this->jobButton->UseVisualStyleBackColor = false;
			this->jobButton->Click += gcnew System::EventHandler(this, &MyForm::jobButton_Click);
			// 
			// holidayButton
			// 
			this->holidayButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->holidayButton, L"holidayButton");
			this->holidayButton->Name = L"holidayButton";
			this->holidayButton->UseVisualStyleBackColor = false;
			this->holidayButton->Click += gcnew System::EventHandler(this, &MyForm::holidayButton_Click);
			// 
			// jobPictureBox
			// 
			resources->ApplyResources(this->jobPictureBox, L"jobPictureBox");
			this->jobPictureBox->Name = L"jobPictureBox";
			this->jobPictureBox->TabStop = false;
			// 
			// backWaitJobHumanButton
			// 
			this->backWaitJobHumanButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->backWaitJobHumanButton, L"backWaitJobHumanButton");
			this->backWaitJobHumanButton->Name = L"backWaitJobHumanButton";
			this->backWaitJobHumanButton->UseVisualStyleBackColor = false;
			this->backWaitJobHumanButton->Click += gcnew System::EventHandler(this, &MyForm::backWaitJobHumanButton_Click);
			// 
			// jobHumanButton
			// 
			this->jobHumanButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->jobHumanButton, L"jobHumanButton");
			this->jobHumanButton->Name = L"jobHumanButton";
			this->jobHumanButton->UseVisualStyleBackColor = false;
			this->jobHumanButton->Click += gcnew System::EventHandler(this, &MyForm::jobHumanButton_Click);
			// 
			// waitPictureBox
			// 
			resources->ApplyResources(this->waitPictureBox, L"waitPictureBox");
			this->waitPictureBox->Name = L"waitPictureBox";
			this->waitPictureBox->TabStop = false;
			// 
			// choiceBox
			// 
			resources->ApplyResources(this->choiceBox, L"choiceBox");
			this->choiceBox->Name = L"choiceBox";
			// 
			// choiceButton
			// 
			this->choiceButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->choiceButton, L"choiceButton");
			this->choiceButton->Name = L"choiceButton";
			this->choiceButton->UseVisualStyleBackColor = false;
			this->choiceButton->Click += gcnew System::EventHandler(this, &MyForm::choiceButton_Click);
			// 
			// backCatalogButton
			// 
			this->backCatalogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->backCatalogButton, L"backCatalogButton");
			this->backCatalogButton->Name = L"backCatalogButton";
			this->backCatalogButton->UseVisualStyleBackColor = false;
			this->backCatalogButton->Click += gcnew System::EventHandler(this, &MyForm::backCatalogButton_Click);
			// 
			// ticketButton
			// 
			this->ticketButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->ticketButton, L"ticketButton");
			this->ticketButton->Name = L"ticketButton";
			this->ticketButton->UseVisualStyleBackColor = false;
			this->ticketButton->Click += gcnew System::EventHandler(this, &MyForm::ticketButton_Click);
			// 
			// rowBox
			// 
			resources->ApplyResources(this->rowBox, L"rowBox");
			this->rowBox->Name = L"rowBox";
			// 
			// columnBox
			// 
			resources->ApplyResources(this->columnBox, L"columnBox");
			this->columnBox->Name = L"columnBox";
			// 
			// backCatalog1Button
			// 
			this->backCatalog1Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->backCatalog1Button, L"backCatalog1Button");
			this->backCatalog1Button->Name = L"backCatalog1Button";
			this->backCatalog1Button->UseVisualStyleBackColor = false;
			this->backCatalog1Button->Click += gcnew System::EventHandler(this, &MyForm::backCatalog1Button_Click);
			// 
			// backWaitJobAutorButton
			// 
			this->backWaitJobAutorButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->backWaitJobAutorButton, L"backWaitJobAutorButton");
			this->backWaitJobAutorButton->Name = L"backWaitJobAutorButton";
			this->backWaitJobAutorButton->UseVisualStyleBackColor = false;
			this->backWaitJobAutorButton->Click += gcnew System::EventHandler(this, &MyForm::backWaitJobAutorButton_Click);
			// 
			// titleBox
			// 
			resources->ApplyResources(this->titleBox, L"titleBox");
			this->titleBox->Name = L"titleBox";
			// 
			// timeBox
			// 
			resources->ApplyResources(this->timeBox, L"timeBox");
			this->timeBox->Name = L"timeBox";
			// 
			// priceBox
			// 
			resources->ApplyResources(this->priceBox, L"priceBox");
			this->priceBox->Name = L"priceBox";
			// 
			// IdBox
			// 
			resources->ApplyResources(this->IdBox, L"IdBox");
			this->IdBox->Name = L"IdBox";
			// 
			// addDramaButton
			// 
			this->addDramaButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->addDramaButton, L"addDramaButton");
			this->addDramaButton->Name = L"addDramaButton";
			this->addDramaButton->UseVisualStyleBackColor = false;
			this->addDramaButton->Click += gcnew System::EventHandler(this, &MyForm::addDrama_Click);
			// 
			// removeDramaButton
			// 
			this->removeDramaButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			resources->ApplyResources(this->removeDramaButton, L"removeDramaButton");
			this->removeDramaButton->Name = L"removeDramaButton";
			this->removeDramaButton->UseVisualStyleBackColor = false;
			this->removeDramaButton->Click += gcnew System::EventHandler(this, &MyForm::removeDrama_Click);
			// 
			// purseLabel
			// 
			resources->ApplyResources(this->purseLabel, L"purseLabel");
			this->purseLabel->ForeColor = System::Drawing::Color::White;
			this->purseLabel->Name = L"purseLabel";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Name = L"label1";
			// 
			// purse1label
			// 
			resources->ApplyResources(this->purse1label, L"purse1label");
			this->purse1label->ForeColor = System::Drawing::Color::White;
			this->purse1label->Name = L"purse1label";
			// 
			// Catalog
			// 
			this->Catalog->AllowUserToAddRows = false;
			this->Catalog->AllowUserToDeleteRows = false;
			this->Catalog->AllowUserToResizeColumns = false;
			this->Catalog->AllowUserToResizeRows = false;
			this->Catalog->BackgroundColor = System::Drawing::Color::White;
			resources->ApplyResources(this->Catalog, L"Catalog");
			this->Catalog->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name, this->time,
					this->autor, this->price
			});
			this->Catalog->Name = L"Catalog";
			this->Catalog->ReadOnly = true;
			this->Catalog->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			// 
			// name
			// 
			resources->ApplyResources(this->name, L"name");
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// time
			// 
			resources->ApplyResources(this->time, L"time");
			this->time->Name = L"time";
			this->time->ReadOnly = true;
			// 
			// autor
			// 
			resources->ApplyResources(this->autor, L"autor");
			this->autor->Name = L"autor";
			this->autor->ReadOnly = true;
			// 
			// price
			// 
			resources->ApplyResources(this->price, L"price");
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// CatalogA
			// 
			this->CatalogA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->CatalogA->BackgroundColor = System::Drawing::Color::White;
			resources->ApplyResources(this->CatalogA, L"CatalogA");
			this->CatalogA->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name1, this->time1,
					this->autor1, this->price1
			});
			this->CatalogA->Name = L"CatalogA";
			this->CatalogA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			// 
			// name1
			// 
			resources->ApplyResources(this->name1, L"name1");
			this->name1->Name = L"name1";
			// 
			// time1
			// 
			resources->ApplyResources(this->time1, L"time1");
			this->time1->Name = L"time1";
			// 
			// autor1
			// 
			resources->ApplyResources(this->autor1, L"autor1");
			this->autor1->Name = L"autor1";
			// 
			// price1
			// 
			resources->ApplyResources(this->price1, L"price1");
			this->price1->Name = L"price1";
			// 
			// Place
			// 
			this->Place->AllowUserToAddRows = false;
			this->Place->AllowUserToDeleteRows = false;
			this->Place->AllowUserToResizeColumns = false;
			this->Place->AllowUserToResizeRows = false;
			this->Place->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Place->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->Place->BackgroundColor = System::Drawing::Color::White;
			resources->ApplyResources(this->Place, L"Place");
			this->Place->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->Place->ColumnHeadersVisible = false;
			this->Place->Name = L"Place";
			this->Place->RowHeadersVisible = false;
			// 
			// infoLabel
			// 
			resources->ApplyResources(this->infoLabel, L"infoLabel");
			this->infoLabel->ForeColor = System::Drawing::Color::White;
			this->infoLabel->Name = L"infoLabel";
			// 
			// feedLabel
			// 
			resources->ApplyResources(this->feedLabel, L"feedLabel");
			this->feedLabel->ForeColor = System::Drawing::Color::White;
			this->feedLabel->Name = L"feedLabel";
			// 
			// start_label
			// 
			resources->ApplyResources(this->start_label, L"start_label");
			this->start_label->ForeColor = System::Drawing::Color::White;
			this->start_label->Name = L"start_label";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->Controls->Add(this->purseLabel);
			this->Controls->Add(this->purse1label);
			this->Controls->Add(this->feedLabel);
			this->Controls->Add(this->infoLabel);
			this->Controls->Add(this->columnBox);
			this->Controls->Add(this->rowBox);
			this->Controls->Add(this->ticketButton);
			this->Controls->Add(this->Place);
			this->Controls->Add(this->backCatalogButton);
			this->Controls->Add(this->removeDramaButton);
			this->Controls->Add(this->addDramaButton);
			this->Controls->Add(this->CatalogA);
			this->Controls->Add(this->jobPictureBox);
			this->Controls->Add(this->waitPictureBox);
			this->Controls->Add(this->choiceButton);
			this->Controls->Add(this->IdBox);
			this->Controls->Add(this->priceBox);
			this->Controls->Add(this->timeBox);
			this->Controls->Add(this->titleBox);
			this->Controls->Add(this->backWaitJobAutorButton);
			this->Controls->Add(this->backCatalog1Button);
			this->Controls->Add(this->choiceBox);
			this->Controls->Add(this->jobHumanButton);
			this->Controls->Add(this->backWaitJobHumanButton);
			this->Controls->Add(this->holidayButton);
			this->Controls->Add(this->jobButton);
			this->Controls->Add(this->startPictureBox);
			this->Controls->Add(this->passBox);
			this->Controls->Add(this->lastnameBox);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->start);
			this->Controls->Add(this->start_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Catalog);
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jobPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waitPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

protected: System::Void startProgram(System::Object^ sender, System::EventArgs^ e);

private: System::Void jobHumanButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void jobButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void holidayButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void backWaitJobHumanButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void backCatalogButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void choiceButton_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void backCatalog1Button_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void backWaitJobAutorButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void addDrama_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void removeDrama_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ticketButton_Click(System::Object^ sender, System::EventArgs^ e);

};
}
