// manipuler les tableaux static 
// tabStatic.cpp

#include <iostream>
#include "tabStatic.hpp"

int main() 
{
    // Déclaration d'un tableau statique de taille 100
    int tableau[100];

    // Accès aux éléments du tableau
    tableau[0] = 42;
    tableau[1] = 10;

    // Parcours du tableau
    for (int i = 0; i < 100; ++i) 
    {
        tableau[i] = i * 2;
    }

    // Utilisation des fonctions du fichier tableau.hpp
    afficherTableau(tableau, 100);
    int somme = sommeTableau(tableau, 100);
    std::cout << "Somme des elements du tableau : " << somme << std::endl;

    return 0;
}

void afficherTableau(const int tableau[], int taille) 
{
    std::cout << "Contenu du tableau : ";
    for (int i = 0; i < taille; ++i) 
    {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int sommeTableau(const int tableau[], int taille) 
{
    int somme = 0;
    for (int i = 0; i < taille; ++i) 
    {
        somme += tableau[i];
    }
    return somme;
}