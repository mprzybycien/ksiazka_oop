#include <iostream>
#include "KsiazkaAdresowa.h"
#include "UzytkownikManager.h"
#include <windows.h>

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszyskieKontakty()
{
    uzytkownikManager.wypiszWszyskieKontakty();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatManager.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

void KsiazkaAdresowa::wypiszWszyskichAdresatow()
{
    adresatManager.wypiszWszyskichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatManager.dodajAdresata();
}
