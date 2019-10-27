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
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    public:

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int pobierzIdZalogowanegoZPliku();
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int nowyOstatniAdresat);

    };

#endif
