#pragma once
#include"Includes.h"
#include"User.h"

class View : public User
{
protected:

public:
	void menu() {
		std::cout << "[1] View all users";
		int choose; std::cin >> choose;
	}

	void viewUser() {
		
	}


};

