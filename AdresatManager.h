#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include "PlikZAdresatami.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatManager
{
PlikZAdresatami plikZAdresatami;
vector <Adresat> adresaci;

Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
void dopiszAdresataDoPliku(Adresat adresat);
string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
bool czyPlikJestPusty(fstream &plikTekstowy);
string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:

void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
void wypiszWszyskichAdresatow();
void dodajAdresata();

};

#endif

