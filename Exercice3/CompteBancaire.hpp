#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP

#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;
    int codeSecurite;

public:
    // Constructeur sans solde initial.
    CompteBancaire(string nom, int code);

    // Constructeur avec solde initial.
    CompteBancaire(string nom, int code, double soldeInitial);

    void afficherSolde() const;

    // Première version : retrait avec montant uniquement.
    void retrait(double montant);

    // Deuxième version : retrait avec montant et code de sécurité.
    void retrait(double montant, int code);
};

#endif