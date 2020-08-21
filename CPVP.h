#pragma once
#include <iostream>

using namespace std;


class PVP
{
public:
	//simple yet hardcoded
	
	// declaring slots to store the input and mark
	int topLeft = 7;
	int topMid = 8;
	int topRight = 9;
	int midLeft = 4;
	int midMid = 5;
	int midRight = 6;
	int botLeft = 1;
	int botMid = 2;
	int botRight = 3;

	// pariables to store player names
	string player1 = " ";
	string player2 = " ";

	char Quit = ' ';
	char markX = 'X'; 
	char markY = 'y';
	

	

	int playerOneInput;// for player one input
	int playerTwoInput; //for player two input
	int userInput; // for general input

	bool GameOver = false; //main loop
	bool gameIsRunning = true; //secondary loop


	bool playPvP()
	{
		
		while (GameOver != true)
		{
			
			system("cls");


			cout << endl;
			cout << endl;
			cout << endl;
			cout << "\t" << "Multiplayer Mode" << endl;
			cout << endl;
			cout << endl;
			cout << endl; 
			cout << "Player 1 Enter Your Name" << endl;
			cout << endl;
			cout << endl;

			cin >> player1; //taking name of 1st player

			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Player 2 Enter Your Name" << endl;
			cout << endl;
			cout << endl;
			
			cin >> player2; // taking name of 2nd player

			system("cls");

			cout << endl;
			cout << endl;
			cout << " Welcome " << player1 << " and " << player2 << endl ;
			cout << endl;
			cout << " Enter 1 to start Playing " << endl << endl;
			cout << " Enter 0 to quit " << endl << endl;

			
		
			cin >> userInput; 
			
			
			while (gameIsRunning != false)
			{
				if (userInput == 0)
				{
					std::cout << " GameOver ";

					gameIsRunning = false;

				}
				else
				{
					if (gameIsRunning)
					{
						PlayerOnePlay(); // function for player one moves
						winCondition();// function to check win
						drawCondition(); //nction to check loss 

						PlayerTwoPlay();// function for player two moves
						winCondition();
						drawCondition();
					}
					else
					{
						gameIsRunning = false;
					}
				}
			}
			return 0;
		}

		return true;
	}
	
	void displayBoard() // to print the game board to the screen
	{
		cout << "\t" << "  " << topLeft << "  " << "|" << "  " << topMid << "  " << "|" << "  " << topRight << "  " << endl;
		cout << "\t" << " -- " << " | " << " -- " << "| " << " -- " << endl;
		cout << "\t" << "  " << midLeft << "  " << "|" << "  " << midMid << "  " << "|" << "  " << midRight << "  " << endl;
		cout << "\t" << " -- " << " | " << " -- " << "| " << " -- " << endl;
		cout << "\t" << "  " << botLeft << "  " << "|" << "  " << botMid << "  " << "|" << "  " << botRight << "  " << endl;
	}

	void PlayerOnePlay()
	{ 
		
		system("cls");

		cout << endl;
		cout << endl;
		cout << endl;

		displayBoard(); // to display board brfore player one's  input

		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "\t" << player1 << "  Enter the numbers to mark  :  " << endl;


		cin >> playerOneInput;

		
		if (playerOneInput == 0)
		{
			GameOver = true;
		}
		 if (playerOneInput == topLeft && topLeft != 11 || 0) // to mark topleft box
		{
			topLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == topRight && topRight != 11 || 0) //to mark top right box
		{
			topRight = 0;
			displayBoard();
		}
		else if (playerOneInput == topMid && topMid != 11 || 0) //to mark top middle box
		{
			topMid = 0;
			displayBoard();
		}
		else if (playerOneInput == midLeft && midLeft != 11 || 0) // to mark middle left box
		{
			midLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == midMid && midMid != 11 || 0) // to mark center box
		{
			midMid = 0;
			displayBoard();
		}
		else if (playerOneInput == midRight && midRight != 11 || 0) // to mark middle right box
		{
			midRight = 0;
			displayBoard();
		}
		else if (playerOneInput == botLeft && botLeft != 11 || 0) //to mark bottom left box
		{
			botLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == botRight && botRight != 11 || 0) // to mark bottom right box
		{
			botRight = 0;
			displayBoard();
		}
		else if (playerOneInput == botMid && botMid != 11 || 0) // to mark bottom right box
		{
		botMid = 0;
		displayBoard();
		}
		else
		{

			cout << "\t" << " Not Available " << endl;

			cout << "\t" << " Player 1 enter different numbers to mark " << endl;


			cin >> playerOneInput;
			// to loop if the input number is not available
			
			if (playerOneInput == 0) 
			{
				GameOver = true;
			 }
			if (playerOneInput == topLeft && topLeft != 11 || 0) // top left box
			{
				topLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == topRight && topRight != 11 || 0) //top right box
			{
				topRight = 0;
				displayBoard();
			}
			else if (playerOneInput == topMid && topMid != 11 || 0) // top middle box
			{
			topMid = 0;
			displayBoard();
			}
			else if (playerOneInput == midLeft && midLeft != 11 || 0) // middle left box
			{
				midLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == midMid && midMid != 11 || 0) // center box
			{
				midMid = 0;
				displayBoard();
			}
			else if (playerOneInput == midRight && midRight != 11 || 0) // middle right box
			{
				midRight = 0;
			displayBoard();
			}
			else if (playerOneInput == botLeft && botLeft != 11 || 0) // bottom left box
			{
				botLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == botRight && botRight != 11 || 0) //bottom right box
			{
				botRight = 0;
				displayBoard();
			}
			else if (playerOneInput == botMid && botMid != 11 || 0) // bottom middle box
			{
				botMid = 0;
				displayBoard();
			}
			else
			{

				cout << "\t" << " Not Available " << endl;



			}


		}

		winCondition();
		drawCondition();
	}

	void PlayerTwoPlay() // player two play function
	{
		system("cls");

		cout << endl;
		cout << endl;
		cout << endl;

		displayBoard();

		cout << endl;
		cout << endl; 
		cout << endl;

		cout << "\t" << player2 <<  "  Enter the numbers to mark  :  " << endl;
		


		cin >> playerTwoInput;
		
		if (playerTwoInput == 0) // to quit
		{
			cout << " Game Over";
			GameOver = true;
		}
		if (playerTwoInput == topLeft && topLeft != 11 || 0)
		{
			topLeft = 11;
			displayBoard();
		}
		else if (playerTwoInput == topRight && topRight != 11 || 0)
		{
			topRight = 11;
			displayBoard();
		}
		else if (playerTwoInput == topMid && topMid != 11 || 0)
		{
			topMid = 11;
			displayBoard();
		}
		else if (playerTwoInput == midLeft && midLeft != 11 || 0)
		{
			midLeft = 11;
			displayBoard();
		}
		else if (playerTwoInput == midMid && midMid != 11 || 0)
		{
			midMid = 11;
			displayBoard();
		}
		else if (playerTwoInput == midRight && midRight != 11 || 0)
		{
			midRight = 11;
			displayBoard();
		}
		else if (playerTwoInput == botLeft && botLeft != 11 || 0)
		{
			botLeft = 11;
			displayBoard();
		}
		else if (playerTwoInput == botRight && botRight != 11 || 0)
		{
			botRight = 11;
			displayBoard();
		}
		else if (playerTwoInput == botMid && botMid != 11 || 0)
		{
			botMid = 11;
			displayBoard();
		}
		else
		{

			cout << "\t" << " Not Available " << endl;

			cout << "\t" << player2 <<  "  enter different numbers  to mark  :  " << endl;
			cin >> playerTwoInput;
			
			
			if (playerTwoInput == 0)
			{
				cout << " Game Over";
				GameOver = true;
			}
			if (playerTwoInput == topLeft && topLeft != 11 || 0)
			{
				topLeft = 11;
				displayBoard();
			}
			else if (playerTwoInput == topRight && topRight != 11 || 0)
			{
				topRight = 11;
				displayBoard();
			}
			else if (playerTwoInput == topMid && topMid != 11 || 0)
			{
				topMid = 11;
				displayBoard();
			}
			else if (playerTwoInput == midLeft && midLeft != 11 || 0)
			{
				midLeft = 11;
				displayBoard();
			}
			else if (playerTwoInput == midMid && midMid != 11 || 0)
			{
				midMid = 11;
				displayBoard();
			}
			else if (playerTwoInput == midRight && midRight != 11 || 0)
			{
				midRight = 11;
				displayBoard();
			}
			else if (playerTwoInput == botLeft && botLeft != 11 || 0)
			{
				botLeft = 11;
				displayBoard();
			}
			else if (playerTwoInput == botRight && botRight != 11 || 0)
			{
				botRight = 11;
				displayBoard();
			}
			else if (playerTwoInput == botMid && botMid != 11 || 0)
			{
				botMid = 11;
				displayBoard();
			}
			else
			{

				cout << "\t" << " Not Available " << endl;
			}
		}

		
		winCondition();
		drawCondition();

		


	}

	void winCondition()
	{
		if (gameIsRunning)
		{
			if (topLeft == midLeft && midLeft == botLeft) // left column
			{
				if (topLeft || midLeft || botLeft == 0)
				{
					cout << "\t" << player1  << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topLeft || midLeft || botLeft == 11)
				{
					cout << "\t" << player2<< "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (topMid == midMid && midMid == botMid) // middle column
			{
				if (topMid || midMid || botMid == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topMid || midMid || botMid == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (topRight == midRight && midRight == botRight) // right column
			{
				if (topRight || midRight || botRight == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topRight || midRight || botRight == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (topLeft == topMid && topMid == topRight) // top row
			{
				if (topLeft || topMid || topRight == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topLeft || topMid || topRight == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (midLeft == midMid && midMid == midRight) // middle row
			{
				if (midLeft || midMid || midRight == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (midLeft || midMid || midRight == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (botLeft == botMid && botMid == botRight) //bottom row
			{
				if (botLeft || botMid || botRight == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (botLeft || botMid || botRight == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (topLeft == midMid && midMid == botRight) //across top left box to bottom right
			{
				if (topLeft || midMid || botRight == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topLeft || midMid || botRight == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				cout << endl;
				cout << "\t" << " enter 0 twice to continue ";



				cin >> userInput;

				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (topRight == midMid && midMid == botLeft) //across top roght to bottom left
			{
				if (topRight || midMid || botLeft == 0)
				{
					cout << "\t" << player1 << "  won " << endl;
					//gameIsRunning = false;
				}
				else if (topRight || midMid || botLeft == 11)
				{
					cout << "\t" << player2 << "  won " << endl;
					//gameIsRunning = false;
				}
				
				
				cout << endl;
				cout << "\t" << " enter 0 twice to continue ";



				cin >> userInput;
				
			}
			
			if (userInput == 0)
			{
				gameIsRunning = false;
			}
		}

		
	}
	
	void drawCondition()
	{
		if ((GameOver != true) && (topLeft != 7) && (topMid != 8) && (topRight != 9) &&  
			(midLeft != 4) && (midMid != 5) && (midRight !=6 ) &&			// checking if all the slots have been marked
			(botLeft != 1) && (botMid != 2) && (botRight !=3))            // if all slots are taken and game is still rinnung
		{
			cout << endl << endl;
			cout << "\t" << " Game is Draw " << endl << endl ;

			cout << "\t" << " Enter 0 to continue "; \
			
			cin >> userInput;

			if (userInput == 0)
			{
				gameIsRunning = false;
			}
		}
	}
};


