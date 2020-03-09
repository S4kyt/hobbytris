#include <iostream>
#include "quit.h"

bool mightQuit() {

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
			return true;
		}
			else if (wannaQuit == 'N' || wannaQuit == 'n')
		{
			std::cout << "\033[2J\033[u";
			std::cout << "Returning to main menu." << std::endl;
			return false;
		}
		else
		{
			std::cout << "Please enter a valid option." << std::endl;
			//FIXME: doesn't work as intended
		}
	} 
	
	while (true);
}