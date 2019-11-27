#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"
#include <fstream>
#include <windows.h>

using namespace std;

class UzytkownikManager
{
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    //PlikZAdresatami plikZAdresatami;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    int idZalogowanegoUzytkownika;

public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami) :
        plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {
    wczytajUzytkownikowZPliku();
    }

    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif
