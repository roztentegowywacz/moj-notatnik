#pragma once

namespace Notatnik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		String^ nazwaPliku = "";

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  otwórzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszJakoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wytnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wklejToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zawijanieWierszyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  czcionkaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  tresc;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zawijanieWierszyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tresc = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(982, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->nowyToolStripMenuItem,
					this->toolStripSeparator1, this->otwórzToolStripMenuItem, this->zapiszToolStripMenuItem, this->zapiszJakoToolStripMenuItem, this->toolStripSeparator2,
					this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->plikToolStripMenuItem->Text = L"&Plik";
			// 
			// nowyToolStripMenuItem
			// 
			this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
			this->nowyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->nowyToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->nowyToolStripMenuItem->Text = L"Nowy";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// otwórzToolStripMenuItem
			// 
			this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
			this->otwórzToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->otwórzToolStripMenuItem->Text = L"Otwórz";
			this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::otwórzToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zapiszToolStripMenuItem_Click);
			// 
			// zapiszJakoToolStripMenuItem
			// 
			this->zapiszJakoToolStripMenuItem->Name = L"zapiszJakoToolStripMenuItem";
			this->zapiszJakoToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->zapiszJakoToolStripMenuItem->Text = L"Zapisz jako";
			this->zapiszJakoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zapiszJakoToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->wytnijToolStripMenuItem,
					this->kopiujToolStripMenuItem, this->wklejToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->edycjaToolStripMenuItem->Text = L"&Edycja";
			// 
			// wytnijToolStripMenuItem
			// 
			this->wytnijToolStripMenuItem->Name = L"wytnijToolStripMenuItem";
			this->wytnijToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->wytnijToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->wytnijToolStripMenuItem->Text = L"Wytnij";
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->kopiujToolStripMenuItem->Text = L"Kopiuj";
			// 
			// wklejToolStripMenuItem
			// 
			this->wklejToolStripMenuItem->Name = L"wklejToolStripMenuItem";
			this->wklejToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->wklejToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->wklejToolStripMenuItem->Text = L"Wklej";
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zawijanieWierszyToolStripMenuItem,
					this->czcionkaToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->formatToolStripMenuItem->Text = L"&Format";
			// 
			// zawijanieWierszyToolStripMenuItem
			// 
			this->zawijanieWierszyToolStripMenuItem->Name = L"zawijanieWierszyToolStripMenuItem";
			this->zawijanieWierszyToolStripMenuItem->Size = System::Drawing::Size(200, 26);
			this->zawijanieWierszyToolStripMenuItem->Text = L"Zawijanie wierszy";
			// 
			// czcionkaToolStripMenuItem
			// 
			this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
			this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(200, 26);
			this->czcionkaToolStripMenuItem->Text = L"Czcionka";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->pomocToolStripMenuItem->Text = L"P&omoc";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oProgramieToolStripMenuItem,
					this->oAutorzeToolStripMenuItem
			});
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(155, 26);
			this->informacjeToolStripMenuItem->Text = L"Informacje";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			// 
			// tresc
			// 
			this->tresc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tresc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tresc->Location = System::Drawing::Point(0, 28);
			this->tresc->Name = L"tresc";
			this->tresc->Size = System::Drawing::Size(982, 525);
			this->tresc->TabIndex = 2;
			this->tresc->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Plik tekstowy|*.txt|Dowolny plik|*.*";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->tresc);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"NOTATNIK";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void otwórzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}

private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	try
	{
		tresc->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
		nazwaPliku = openFileDialog1->FileName;
	}
	catch (...)
	{
		MessageBox::Show("B³¹d otwarcia pliku!");
	}
}
private: System::Void zapiszJakoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
}
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	try
	{
		System::IO::File::WriteAllText(saveFileDialog1->FileName, tresc->Text);
		nazwaPliku = saveFileDialog1->FileName;
	}
	catch (...)
	{
		MessageBox::Show("B³¹d przy zapisie pliku!");
	}
}
private: System::Void zapiszToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (nazwaPliku != "")
		System::IO::File::WriteAllText(nazwaPliku, tresc->Text);
	else
		saveFileDialog1->ShowDialog();
}
};
}
