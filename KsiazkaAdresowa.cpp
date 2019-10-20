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
