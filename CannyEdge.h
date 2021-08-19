// CannyEdge.h
#pragma once

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

#include "Segmentation.h" //Base-class

#ifndef CANNYEDGE_H
#define CANNYEDGE_H

class CannyEdge : public Segmentation{
public:
	explicit CannyEdge(const std::string& pathPassed);
	virtual ~CannyEdge() = default;

	void CannyThreshold(System::Windows::Forms::PictureBox^ finestraStampa);

	virtual void setTrackbarValue(int lowThresholdTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) override;
private:
	static std::string path;
	static cv::Mat src;
	static cv::Mat src_gray;
	static cv::Mat dst;
	static cv::Mat detected_edges;
	static int edgeThresh;
	static int lowThreshold;
	static int ratio;
	static int kernel_size;
};

#endif