// structurer le code avec des conditions

#include <iostream>

using namespace std;

int main() 
{
    // Structurer le code avec des conditions
    int age;
    cout << "Entrez votre age : ";
    cin >> age;

    // Tester des variables avec la condition "if else"
    if (age < 18) 
    {
        cout << "Vous etes mineur." << endl;
    } else 
    {
        cout << "Vous etes majeur." << endl;
    }

    // Rendre le code plus lisible avec des conditions "switch"
    char grade;
    cout << "Entrez votre note (A, B, C, D, ou F) : ";
    cin >> grade;

    switch (grade) 
    {
        case 'A':
            cout << "Excellent !" << endl;
            break;
        case 'B':
            cout << "Tres bien !" << endl;
            break;
        case 'C':
            cout << "Bien !" << endl;
            break;
        case 'D':
            cout << "Satisfaisant." << endl;
            break;
        case 'F':
            cout << "Échec." << endl;
            break;
        default:
            cout << "Note invalide." << endl;
    }

    // Vérifier des valeurs "true" ou "false" avec des booléens
    bool estSoleil = true;
    bool estChaud = true;

    if (estSoleil && estChaud) 
    {
        cout << "C'est une belle journee !" << endl;
    } else if (estSoleil && !estChaud) 
    {
        cout << "Il fait soleil, mais il fait frais." << endl;
    } else if (!estSoleil && estChaud) 
    {
        cout << "Il fait chaud, mais il n y a pas de soleil." << endl;
    } else 
    {
        cout << "La meteo n'est pas ideale." << endl;
    }

    // Combinez des conditions
    int x = 10;
    int y = 5;

    if ((x > y) && (x % 2 == 0)) 
    {
        cout << "x est plus grand que y et x est pair." << endl;
    }

    return 0;
}

// end