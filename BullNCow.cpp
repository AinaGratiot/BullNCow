#include <iostream>
#include <String>
#include <functional>
#include "BullNCow.h"
using namespace std;

void PrintIntro();
string GetGuessPlayer();//variable locale dans le scop{} GuetGuessAndPrint
void PrintGuessPlayer();
void PlayGame();
bool AskToPlayAgain();

int NumberOfTry = 1;
string GuessPlayer = ""; //variable globale au programme
constexpr int NUMBER_LETTER = 5;
string SecretWord = "patate";//mot secret = patate

void PrintIntro()
{
	// écrit les phrases d'introduction
	cout << "Bienvenue dans le jeu Bull and Cow" << endl;
	cout << "Pouvez vous deviner le mot avec " << NUMBER_LETTER;
	cout << " lettres." << endl;
	return;
}

string GetGuessPlayer()
{
	//variable locale dans le scop{} GuetGuessAndPrint (string GuessPlayer = "";)
	//récupère le mot du joueur
	do
	{
		getline(cin, GuessPlayer);
		cout << "Le mot que vous avez choisit fait " << GuessPlayer.length();
		cout << " lettres." << endl;
		if (GuessPlayer.length() != NUMBER_LETTER)
		{
			cout << "Le mot ne fait pas la bonne taille!" << endl;
			cout << "Choisissez un nouveau mot de 5 lettres" << endl;
			//faire en sorte d'obliger le joueur à rechoisir un mot
		}
	} while (GuessPlayer.length() != NUMBER_LETTER);

	return GuessPlayer;
}

void PrintGuessPlayer()
{
	int match = {}, cows = 0, bulls = 0;
	//for (int i = 0; i < NUMBER_LETTER; i++) //regarde si la longueur du mot correspond
	//{
		//if (SecretWord == GuessPlayer)
		//{
		//	bulls++;
		//}
		//else // regarde quelles lettres sont juste ou non
		//{

		//}
	//}
	//cout << GuessPlayer << endl;
	//cout << "${Bulls}A${cows}B" << endl;
	return;
}

void PlayGame()
{
	//retire un essai a chaque début de partie
	for (int i = 0; i < NumberOfTry; i++)
	{
		GetGuessPlayer();
		PrintGuessPlayer();
	}
}

bool AskToPlayAgain()
{
	//fait dire au joueur que la partie est finie
	cout << "Le jeu est fini" << endl;
	//demander au joueur si il veut continuer la partie
	cout << "Voulez vous recommencer ?" << endl;
	//le joueur entre "y" ou "n" pour choisir
	cout << "y = yes / n = no" << endl;
	string AnswerPlayer = "";
	getline(cin, AnswerPlayer);

	//faire une boucle while avec do{<code statement>}while()

	if (AnswerPlayer[0] == 'y' || AnswerPlayer[0] == 'yes')
	{
		//cout << "yes";
		//clear the screen
		return true;
		//faire en sorte que ça relance la partie
	}
	//si n -> partir
	else if (AnswerPlayer[0] == 'n' || AnswerPlayer[0] == 'no')
	{
		cout << "Appuyez sur espace pour continuer." << endl;
		cin.ignore(1);
		return false;
	}
}
//overload
void WordChoice(float x)
{
	return;
}

void WordChoice(int x)
{
	return;
}

void Test()
{
	return;
}