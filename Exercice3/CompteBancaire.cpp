#include "CompteBancaire.hpp"
#include <iomanip>

// Constructeur sans solde initial.
CompteBancaire::CompteBancaire(string nom, int code) {
    titulaire = nom;
    codeSecurite = code;
    solde = 0;
}

// Constructeur avec solde initial.
CompteBancaire::CompteBancaire(string nom, int code,
                               double soldeInitial) {
    titulaire = nom;
    codeSecurite = code;

    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        solde = 0;
        cout << "Solde initial invalide. Le compte est initialise a 0 DH."
             << endl;
    }
}

// Afficher le solde du compte.
void CompteBancaire::afficherSolde() const {
    cout << fixed << setprecision(2);

    cout << "Titulaire : " << titulaire << endl;
    cout << "Solde actuel : " << solde << " DH" << endl;
}

// Retrait sans code de sécurité.
void CompteBancaire::retrait(double montant) {
    cout << "\nTentative de retrait sans code..." << endl;

    cout << "Retrait refuse : le code de securite est obligatoire."
         << endl;
}

// Retrait avec vérification du code de sécurité.
void CompteBancaire::retrait(double montant, int code) {
    cout << "\nTentative de retrait avec code..." << endl;

    if (code != codeSecurite) {
        cout << "Erreur : code de securite incorrect." << endl;
    }
    else if (montant <= 0) {
        cout << "Erreur : le montant doit etre positif." << endl;
    }
    else if (montant > solde) {
        cout << "Erreur : solde insuffisant." << endl;
    }
    else {
        solde -= montant;

        cout << "Retrait effectue avec succes !" << endl;
        cout << "Montant retire : " << montant << " DH" << endl;
    }
}