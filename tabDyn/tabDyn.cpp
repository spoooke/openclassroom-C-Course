#include <iostream>
#include "tabDyn.hpp"

int main() {
    std::vector<int> tableau = creerTableau(5);
    
    // Accéder aux éléments
    for (int i = 0; i < tableau.size(); ++i) {
        tableau[i] = i * 10;
    }
    
    std::cout << "Accéder aux éléments du tableau : ";
    for (int i = 0; i < tableau.size(); ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
    
    // Changer la taille du tableau
    changerTaille(tableau, 7);
    tableau[5] = 50;
    tableau[6] = 60;
    
    std::cout << "Changer la taille du tableau : ";
    for (int i = 0; i < tableau.size(); ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
    
    // Calculer la moyenne
    double moyenne = calculerMoyenne(tableau);
    std::cout << "Moyenne du tableau : " << moyenne << std::endl;
    
    // Tableau multidimensionnel
    tableauMultidimensionnel();
    
    return 0;
}

// Implémentation des fonctions

std::vector<int> creerTableau(int taille) {
    std::vector<int> tableau(taille);
    return tableau;
}

int accesElement(const std::vector<int>& tableau, int index) {
    return tableau[index];
}

void changerTaille(std::vector<int>& tableau, int nouvelleTaille) {
    tableau.resize(nouvelleTaille);
}

double calculerMoyenne(const std::vector<int>& tableau) {
    double somme = 0;
    for (int i = 0; i < tableau.size(); ++i) {
        somme += tableau[i];
    }
    return somme / tableau.size();
}

void tableauMultidimensionnel() {
    std::vector<std::vector<int> > tableau2D(3, std::vector<int>(4, 0));
    
    for (int i = 0; i < tableau2D.size(); ++i) {
        for (int j = 0; j < tableau2D[i].size(); ++j) {
            tableau2D[i][j] = i * 10 + j;
        }
    }
    
    std::cout << "Tableau multidimensionnel : " << std::endl;
    for (int i = 0; i < tableau2D.size(); ++i) {
        for (int j = 0; j < tableau2D[i].size(); ++j) {
            std::cout << tableau2D[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
