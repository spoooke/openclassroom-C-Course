#include <iostream>
#include <fstream>

int main() {
    // Écrire dans un fichier
    std::ofstream fichierEcriture("monFichier.txt");
    if (fichierEcriture.is_open()) {
        fichierEcriture << "Bonjour, je suis en train d'écrire dans un fichier." << std::endl;
        fichierEcriture << "Et voici une autre ligne de texte." << std::endl;
        fichierEcriture.close();
        std::cout << "Écriture dans le fichier terminée." << std::endl;
    } else {
        std::cerr << "Impossible d'ouvrir le fichier en écriture." << std::endl;
    }

    // Lire le contenu du fichier
    std::ifstream fichierLecture("monFichier.txt");
    if (fichierLecture.is_open()) {
        std::string ligne;
        std::cout << "Contenu du fichier : " << std::endl;
        while (std::getline(fichierLecture, ligne)) {
            std::cout << ligne << std::endl;
        }
        fichierLecture.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier en lecture." << std::endl;
    }

    return 0;
}
