#include <iostream>
#include "Facture.hpp"

using namespace std;

int main() {

    Facture facture;

    cout << "===== AJOUT DES ARTICLES =====" << endl;

    // Première version : nom et prix uniquement.
    facture.ajouterArticle("Clavier mecanique", 320.00);

    // Deuxième version : nom, prix et quantité.
    facture.ajouterArticle("Souris sans fil", 145.00, 2);

    // Troisième version : tous les paramètres.
    facture.ajouterArticle("Ecran LED", 1250.00, 1, 10);

    // Affichage de la facture.
    facture.afficherTotal();

    return 0;
}