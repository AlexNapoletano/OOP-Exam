// CannyEdge.cpp
#include "stdafx.h"

#include <string>
#include <msclr\marshal_cppstd.h>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

#include "CannyEdge.h"
#include "Temp.h"


std::string CannyEdge::path;
cv::Mat CannyEdge::src;
cv::Mat CannyEdge::src_gray;
cv::Mat CannyEdge::dst;
cv::Mat CannyEdge::detected_edges;
int CannyEdge::edgeThresh = 0;
int CannyEdge::lowThreshold;
int CannyEdge::ratio = 3;
int CannyEdge::kernel_size = 3;

CannyEdge::CannyEdge(const std::string& pathPassed) : Segmentation(pathPassed) {
	path = Segmentation::getPath(); //Inherited by Segmentation
	src = Segmentation::getSrc(); //Inherited by Segmentation
	dst.create(src.size(), src.type());
	cvtColor(src, src_gray, cv::COLOR_BGR2GRAY); //Convert the input image between RGB and grey scale
}

void CannyEdge::CannyThreshold(System::Windows::Forms::PictureBox^ finestraStampa) {
	cv::blur(src_gray, detected_edges, cv::Size(3, 3));
	//If the trackbar is on 0, show the original image
	if (!(lowThreshold == 0)) {
		cv::Canny(detected_edges, detected_edges, lowThreshold, lowThreshold*ratio, kernel_size);
		dst = cv::Scalar::all(0);
		src.copyTo(dst, detected_edges);

		Temp savetemp;
		finestraStampa->Image = System::Drawing::Image::FromFile(savetemp.tempSave(dst));//Pass to the picturebox the temp img
	}
	else {
		System::String^ originalImg = gcnew  System::String(path.c_str()); //Converto System::String to std::string
		finestraStampa->Image = System::Drawing::Image::FromFile(originalImg);
	}
}

void CannyEdge::setTrackbarValue(int lowThresholdTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed){
	CannyEdge::lowThreshold = lowThresholdTrack;
	CannyThreshold(finestraStampa);
}

