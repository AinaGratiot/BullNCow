#pragma once
#ifndef GRILLE_H
#define GRILLE_H

#include <iostream>
#include <vector>

class Grille {
public:
    Grille();
    virtual ~Grille();

    void add(int, char);
    void affiche();
    void retire(int);
    int checkbis(int);
    int checkfull();
    int check();
    void afficheres(int);
    char get(int, int) const;

private:
    int m_rows = 6;
    int m_cols = 7;
    std::vector<std::vector<char>> tab;

};

#endif // GRILLE_H
