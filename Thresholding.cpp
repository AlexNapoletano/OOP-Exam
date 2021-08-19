// Thresholding.cpp

#include "stdafx.h"

#include <string>

#include <opencv2/highgui.hpp>  
#include <opencv2/imgproc.hpp>			 
#include <opencv2/imgcodecs.hpp>	

#include "Thresholding.h"
#include "Temp.h"


int Thresholding::threshold_value = 0;
int Thresholding::threshold_type = 0;
cv::Mat Thresholding::src;
cv::Mat Thresholding::src_gray;
cv::Mat Thresholding::dst;
std::string Thresholding::path;

Thresholding::Thresholding(std::string pathPassed) : Segmentation(pathPassed) {
	path = Segmentation::getPath(); //Inherited by Segmentation
	src = Segmentation::getSrc(); //Inherited by Segmentation
}

void Thresholding::Threshold(System::Windows::Forms::PictureBox^ finestraStampa) {
	cv::cvtColor(src, src_gray, cv::COLOR_BGR2GRAY); // Convert the image to Gray
	//If the trackbar is on 0, show the original image
	if (!(threshold_value == 0)) {
		cv::threshold(src_gray, dst, threshold_value, max_binary_value, threshold_type);

		Temp savetemp;
		finestraStampa->Image = System::Drawing::Image::FromFile(savetemp.tempSave(dst));
	}
	else {
		System::String^ originalImg = gcnew  System::String(path.c_str());
		finestraStampa->Image = System::Drawing::Image::FromFile(originalImg);
	}
}

void Thresholding::setTrackbarValue(int thresholdValueTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) {
	Thresholding::threshold_value = thresholdValueTrack;
	Threshold(finestraStampa);
}
