#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H // Jesli nag³ówek jest zaimplementowany w programie wiêcej ni¿ jeden raz

#include <iostream>
#include "Uzytkownik.h"

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif // UZYTKOWNIK_H
