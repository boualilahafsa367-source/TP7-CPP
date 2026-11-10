#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    // Trois constructeurs surchargés.
    Contact(string n);
    Contact(string n, string t);
    Contact(string n, string t, string e);

    void afficher() const;
};

#endif