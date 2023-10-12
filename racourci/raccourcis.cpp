// utiliser les raccourcis

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Ajoutez "1" à une variable avec l'incrémentation
    int variableA = 5;
    variableA++; // Incrémente la variable de 1
    cout << "Apres incrementation, variableA = " << variableA << endl;

    // Retirez "1" à une variable avec la décrémentation
    int variableB = 8;
    variableB--; // Décrémente la variable de 1
    cout << "Apres decrementation, variableB = " << variableB << endl;

    // Utilisez des fonctions mathématiques
    double variableC = 10.0;
    variableC = sqrt(variableC); // Calcule la racine carrée de variableC
    cout << "Apres utilisation de la fonction sqrt, variableC = " << variableC << endl;

    return 0;
}

// end