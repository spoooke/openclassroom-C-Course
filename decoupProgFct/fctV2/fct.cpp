#include <iostream>
#include "fct.hpp"

using namespace std;

// Définition des fonctions

double carre(double nombre) 
{
    return nombre * nombre;
}

int somme(int a, int b) 
{
    return a + b;
}

double somme(double a, double b) 
{
    return a + b;
}

int addition(int a, int b) 
{
    return a + b;
}

void incrementerValeur(int valeur) 
{
    valeur++;
}

void incrementerReference(int &valeur) 
{
    valeur++;
}

void afficherValeur(const int &valeur) 
{
    cout << "La valeur est : " << valeur << endl;
}

int main() 
{
    double nombre = 5.0;
    double carreResultat = carre(nombre);
    cout << "Le carre de " << nombre << " est " << carreResultat << endl;

    int entierA = 5, entierB = 10;
    double doubleA = 3.5, doubleB = 2.0;
    cout << "Somme d entiers : " << somme(entierA, entierB) << endl;
    cout << "Somme de doubles : " << somme(doubleA, doubleB) << endl;

    int resultatAddition = addition(7, 3);
    cout << "Resultat de l addition : " << resultatAddition << endl;

    int valeur = 5;
    incrementerValeur(valeur);
    cout << "Passage par valeur : " << valeur << endl;

    valeur = 5;
    incrementerReference(valeur);
    cout << "Passage par reference : " << valeur << endl;

    valeur = 5;
    afficherValeur(valeur);

    return 0;
}

// end