//Segmentation.h
//Segmentation Abstract Base class
#pragma once

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

#ifndef SEGMENTATION_H
#define SEGMENTATION_H

class Segmentation {
public:
	Segmentation(std::string pathPassed);
	virtual ~Segmentation() = default;

	void setPath(std::string pathPassed);
	std::string getPath();

	void setSrc();
	cv::Mat getSrc();

	virtual void setTrackbarValue(int Value, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) = 0;
private:
	static std::string path;
	static cv::Mat src;
};

#endif // !SEGMENTATION_H