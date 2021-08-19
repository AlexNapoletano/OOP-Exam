#pragma once
#include <string>

#include <msclr\marshal_cppstd.h>

#include "Segmentation.h"
#include "Watershed.h"
#include "Blur.h"
#include "CannyEdge.h"
#include "Thresholding.h"

static std::string pathPassed{ "empty" };
static std::string pathPassedBackup{ "empty" };
static std::string useless{ "empty" };

namespace ShotPicEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per MyExe
	/// </summary>
	public ref class MyExe : public System::Windows::Forms::Form
	{
	public:
		MyExe(void)
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
		~MyExe()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button3;








	private: System::Windows::Forms::TrackBar^  cannyEdgeTrackBar;



	private: System::Windows::Forms::Button^  button7;



	private: System::Windows::Forms::TrackBar^  blurTrackBar;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::OpenFileDialog^  apriImmagine;
	private: System::Windows::Forms::TrackBar^  thresholdTrackBarVal;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  saveImg;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Button^  drawWatershed;
	private: System::Windows::Forms::Button^  removeWatershed;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyExe::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cannyEdgeTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->blurTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->apriImmagine = (gcnew System::Windows::Forms::OpenFileDialog());
			this->thresholdTrackBarVal = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveImg = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->drawWatershed = (gcnew System::Windows::Forms::Button());
			this->removeWatershed = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cannyEdgeTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blurTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->thresholdTrackBarVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(12, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyExe::button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(845, 513);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyExe::button3_Click);
			// 
			// cannyEdgeTrackBar
			// 
			this->cannyEdgeTrackBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cannyEdgeTrackBar->Enabled = false;
			this->cannyEdgeTrackBar->Location = System::Drawing::Point(52, 225);
			this->cannyEdgeTrackBar->Maximum = 99;
			this->cannyEdgeTrackBar->Name = L"cannyEdgeTrackBar";
			this->cannyEdgeTrackBar->Size = System::Drawing::Size(170, 45);
			this->cannyEdgeTrackBar->SmallChange = 5;
			this->cannyEdgeTrackBar->TabIndex = 14;
			this->cannyEdgeTrackBar->TickFrequency = 10;
			this->cannyEdgeTrackBar->Scroll += gcnew System::EventHandler(this, &MyExe::cannyEdgeTrackBar_Scroll);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button7->Location = System::Drawing::Point(93, 513);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Open";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyExe::button7_Click);
			// 
			// blurTrackBar
			// 
			this->blurTrackBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->blurTrackBar->Enabled = false;
			this->blurTrackBar->LargeChange = 1;
			this->blurTrackBar->Location = System::Drawing::Point(55, 138);
			this->blurTrackBar->Maximum = 30;
			this->blurTrackBar->Name = L"blurTrackBar";
			this->blurTrackBar->Size = System::Drawing::Size(167, 45);
			this->blurTrackBar->TabIndex = 19;
			this->blurTrackBar->TickFrequency = 5;
			this->blurTrackBar->Scroll += gcnew System::EventHandler(this, &MyExe::blurTrackBar_Scroll);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(177, 67);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// apriImmagine
			// 
			this->apriImmagine->FileName = L"apriImmagine";
			this->apriImmagine->Filter = L"JPEG Files (*.jpg)|*.jpg|PNG Files (*.png)|*.png|BMP Files (*.bmp)|*.bmp";
			// 
			// thresholdTrackBarVal
			// 
			this->thresholdTrackBarVal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->thresholdTrackBarVal->Enabled = false;
			this->thresholdTrackBarVal->Location = System::Drawing::Point(55, 309);
			this->thresholdTrackBarVal->Maximum = 254;
			this->thresholdTrackBarVal->Name = L"thresholdTrackBarVal";
			this->thresholdTrackBarVal->Size = System::Drawing::Size(167, 45);
			this->thresholdTrackBarVal->TabIndex = 21;
			this->thresholdTrackBarVal->TickFrequency = 25;
			this->thresholdTrackBarVal->Scroll += gcnew System::EventHandler(this, &MyExe::thresholdTrackBarVal_Scroll);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(257, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(659, 468);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// saveImg
			// 
			this->saveImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->saveImg->Enabled = false;
			this->saveImg->Location = System::Drawing::Point(174, 513);
			this->saveImg->Name = L"saveImg";
			this->saveImg->Size = System::Drawing::Size(74, 23);
			this->saveImg->TabIndex = 24;
			this->saveImg->Text = L"Save";
			this->saveImg->UseVisualStyleBackColor = true;
			this->saveImg->Click += gcnew System::EventHandler(this, &MyExe::saveImg_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 203);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 20);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Canny-Edge";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 20);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Thresholding";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 222);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Value";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Value";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 20);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Watershed";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(9, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 20);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Blur";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Value";
			// 
			// drawWatershed
			// 
			this->drawWatershed->Enabled = false;
			this->drawWatershed->Location = System::Drawing::Point(27, 403);
			this->drawWatershed->Name = L"drawWatershed";
			this->drawWatershed->Size = System::Drawing::Size(81, 39);
			this->drawWatershed->TabIndex = 34;
			this->drawWatershed->Text = L"Apply Watershed";
			this->drawWatershed->UseVisualStyleBackColor = true;
			this->drawWatershed->Click += gcnew System::EventHandler(this, &MyExe::drawWatershed_Click);
			// 
			// removeWatershed
			// 
			this->removeWatershed->Enabled = false;
			this->removeWatershed->Location = System::Drawing::Point(138, 403);
			this->removeWatershed->Name = L"removeWatershed";
			this->removeWatershed->Size = System::Drawing::Size(87, 39);
			this->removeWatershed->TabIndex = 35;
			this->removeWatershed->Text = L"Remove Watershed";
			this->removeWatershed->UseVisualStyleBackColor = true;
			this->removeWatershed->Click += gcnew System::EventHandler(this, &MyExe::removeWatershed_Click);
			// 
			// MyExe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 548);
			this->Controls->Add(this->removeWatershed);
			this->Controls->Add(this->drawWatershed);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->saveImg);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->thresholdTrackBarVal);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->blurTrackBar);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->cannyEdgeTrackBar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyExe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShotPic Editor";
			this->Load += gcnew System::EventHandler(this, &MyExe::MyExe_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cannyEdgeTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blurTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->thresholdTrackBarVal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("https://drive.google.com/file/d/1KgQVv_rnyG-ga6c047xcnczpA59HQt80/view?ths=true");
	}
	private: System::Void MyExe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();			// Chiude la form MyExe e riapre la precedente
	}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//Open the image in the picturebox and save the path
	apriImmagine->Title = "Scegli un'immagine: ";
	
	System::Windows::Forms::DialogResult res = apriImmagine->ShowDialog();
	if (res == System::Windows::Forms::DialogResult::OK) {
		pictureBox1->Image = Image::FromFile(apriImmagine->FileName);
		System::String^ path = apriImmagine->FileName;

		//Conversion from String^ to std::string
		msclr::interop::marshal_context context;
		pathPassed = context.marshal_as<std::string>(path);
		pathPassedBackup = pathPassed;
		
		//Reset trackbars
		blurTrackBar->Value = blurTrackBar->Minimum;
		cannyEdgeTrackBar->Value = cannyEdgeTrackBar->Minimum;
		thresholdTrackBarVal->Value = thresholdTrackBarVal->Minimum;

		//Enable the trackbars if is loaded an image
		if (!(pathPassed == "empty")) {
			blurTrackBar->Enabled = TRUE;
			cannyEdgeTrackBar->Enabled = TRUE;
			thresholdTrackBarVal->Enabled = TRUE;
			saveImg->Enabled = TRUE;
			drawWatershed->Enabled = TRUE;
			removeWatershed->Enabled = TRUE;
		}
	}
}
private: System::Void cannyEdgeTrackBar_Scroll(System::Object^  sender, System::EventArgs^  e) {
	CannyEdge canny{ pathPassedBackup };
	Segmentation *baseClassPtr{ &canny }; 
	baseClassPtr->setTrackbarValue(cannyEdgeTrackBar->Value, pictureBox1, useless); //nothing is a string that contains "empty", this virtual function doesn't use this parameter

	}
private: System::Void thresholdTrackBarVal_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Thresholding threshold{ pathPassedBackup };
	Thresholding *baseClassPtr{ &threshold };
	baseClassPtr->setTrackbarValue(thresholdTrackBarVal->Value, pictureBox1, useless); //nothing is a string that contains "empty", this virtual function doesn't use this parameter
}
private: System::Void saveImg_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|PNG Image|*.png";
	saveFileDialog1->Title = "Salva l'immagine";
	System::Windows::Forms::DialogResult res = saveFileDialog1->ShowDialog();
	if (res == System::Windows::Forms::DialogResult::OK) {
		System::String^ pathSave = saveFileDialog1->FileName;
		pictureBox1->Image->Save(pathSave, System::Drawing::Imaging::ImageFormat::Jpeg);
	}
}
private: System::Void blurTrackBar_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Blur blur{ pathPassed };
	Blur *baseClassPtr{ &blur };
	baseClassPtr->setTrackbarValue(blurTrackBar->Value, pictureBox1, pathPassedBackup); //pathPassedBackup will be modified, then will be passed to the others algorithms which work on the blured image
}
private: System::Void drawWatershed_Click(System::Object^  sender, System::EventArgs^  e) {
	Watershed waters{ pathPassedBackup };
	waters.watershed(pictureBox1);
}
private: System::Void removeWatershed_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ removeWater = gcnew String(pathPassedBackup.c_str());
	pictureBox1->Image = Image::FromFile(removeWater);
}
};
}
