#pragma once
#include"Includes.h"

class User
{
protected:
	std::string name;
	std::string fname;
	int age;

public:
	User() {
		this->name = name;
		this->fname = fname;
		this->age = age;
	}
	User(std::string name, std::string fname, int age) {
		this->name = new char[30];
		this->fname = new char[30];
		this->age = age;
	}
	
	char getUser() {
		std::cin >> name >> fname >> age;
		return name, fname, age;
	}

};

