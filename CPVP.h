#pragma once
#include <iostream>
using namespace std;


class PVP
{
public:

	int topLeft = 7;
	int topMid = 8;
	int topRight = 9;
	int midLeft = 4;
	int midMid = 5;
	int midRight = 6;
	int botLeft = 1;
	int botMid = 2;
	int botRight = 3;


	string player1 = " ";
	string player2 = " ";

	char Quit = ' ';
	char markX = 'X';
	char markY = 'y';
	

	int mat[3][3] = { {topLeft, topMid, topRight} , {midLeft,midMid, midRight} , {botLeft, botMid , botRight} };

	int playerOneInput;
	int playerTwoInput;
	int userInput;
	bool GameOver = false;


	bool playPvP()
	{
		
		while (GameOver != true)
		{
			
			system("cls");

			cout << "\t" << "Multiplayer Mode" << endl;
			cout << endl;
			cout << endl;
			cout << endl; 
			cout << "Player 1 Enter Your Name" << endl;
			cout << endl;
			cout << endl;

			cin >> player1;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Player 2 Enter Your Name" << endl;
			cout << endl;
			cout << endl;
			
			cin >> player2;

			cout << endl;
			cout << endl;
			cout << " Welcome " << player1 << " and " << player2 << endl ;
			cout << endl;
			cout << " Enter 1 to start Playing " << endl;
			cout << " Enter 0 to quit anytime ";

			
		
			cin >> userInput;
			
			while(userInput == 1)
			{
				PlayerOnePlay();
				
				winCondition();

				PlayerTwoPlay();
				
				winCondition();
			
			}
			
			if (userInput == 0)
			{
				std::cout << " GameOver ";

				GameOver = true;

			}
			
		}

		return true;
	}
	
	void displayBoard()
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

		displayBoard();

		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "\t" << player1 << "  Enter the numbers to mark  :  " << endl;


		cin >> playerOneInput;

		if (playerOneInput == 0)
		{
			GameOver = true;
		}
		else if (playerOneInput == topLeft && topLeft != 11 || 0)
		{
			topLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == topRight && topRight != 11 || 0)
		{
			topRight = 0;
			displayBoard();
		}
		else if (playerOneInput == topMid && topMid != 11 || 0)
		{
			topMid = 0;
			displayBoard();
		}
		else if (playerOneInput == midLeft && midLeft != 11 || 0)
		{
			midLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == midMid && midMid != 11 || 0)
		{
			midMid = 0;
			displayBoard();
		}
		else if (playerOneInput == midRight && midRight != 11 || 0)
		{
			midRight = 0;
			displayBoard();
		}
		else if (playerOneInput == botLeft && botLeft != 11 || 0)
		{
			botLeft = 0;
			displayBoard();
		}
		else if (playerOneInput == botRight && botRight != 11 || 0)
		{
			botRight = 0;
			displayBoard();
		}
		else if (playerOneInput == botMid && botMid != 11 || 0)
		{
		botMid = 0;
		displayBoard();
		}
		else
		{

			cout << "\t" << " Not Available " << endl;

			cout << "\t" << " Player 1 enter different numbers to mark " << endl;


			cin >> playerOneInput;

			if (playerOneInput == 0)
			{
				GameOver = true;
			}
			else if (playerOneInput == topLeft && topLeft != 11 || 0)
			{
				topLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == topRight && topRight != 11 || 0)
			{
				topRight = 0;
				displayBoard();
			}
			else if (playerOneInput == topMid && topMid != 11 || 0)
			{
			topMid = 0;
			displayBoard();
			}
			else if (playerOneInput == midLeft && midLeft != 11 || 0)
			{
				midLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == midMid && midMid != 11 || 0)
			{
				midMid = 0;
				displayBoard();
			}
			else if (playerOneInput == midRight && midRight != 11 || 0)
			{
				midRight = 0;
			displayBoard();
			}
			else if (playerOneInput == botLeft && botLeft != 11 || 0)
			{
				botLeft = 0;
				displayBoard();
			}
			else if (playerOneInput == botRight && botRight != 11 || 0)
			{
				botRight = 0;
				displayBoard();
			}
			else if (playerOneInput == botMid && botMid != 11 || 0)
			{
				botMid = 0;
				displayBoard();
			}
			else
			{

				cout << "\t" << " Not Available " << endl;



			}


		}

		
	}

	void PlayerTwoPlay()
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

			cout << "\t" << " Player 2 enter different numbers  to mark  :  " << endl;
			cin >> playerTwoInput;
			
			
			if (playerTwoInput == 0)
			{
				cout << " Game Over";
				GameOver = true;
			}
			else if (playerTwoInput == topLeft && topLeft != 11 || 0)
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

		
		
		

		cout << endl;
		//cout << "\t" << "Press Enter to Continue" << endl;


	}

	bool winCondition()
	{
		if (topLeft == midLeft && midLeft == botLeft)
		{
			if (topLeft || midLeft || botLeft == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				GameOver = true;
			}
			else if( topLeft || midLeft || botLeft == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (topMid == midMid && midMid == botMid)
		{
			if (topMid || midMid || botMid == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (topMid || midMid || botMid == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (topRight == midRight && midRight == botRight)
		{
			if (topRight || midRight || botRight == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (topRight || midRight || botRight == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (topLeft == topMid && topMid == topRight)
		{
			if (topLeft || topMid || topRight == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (topLeft || topMid || topRight == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (midLeft == midMid && midMid == midRight)
		{
			if (midLeft || midMid || midRight == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (midLeft || midMid || midRight == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (botLeft == botMid && botMid == botRight)
		{
			if (botLeft || botMid || botRight == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (botLeft || botMid || botRight == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (topLeft == midMid && midMid == botRight)
		{
			if (topLeft || midMid || botRight == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (topLeft || midMid || botRight == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		else if (topRight == midMid && midMid == botLeft)
		{
			if (topRight || midMid || botLeft == 0)
			{
				cout << "\t" << " Player 1 won " << endl;
				
			}
			else if (topRight || midMid || botLeft == 11)
			{
				cout << "\t" << " Player 2 won " << endl;
				
			}
			GameOver = true;
		}
		
		return true;
	}
	
	void drawCondition()
	{
		/*if ((GameOver != true) && (topLeft == 0 || 11) && (topMid == 0 || 11) && (topRight == 0 || 11) &&  
			(midLeft == 0 || 11) && (midMid == 0 || 11) && (midRight == 0 || 11) &&
			(botLeft == 0 || 11) && (botMid == 0 || 11) && (botRight == 0 || 11))
		{
			cout << "\t" << " Game is Draw " << endl;
			GameOver = true;

		}*/
	}
};


