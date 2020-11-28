#include <iostream>
#include "quit.h"
#include "gameLogic.h"

int main()
{
	int menuChoice;
	bool isInMenu = true;

	// Run till player has chosen a valid option
	do
{
		std::cout << "Welcome to hobbytris. Enter the option's number to continue." << std::endl;
		std::cout << "1. Play" << std::endl;
		std::cout << "2. Quit" << std::endl;
		std::cin >> menuChoice;

		// FIXME: Limit input to 1 char -> User can enter "1eaafi", which I dont want.
		if (menuChoice == 1)
		{
			std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
			std::cout << "You've chosen play!" << std::endl;
			isInMenu = false;
			gameStart();
		}
		else if (menuChoice == 2)
		{
			std::cout << "\033[2J\033[u";
			std::cout << "You've chosen quit!" << std::endl;

			bool quit = mightQuit();
			if (quit == true)
			{
				break;
			}
		}
		else
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Please enter a valid option." << std::endl;
			//FIXME: doesn't work as intended
		}
	}

	while (isInMenu == true);

	return 0;
}