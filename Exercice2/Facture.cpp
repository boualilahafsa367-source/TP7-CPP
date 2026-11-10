#include "Facture.hpp"
#include <iomanip>

// Version 1 : ajouter un article avec une quantité de 1
// et un taux de TVA de 20 %.
void Facture::ajouterArticle(string nom, double prix) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = 1;
    a.tauxTVA = 20;

    articles.push_back(a);
}

// Version 2 : ajouter un article avec sa quantité.
// Le taux de TVA reste fixé à 20 %.
void Facture::ajouterArticle(string nom, double prix, int quantite) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = quantite;
    a.tauxTVA = 20;

    articles.push_back(a);
}

// Version 3 : ajouter un article avec tous ses paramètres.
void Facture::ajouterArticle(string nom, double prix,
                             int quantite, double tauxTVA) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = quantite;
    a.tauxTVA = tauxTVA;

    articles.push_back(a);
}

// Calculer et afficher le montant total de la facture.
void Facture::afficherTotal() const {
    double totalHT = 0;
    double totalTTC = 0;

    cout << fixed << setprecision(2);

    cout << "\n===== DETAIL DE LA FACTURE =====" << endl;

    for (const Article& a : articles) {

        double sousTotalHT = a.prixUnitaire * a.quantite;

        double sousTotalTTC = sousTotalHT * (1 + a.tauxTVA / 100);

        cout << "\nArticle : " << a.nom << endl;
        cout << "Prix unitaire : " << a.prixUnitaire << " DH" << endl;
        cout << "Quantite : " << a.quantite << endl;
        cout << "TVA : " << a.tauxTVA << " %" << endl;
        cout << "Total TTC : " << sousTotalTTC << " DH" << endl;

        totalHT += sousTotalHT;
        totalTTC += sousTotalTTC;
    }

    cout << "\n-----------------------------" << endl;
    cout << "Total hors taxe : " << totalHT << " DH" << endl;
    cout << "Total avec TVA : " << totalTTC << " DH" << endl;
}