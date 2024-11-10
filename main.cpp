#include <iostream>
#include <String>
#include <functional>
#include "BullNCow.h"
#include "PowerFour.h"

using namespace std;


int main()
{
	bool EntierePlay = false;
	do
	{
		PrintIntro();
		PlayGame();
		EntierePlay = AskToPlayAgain();
	}
	while (EntierePlay);
	return 0; 
	//fin du programme
}

int mainPowerFour() {
	Grille g;
	g.affiche();
	return 0;
}