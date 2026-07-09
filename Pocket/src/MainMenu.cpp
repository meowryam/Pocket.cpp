
#include "MainMenu.h"
using namespace std;

void Menu::run() {
	cout << "================== POCKET++ =============\n";
	cout << "=========what are you looking for==========\n";
	displayMenu();
	cin >> choice;
	validateChoice(choice);

}

void Menu::validateChoice(int c) {
	do {
		cout<< "Not available.Try again. \n";
		displayMenu();
		cin >> choice;
	} while (c > 9 || c < 0);
}

void Menu::displayMenu() {
	cout << "\n1.Pocket Inventory\n2. Gadget Library\n3. Categories\n4. Borrowers\n5. Mission Planner\n6. Pocket Loadouts\n7. Statistics\n8. Settings\n9. Help\n0. Exit\n ";
}

void Menu::setChoice(int c) {
	choice = c;
}
int Menu::getChoice() {
	return choice;
}