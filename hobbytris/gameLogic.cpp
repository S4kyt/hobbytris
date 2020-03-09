#include <iostream>
#include "gameLogic.h"

bool gameIsRunning = true;

bool gameStart() {

// 1. Resize window for resolution.
// 2. Define game map, render it. Multidimensional array with 0-s, tetriminio's are 1-s. (It doesn't matter which piece is there as long as it is a tetrimino.)
// 3. Define tetrimino itself, object-oriented approach. 
// 4. Tetrimino selector, in what order do they arrive.
// 5. If tetrimino has been selected, make the returned value fall as long the value is 0. 


    char gameMatrix[10][20] = 'X';
    int rows = 10;
    int cols = 20;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << gameMatrix[10][20];
        }
    }

	do
	{
    
            /*
            int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
            This type of initialization make use of nested braces
            Each set of inner braces represents one row. 
            In the above example there are total three rows so there are three sets of inner braces.

            TODO: Jump the tetriminos through the nested braces!!!!
            */

	} while (gameIsRunning); // if game is not running = pause - Wont work because the game wont continue rendering. Maybe pause can be solved with a function that continues some functions.




	return true;

}

bool gameQuit() {
	// Runs when gameIsRunning == false + specific condition
	return true;
}