#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include "UzytkownikManager.h"
#include <fstream>
#include <sstream>

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
};

#endif
