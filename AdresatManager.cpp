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
    system("pause");
}

void AdresatManager::dodajAdresata()
{
    Adresat adresat;

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    int zalogowany, ostatni;

    adresat = podajDaneNowegoAdresata();
    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    cout << endl << "Poprawnie dodano nowy kontakt." <<endl;
    system("pause");


}

Adresat AdresatManager::podajDaneNowegoAdresata()
{
    int idOstatniegoAdresata = plikZAdresatami.pobierzIdOstatniegoAdresata();

    Adresat adresat;

    adresat.ustawIdAdresata(idOstatniegoAdresata + 1);
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
