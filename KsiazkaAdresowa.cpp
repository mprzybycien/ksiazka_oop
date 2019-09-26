#include <iostream>
#include "KsiazkaAdresowa.h"
#include "UzytkownikManager.h"
#include <windows.h>

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikManager.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszyskieKontakty()
{
    uzytkownikManager.wypiszWszyskieKontakty();
}
