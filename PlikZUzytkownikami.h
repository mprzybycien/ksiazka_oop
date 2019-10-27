#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include <fstream>
#include <cstdlib>

using namespace std;

class PlikZUzytkownikami
{
     const string nazwaPlikuZUzytkownikami;
     string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
     Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
     bool czyPlikJestPusty();

 public:

    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI) {};
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif
