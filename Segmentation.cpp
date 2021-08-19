//Segmentation.h
//Segmentation Abstract Base class
#include "stdafx.h"

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

#include "Segmentation.h"

std::string Segmentation::path;
cv::Mat Segmentation::src;

Segmentation::Segmentation(std::string pathPassed){
	setPath(pathPassed);
	setSrc();
}

void Segmentation::setPath(std::string pathPassed) {
	path = pathPassed;
}

std::string Segmentation::getPath() {
	return path;
}

void Segmentation::setSrc() {
	src = cv::imread(path, cv::IMREAD_COLOR); //Load the image
}

cv::Mat Segmentation::getSrc() {
	return src;
}