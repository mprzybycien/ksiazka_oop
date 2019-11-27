#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"

using namespace std;

class PlikZAdresatami
    {
    Adresat adresat;
    const string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata;
    //int idZalogowanego;
    //UzytkownikManager uzytkownikManager;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    public:

    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI)
    {

    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int nowyOstatniAdresat);
    string pobierzNazwePlikuZAdresatami();
    };

#endif
