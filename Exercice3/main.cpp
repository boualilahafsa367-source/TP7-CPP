#include <iostream>
#include "CompteBancaire.hpp"

using namespace std;

int main() {

    // Création d'un compte sans solde initial.
    CompteBancaire compte1("Nadia El Amrani", 4826);

    // Création d'un compte avec un solde initial.
    CompteBancaire compte2("Omar Benjelloun", 7391, 8500);

    cout << "===== INFORMATIONS DES COMPTES =====" << endl;

    cout << "\n--- Compte 1 ---" << endl;
    compte1.afficherSolde();

    cout << "\n--- Compte 2 ---" << endl;
    compte2.afficherSolde();

    // Test d'un retrait sans code.
    compte2.retrait(500);

    // Test avec un code incorrect.
    compte2.retrait(500, 1234);

    // Test avec un montant supérieur au solde.
    compte2.retrait(10000, 7391);

    // Test avec un montant valide et le bon code.
    compte2.retrait(1500, 7391);

    cout << "\n===== SOLDE APRES LES OPERATIONS =====" << endl;

    compte2.afficherSolde();

    return 0;
}