#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "PlikZAdresatami.h"
#include "AdresatManager.h"
#include <fstream>

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;

public:
    KsiazkaAdresowa( string NAZWAPLIKUZUZYTKOWNIKAMI, string NAZWAPLIKUZADRESATAMI):
    uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami){}
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wypiszWszyskichAdresatow();
    void dodajAdresata();

};

#endif
