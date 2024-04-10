#include <iostream>
#include <string>
using namespace std;
struct Ksiegarnia{
	
	string Tytul;
	string Autor;
	int Rok;
	string Wydawnictwo;
	double Cena;
};

int main(){
	
	Ksiegarnia ksiazki[] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};
	
	int a,b,d;
	int c;
	double e;
	char opcja;
	
	
	cout << "Wybierz opcje:\n " << "1 - Rok wydania\n " << "2 - Cena\n " << "3 - Wydawnictwo\n " << "0 - Wyjdz" << endl;
	
	cin >> opcja;
	
	switch(opcja)
	{
	case '0':
		cout << "ok";
		break;
	case '1':{
		cout << "Podaj rok wydania: "; cin >> a;
		for( int i=0; i>=7; i++	) {
			cout << ksiazki[i].Rok;
		}
		break;
	}
	case '2': {
		cout << "Podaj cene: "; cin >> b;
		for(int i=0; i>=7; i++ ) {
			cout << ksiazki[i].Cena;
		}
		break;
	}
	case '3': {
		cout << "Podaj wydawnictwo: "; cin >> b;
		for(int i=0; i>=7; i++ ) {
			cout << ksiazki[i].Wydawnictwo;
		}
		break;
	}
	default: cout << "Wybrales nieprawidlowa opcje! " << endl;
		
		}	

	
	return 0;
}
