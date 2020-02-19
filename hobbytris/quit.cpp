#include <iostream>
#include "quit.h"

void mightQuit() {

	bool isOnQuit = true;
	char wannaQuit;

	do
	{
		std::cout << "\033[2J\033[u";
		std::cout << "Are you sure you want to quit? Y/N" << std::endl;
		std::cin >> wannaQuit;

		if (wannaQuit == 'Y' || wannaQuit == 'y')
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Terminating program..." << std::endl;
			isOnQuit = false;
		}
		else if (wannaQuit == 'N' || wannaQuit == 'n')
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Returning to main menu." << std::endl;
			//TODO: return to main cycle
		}
		else
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Please enter a valid option." << std::endl;
			//TODO: doesn't work as intended
		}
	} 
	
	while (isOnQuit == true);
}