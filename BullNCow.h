#ifndef BULLNCOW_H
#define BULLNCOW_H

#include <iostream>
#include <string>
#include <functional>

using namespace std;

// Déclarations des fonctions
void PrintIntro();
string GetGuessPlayer();
void PrintGuessPlayer();
void PlayGame();
bool AskToPlayAgain();

// Déclarations des variables globales
extern int NumberOfTry;               // Nombre de tentatives
extern string GuessPlayer;            // Mot deviné par le joueur
extern constexpr int NUMBER_LETTER = 5; // Taille du mot à deviner
extern string SecretWord;             // Mot secret à deviner

#endif // BULLNCOW_H


