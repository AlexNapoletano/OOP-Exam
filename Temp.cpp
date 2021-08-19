//Temp.cpp
#include "stdafx.h"

#include <string>
#include <msclr\marshal_cppstd.h> //For the conversion between System::String and std::string
#include <random> //Used in the generator name
#include <ctime> //Used in the generator name

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

#include "Temp.h"

std::string Temp::pathTempStd;

Temp::Temp() {
}

System::String^ Temp::tempSave(cv::Mat imgToSave) {
	//This member function will be save the temp img in the path generated in fullPathTemp()
	System::String^ pathTemp = Temp::fullPathTemp(); 
	cv::imwrite(pathTempStd, imgToSave);

	return pathTemp;
}

System::String^ Temp::fullPathTemp() {
	//Build the full path (path and name of the img)
	System::String^ dirpath = Temp::setPathTempDir();
	System::String^ filename = Temp::nameGen();
	System::String^ fullPathTemp = dirpath + filename;

	//Convert from System::String^ to std::string
	msclr::interop::marshal_context context;
	Temp::pathTempStd = context.marshal_as<std::string>(fullPathTemp);
	
	return fullPathTemp;
}

System::String^ Temp::setPathTempDir() {
	//This member function save the standard path of local app and there and 
	//create the directory "ShotPic_Editor" if it doesn't exist
	System::String^ pathTemp = System::Environment::GetFolderPath(System::Environment::SpecialFolder::LocalApplicationData) + "\\ShotPic_Editor";
	if (!System::IO::Directory::Exists(pathTemp)) {
		System::IO::Directory::CreateDirectory(pathTemp);
	}

	return pathTemp;
}

System::String^ Temp::nameGen() {
	//Generate a random name based on the word "temp", the time and a random number.
	std::default_random_engine engine{ static_cast<unsigned int>(time(0)) };
	std::uniform_int_distribution<unsigned int> randomInt{ 1, 100 };
	std::string fileName = "\\temp" + std::to_string(randomInt(engine)) + std::to_string(time(0)) + ".png";
	System::String^ fileNameSystem = gcnew System::String(fileName.c_str());
	
	return fileNameSystem;
}

std::string Temp::getPathTemp() {
	System::String^ pathTempSys = gcnew System::String(Temp::pathTempStd.c_str());
	return pathTempStd;
}

Temp::~Temp() {
}
