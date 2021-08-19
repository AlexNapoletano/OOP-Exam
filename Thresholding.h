// Thresholding.h
#pragma once

#include <opencv2/highgui.hpp>  
#include <opencv2/imgproc.hpp>			 
#include <opencv2/imgcodecs.hpp>
#include <string>

#include "Segmentation.h" //Base-class

#ifndef THRESHOLDING_H
#define THRESHOLDING_H

class Thresholding : public Segmentation{
public:
	explicit Thresholding(std::string pathPassed);
	virtual ~Thresholding() = default;

	void Threshold(System::Windows::Forms::PictureBox^ finestraStampa);

	virtual void setTrackbarValue(int thresholdValueTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) override;
private:
	static std::string path;
	static cv::Mat src;
	static cv::Mat src_gray;
	static cv::Mat dst;
	static int threshold_value;
	static int threshold_type;
	const int max_value{255};
	const int max_type{4};
	const int max_binary_value{255};
};

#endif