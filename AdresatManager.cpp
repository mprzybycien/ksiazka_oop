#include "AdresatManager.h"

void AdresatManager::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

void AdresatManager::wypiszWszyskichAdresatow()
{
    for (int i = 0; i < adresaci.size(); i++)
    {
       cout << adresaci[i].pobierzIdAdresata() <<endl;
       cout << adresaci[i].pobierzIdUzytkownika() <<endl;
       cout << adresaci[i].pobierzImie() <<endl;
       cout << adresaci[i].pobierzNazwisko() <<endl;
       cout << adresaci[i].pobierzNumerTelefonu() <<endl;
       cout << adresaci[i].pobierzEmail() <<endl;
       cout << adresaci[i].pobierzAdres() <<endl <<endl;
    }
}
