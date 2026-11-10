#include "Contact.hpp"

// Constructeur avec le nom uniquement.
Contact::Contact(string n) {
    nom = n;
    telephone = "Non renseigne";
    email = "Non renseigne";
}

// Constructeur avec le nom et le téléphone.
Contact::Contact(string n, string t) {
    nom = n;
    telephone = t;
    email = "Non renseigne";
}

// Constructeur avec les trois informations.
Contact::Contact(string n, string t, string e) {
    nom = n;
    telephone = t;
    email = e;
}

// Afficher les informations du contact.
void Contact::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Telephone : " << telephone << endl;
    cout << "Email : " << email << endl;
}