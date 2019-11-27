#include "AdresatManager.h"


void AdresatManager::wypiszWszyskichAdresatow()
{
    for (int i = 0; i < adresaci.size(); i++)
    {
       cout << adresaci[i].pobierzIdAdresata() <<endl;
       cout << adresaci[i].pobierzIdUzytkownika() <<endl;
       cout << adresaci[i].pobierzImie() <<endl;
       cout << adresaci[i].pobierzNazwisko() <<endl;
       cout << adresaci[i].pobierzNumerTelefonu() <<endl;
       cout << adresaci[i].pobierzEmail() <<endl;
       cout << adresaci[i].pobierzAdres() <<endl <<endl;
    }
}

void AdresatManager::dodajAdresata()
{
    Adresat adresat;

    //system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    int zalogowany, ostatni;

    adresat = podajDaneNowegoAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata());


    adresaci.push_back(adresat);
    dopiszAdresataDoPliku(adresat);
    plikZAdresatami.ustawIdOstatniegoAdresata(++ostatni);

}

Adresat AdresatManager::podajDaneNowegoAdresata(int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawIdAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1);
    adresat.ustawIdZalogowanegoUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(MetodyPomocnicze::wczytajLinie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(zamienPierwszaLitereNaDuzaAPozostaleNaMale(MetodyPomocnicze::wczytajLinie()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

string AdresatManager::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}


void AdresatManager::dopiszAdresataDoPliku(Adresat adresat)
{
    string liniaZDanymiAdresata = "";
    fstream plikTekstowy;
    string nazwaPliku = plikZAdresatami.pobierzNazwePlikuZAdresatami();
    plikTekstowy.open(nazwaPliku.c_str(), ios::out | ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiAdresata = zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(adresat);

        if (czyPlikJestPusty(plikTekstowy) == true)
        {
            plikTekstowy << liniaZDanymiAdresata;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiAdresata ;
        }
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku i zapisac w nim danych." << endl;
    }
    plikTekstowy.close();
    system("pause");
}

string AdresatManager::zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat)
{
    string liniaZDanymiAdresata = "";

    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzIdAdresata()) + '|';
    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzIdUzytkownika()) + '|';
    liniaZDanymiAdresata += adresat.pobierzImie() + '|';
    liniaZDanymiAdresata += adresat.pobierzNazwisko() + '|';
    liniaZDanymiAdresata += adresat.pobierzNumerTelefonu() + '|';
    liniaZDanymiAdresata += adresat.pobierzEmail() + '|';
    liniaZDanymiAdresata += adresat.pobierzAdres() + '|';

    return liniaZDanymiAdresata;
}

bool AdresatManager::czyPlikJestPusty(fstream &plikTekstowy)
{
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
