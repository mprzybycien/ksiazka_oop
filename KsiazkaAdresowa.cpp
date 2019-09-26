#include <iostream>
#include "KsiazkaAdresowa.h"
#include <windows.h>

using namespace std;

KsiazkaArdesowa::KsiazkaArdesowa()
{
    nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";
}

void KsiazkaArdesowa::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    dopiszUzytkownikaDoPliku(uzytkownik);

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

void KsiazkaArdesowa::dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik)
{
    fstream plikTekstowy;
    string liniaZDanymiUzytkownika = "";
    plikTekstowy.open(nazwaPlikuZUzytkownikami.c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(uzytkownik);

        if (czyPlikJestPusty(plikTekstowy) == true)
        {
            plikTekstowy << liniaZDanymiUzytkownika;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiUzytkownika ;
        }
        plikTekstowy.close();
    }
    else
        cout << "Nie udalo sie otworzyc pliku " << nazwaPlikuZUzytkownikami << " i zapisac w nim danych." << endl;

}

string KsiazkaArdesowa::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik)
{
    string liniaZDanymiUzytkownika = "";

    liniaZDanymiUzytkownika += konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}

string KsiazkaArdesowa::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

bool KsiazkaArdesowa::czyPlikJestPusty(fstream &plikTekstowy)
{
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}


