#ifndef BULLNCOW_H
#define BULLNCOW_H

#include <iostream>
#include <string>
#include <functional>

using namespace std;

// D�clarations des fonctions
void PrintIntro();
string GetGuessPlayer();
void PrintGuessPlayer();
void PlayGame();
bool AskToPlayAgain();

// D�clarations des variables globales
extern int NumberOfTry;               // Nombre de tentatives
extern string GuessPlayer;            // Mot devin� par le joueur
extern constexpr int NUMBER_LETTER = 5; // Taille du mot � deviner
extern string SecretWord;             // Mot secret � deviner

#endif // BULLNCOW_H


