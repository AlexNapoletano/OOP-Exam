#pragma once
#include "stdafx.h"
#include "MyExe.h"
#include "MyFaq.h"

namespace ShotPicEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per MyRun
	/// </summary>
	public ref class MyRun : public System::Windows::Forms::Form
	{
	public:
		MyRun(void)
		{
			InitializeComponent();
			//
			// TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~MyRun()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  Lenguage;


	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyRun::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Lenguage = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(591, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyRun::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(496, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyRun::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ShotPic Editor ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(435, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ShotPic Editor allow you to modify an image by applying segmentation filters and "
				L"algorithms.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Using ShotPic Editor is really simple!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(248, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"1. Clicking on START to proceed with the program.";
			this->label5->Click += gcnew System::EventHandler(this, &MyRun::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(428, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"2. Clicking on Open to upload an image, once loaded, it will be displayed on the "
				L"interface.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(490, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"3. Apply the desired algorithms and adjust the parameteres using the trackbars to"
				L" get the desired result.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(340, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"4. Clicking on Save to save the modified image in the desired directory.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(52, 216);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(397, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"5. Clicking on Cancel to cancel the operation and go back to the previous window."
				L"";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 245);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Software realized by:";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 267);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Dati Agostino ";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 280);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(117, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Napoletano Alessandro";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(407, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyRun::button2_Click);
			// 
			// Lenguage
			// 
			this->Lenguage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Lenguage->FormattingEnabled = true;
			this->Lenguage->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"ITA", L"ENG", L"SPA", L"RUS", L"JAP" });
			this->Lenguage->Location = System::Drawing::Point(528, 102);
			this->Lenguage->Name = L"Lenguage";
			this->Lenguage->Size = System::Drawing::Size(51, 21);
			this->Lenguage->TabIndex = 17;
			this->Lenguage->Visible = false;
			this->Lenguage->SelectedIndexChanged += gcnew System::EventHandler(this, &MyRun::Lenguage_SelectedIndexChanged);
			// 
			// MyRun
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 328);
			this->Controls->Add(this->Lenguage);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(607, 367);
			this->MinimumSize = System::Drawing::Size(607, 367);
			this->Name = L"MyRun";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShotPic Editor";
			this->Load += gcnew System::EventHandler(this, &MyRun::MyRun_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	/* 
			Questa funzione nasconde la barra del titolo
	private: System::Void MyRun_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	}	
	*/
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)		
	{
/*								
			Questo comando permette al button1 rinominato come "INIZIA" di aprire, successivamente al click, 
			la form MyExe di utilizzo del programma nascondendo la form attuale grazie alla funzione Hide().	
			Sul file MyExe.h e .cpp verranno inserite le funzionalità della form.
*/
		this->Hide();
		// MyExe ^obj = gcnew MyExe();		METODO CORTO 
		// obj->ShowDialog();				USATO ANCHE SOTTO
		ShotPicEditor::MyExe obj1;
		obj1.ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)		//
	{
		/*
		Questo comando permette l'apertura della form contenente Licenze, FAQ ed altro ancora del Software ShotPic Editor:
		La seguente funzione è un metodo alternativo al comando precedente.
		Permette la medesima soluzione con meno stringhe di codice.
		*/
		// this->Hide();							
		MyFaq ^obj2 = gcnew MyFaq();			
		obj2->ShowDialog();						
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Lenguage_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	// Selezione Lingua. Ad ogni lingua scelta, i label devono scambiare il testo predefinito ITA con quello selezionato.
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyRun_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
