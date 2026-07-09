#pragma once
#include<iostream>
class Menu {
private:
	int choice;
public:
	void setChoice(int c);
	int getChoice();
	void displayMenu();
	void run();
	void validateChoice(int c);
};
