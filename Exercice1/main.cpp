#include <iostream>
#include "Contact.hpp"

using namespace std;

int main() {

    // Création de trois contacts avec différents constructeurs.
    Contact c1("Salma Ait Lahcen");

    Contact c2("Younes El Idrissi", "0612345678");

    Contact c3("Meryem Alaoui", "0678561234",
               "meryem.alaoui@gmail.com");

    cout << "===== CARNET D'ADRESSES =====" << endl;

    cout << "\n--- Contact 1 ---" << endl;
    c1.afficher();

    cout << "\n--- Contact 2 ---" << endl;
    c2.afficher();

    cout << "\n--- Contact 3 ---" << endl;
    c3.afficher();

    return 0;
}