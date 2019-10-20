#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    int zalogowany;
    KsiazkaAdresowa ksiazkaAdresowa ("uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszyskieKontakty();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszyskieKontakty();
    zalogowany = ksiazkaAdresowa.logowanieUzytkownika();

    cout << zalogowany << endl;
    return 0;
}
