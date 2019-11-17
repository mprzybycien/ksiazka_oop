#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include "Adresat.h"
#include "UzytkownikManager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
    {
    Adresat adresat;
    const string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata;
    int idZalogowanego;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    public:

    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int nowyOstatniAdresat);
    void ustawIdZalogowanego(int zalogowany);
    int pobierzIdZalogowanego();
    string pobierzNazwePlikuZAdresatami();
    };

#endif
