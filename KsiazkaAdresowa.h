#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include <fstream>
#include <sstream>

using namespace std;

class KsiazkaArdesowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    string nazwaPlikuZUzytkownikami;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    string wczytajLinie();
    bool czyIstniejeLogin(string login);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    string konwerjsaIntNaString(int liczba);
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    KsiazkaArdesowa();
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
};
