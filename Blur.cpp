//Blur.cpp
#include "stdafx.h"

#include <string>

#include "opencv2/imgcodecs.hpp"

#include "Blur.h"
#include "Temp.h"

std::string Blur::path;
cv::Mat Blur::src;
cv::Mat Blur::dst;
int Blur::kernel = 0;


Blur::Blur(std::string pathPassed) : Segmentation(pathPassed){
	path = Segmentation::getPath(); //Inherited by Segmentation
	src = Segmentation::getSrc(); //Inherited by Segmentation
	dst = src.clone();
}

void Blur::medianBlur(System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) {
	//Kernel must be odd for the algorithm
	int isEven = kernel % 2;
	if (isEven == 0) {
		kernel++;
	}
	//If the trackbar is on 0, show the original image
	if (!(kernel == 0)) {
		cv::medianBlur(src, dst, kernel);

		Temp savetemp;
		finestraStampa->Image = System::Drawing::Image::FromFile(savetemp.tempSave(dst)); //Pass to the picturebox the temp img

		std::string pathBlur = savetemp.getPathTemp();//Get the path of the temp img and set the pathPassedBackup. pathPassedBackup will be passed to others algorithms
		pathPassed = pathBlur;
	}
	else {
		System::String^ originalImg = gcnew  System::String(path.c_str()); //Convert from std::string to System::String^, used by the windowsforms
		finestraStampa->Image = System::Drawing::Image::FromFile(originalImg);
	}
}

void Blur::setTrackbarValue(int kernelTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) {
	if (!(kernelTrack == 0)) {
		Blur::kernel = kernelTrack;
		medianBlur(finestraStampa, pathPassed);
	}
	else {
		System::String^ originalImg = gcnew  System::String(path.c_str());
		finestraStampa->Image = System::Drawing::Image::FromFile(originalImg);
	}
}

