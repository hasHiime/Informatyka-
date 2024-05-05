#include <iostream>
using namespace std;
struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    double cena;
};

void wyszukajKsiazki(Ksiazka* ksiazki, int liczbaKsiazek, int opcja, void* wartosc);

int main() {
    Ksiazka ksiegarnia[] = {
        { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
        { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
        { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
        { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
        { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
        { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
        { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
    };
    int liczbaKsiazek = sizeof(ksiegarnia) / sizeof(ksiegarnia[0]);

    cout << "Witaj w ksiegarnii" << endl;
    cout << "Po jakiej kategorii chcialbys wyszukac ksiazke:" << endl;
    cout << "1. Rok wydania\n2. Cena\n3. Wydawnictwo\n0. Wyjscie" << endl;

    int opcja;
    cin >> opcja;

    switch (opcja) {
        case 1: {
            int rok;
            cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
            cin >> rok;
            wyszukajKsiazki(ksiegarnia, liczbaKsiazek, 1, &rok);
            break;
        }
        case 2: {
            double cena;
            cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
            cin >> cena;
            wyszukajKsiazki(ksiegarnia, liczbaKsiazek, 2, &cena);
            break;
        }
        case 3: {
            string wydawnictwo;
            cout << "Podaj od jakiego wydawnictwa chcesz zoobaczyc ksiazki: ";
            cin >> wydawnictwo;
            wyszukajKsiazki(ksiegarnia, liczbaKsiazek, 3, &wydawnictwo);
            break;
        }
        case 0: {
            cout << "OK";
            break;
            
        }
    }

    return 0;
}

void wyszukajKsiazki(Ksiazka* ksiazki, int liczbaKsiazek, int opcja, void* wartosc) {
    switch (opcja) {
        case 1: {
            int* rok = static_cast<int*>(wartosc);
            cout << "Znalezione ksiazki:" << endl;
            for (int i = 0; i < liczbaKsiazek; ++i) {
                if (ksiazki[i].rok >= *rok) {
                    cout << "Tytul:" << ksiazki[i].tytul << "\tAutor:" << ksiazki[i].autor << "\tRok:" << ksiazki[i].rok << "\tWydawnictwo:" << ksiazki[i].wydawnictwo << "\tCena:" << ksiazki[i].cena << endl;
                }
            }
            break;
        }
        case 2: {
            double* cena = static_cast<double*>(wartosc);
            cout << "Znalezione ksiazki:" << endl;
            for (int i = 0; i < liczbaKsiazek; ++i) {
                if (ksiazki[i].cena >= *cena) {
                    cout << "Tytul:" << ksiazki[i].tytul << "\tAutor:" << ksiazki[i].autor << "\tRok:" << ksiazki[i].rok << "\tWydawnictwo:" << ksiazki[i].wydawnictwo << "\tCena:" << ksiazki[i].cena << endl;
                }
            }
            break;
        }
        case 3: {
            string* wydawnictwo = static_cast<string*>(wartosc);
            cout << "Znalezione ksiazki:" << endl;
            for (int i = 0; i < liczbaKsiazek; ++i) {
                if (ksiazki[i].wydawnictwo >= *wydawnictwo) {
                    cout << "Tytul:" << ksiazki[i].tytul << "\tAutor:" << ksiazki[i].autor << "\tRok:" << ksiazki[i].rok << "\tWydawnictwo:" << ksiazki[i].wydawnictwo << "\tCena:" << ksiazki[i].cena << endl;
                }
            }
            break;
        }
        
    }
}