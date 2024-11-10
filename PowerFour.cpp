#include <iostream>
#include <String>
#include <functional>
#include "PowerFour.h"

using namespace std;

int m_rows = 6;
int m_cols = 7;
string PlayerName = ""; //variable globale au programme
string PlayerMove = ""; //variable globale au programme

    Grille::Grille()
    {
        cout << "Nombre de lignes ?" << endl;
        cin >> m_rows;
        cout << "Nombre de colonnes ?" << endl;
        cin >> m_cols;

        // Initialisation de 'tab' avec les dimensions fournies
        tab = vector<vector<char>>(m_rows, vector<char>(m_cols, '*'));
    }

    void affiche()
    {
        cout << endl;

        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_cols; j++)
            {
                //affiche un tableau avec les cases qui se séparent par | et dont le centre est .
                //cout << tab [i][j] << "| . ";
            }
            cout << endl;
        }
        cout << endl;
    }
    string GetPlayerName() {
        string PlayerName;

        // Demander le nom du joueur
        cout << "Entrez votre initiale : ";
        getline(cin, PlayerName);
        cout << "Votre initiale est " << PlayerName << " ?" << endl;

        // Boucle pour vérifier si l'utilisateur veut changer son nom
        while (true) {
            cout << "y = yes / n = no : ";
            string AnswerPlayer;
            getline(cin, AnswerPlayer);

            if (AnswerPlayer == "y" || AnswerPlayer == "yes") {
                return PlayerName;
            }
            else if (AnswerPlayer == "n" || AnswerPlayer == "no") {
                cout << "Veuillez rechoisir votre initiale" << endl;
                getline(cin, PlayerName); // Redemander le nom
                cout << "Votre nouvelle initiale est " << PlayerName << " ?" << endl;
            }
            else {
                cout << "Réponse invalide. Veuillez répondre par 'y' ou 'n'." << endl;
            }
        }
    }
    

    string LetPlayerMove()
    {
        
        getline(cin, PlayerMove);
        cout << "Vous vous déplacez en case " << PlayerMove << endl;
    
        return PlayerMove;
    }
    void PlayGame()
    {
        {
            LetPlayerMove();
            PrintMovePlayer();
        }
    }

     