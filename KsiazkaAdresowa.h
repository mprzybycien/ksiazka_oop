#include <iostream>
#include <vector>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaArdesowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    string wczytajLinie();
    bool czyIstniejeLogin(string login);


public:
    void rejestracjaUzytkownika();
    void wypiszWszyskieKontakty();
};
