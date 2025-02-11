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
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa( string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):
        uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatManager = NULL;
    };

    ~KsiazkaAdresowa()
    {
        delete adresatManager;
        adresatManager = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
    void logowanieUzytkownika();
    void wypiszWszyskichAdresatow();
    void dodajAdresata();
    bool czyUzytkownikSieZalogowal();
    void wylogujUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
    void usunAdresata();
    void zmianaHaslaZalogowanegoUzytkownika();

};

#endif
