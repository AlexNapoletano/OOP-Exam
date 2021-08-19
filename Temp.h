//Temp.h
#pragma once

#include <string>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

#ifndef TEMP_H
#define TEMP_H

class Temp{
	public:
		explicit Temp::Temp();
		System::String^ tempSave(cv::Mat imgToSave);
		static std::string getPathTemp();
		~Temp();
	private:
		//void setMatImg(cv::Mat img);
		System::String^ setPathTempDir();
		System::String^ nameGen();
		System::String^ fullPathTemp();
	private:
		//static cv::Mat imgToTemp;
		static std::string pathTempStd;
};

#endif