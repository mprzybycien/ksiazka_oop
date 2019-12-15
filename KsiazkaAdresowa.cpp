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
    if (uzytkownikManager.czyUzytkownikSieZalogowal())
    {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wypiszWszyskichAdresatow()
{
    adresatManager -> wypiszWszyskichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatManager -> dodajAdresata();
}

bool KsiazkaAdresowa::czyUzytkownikSieZalogowal()
{
    uzytkownikManager.czyUzytkownikSieZalogowal();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikManager.ustawIdZalogowanegoUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatManager -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatManager -> wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatManager -> edytujAdresata();
}
