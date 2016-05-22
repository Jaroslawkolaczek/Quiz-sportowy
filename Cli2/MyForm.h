#pragma once

namespace Cli2 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  wyjscie;

	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::Label^  label2;








	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wyjscie = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nowa gra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(84, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Witaj!";
			// 
			// wyjscie
			// 
			this->wyjscie->Location = System::Drawing::Point(87, 147);
			this->wyjscie->Name = L"wyjscie";
			this->wyjscie->Size = System::Drawing::Size(103, 51);
			this->wyjscie->TabIndex = 3;
			this->wyjscie->Text = L"Wyjscie";
			this->wyjscie->UseVisualStyleBackColor = true;
			this->wyjscie->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 262);
			this->splitter1->TabIndex = 4;
			this->splitter1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Twój wynik to:";
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::Color::Lime;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->wyjscie);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int i = 0;
		int punkty = 0;

		Label^ pytanie = gcnew Label();
		pytanie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		pytanie->AutoSize = true;
		pytanie->Location = Point(50, 90);
		pytanie->Width = 200;

		Button^ odpA = gcnew Button();
		odpA->AutoSize = true;
		odpA->Location = Point(350, 200);
		odpA->Text = "OdpowiedŸ 1";
		odpA->Width = 120;

		Button^ odpB = gcnew Button();
		odpB->AutoSize = true;
		odpB->Location = Point(350, 250);
		odpB->Text = "OdpowiedŸ 2";
		odpB->Width = 120;

		Button^ odpC = gcnew Button();
		odpC->AutoSize = true;
		odpC->Location = Point(350, 300);
		odpC->Text = "OdpowiedŸ 3";
		odpC->Width = 120;

		Button^ odpD = gcnew Button();
		odpD->AutoSize = true;
		odpD->Location = Point(350, 350);
		odpD->Text = "OdpowiedŸ 4";
		odpD->Width = 120;

		while (i < 10)
		{
			Form^ okno = gcnew Form();

			okno->BackColor = Color::Lime;
			okno->Text = "Nowe okno";
			okno->Width = 800;
			okno->Height = 600;
			
		

			if (i == 0)
			{
				pytanie->Text = "Który polski arbiter bêdzie sêdzi¹ g³ównym podczas fina³ów Euro 2016 we Francji?";

				odpA->Text = "Pawe³ Gil";
				odpB->Text = "Szymon Marciniak";
				odpC->Text = "Tomasz Musia³";
				odpD->Text = "Dawid Podsiad³o";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 1)
			{
				pytanie->Text = "Który pi³karz zdoby³ tytu³ króla strzelców w hiszpañskiej Primera División w sezonie 2015/2016?";

				odpA->Text = "Neymar";
				odpB->Text = "Lionel Messi";
				odpC->Text = "Cristiano Ronaldo";
				odpD->Text = "Luis Suárez";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::Yes;
			}

			if (i == 2)
			{
				pytanie->Text = "Który pi³karski zespó³ wygra³ puchar niemiec w sezonie 2015/2016?";

				odpA->Text = "Borussia Dortmund";
				odpB->Text = "Bayern Monachium";
				odpC->Text = "VfL Wolfsburg";
				odpD->Text = "Bayer 04 Leverkusen";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 3)
			{
				pytanie->Text = "Zdobyciem tytu³u mistrza Anglii w sezonie 2015/2016 mo¿e pochwalic siê nastêpuj¹cy klub:";

				odpA->Text = "Leicester City F.C.";
				odpB->Text = "Chelsea F.C.";
				odpC->Text = "Manchester City F.C.";
				odpD->Text = "Arsenal F.C.";
				odpA->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 4)
			{
				pytanie->Text = "Zespo³em który spad³ z Rosyjsiej 'premier liga' w sezonie 2015/2016 jest:";

				odpA->Text = "CSKA Moskwa";
				odpB->Text = "Zenit St. Petersburg";
				odpC->Text = "Dynamo Moskwa";
				odpD->Text = "Lokomotiw Moskwa";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 5)
			{
				pytanie->Text = "Który bia³oruski dostaje siê do eliminacji ligi mistrzów w ostatnich latach?";

				odpA->Text = "BATE Borisov";
				odpB->Text = "Slavia-Mozyr";
				odpC->Text = "Isloch Minsk";
				odpD->Text = "Dinamo Minsk";
				odpA->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 6)
			{
				pytanie->Text = "Który z pi³karzy zosta³ królem strzelców niemieckiejbundesligi w sezonie 2015/2016?";

				odpA->Text = "Thomas Müller";
				odpB->Text = "Robert Lewandowski";
				odpC->Text = "Pierre Aubameyang";
				odpD->Text = "Zlatan Ibrahimoviæ";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 7)
			{
				pytanie->Text = "Który zespó³ w sezonie 2015/2016 zdoby³ puchar Polski?";

				odpA->Text = "Ruch Chorzów";
				odpB->Text = "Wis³a Kraków";
				odpC->Text = "Lech Poznañ";
				odpD->Text = "Legia Warszawa";
				odpA->DialogResult = System::Windows::Forms::DialogResult::No;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::Yes;
			}

			if (i == 8)
			{
				pytanie->Text = "W Ekstraklasie w sezonie 2016/2017 nie zobaczymy:";

				odpA->Text = "Górnik Zabrze";
				odpB->Text = "Termalica Nieciecza";
				odpC->Text = "Korona Kielce";
				odpD->Text = "Pogoñ Szczecin";
				odpA->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			if (i == 9)
			{
				pytanie->Text = "Który z zawodników reprezentacji francuskiej nie zobaczymy na Euro 2016";

				odpA->Text = "Karim Benzema";
				odpB->Text = "Paul Pogba";
				odpC->Text = "Antoine Griezmann";
				odpD->Text = "Patrice Evra";
				odpA->DialogResult = System::Windows::Forms::DialogResult::Yes;
				odpB->DialogResult = System::Windows::Forms::DialogResult::No;
				odpC->DialogResult = System::Windows::Forms::DialogResult::No;
				odpD->DialogResult = System::Windows::Forms::DialogResult::No;
			}

			//Dodawanie kontrolek do tablicy
			okno->Controls->Add(pytanie);
			okno->Controls->Add(odpA);
			okno->Controls->Add(odpB);
			okno->Controls->Add(odpC);
			okno->Controls->Add(odpD);

			
			//label2->Text = L"Twój wynik to:" + punkty.ToString();
			//label2->Text = L"Twój wynik to:" + punkty.ToString();
			//Potrzebne do popraqwnego odtworzenia okna nr 2
			okno->ShowDialog();

			// /\ w metodzie ShowDialog okno g³ówne czeka na odpowiedz
			// a w metodzie Show wszystko wykonuje sie nod razu

			if (okno->DialogResult == System::Windows::Forms::DialogResult::Yes)
			{
				punkty += 10;
			}
			label2->Text = L"Twój wynik to:" + punkty.ToString() + "%";
			i++;
		}

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
