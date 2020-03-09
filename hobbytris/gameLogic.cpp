#include <iostream>
#include "gameLogic.h"

bool gameIsRunning = true;

bool gameStart() {

// 1. Resize window for resolution.
// 2. Define game map, render it. Multidimensional array with 0-s, tetriminio's are 1-s. (It doesn't matter which piece is there as long as it is a tetrimino.)

// 3. Define tetrimino itself, object-oriented approach. 
// 4. Tetrimino selector, in what order do they arrive.
// 5. If tetrimino has been selected, make the returned value fall as long the value is 0. 


	do
	{



	} while (gameIsRunning); // if game is not running = pause - Wont work because the game wont continue rendering. Maybe pause can be solved with a function that continues some functions.


	return true;

}

bool gameQuit() {
	// Runs when gameIsRunning == false + specific condition
	return true;
}