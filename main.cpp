#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa ("uzytkownicy.txt", "adresaci.txt");
    int wyborLogowanie, wyborMenu;
    while(true)
    {
        system("cls");
        cout << "Menu logowania" << endl;
        cout << "_______________________" << endl;
        cout << "1. Zarejestruj sie" << endl;
        cout << "2. Zaloguj sie" << endl;
        cout << "9. Zakoncz program" <<endl;
        cout << "_______________________" << endl;
        cout << "Wybierz opcje:" << endl;
        cin >> wyborLogowanie;
        switch(wyborLogowanie)
        {
        case 1:
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case 2:
            ksiazkaAdresowa.logowanieUzytkownika();
            while (ksiazkaAdresowa.czyUzytkownikSieZalogowal() == true)
            {
                system("cls");
                cout << "Menu glowne" << endl;
                cout << "_______________________" << endl;
                cout << "1. Dodaj adresata." << endl;
                cout << "2. Wypisz wszystkich adresatow" << endl;
                cout << "3. Wyszukaj adresatow po imieniu" << endl;
                cout << "4. Wyszukaj adresatow po nazwisku" << endl;
                cout << "5. Edytuj adresata" << endl;
                cout << "6. Usun adresata" << endl;
                cout << "9. Wyloguj sie" <<endl;
                cout << "_______________________" << endl;
                cout << "Wybierz opcje:" << endl;
                cin >> wyborMenu;
                switch(wyborMenu)
                {
                case 1:
                    ksiazkaAdresowa.dodajAdresata();
                    break;
                case 2:
                    ksiazkaAdresowa.wypiszWszyskichAdresatow();
                    break;
                case 3:
                    ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                    break;
                case 4:
                    ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                    break;
                case 5:
                    ksiazkaAdresowa.edytujAdresata();
                    break;
                case 6:
                    ksiazkaAdresowa.usunAdresata();
                    break;
                case 9:
                    ksiazkaAdresowa.wylogujUzytkownika();
                    break;
                }
            }
            break;
        case 9:
            exit(0);
        }
    }
    return 0;
}
