//BIT 2400 Assignment 2
//Ishan Chaurasia, 101011068
// This program is a random generating ascii dice game, through the use of Emun states.

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void asciiDice1()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void asciiDice2()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void asciiDice3()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void asciiDice4()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void asciiDice5()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void asciiDice6()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)254 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)186 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)32 << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

void DiceOneGenerate()
{
	int dice = (rand() % 6) + 1;

	if (dice == 1)
	{
		asciiDice1();
	}
	else if (dice == 2)
	{
		asciiDice2();
	}
	else if (dice == 3)
	{
		asciiDice3();
	}
	else if (dice == 4)
	{
		asciiDice4();
	}
	else if (dice == 5)
	{
		asciiDice5();
	}
	else if (dice == 6)
	{
		asciiDice6();
	}
}

void DiceTwoGenerate()
{
	int dice = (rand() % 6) + 1;

	if (dice == 1)
	{
		asciiDice1();
	}
	else if (dice == 2)
	{
		asciiDice2();
	}
	else if (dice == 3)
	{
		asciiDice3();
	}
	else if (dice == 4)
	{
		asciiDice4();
	}
	else if (dice == 5)
	{
		asciiDice5();
	}
	else if (dice == 6)
	{
		asciiDice6();
	}
}

void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

enum gameState
{
	mainMenu,
	game,
	//instructions,
	credits,
	quit
};

int main()
{
	int input;

	gameState state = gameState::mainMenu;

	while (state == mainMenu)
	{
		cout << "1 : Play Game." << endl;
		//cout << "2 : Instructions." << endl;
		cout << "2 : Show Credits." << endl;
		cout << "3 : End Game." << endl;
		cout << "Choose: ";
		cin >> input;
		cout << endl;
		system("CLS");

		if (input == game)
		{
			char reroll;
			srand(time(NULL));

			do
			{
				system("CLS");
				cout << "DICE ROLL GAME" << endl;
				DiceOneGenerate();
				DiceTwoGenerate();
				cout << "Roll Again? (Y/N): ";
				cin >> reroll;
			} while (reroll == 'Y' || reroll == 'y');
			system("CLS");
		}
		/*else if (input == instructions)
		{
			cout << "*******INSTRUCTIONS*******" << endl;
			// Game instructions
			system("pause");
			system("CLS");
		}*/
		else if (input == credits)
		{
			cout << "************CREDITS************" << endl << endl;
			cout << "Programmer:	Ishan Chaurasia." << endl;
			cout << "Artist:		Ishan Chaurasia." << endl;
			cout << "Batman Fan:	Ishan Chaurasia." << endl;
			cout << "C++ Genius:	Not Ishan Chaurasia." << endl << endl;
			cout << "Not really sure what to put in the credits so just made up random crap:" << endl;
			cout << "		Ishan Chaurasia." << endl;
			cout << endl;
			system("pause");
			system("CLS");
		}
		else if (input == quit)
		{
			cout << "Thank you." << endl;
			cout << "End Game." << endl << endl;
			state = quit;
		}
		else
		{
			cout << "Invalid Option. Please Try Again." << endl;
		}
	}
	system("pause");
}