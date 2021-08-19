//Watershed.h
#pragma once

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

#include "Segmentation.h"

#ifndef WATERSHED_H
#define WATERSHED_H

class Watershed : public Segmentation{
	public:
		explicit Watershed(const std::string& pathPassed);
		virtual ~Watershed() = default;

		void watershed(System::Windows::Forms::PictureBox^ finestraStampa);
		virtual void setTrackbarValue(int value, System::Windows::Forms::PictureBox^ finestraStampa, std::string& pathPassed) override; //Watershed doesn't need a trackbar
	private:
		static std::string path;
};

#endif 
