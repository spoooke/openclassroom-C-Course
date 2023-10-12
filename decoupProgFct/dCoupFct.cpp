// Decouper le programme en fonctions

#include <iostream>
#include "dCoupFct.hpp"

using namespace std;

int main() 
{
    // Appeler une fonction qui calcule le carré d'un nombre
    double nombre = 5.0;
    double carreResultat = carre(nombre);
    cout << "Le carre de " << nombre << " est " << carreResultat << endl;
    double carre(double nombre);
    
    // Utiliser des fonctions différentes avec des variables de même nom
    int entierA = 5, entierB = 10;
    double doubleA = 3.5, doubleB = 2.0;
    cout << "Somme d entiers : " << somme(entierA, entierB) << endl;
    cout << "Somme de doubles : " << somme(doubleA, doubleB) << endl;
    double somme(double a, double b);
    int somme(int a, int b);

    // Utiliser une fonction à deux arguments
    int resultatAddition = addition(7, 3);
    cout << "Resultat de l addition : " << resultatAddition << endl;
    int addition(int a, int b);

    // Utiliser le passage par valeur
    int valeur = 5;
    incrementerValeur(valeur);
    cout << "Passage par valeur : " << valeur << endl;

    // Utiliser le passage par référence
    valeur = 5;
    incrementerReference(valeur);
    cout << "Passage par reference : " << valeur << endl;

    // Utiliser le passage par référence constante
    valeur = 5;
    afficherValeur(valeur);

    return 0;
}
