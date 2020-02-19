#include <iostream>
#include "quit.h"

int main()
{
	int menuChoice;
	bool isInMenu = true;

	// Run till player has chosen a valid option
	do {
		std::cout << "Welcome to hobbytris. Enter the option's number to continue." << std::endl;
		std::cout << "1. Play" << std::endl;
		std::cout << "2. Quit" << std::endl;
		std::cin >> menuChoice;

		if (menuChoice == 1)
		{
			std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
			std::cout << "You've chosen play!" << std::endl;
			isInMenu = false;
		}
		else if (menuChoice == 2)
		{
			std::cout << "\033[2J\033[u";
			std::cout << "You've chosen quit!" << std::endl;
			mightQuit();
			isInMenu = false;
		}
		else
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Please enter a valid option." << std::endl;
		}
	}

	while (isInMenu == true);

	return 0;
}