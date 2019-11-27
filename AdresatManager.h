#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include "PlikZAdresatami.h"
#include "PlikZUzytkownikami.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatManager
{

const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
PlikZAdresatami plikZAdresatami;

vector <Adresat> adresaci;

Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata); /*Poda� metode do pobierania Id ostatniego adresata*/

string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
bool czyPlikJestPusty(fstream &plikTekstowy);


public:
AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
    plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
};

void wypiszWszyskichAdresatow();
void dodajAdresata();

};

#endif

