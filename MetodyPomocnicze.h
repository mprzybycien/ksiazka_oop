#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include "Uzytkownik.h"
#include <fstream>
#include <sstream>

using namespace std;

class MetodyPomocnicze
{
public:
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static int wczytajLiczbeCalkowita();
    static char wczytajZnak();
};

#endif
