#ifndef TABDYN_HPP
#define TABDYN_HPP

#include <vector>

// Déclaration des fonctions
std::vector<int> creerTableau(int taille);
int accesElement(const std::vector<int>& tableau, int index);
void changerTaille(std::vector<int>& tableau, int nouvelleTaille);
double calculerMoyenne(const std::vector<int>& tableau);
void tableauMultidimensionnel();

#endif
