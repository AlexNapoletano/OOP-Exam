//Blur.h
#pragma once

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

#include "Segmentation.h" //Abstract Base-Class

#ifndef BLUR_H
#define BLUR_H

class Blur : public Segmentation{
	public:
		explicit Blur(std::string pathPassed);
		virtual ~Blur() = default;

		void medianBlur(System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed);
		
		virtual void setTrackbarValue(int kernelTrack, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) override;
	private:
		static std::string path;
		static cv::Mat src;
		static cv::Mat dst;
		static int kernel;
};

#endif