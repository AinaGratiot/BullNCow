#include <iostream>
#include <String>
#include <functional>
#include "BullNCow.h"
#include "PowerFour.h"

using namespace std;


int main()
{
	char option;

	//choisit quel jeu jouer
	cout << "Please choose a letter from the following options:" << endl;
	cout << " " << endl;
	cout << "A) BullNCow" << endl;
	cout << "B) PowerFour" << endl;
	cout << " " << endl;
	cout << "***************************************************" << endl;
	cout << "Your option : ";
	cin >> option;
	option = toupper(option);

	switch (option)
	{
		//met le "main" de BullNCow
	case 'A':
		bool EntierePlay = false;
		do
		{
			PrintIntro();
			PlayGame();
			EntierePlay = AskToPlayAgain();
		} while (EntierePlay);
		break;
	case 'B':
	{
		Grille g;
		g.affiche();
	}
	break;
	default:
		cout << "Invalid option.";
		break;
	}

	return 0;
}