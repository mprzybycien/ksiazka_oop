
#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include <fstream>
#include <sstream>
#include <windows.h>
#include "PlikZAdresatami.h"

using namespace std;

class AdresatManager
{
PlikZAdresatami plikZAdresatami;
vector <Adresat> adresaci;

public:

void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
void wypiszWszyskichAdresatow();

};

#endif

