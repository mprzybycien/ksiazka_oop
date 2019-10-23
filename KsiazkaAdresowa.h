#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include "UzytkownikManager.h"
#include <fstream>
#include <sstream>

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;

public:
    KsiazkaAdresowa( string nazwaPlikuZUzytkownikami): uzytkownikManager(nazwaPlikuZUzytkownikami)
    {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();

};

#endif
