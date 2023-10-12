// repeter des istructions grace au boucles

#include <iostream>

using namespace std;

int main() 
{
    // Répéter des instructions grâce aux boucles
    cout << "Repeter des instructions grace aux boucles :" << endl;

    // Faire une boucle "while"
    cout << "Boucle 'while' : ";
    int compteur1 = 0;
    while (compteur1 < 5) 
    {
        cout << compteur1 << " ";
        compteur1++;
    }
    cout << endl;

    // Faire une boucle "do ... while"
    cout << "Boucle 'do ... while' : ";
    int compteur2 = 0;
    do 
    {
        cout << compteur2 << " ";
        compteur2++;
    } while (compteur2 < 5);
    cout << endl;

    // Faire une boucle "for"
    cout << "Boucle 'for' : ";
    for (int compteur3 = 0; compteur3 < 5; compteur3++) 
    {
        cout << compteur3 << " ";
    }
    cout << endl;

    return 0;
}

// end