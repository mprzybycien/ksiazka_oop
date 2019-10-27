#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa ("uzytkownicy.txt");
    //AdresatManager adresatManager;

    ksiazkaAdresowa.wypiszWszyskieKontakty();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszyskieKontakty();
    ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    ksiazkaAdresowa.wypiszWszyskichAdresatow();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszyskichAdresatow();


    return 0;
}
