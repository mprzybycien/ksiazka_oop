#include <iostream>
#include "KsiazkaAdresowa.h"
#include <windows.h>

using namespace std;

void KsiazkaArdesowa::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik KsiazkaArdesowa::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login, haslo;

    do
    {
        cout << "Podaj login: ";
        login = wczytajLinie();
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    haslo = wczytajLinie();
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int KsiazkaArdesowa::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}
bool KsiazkaArdesowa::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

string KsiazkaArdesowa::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

void KsiazkaArdesowa::wypiszWszyskieKontakty()
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
       cout << uzytkownicy[i].pobierzId() <<endl;
       cout << uzytkownicy[i].pobierzLogin() <<endl;
       cout << uzytkownicy[i].pobierzHaslo() <<endl<<endl;
    }

}




