#pragma once
#include<iostream>
using namespace std;



class PVC
{
public:

	int computerWins = 0;

	bool playPvC()
	{
		//Main board
		cout << endl;
		cout << endl;
		cout << " Welcome to Player VS Computer\n";
		cout << endl;
		cout << "\t" << " ComputerWins : " << computerWins << endl;
		
		cout << "  1 |  2 | 3  " << endl;
		cout << " -- | -- | -- " << endl;
		cout << "  4 |  5 | 6  " << endl;
		cout << " -- | -- | -- " << endl;
		cout << "  7 |  8 | 9  " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "Player Enter your name" << endl << endl;

		string player = " ";

		cin >> player;


		cout << player << "  enter the numbers to mark ";
		int board[9] = { 0 };
		int moves = 0, k;
		
		//Player = -1 ; Computer = 1
		while (moves < 9) {
			int mv;
			
			cin >> mv;
			if (board[mv - 1] == 0) {
				board[mv - 1] = -1;
				moves++;
				
				displayBoard(board);
				if (winCondition(board) == 0) {
					k = Computer(board);
					board[k] = 1;
					
					displayBoard(board);
					moves++;
					if (winCondition(board) != 0) {
						break;
					}
				}
				else
					break;
			}
			else {
				cout << "Not Available " << endl << endl;;
			}
		}

		switch (winCondition(board)) {
		case 0: //if game is draw
			cout << "Game is Draw\n";
			break;
		case 1: //if computer wins
			cout << player << " lost\n";
			computerWins += 1;
			break;
		case -1://if you win
			cout << "Not Available";
			break;
		}
		system("pause");
		
		return true ;
	}

	/*Function to draw game board after player have placed the move */
	void displayBoard(int* a) {
		int k = 0;
		cout << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "| ";
				if (a[k] == 0) {
					cout << k + 1 << " |";
				}
				else {
					if (a[k] == -1) {
						cout << "0 |";
					}
					else {
						cout << "11 |";
					}
				}
				k++;
			}
			cout <<  endl;
		}
	}


	int winCondition(const int* board)
	{
		//determines if a player has won, returns 0 otherwise.
		unsigned wins[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
		int i;
		for (i = 0; i < 8; ++i) {
			if (board[wins[i][0]] != 0 &&
				board[wins[i][0]] == board[wins[i][1]] && board[wins[i][1]] == board[wins[i][2]])
				return board[wins[i][2]];
		}
		return 0;
	}


	/*Minimax algorithm to find out best possible moves*/
		
	
	int minimax(int* board, int player) {
		int winner = winCondition(board); // player has won

		if (winner != 0)
			return winner * player;

		int move = -1;
		int score = -2;

		for (int i = 0; i < 9; i++) {

			if (board[i] == 0) {

				board[i] = player;
				int thisScore = -minimax(board, player * -1);

				if (thisScore > score) {
					score = thisScore;
					move = i;
				}
				board[i] = 0;//Reset board after try
			}
		}
		if (move == -1)
			return 0;

		return score;
	}

	//Computer move function
	int Computer(int* board) {
		int move = -1;
		int score = -2;
		system("cls");
		for (int i = 0; i < 9; ++i) {

			if (board[i] == 0) {
				board[i] = 1;
				int tempScore = -minimax(board, -1);
				board[i] = 0;

				if (tempScore > score) {
					score = tempScore;
					move = i;
				}
			}
		}
		//returns a score based on minimax tree at a given node.
		return move;
	}

};