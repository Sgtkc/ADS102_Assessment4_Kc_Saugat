#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <time.h>
#include "CPVP.h"
#include "PVC.h"

using namespace std;




void playOptions()
{
	system("cls");
	PVP p;
	PVC pc;

	int PvP = 1;
	int PvC = 2;
	int CvC = 3;
	int playerInput = 0;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t" << "  PLAYER Vs PLAYER   (1)" << endl;
	cout << "\t" << " PLAYER Vs COMPUTER  (2)" << endl;
	

	cin >> playerInput;

	if(playerInput == PvP)
	{
		p.playPvP();
	}

	if (playerInput == PvC)
	{
		pc.playPvC();
	}

	

}



int main()
{
	int play = 1;
	int quit = 2;
	int credits = 3;
	int computerWins = 0;
	int playerChoice = 0;

	int ComputerWins = 0;;

	bool isGameRunning = true;

	int result;
	PVP p;
	


	while (isGameRunning != false)
	{	
		system("cls");

		cout << endl;
		cout << endl;
		cout << "\t" << "  MAIN MENU " << endl;
		cout << endl;
		cout << "\t" << "  PLAY   (1) " << endl;
		cout << "\t" << "  QUIT   (2)" << endl;
		cout << "\t" << " CREDITS (3) " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t" << " Enter 1 to play " << endl;
		
		cin >> playerChoice;

		if (playerChoice == play)
		{
			
			playOptions();

		}

		if (playerChoice == quit)
		{
			cout << "You chose to dip" << endl ;

			isGameRunning = false;
		}

		if (playerChoice == credits)
		{
			cout << "\t" << "  Developers : " << endl;
			cout << "\t" << "  Saugat K C " << endl;
			cout << "\t" << " Sharad Baidhya " << endl;

		}


	}
	
	return (0);
}