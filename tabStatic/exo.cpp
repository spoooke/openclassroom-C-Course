// exercice tableau static.CPP
// main.cpp

#include <iostream>
#include "exo.hpp"

int main() 
{
    const int taille = 5;
    double notes[taille];

    std::cout << "Saisie des notes : " << std::endl;
    saisirNotes(notes, taille);

    double moyenne = calculerMoyenne(notes, taille);

    std::cout << "La moyenne des notes est : " << moyenne << std::endl;

    return 0;
}

void saisirNotes(double notes[], int taille) 
{
    for (int i = 0; i < taille; ++i) 
    {
        std::cout << "Saisissez la note " << i + 1 << ": ";
        std::cin >> notes[i];
    }
}

double calculerMoyenne(const double notes[], int taille) 
{
    double somme = 0.0;
    for (int i = 0; i < taille; ++i) 
    {
        somme += notes[i];
    }
    return somme / taille;
}

// end