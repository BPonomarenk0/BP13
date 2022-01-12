#pragma once
#include"Includes.h"
#include "User.h"
class DateBase :
    public User
{
protected:
	std::string path = "fl.txt";
	std::string smg;
	std::fstream fl;
public:

    void fl_R() {
		fl.open(path, std::fstream::out | std::fstream::in | std::fstream::app);
		if (!fl.is_open())
			std::cout << "Cannot open file";
		else {
			while (!fl.eof()) {
				smg = "";
				fl >> smg;
				std::cout << smg << "\n";
			}
		}
		fl.close();
    }
	void fl_W() {
		fl.open(path, std::fstream::out | std::fstream::in | std::fstream::app);
		if (!fl.is_open())
			std::cout << "Cannot open file";
		else {
			getUser();
			fl << name << fname << age;
			fl << "\n";
		}
		fl.close();
	} 
};

