#ifndef FACTURE_HPP
#define FACTURE_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure représentant un article de la facture.
struct Article {
    string nom;
    double prixUnitaire;
    int quantite;
    double tauxTVA;
};

class Facture {
private:
    // Tableau dynamique contenant les articles.
    vector<Article> articles;

public:
    // Trois versions surchargées de la méthode.
    void ajouterArticle(string nom, double prix);

    void ajouterArticle(string nom, double prix, int quantite);

    void ajouterArticle(string nom, double prix,
                        int quantite, double tauxTVA);

    void afficherTotal() const;
};

#endif