#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include <fstream>
#include <sstream>

using namespace std;

class PlikZUzytkownikami
{
     string nazwaPlikuZUzytkownikami;
     fstream plikTekstowy;

     bool czyPlikJestPusty();
     string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

 public:
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    PlikZUzytkownikami();
};

#endif
