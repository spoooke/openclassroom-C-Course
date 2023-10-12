#include <iostream>

using namespace std;

// Fonction pour calculer le carré d'un nombre
double carre(double nombre) 
{
    return nombre * nombre;
}

// Fonction pour additionner deux entiers
int somme(int a, int b) 
{
    return a + b;
}

// Fonction pour additionner deux nombres à virgule flottante
double somme(double a, double b) 
{
    return a + b;
}

// Fonction pour additionner deux entiers
int addition(int a, int b) 
{
    return a + b;
}

// Fonction pour incrémenter une valeur par valeur
void incrementerValeur(int &valeur) 
{
    valeur++;
}

// Fonction pour incrémenter une valeur par référence
void incrementerReference(int &valeur) 
{
    valeur++;
}

// Fonction pour afficher une valeur par référence constante
void afficherValeur(const int &valeur) 
{
    cout << "La valeur est : " << valeur << endl;
}

int main() 
{
    // Appeler une fonction qui calcule le carré d'un nombre
    double nombre = 5.0;
    double carreResultat = carre(nombre);
    cout << "Le carre de " << nombre << " est " << carreResultat << endl;

    // Utiliser des fonctions différentes avec des variables de même nom
    int entierA = 5, entierB = 10;
    double doubleA = 3.5, doubleB = 2.0;
    cout << "Somme d entiers : " << somme(entierA, entierB) << endl;
    cout << "Somme de doubles : " << somme(doubleA, doubleB) << endl;

    // Utiliser une fonction à deux arguments
    int resultatAddition = addition(7, 3);
    cout << "Resultat de l addition : " << resultatAddition << endl;

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
